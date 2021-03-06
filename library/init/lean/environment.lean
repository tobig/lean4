/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.io
import init.util
import init.data.bytearray
import init.lean.declaration
import init.lean.smap

namespace Lean
/- Opaque environment extension state. It is essentially the Lean version of a C `void *`
   TODO: mark opaque -/
@[derive Inhabited]
def EnvExtensionState : Type := NonScalar

/- TODO: mark opaque. -/
@[derive Inhabited]
def ModuleIdx := Nat

/- TODO: mark opaque. -/
structure Environment :=
(const2ModIdx : HashMap Name ModuleIdx)
(constants    : SMap Name ConstantInfo Name.quickLt)
(extensions   : Array EnvExtensionState)
(trustLevel   : UInt32     := 0)
(quotInit     : Bool       := false)
(imports      : Array Name := Array.empty)

namespace Environment

instance : Inhabited Environment :=
⟨{ const2ModIdx := {}, constants := {}, extensions := Array.empty }⟩

@[export lean.environment_add_core]
def add (env : Environment) (cinfo : ConstantInfo) : Environment :=
{ constants := env.constants.insert cinfo.name cinfo, .. env }

@[export lean.environment_find_core]
def find (env : Environment) (n : Name) : Option ConstantInfo :=
env.constants.find n

def contains (env : Environment) (n : Name) : Bool :=
(env.constants.find n).isSome

/- Switch environment to "shared" mode. -/
@[export lean.environment_switch_core]
private def switch (env : Environment) : Environment :=
{ constants := env.constants.switch, .. env }

@[export lean.environment_mark_quot_init_core]
private def markQuotInit (env : Environment) : Environment :=
{ quotInit := true, .. env }

@[export lean.environment_quot_init_core]
private def isQuotInit (env : Environment) : Bool :=
env.quotInit

@[export lean.environment_trust_level_core]
private def getTrustLevel (env : Environment) : UInt32 :=
env.trustLevel

def getModuleIdxFor (env : Environment) (c : Name) : Option ModuleIdx :=
env.const2ModIdx.find c

end Environment

/- "Raw" environment extension.
   TODO: mark opaque. -/
structure EnvExtension (σ : Type) :=
(idx       : Nat)
(initial   : σ)

namespace EnvExtension

unsafe def setStateUnsafe {σ : Type} (ext : EnvExtension σ) (env : Environment) (s : σ) : Environment :=
{ extensions := env.extensions.set ext.idx (unsafeCast s), .. env }

@[implementedBy setStateUnsafe]
constant setState {σ : Type} (ext : EnvExtension σ) (env : Environment) (s : σ) : Environment := default _

unsafe def getStateUnsafe {σ : Type} (ext : EnvExtension σ) (env : Environment) : σ :=
let s : EnvExtensionState := env.extensions.get ext.idx in
@unsafeCast _ _ ⟨ext.initial⟩ s

@[implementedBy getStateUnsafe]
constant getState {σ : Type} (ext : EnvExtension σ) (env : Environment) : σ := ext.initial

@[inline] unsafe def modifyStateUnsafe {σ : Type} (ext : EnvExtension σ) (env : Environment) (f : σ → σ) : Environment :=
{ extensions := env.extensions.modify ext.idx $ λ s,
    let s : σ := (@unsafeCast _ _ ⟨ext.initial⟩ s) in
    let s : σ := f s in
    unsafeCast s,
  .. env }

@[implementedBy modifyStateUnsafe]
constant modifyState {σ : Type} (ext : EnvExtension σ) (env : Environment) (f : σ → σ) : Environment := default _

end EnvExtension

private def mkEnvExtensionsRef : IO (IO.Ref (Array (EnvExtension EnvExtensionState))) :=
IO.mkRef Array.empty

@[init mkEnvExtensionsRef]
private constant envExtensionsRef : IO.Ref (Array (EnvExtension EnvExtensionState)) := default _

instance EnvExtension.Inhabited (σ : Type) [Inhabited σ] : Inhabited (EnvExtension σ) :=
⟨{ idx := 0, initial := default _ }⟩

unsafe def registerEnvExtensionUnsafe {σ : Type} (initState : σ) : IO (EnvExtension σ) :=
do
initializing ← IO.initializing,
unless initializing $ throw (IO.userError ("Failed to register environment, extensions can only be registered during initialization")),
exts ← envExtensionsRef.get,
let idx := exts.size,
let ext : EnvExtension σ := {
   idx     := idx,
   initial := initState
},
envExtensionsRef.modify (λ exts, exts.push (unsafeCast ext)),
pure ext

/- Environment extensions can only be registered during initialization.
   Reasons:
   1- Our implementation assumes the number of extensions does not change after an environment object is created.
   2- We do not use any synchronization primitive to access `envExtensionsRef`. -/
@[implementedBy registerEnvExtensionUnsafe]
constant registerEnvExtension {σ : Type} (initState : σ) : IO (EnvExtension σ) := default _

private def mkInitialExtensionStates : IO (Array EnvExtensionState) :=
do exts ← envExtensionsRef.get, pure $ exts.map $ λ ext, ext.initial

@[export lean.mk_empty_environment_core]
def mkEmptyEnvironment (trustLevel : UInt32 := 0) : IO Environment :=
do
initializing ← IO.initializing,
when initializing $ throw (IO.userError "Environment objects cannot be created during initialization"),
exts ← mkInitialExtensionStates,
pure { const2ModIdx := {},
       constants    := {},
       trustLevel   := trustLevel,
       extensions   := exts }

structure PersistentEnvExtensionState (α : Type) (σ : Type) :=
(importedEntries : Array (Array α))  -- entries per imported module
(importedState   : Thunk σ)          -- state after processing all entries in `importedEntries`
(entries         : List α   := [])   -- entries defined in the current module
(state           : Option σ := none) -- state after processing `importedEntries` and `entries`

/- An environment extension with support for storing/retrieving entries from a .olean file.
   - α is the entry type.
   - σ is the actual state.
   We re-construct the actual state lazily. Moreover, if function `PersistentEnvExtension.getState` is not
   used, then we don't even compute the field `state`.

   TODO: mark opaque. -/
structure PersistentEnvExtension (α : Type) (σ : Type) extends EnvExtension (PersistentEnvExtensionState α σ) :=
(name       : Name)
(someVal    : α)
(addEntryFn : Bool → σ → α → σ)
(toArrayFn  : List α → Array α)
(lazy       : Bool)

/- Opaque persistent environment extension entry. It is essentially a C `void *`
   TODO: mark opaque -/
@[derive Inhabited]
def EnvExtensionEntry := NonScalar

instance PersistentEnvExtensionState.inhabited {α σ} [Inhabited α] [Inhabited σ] : Inhabited (PersistentEnvExtensionState α σ) :=
⟨{importedEntries := Array.empty, importedState := Thunk.pure (default _) }⟩

instance PersistentEnvExtension.inhabited {α σ} [Inhabited α] [Inhabited σ] : Inhabited (PersistentEnvExtension α σ) :=
⟨{ toEnvExtension := { idx := 0, initial := default _ },
   name  := default _, someVal := default _, addEntryFn := λ _ s _, s, toArrayFn := λ es, es.toArray,
   lazy  := true }⟩

namespace PersistentEnvExtension

def getEntries {α σ : Type} (ext : PersistentEnvExtension α σ) (env : Environment) : List α :=
(ext.toEnvExtension.getState env).entries

def getModuleEntries {α σ : Type} (ext : PersistentEnvExtension α σ) (env : Environment) (m : ModuleIdx) : Array α :=
(ext.toEnvExtension.getState env).importedEntries.get m

def addEntry {α σ : Type} (ext : PersistentEnvExtension α σ) (env : Environment) (a : α) : Environment :=
ext.toEnvExtension.modifyState env $ λ s,
  let entries := a :: s.entries in
  match s.state with
  | none   := { entries := entries, .. s }
  | some d := { entries := entries, state := some (ext.addEntryFn false d a), .. s }

def forceStateAux {α σ : Type} (ext : PersistentEnvExtension α σ) (s : PersistentEnvExtensionState α σ) : σ :=
match s.state with
| some d := d
| none   := s.entries.foldr (λ a s, ext.addEntryFn false s a) s.importedState.get

def forceState {α σ : Type} (ext : PersistentEnvExtension α σ) (env : Environment) : Environment :=
ext.toEnvExtension.modifyState env $ λ s, { state := some (ext.forceStateAux s), .. s }

def getState {α σ : Type} (ext : PersistentEnvExtension α σ) (env : Environment) : σ :=
ext.forceStateAux (ext.toEnvExtension.getState env)

end PersistentEnvExtension

private def mkPersistentEnvExtensionsRef : IO (IO.Ref (Array (PersistentEnvExtension EnvExtensionEntry EnvExtensionState))) :=
IO.mkRef Array.empty

@[init mkPersistentEnvExtensionsRef]
private constant persistentEnvExtensionsRef : IO.Ref (Array (PersistentEnvExtension EnvExtensionEntry EnvExtensionState)) := default _

structure PersistentEnvExtensionDescr (α σ : Type) [Inhabited α] :=
(name : Name)
(initState : σ)
(someVal : α := default _)
(addEntryFn : Bool → σ → α → σ)
(toArrayFn : List α → Array α := λ as, as.toArray)
(lazy := true)

unsafe def registerPersistentEnvExtensionUnsafe {α σ : Type} [Inhabited α] (descr : PersistentEnvExtensionDescr α σ) : IO (PersistentEnvExtension α σ) :=
do
let s : PersistentEnvExtensionState α σ := {
  importedEntries := Array.empty,
  importedState   := Thunk.pure descr.initState,
  entries         := [],
  state           := some descr.initState },
pExts ← persistentEnvExtensionsRef.get,
when (pExts.any (λ ext, ext.name == descr.name)) $ throw (IO.userError ("invalid environment extension, '" ++ toString descr.name ++ "' has already been used")),
ext ← registerEnvExtension s,
let pExt : PersistentEnvExtension α σ := {
  toEnvExtension := ext,
  name           := descr.name,
  someVal        := descr.someVal,
  addEntryFn     := descr.addEntryFn,
  toArrayFn      := descr.toArrayFn,
  lazy           := descr.lazy
},
persistentEnvExtensionsRef.modify (λ pExts, pExts.push (unsafeCast pExt)),
pure pExt

@[implementedBy registerPersistentEnvExtensionUnsafe]
constant registerPersistentEnvExtension {α σ : Type} [Inhabited α] (descr : PersistentEnvExtensionDescr α σ) : IO (PersistentEnvExtension α σ) := default _

/- API for creating extensions in C++.
   This API will eventually be deleted. -/

@[derive Inhabited]
def CPPExtensionState := NonScalar

@[export lean.register_extension_core]
unsafe def registerCPPExtension (initial : CPPExtensionState) : Option Nat :=
unsafeIO (do ext ← registerEnvExtension initial, pure ext.idx)

@[export lean.set_extension_core]
unsafe def setCPPExtensionState (env : Environment) (idx : Nat) (s : CPPExtensionState) : Option Environment :=
unsafeIO (do exts ← envExtensionsRef.get, pure $ (exts.get idx).setState env s)

@[export lean.get_extension_core]
unsafe def getCPPExtensionState (env : Environment) (idx : Nat) : Option CPPExtensionState :=
unsafeIO (do exts ← envExtensionsRef.get, pure $ (exts.get idx).getState env)

/- Legacy support for Modification objects -/

/- Opaque modification object. It is essentially a C `void *`.
   In Lean 3, a .olean file is essentially a collection of modification objects.
   This type represents the modification objects implemented in C++.
   We will eventually delete this type as soon as we port the remaining Lean 3
   legacy code.

   TODO: mark opaque -/
@[derive Inhabited]
def Modification := NonScalar

def regModListExtension : IO (EnvExtension (List Modification)) :=
registerEnvExtension []

@[init regModListExtension]
constant modListExtension : EnvExtension (List Modification) := default _

/- The C++ code uses this function to store the given modification object into the environment. -/
@[export lean.environment_add_modification_core]
def addModification (env : Environment) (mod : Modification) : Environment :=
modListExtension.modifyState env $ λ mods, mod :: mods

/- mkModuleData invokes this function to convert a list of modification objects into
   a serialized byte array. -/
@[extern 2 "lean_serialize_modifications"]
constant serializeModifications : List Modification → IO ByteArray := default _

@[extern 3 "lean_perform_serialized_modifications"]
constant performModifications : Environment → ByteArray → IO Environment := default _

/- Content of a .olean file.
   We use `compact.cpp` to generate the image of this object in disk. -/
structure ModuleData :=
(imports    : Array Name)
(constants  : Array ConstantInfo)
(entries    : Array (Name × Array EnvExtensionEntry))
(serialized : ByteArray) -- Legacy support: serialized modification objects

instance ModuleData.inhabited : Inhabited ModuleData :=
⟨{imports := default _, constants := default _, entries := default _, serialized := default _}⟩

@[extern 3 "lean_save_module_data"]
constant saveModuleData (fname : @& String) (m : ModuleData) : IO Unit := default _
@[extern 2 "lean_read_module_data"]
constant readModuleData (fname : @& String) : IO ModuleData := default _

def mkModuleData (env : Environment) : IO ModuleData :=
do
pExts ← persistentEnvExtensionsRef.get,
let entries : Array (Name × Array EnvExtensionEntry) := pExts.size.fold
  (λ i result,
    let entryList  := (pExts.get i).getEntries env in
    let toArrayFn  := (pExts.get i).toArrayFn in
    let extName    := (pExts.get i).name in
    result.push (extName, toArrayFn entryList.reverse))
  Array.empty,
bytes ← serializeModifications (modListExtension.getState env),
pure {
imports    := env.imports,
constants  := env.constants.foldStage2 (λ cs _ c, cs.push c) Array.empty,
entries    := entries,
serialized := bytes
}

@[export lean.write_module_core]
def writeModule (env : Environment) (fname : String) : IO Unit :=
do modData ← mkModuleData env, saveModuleData fname modData

@[extern 2 "lean_find_olean"]
constant findOLean (modName : Name) : IO String := default _

partial def importModulesAux : List Name → (NameSet × Array ModuleData) → IO (NameSet × Array ModuleData)
| []      r         := pure r
| (m::ms) (s, mods) :=
  if s.contains m then
    importModulesAux ms (s, mods)
  else do
    let s := s.insert m,
    mFile ← findOLean m,
    mod ← readModuleData mFile,
    (s, mods) ← importModulesAux mod.imports.toList (s, mods),
    let mods := mods.push mod,
    importModulesAux ms (s, mods)

private partial def getEntriesFor (mod : ModuleData) (extId : Name) : Nat → Array EnvExtensionState
| i :=
  if i < mod.entries.size then
    let curr := mod.entries.get i in
    if curr.1 == extId then curr.2 else getEntriesFor (i+1)
  else
    Array.empty

private def setImportedEntries (env : Environment) (mods : Array ModuleData) : IO Environment :=
do
pExtDescrs ← persistentEnvExtensionsRef.get,
pure $ mods.iterate env $ λ _ mod env,
  pExtDescrs.iterate env $ λ _ extDescr env,
    let entries := getEntriesFor mod extDescr.name 0 in
    extDescr.toEnvExtension.modifyState env $ λ s,
      { importedEntries := s.importedEntries.push entries,
        .. s }

private def mkImportedStateThunk
    (entries : Array (Array EnvExtensionEntry)) (initial : EnvExtensionState)
    (addEntryFn : Bool → EnvExtensionState → EnvExtensionEntry → EnvExtensionState)
    : Thunk EnvExtensionState :=
Thunk.mk $ λ _,
  entries.iterate initial $ λ _ entries s,
    entries.iterate s $ λ _ entry s,
      addEntryFn true s entry

private def finalizePersistentExtensions (env : Environment) : IO Environment :=
do
pExtDescrs ← persistentEnvExtensionsRef.get,
pure $ pExtDescrs.iterate env $ λ _ extDescr env,
  extDescr.toEnvExtension.modifyState env $ λ s,
    let importedState : Thunk EnvExtensionState := mkImportedStateThunk s.importedEntries extDescr.initial.importedState.get extDescr.addEntryFn in
    { importedState := importedState,
      entries       := [],
      state         := if extDescr.lazy then none else some importedState.get,
      .. s }

@[export lean.import_modules_core]
def importModules (modNames : List Name) (trustLevel : UInt32 := 0) : IO Environment :=
do
(_, mods) ← importModulesAux modNames ({}, Array.empty),
let const2ModIdx := mods.iterate {} $ λ modIdx (mod : ModuleData) (m : HashMap Name ModuleIdx),
  mod.constants.iterate m $ λ _ cinfo m,
    m.insert cinfo.name modIdx.val,
let constants   := mods.iterate SMap.empty $ λ _ (mod : ModuleData) (cs : SMap Name ConstantInfo Name.quickLt),
  mod.constants.iterate cs $ λ _ cinfo cs,
    cs.insert cinfo.name cinfo,
let constants   := constants.switch,
exts ← mkInitialExtensionStates,
let env : Environment := {
  const2ModIdx := const2ModIdx,
  constants    := constants,
  extensions   := exts,
  quotInit     := !modNames.isEmpty, -- We assume `core.lean` initializes quotient module
  trustLevel   := trustLevel,
  imports      := modNames.toArray
},
env ← setImportedEntries env mods,
env ← finalizePersistentExtensions env,
env ← mods.miterate env $ λ _ mod env, performModifications env mod.serialized,
pure env

end Lean

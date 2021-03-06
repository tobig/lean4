// Lean compiler output
// Module: init.lean.environment
// Imports: init.io init.util init.data.bytearray.default init.lean.declaration init.lean.smap
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_RBNode_find___main___at_Lean_Environment_find___spec__2(obj*, obj*);
obj* l_Lean_EnvExtension_modifyState___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Environment_getModuleIdxFor___boxed(obj*, obj*);
obj* l_RBNode_setBlack___main___rarg(obj*);
obj* l_Lean_EnvExtension_setStateUnsafe___rarg___boxed(obj*, obj*, obj*);
obj* l_mkHashMap___at_Lean_Environment_Inhabited___spec__1(obj*);
obj* l_Lean_registerEnvExtensionUnsafe___boxed(obj*);
obj* l_Lean_ConstantInfo_name(obj*);
obj* l_Lean_PersistentEnvExtension_inhabited(obj*, obj*);
namespace lean {
obj* write_module_core(obj*, obj*, obj*);
}
obj* l_Lean_performModifications___boxed(obj*, obj*, obj*);
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__12___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_PersistentEnvExtension_inhabited___rarg(obj*, obj*);
obj* l_Lean_EnvExtension_modifyStateUnsafe___rarg(obj*, obj*, obj*);
extern obj* l_Nat_Inhabited;
obj* l_Lean_EnvExtension_Inhabited___rarg(obj*);
obj* l_Lean_registerPersistentEnvExtensionUnsafe___boxed(obj*, obj*);
extern obj* l_Array_empty___closed__1;
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
obj* l_Lean_importModulesAux(obj*, obj*, obj*);
obj* l_Lean_EnvExtension_getState(obj*);
obj* l___private_init_lean_environment_12__mkImportedStateThunk___elambda__1(obj*, obj*, obj*, obj*);
obj* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
obj* l_Lean_CPPExtensionState_Inhabited;
obj* l_Lean_PersistentEnvExtension_forceStateAux___rarg(obj*, obj*);
namespace lean {
obj* environment_add_modification_core(obj*, obj*);
}
extern "C" obj* lean_find_olean(obj*, obj*);
obj* l_AssocList_find___main___at_Lean_Environment_find___spec__4___boxed(obj*, obj*);
obj* l_Lean_PersistentEnvExtension_getModuleEntries___rarg___boxed(obj*, obj*, obj*);
obj* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
obj* l_Lean_PersistentEnvExtension_inhabited___rarg___lambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_EnvExtension_getStateUnsafe___rarg(obj*, obj*);
obj* l_AssocList_replace___main___at_Lean_importModules___spec__6(obj*, obj*, obj*);
obj* l_Nat_foldAux___main___at_Lean_mkModuleData___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_PersistentEnvExtension_getEntries___rarg(obj*, obj*);
obj* l___private_init_lean_environment_11__setImportedEntries___boxed(obj*, obj*, obj*);
obj* l_Lean_EnvExtension_modifyStateUnsafe(obj*);
obj* l___private_init_lean_environment_4__getTrustLevel___boxed(obj*);
obj* l_Lean_SMap_find___main___at_Lean_Environment_find___spec__1___boxed(obj*, obj*);
uint8 l_AssocList_contains___main___at_Lean_Environment_add___spec__5(obj*, obj*);
obj* l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg___boxed(obj*, obj*, obj*, obj*);
namespace lean {
obj* import_modules_core(obj*, uint32, obj*);
}
obj* l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1___closed__1;
obj* l_Array_miterateAux___main___at___private_init_lean_environment_13__finalizePersistentExtensions___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1(obj*, obj*, obj*);
obj* l_List_reverse___rarg(obj*);
uint8 l_List_isEmpty___main___rarg(obj*);
obj* l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1___rarg___boxed(obj*, obj*, obj*);
obj* l_HashMapImp_moveEntries___main___at_Lean_Environment_add___spec__7(obj*, obj*, obj*);
obj* l_AssocList_foldl___main___at_Lean_Environment_add___spec__8(obj*, obj*);
obj* l_Lean_mkEmptyEnvironment___closed__1;
obj* l_Lean_EnvExtension_Inhabited___boxed(obj*);
obj* l_Lean_importModules___closed__1;
obj* l_List_toArrayAux___main___rarg(obj*, obj*);
obj* l_Lean_Name_toStringWithSep___main(obj*, obj*);
obj* l_Lean_PersistentEnvExtensionState_inhabited___rarg(obj*);
obj* l_Lean_EnvExtension_setState(obj*, obj*, obj*, obj*);
extern obj* l_Lean_Inhabited;
obj* l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l_List_redLength___main___rarg(obj*);
obj* l_Lean_PersistentEnvExtension_getState___rarg___boxed(obj*, obj*);
obj* l_Lean_PersistentEnvExtension_forceState(obj*, obj*);
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__8___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_AssocList_find___main___at_Lean_Environment_getModuleIdxFor___spec__2___boxed(obj*, obj*);
obj* l_Lean_Name_quickLt___boxed(obj*, obj*);
obj* l___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_EnvExtension_setState___boxed(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_environment_10__getEntriesFor___main___closed__1;
extern "C" obj* lean_io_initializing(obj*);
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__8(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_PersistentEnvExtension_inhabited___rarg___lambda__2(obj*);
obj* l_RBNode_ins___main___at_Lean_Environment_add___spec__3(obj*, obj*, obj*);
uint8 l_AssocList_contains___main___at_Lean_importModules___spec__2(obj*, obj*);
obj* l_Lean_EnvExtension_setState___closed__1;
namespace lean {
obj* mk_empty_environment_core(uint32, obj*);
}
extern obj* l_Lean_Name_DecidableEq;
obj* l_mkHashMap___at_Lean_Environment_Inhabited___spec__2(obj*);
obj* l___private_init_lean_environment_9__persistentEnvExtensionsRef;
obj* l_Array_toList___rarg(obj*);
obj* l_Lean_EnvExtensionEntry_Inhabited;
uint8 l_Lean_NameSet_contains(obj*, obj*);
obj* l_Lean_PersistentEnvExtension_inhabited___rarg___lambda__1(uint8, obj*, obj*);
extern "C" obj* lean_perform_serialized_modifications(obj*, obj*, obj*);
obj* l_RBNode_find___main___at_Lean_Environment_find___spec__2___boxed(obj*, obj*);
obj* l_RBNode_insert___at_Lean_NameSet_insert___spec__1(obj*, obj*, obj*);
obj* l_HashMapImp_find___at_Lean_Environment_getModuleIdxFor___spec__1(obj*, obj*);
obj* l_Lean_registerEnvExtensionUnsafe___rarg(obj*, obj*);
obj* l_AssocList_contains___main___at_Lean_Environment_add___spec__5___boxed(obj*, obj*);
obj* l___private_init_lean_environment_10__getEntriesFor(obj*, obj*, obj*);
extern "C" usize lean_name_hash_usize(obj*);
obj* l_Lean_readModuleData___boxed(obj*, obj*);
obj* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__10(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_PersistentEnvExtension_getState___rarg(obj*, obj*);
obj* l_Lean_PersistentEnvExtension_getEntries___boxed(obj*, obj*);
obj* l_Lean_EnvExtension_getStateUnsafe___rarg___boxed(obj*, obj*);
obj* l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1(obj*, obj*);
obj* l_Lean_registerEnvExtensionUnsafe(obj*);
obj* l_HashMapImp_insert___at_Lean_importModules___spec__1(obj*, obj*, obj*);
obj* l_Lean_Environment_getModuleIdxFor(obj*, obj*);
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__7___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_beqOfEq___rarg(obj*, obj*, obj*);
uint8 l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg(obj*, obj*, obj*, obj*);
obj* l_Lean_registerPersistentEnvExtension___rarg(obj*);
obj* l_Lean_Environment_Inhabited;
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_Lean_PersistentEnvExtension_getModuleEntries(obj*, obj*);
obj* l_Lean_PersistentEnvExtension_getEntries(obj*, obj*);
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__13___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_PersistentEnvExtensionState_inhabited(obj*, obj*, obj*);
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__13(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_environment_6__envExtensionsRef;
obj* l_HashMapImp_moveEntries___main___at_Lean_importModules___spec__4(obj*, obj*, obj*);
obj* l_Lean_PersistentEnvExtension_inhabited___boxed(obj*, obj*);
extern obj* l_ByteArray_empty;
obj* l_Lean_EnvExtension_getState___boxed(obj*);
extern "C" obj* lean_save_module_data(obj*, obj*, obj*);
obj* l_Lean_EnvExtension_getState___rarg(obj*, obj*);
obj* l_Lean_PersistentEnvExtension_forceStateAux(obj*, obj*);
namespace lean {
uint8 nat_dec_lt(obj*, obj*);
}
obj* l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1;
obj* l_Lean_EnvExtensionState_Inhabited;
extern "C" obj* lean_serialize_modifications(obj*, obj*);
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__11___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_environment_5__mkEnvExtensionsRef(obj*);
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__10___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_environment_12__mkImportedStateThunk(obj*, obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_AssocList_replace___main___at_Lean_Environment_add___spec__9(obj*, obj*, obj*);
obj* l_Lean_PersistentEnvExtension_getModuleEntries___rarg(obj*, obj*, obj*);
obj* l_Array_miterateAux___main___at___private_init_lean_environment_7__mkInitialExtensionStates___spec__1(obj*, obj*, obj*, obj*);
obj* l_Lean_SMap_find___main___at_Lean_Environment_find___spec__1(obj*, obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_Lean_EnvExtension_setStateUnsafe___rarg(obj*, obj*, obj*);
obj* l_Lean_saveModuleData___boxed(obj*, obj*, obj*);
obj* l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1___boxed(obj*, obj*);
uint8 l_RBNode_isRed___main___rarg(obj*);
namespace lean {
obj* set_extension_core(obj*, obj*, obj*);
}
obj* l___private_init_lean_environment_10__getEntriesFor___main___boxed(obj*, obj*, obj*);
obj* l_Lean_PersistentEnvExtensionState_inhabited___boxed(obj*, obj*, obj*);
obj* l_Lean_regModListExtension(obj*);
obj* l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1(obj*, obj*);
obj* l_Array_miterateAux___main___at___private_init_lean_environment_7__mkInitialExtensionStates___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_environment_10__getEntriesFor___boxed(obj*, obj*, obj*);
obj* l_Lean_EnvExtension_getStateUnsafe___boxed(obj*);
obj* l_Lean_registerEnvExtension(obj*, obj*);
obj* l_Lean_importModulesAux___main(obj*, obj*, obj*);
extern obj* l_unsafeIO___rarg___closed__1;
obj* l_Lean_EnvExtension_getState___rarg___boxed(obj*, obj*);
obj* l_Lean_registerPersistentEnvExtension(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_environment_7__mkInitialExtensionStates(obj*);
obj* l_Lean_EnvExtension_modifyStateUnsafe___boxed(obj*);
obj* l_Lean_registerPersistentEnvExtensionUnsafe(obj*, obj*);
obj* l_AssocList_find___main___at_Lean_Environment_getModuleIdxFor___spec__2(obj*, obj*);
obj* l_Lean_PersistentEnvExtension_getEntries___rarg___boxed(obj*, obj*);
obj* l_Lean_mkModuleData(obj*, obj*);
obj* l___private_init_lean_environment_8__mkPersistentEnvExtensionsRef(obj*);
obj* l_Lean_PersistentEnvExtension_getState(obj*, obj*);
obj* l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___boxed(obj*, obj*);
obj* l_Lean_EnvExtension_modifyState(obj*, obj*, obj*, obj*);
obj* l_Nat_foldAux___main___at_Lean_mkModuleData___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_HashMapImp_find___at_Lean_Environment_getModuleIdxFor___spec__1___boxed(obj*, obj*);
obj* l_Lean_mkEmptyEnvironment___closed__2;
obj* l_Lean_SMap_empty___at_Lean_importModules___spec__9;
obj* l_Lean_Modification_Inhabited;
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__11(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_importModules___boxed(obj*, obj*, obj*);
namespace lean {
uint8 environment_quot_init_core(obj*);
}
obj* l_Lean_SMap_switch___at___private_init_lean_environment_1__switch___spec__1(obj*);
extern obj* l_NonScalar_Inhabited;
obj* l_Lean_Environment_contains___boxed(obj*, obj*);
obj* l___private_init_lean_environment_3__isQuotInit___boxed(obj*);
extern "C" obj* lean_read_module_data(obj*, obj*);
obj* l_Lean_PersistentEnvExtension_addEntry___boxed(obj*, obj*);
obj* l_Lean_PersistentEnvExtension_getState___boxed(obj*, obj*);
obj* l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1___closed__2;
obj* l_AssocList_foldl___main___at_Lean_importModules___spec__5(obj*, obj*);
obj* l_Lean_findOLean___boxed(obj*, obj*);
obj* l_Lean_addModification___closed__2;
obj* l_RBNode_fold___main___at_Lean_mkModuleData___spec__2(obj*, obj*);
obj* l_Lean_EnvExtension_setStateUnsafe___boxed(obj*);
obj* l_RBNode_insert___at_Lean_Environment_add___spec__2(obj*, obj*, obj*);
obj* l_Lean_PersistentEnvExtension_addEntry___rarg(obj*, obj*, obj*);
namespace lean {
obj* environment_switch_core(obj*);
}
uint8 l_Lean_Name_quickLt(obj*, obj*);
namespace lean {
obj* register_extension_core(obj*);
}
namespace lean {
usize usize_modn(usize, obj*);
}
obj* l_HashMapImp_find___at_Lean_Environment_find___spec__3(obj*, obj*);
obj* l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__2(obj*, obj*, obj*, obj*, obj*);
obj* l___private_init_lean_environment_13__finalizePersistentExtensions(obj*, obj*);
namespace lean {
obj* environment_find_core(obj*, obj*);
}
obj* l_Lean_PersistentEnvExtension_forceState___rarg(obj*, obj*);
obj* l___private_init_lean_environment_11__setImportedEntries(obj*, obj*, obj*);
extern obj* l_HashMap_Inhabited___closed__1;
obj* l_Lean_modListExtension;
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__12(obj*, obj*, obj*, obj*, obj*);
obj* l_HashMapImp_expand___at_Lean_Environment_add___spec__6(obj*, obj*);
namespace lean {
obj* environment_add_core(obj*, obj*);
}
obj* l_Lean_EnvExtension_setStateUnsafe(obj*);
obj* l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_ModuleIdx_Inhabited;
obj* l_Lean_EnvExtension_Inhabited(obj*);
obj* l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1___rarg(obj*, obj*, obj*);
obj* l_mkHashMapImp___rarg(obj*);
obj* l_Lean_PersistentEnvExtension_getModuleEntries___boxed(obj*, obj*);
obj* l_Lean_EnvExtension_getStateUnsafe(obj*);
obj* l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__1(obj*, obj*, obj*, obj*, obj*);
obj* l_AssocList_contains___main___at_Lean_importModules___spec__2___boxed(obj*, obj*);
obj* l_HashMapImp_find___at_Lean_Environment_find___spec__3___boxed(obj*, obj*);
namespace lean {
obj* get_extension_core(obj*, obj*);
}
obj* l_Lean_mkEmptyEnvironment___boxed(obj*, obj*);
obj* l_HashMapImp_insert___at_Lean_Environment_add___spec__4(obj*, obj*, obj*);
obj* l_Lean_registerPersistentEnvExtension___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
namespace lean {
uint32 uint32_of_nat(obj*);
}
extern obj* l_Lean_Name_toString___closed__1;
namespace lean {
uint8 nat_dec_le(obj*, obj*);
}
uint8 l_Lean_Environment_contains(obj*, obj*);
namespace lean {
uint32 environment_trust_level_core(obj*);
}
obj* l_Lean_PersistentEnvExtension_forceState___boxed(obj*, obj*);
obj* l_Lean_PersistentEnvExtension_forceStateAux___boxed(obj*, obj*);
obj* l_Lean_serializeModifications___boxed(obj*, obj*);
obj* l_Lean_PersistentEnvExtension_addEntry(obj*, obj*);
obj* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___boxed(obj*, obj*, obj*);
obj* l_Lean_addModification___closed__1;
obj* l_Lean_registerEnvExtension___rarg(obj*);
obj* l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_registerPersistentEnvExtensionUnsafe___rarg(obj*, obj*, obj*);
obj* l_Lean_registerEnvExtension___boxed(obj*, obj*);
obj* l_Array_miterateAux___main___at___private_init_lean_environment_13__finalizePersistentExtensions___spec__1(obj*, obj*, obj*, obj*);
obj* l_AssocList_find___main___at_Lean_Environment_find___spec__4(obj*, obj*);
obj* l_Lean_ModuleData_inhabited;
namespace lean {
obj* environment_mark_quot_init_core(obj*);
}
namespace lean {
obj* nat_mul(obj*, obj*);
}
obj* l___private_init_lean_environment_10__getEntriesFor___main(obj*, obj*, obj*);
obj* l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
obj* l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_HashMapImp_expand___at_Lean_importModules___spec__3(obj*, obj*);
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__7(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
extern obj* l_String_splitAux___main___closed__1;
obj* _init_l_Lean_EnvExtensionState_Inhabited() {
_start:
{
obj* x_0; 
x_0 = l_NonScalar_Inhabited;
return x_0;
}
}
obj* _init_l_Lean_ModuleIdx_Inhabited() {
_start:
{
obj* x_0; 
x_0 = l_Nat_Inhabited;
return x_0;
}
}
obj* l_mkHashMap___at_Lean_Environment_Inhabited___spec__1(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_mkHashMapImp___rarg(x_0);
return x_1;
}
}
obj* l_mkHashMap___at_Lean_Environment_Inhabited___spec__2(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_mkHashMapImp___rarg(x_0);
return x_1;
}
}
obj* _init_l_Lean_Environment_Inhabited() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; uint8 x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; uint32 x_9; uint8 x_10; obj* x_12; obj* x_13; obj* x_14; 
x_0 = lean::mk_nat_obj(8ul);
x_1 = l_mkHashMapImp___rarg(x_0);
x_2 = lean::box(0);
x_3 = 1;
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 1);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
lean::cnstr_set_scalar(x_5, sizeof(void*)*2, x_3);
x_6 = x_5;
x_7 = lean::mk_nat_obj(0ul);
x_8 = lean::mk_empty_array(x_7);
x_9 = 0;
x_10 = 0;
lean::inc(x_8);
x_12 = lean::alloc_cnstr(0, 4, 5);
lean::cnstr_set(x_12, 0, x_1);
lean::cnstr_set(x_12, 1, x_6);
lean::cnstr_set(x_12, 2, x_8);
lean::cnstr_set(x_12, 3, x_8);
lean::cnstr_set_scalar(x_12, sizeof(void*)*4, x_9);
x_13 = x_12;
lean::cnstr_set_scalar(x_13, sizeof(void*)*4 + 4, x_10);
x_14 = x_13;
return x_14;
}
}
obj* l_RBNode_ins___main___at_Lean_Environment_add___spec__3(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
uint8 x_3; obj* x_4; obj* x_5; 
x_3 = 0;
x_4 = lean::alloc_cnstr(1, 4, 1);
lean::cnstr_set(x_4, 0, x_0);
lean::cnstr_set(x_4, 1, x_1);
lean::cnstr_set(x_4, 2, x_2);
lean::cnstr_set(x_4, 3, x_0);
lean::cnstr_set_scalar(x_4, sizeof(void*)*4, x_3);
x_5 = x_4;
return x_5;
}
else
{
uint8 x_6; 
x_6 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4);
if (x_6 == 0)
{
obj* x_7; obj* x_9; obj* x_11; obj* x_13; obj* x_15; uint8 x_16; 
x_7 = lean::cnstr_get(x_0, 0);
x_9 = lean::cnstr_get(x_0, 1);
x_11 = lean::cnstr_get(x_0, 2);
x_13 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_15 = x_0;
} else {
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_11);
 lean::inc(x_13);
 lean::dec(x_0);
 x_15 = lean::box(0);
}
x_16 = l_Lean_Name_quickLt(x_1, x_9);
if (x_16 == 0)
{
uint8 x_17; 
x_17 = l_Lean_Name_quickLt(x_9, x_1);
if (x_17 == 0)
{
obj* x_20; obj* x_21; 
lean::dec(x_9);
lean::dec(x_11);
if (lean::is_scalar(x_15)) {
 x_20 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_20 = x_15;
}
lean::cnstr_set(x_20, 0, x_7);
lean::cnstr_set(x_20, 1, x_1);
lean::cnstr_set(x_20, 2, x_2);
lean::cnstr_set(x_20, 3, x_13);
lean::cnstr_set_scalar(x_20, sizeof(void*)*4, x_6);
x_21 = x_20;
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = l_RBNode_ins___main___at_Lean_Environment_add___spec__3(x_13, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_23 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_23 = x_15;
}
lean::cnstr_set(x_23, 0, x_7);
lean::cnstr_set(x_23, 1, x_9);
lean::cnstr_set(x_23, 2, x_11);
lean::cnstr_set(x_23, 3, x_22);
lean::cnstr_set_scalar(x_23, sizeof(void*)*4, x_6);
x_24 = x_23;
return x_24;
}
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_RBNode_ins___main___at_Lean_Environment_add___spec__3(x_7, x_1, x_2);
if (lean::is_scalar(x_15)) {
 x_26 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_26 = x_15;
}
lean::cnstr_set(x_26, 0, x_25);
lean::cnstr_set(x_26, 1, x_9);
lean::cnstr_set(x_26, 2, x_11);
lean::cnstr_set(x_26, 3, x_13);
lean::cnstr_set_scalar(x_26, sizeof(void*)*4, x_6);
x_27 = x_26;
return x_27;
}
}
else
{
obj* x_28; obj* x_30; obj* x_32; obj* x_34; obj* x_36; uint8 x_37; 
x_28 = lean::cnstr_get(x_0, 0);
x_30 = lean::cnstr_get(x_0, 1);
x_32 = lean::cnstr_get(x_0, 2);
x_34 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_36 = x_0;
} else {
 lean::inc(x_28);
 lean::inc(x_30);
 lean::inc(x_32);
 lean::inc(x_34);
 lean::dec(x_0);
 x_36 = lean::box(0);
}
x_37 = l_Lean_Name_quickLt(x_1, x_30);
if (x_37 == 0)
{
uint8 x_38; 
x_38 = l_Lean_Name_quickLt(x_30, x_1);
if (x_38 == 0)
{
obj* x_41; obj* x_42; 
lean::dec(x_32);
lean::dec(x_30);
if (lean::is_scalar(x_36)) {
 x_41 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_41 = x_36;
}
lean::cnstr_set(x_41, 0, x_28);
lean::cnstr_set(x_41, 1, x_1);
lean::cnstr_set(x_41, 2, x_2);
lean::cnstr_set(x_41, 3, x_34);
lean::cnstr_set_scalar(x_41, sizeof(void*)*4, x_6);
x_42 = x_41;
return x_42;
}
else
{
uint8 x_43; 
x_43 = l_RBNode_isRed___main___rarg(x_34);
if (x_43 == 0)
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = l_RBNode_ins___main___at_Lean_Environment_add___spec__3(x_34, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_45 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_45 = x_36;
}
lean::cnstr_set(x_45, 0, x_28);
lean::cnstr_set(x_45, 1, x_30);
lean::cnstr_set(x_45, 2, x_32);
lean::cnstr_set(x_45, 3, x_44);
lean::cnstr_set_scalar(x_45, sizeof(void*)*4, x_6);
x_46 = x_45;
return x_46;
}
else
{
obj* x_47; 
x_47 = l_RBNode_ins___main___at_Lean_Environment_add___spec__3(x_34, x_1, x_2);
if (lean::obj_tag(x_47) == 0)
{
lean::dec(x_32);
lean::dec(x_36);
lean::dec(x_30);
lean::dec(x_28);
return x_47;
}
else
{
obj* x_52; 
x_52 = lean::cnstr_get(x_47, 0);
lean::inc(x_52);
if (lean::obj_tag(x_52) == 0)
{
obj* x_54; 
x_54 = lean::cnstr_get(x_47, 3);
lean::inc(x_54);
if (lean::obj_tag(x_54) == 0)
{
obj* x_56; obj* x_58; obj* x_60; uint8 x_61; obj* x_62; obj* x_63; uint8 x_64; obj* x_65; obj* x_66; 
x_56 = lean::cnstr_get(x_47, 1);
x_58 = lean::cnstr_get(x_47, 2);
if (lean::is_exclusive(x_47)) {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 3);
 x_60 = x_47;
} else {
 lean::inc(x_56);
 lean::inc(x_58);
 lean::dec(x_47);
 x_60 = lean::box(0);
}
x_61 = 0;
if (lean::is_scalar(x_60)) {
 x_62 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_62 = x_60;
}
lean::cnstr_set(x_62, 0, x_54);
lean::cnstr_set(x_62, 1, x_56);
lean::cnstr_set(x_62, 2, x_58);
lean::cnstr_set(x_62, 3, x_54);
lean::cnstr_set_scalar(x_62, sizeof(void*)*4, x_61);
x_63 = x_62;
x_64 = 1;
if (lean::is_scalar(x_36)) {
 x_65 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_65 = x_36;
}
lean::cnstr_set(x_65, 0, x_28);
lean::cnstr_set(x_65, 1, x_30);
lean::cnstr_set(x_65, 2, x_32);
lean::cnstr_set(x_65, 3, x_63);
lean::cnstr_set_scalar(x_65, sizeof(void*)*4, x_64);
x_66 = x_65;
return x_66;
}
else
{
uint8 x_67; 
x_67 = lean::cnstr_get_scalar<uint8>(x_54, sizeof(void*)*4);
if (x_67 == 0)
{
obj* x_68; obj* x_70; obj* x_72; obj* x_73; obj* x_75; obj* x_77; obj* x_79; obj* x_81; uint8 x_82; obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; 
x_68 = lean::cnstr_get(x_47, 1);
x_70 = lean::cnstr_get(x_47, 2);
if (lean::is_exclusive(x_47)) {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 3);
 x_72 = x_47;
} else {
 lean::inc(x_68);
 lean::inc(x_70);
 lean::dec(x_47);
 x_72 = lean::box(0);
}
x_73 = lean::cnstr_get(x_54, 0);
x_75 = lean::cnstr_get(x_54, 1);
x_77 = lean::cnstr_get(x_54, 2);
x_79 = lean::cnstr_get(x_54, 3);
if (lean::is_exclusive(x_54)) {
 x_81 = x_54;
} else {
 lean::inc(x_73);
 lean::inc(x_75);
 lean::inc(x_77);
 lean::inc(x_79);
 lean::dec(x_54);
 x_81 = lean::box(0);
}
x_82 = 1;
if (lean::is_scalar(x_81)) {
 x_83 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_83 = x_81;
}
lean::cnstr_set(x_83, 0, x_28);
lean::cnstr_set(x_83, 1, x_30);
lean::cnstr_set(x_83, 2, x_32);
lean::cnstr_set(x_83, 3, x_52);
lean::cnstr_set_scalar(x_83, sizeof(void*)*4, x_82);
x_84 = x_83;
if (lean::is_scalar(x_72)) {
 x_85 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_85 = x_72;
}
lean::cnstr_set(x_85, 0, x_73);
lean::cnstr_set(x_85, 1, x_75);
lean::cnstr_set(x_85, 2, x_77);
lean::cnstr_set(x_85, 3, x_79);
lean::cnstr_set_scalar(x_85, sizeof(void*)*4, x_82);
x_86 = x_85;
if (lean::is_scalar(x_36)) {
 x_87 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_87 = x_36;
}
lean::cnstr_set(x_87, 0, x_84);
lean::cnstr_set(x_87, 1, x_68);
lean::cnstr_set(x_87, 2, x_70);
lean::cnstr_set(x_87, 3, x_86);
lean::cnstr_set_scalar(x_87, sizeof(void*)*4, x_67);
x_88 = x_87;
return x_88;
}
else
{
obj* x_89; obj* x_91; obj* x_93; uint8 x_94; obj* x_95; obj* x_96; obj* x_97; obj* x_98; 
x_89 = lean::cnstr_get(x_47, 1);
x_91 = lean::cnstr_get(x_47, 2);
if (lean::is_exclusive(x_47)) {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 3);
 x_93 = x_47;
} else {
 lean::inc(x_89);
 lean::inc(x_91);
 lean::dec(x_47);
 x_93 = lean::box(0);
}
x_94 = 0;
if (lean::is_scalar(x_93)) {
 x_95 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_95 = x_93;
}
lean::cnstr_set(x_95, 0, x_52);
lean::cnstr_set(x_95, 1, x_89);
lean::cnstr_set(x_95, 2, x_91);
lean::cnstr_set(x_95, 3, x_54);
lean::cnstr_set_scalar(x_95, sizeof(void*)*4, x_94);
x_96 = x_95;
if (lean::is_scalar(x_36)) {
 x_97 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_97 = x_36;
}
lean::cnstr_set(x_97, 0, x_28);
lean::cnstr_set(x_97, 1, x_30);
lean::cnstr_set(x_97, 2, x_32);
lean::cnstr_set(x_97, 3, x_96);
lean::cnstr_set_scalar(x_97, sizeof(void*)*4, x_67);
x_98 = x_97;
return x_98;
}
}
}
else
{
uint8 x_99; 
x_99 = lean::cnstr_get_scalar<uint8>(x_52, sizeof(void*)*4);
if (x_99 == 0)
{
obj* x_100; obj* x_102; obj* x_104; obj* x_106; obj* x_107; obj* x_109; obj* x_111; obj* x_113; obj* x_115; uint8 x_116; obj* x_117; obj* x_118; obj* x_119; obj* x_120; obj* x_121; obj* x_122; 
x_100 = lean::cnstr_get(x_47, 1);
x_102 = lean::cnstr_get(x_47, 2);
x_104 = lean::cnstr_get(x_47, 3);
if (lean::is_exclusive(x_47)) {
 lean::cnstr_release(x_47, 0);
 x_106 = x_47;
} else {
 lean::inc(x_100);
 lean::inc(x_102);
 lean::inc(x_104);
 lean::dec(x_47);
 x_106 = lean::box(0);
}
x_107 = lean::cnstr_get(x_52, 0);
x_109 = lean::cnstr_get(x_52, 1);
x_111 = lean::cnstr_get(x_52, 2);
x_113 = lean::cnstr_get(x_52, 3);
if (lean::is_exclusive(x_52)) {
 x_115 = x_52;
} else {
 lean::inc(x_107);
 lean::inc(x_109);
 lean::inc(x_111);
 lean::inc(x_113);
 lean::dec(x_52);
 x_115 = lean::box(0);
}
x_116 = 1;
if (lean::is_scalar(x_115)) {
 x_117 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_117 = x_115;
}
lean::cnstr_set(x_117, 0, x_28);
lean::cnstr_set(x_117, 1, x_30);
lean::cnstr_set(x_117, 2, x_32);
lean::cnstr_set(x_117, 3, x_107);
lean::cnstr_set_scalar(x_117, sizeof(void*)*4, x_116);
x_118 = x_117;
if (lean::is_scalar(x_106)) {
 x_119 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_119 = x_106;
}
lean::cnstr_set(x_119, 0, x_113);
lean::cnstr_set(x_119, 1, x_100);
lean::cnstr_set(x_119, 2, x_102);
lean::cnstr_set(x_119, 3, x_104);
lean::cnstr_set_scalar(x_119, sizeof(void*)*4, x_116);
x_120 = x_119;
if (lean::is_scalar(x_36)) {
 x_121 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_121 = x_36;
}
lean::cnstr_set(x_121, 0, x_118);
lean::cnstr_set(x_121, 1, x_109);
lean::cnstr_set(x_121, 2, x_111);
lean::cnstr_set(x_121, 3, x_120);
lean::cnstr_set_scalar(x_121, sizeof(void*)*4, x_99);
x_122 = x_121;
return x_122;
}
else
{
obj* x_123; 
x_123 = lean::cnstr_get(x_47, 3);
lean::inc(x_123);
if (lean::obj_tag(x_123) == 0)
{
obj* x_125; obj* x_127; obj* x_129; uint8 x_130; obj* x_131; obj* x_132; obj* x_133; obj* x_134; 
x_125 = lean::cnstr_get(x_47, 1);
x_127 = lean::cnstr_get(x_47, 2);
if (lean::is_exclusive(x_47)) {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 3);
 x_129 = x_47;
} else {
 lean::inc(x_125);
 lean::inc(x_127);
 lean::dec(x_47);
 x_129 = lean::box(0);
}
x_130 = 0;
if (lean::is_scalar(x_129)) {
 x_131 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_131 = x_129;
}
lean::cnstr_set(x_131, 0, x_52);
lean::cnstr_set(x_131, 1, x_125);
lean::cnstr_set(x_131, 2, x_127);
lean::cnstr_set(x_131, 3, x_123);
lean::cnstr_set_scalar(x_131, sizeof(void*)*4, x_130);
x_132 = x_131;
if (lean::is_scalar(x_36)) {
 x_133 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_133 = x_36;
}
lean::cnstr_set(x_133, 0, x_28);
lean::cnstr_set(x_133, 1, x_30);
lean::cnstr_set(x_133, 2, x_32);
lean::cnstr_set(x_133, 3, x_132);
lean::cnstr_set_scalar(x_133, sizeof(void*)*4, x_99);
x_134 = x_133;
return x_134;
}
else
{
uint8 x_135; 
x_135 = lean::cnstr_get_scalar<uint8>(x_123, sizeof(void*)*4);
if (x_135 == 0)
{
obj* x_137; obj* x_139; obj* x_141; obj* x_142; obj* x_144; obj* x_146; obj* x_148; obj* x_150; obj* x_152; obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; obj* x_158; 
lean::dec(x_36);
x_137 = lean::cnstr_get(x_47, 1);
x_139 = lean::cnstr_get(x_47, 2);
if (lean::is_exclusive(x_47)) {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 3);
 x_141 = x_47;
} else {
 lean::inc(x_137);
 lean::inc(x_139);
 lean::dec(x_47);
 x_141 = lean::box(0);
}
x_142 = lean::cnstr_get(x_123, 0);
x_144 = lean::cnstr_get(x_123, 1);
x_146 = lean::cnstr_get(x_123, 2);
x_148 = lean::cnstr_get(x_123, 3);
if (lean::is_exclusive(x_123)) {
 x_150 = x_123;
} else {
 lean::inc(x_142);
 lean::inc(x_144);
 lean::inc(x_146);
 lean::inc(x_148);
 lean::dec(x_123);
 x_150 = lean::box(0);
}
lean::inc(x_52);
if (lean::is_scalar(x_150)) {
 x_152 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_152 = x_150;
}
lean::cnstr_set(x_152, 0, x_28);
lean::cnstr_set(x_152, 1, x_30);
lean::cnstr_set(x_152, 2, x_32);
lean::cnstr_set(x_152, 3, x_52);
if (lean::is_exclusive(x_52)) {
 lean::cnstr_release(x_52, 0);
 lean::cnstr_release(x_52, 1);
 lean::cnstr_release(x_52, 2);
 lean::cnstr_release(x_52, 3);
 x_153 = x_52;
} else {
 lean::dec(x_52);
 x_153 = lean::box(0);
}
lean::cnstr_set_scalar(x_152, sizeof(void*)*4, x_99);
x_154 = x_152;
if (lean::is_scalar(x_153)) {
 x_155 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_155 = x_153;
}
lean::cnstr_set(x_155, 0, x_142);
lean::cnstr_set(x_155, 1, x_144);
lean::cnstr_set(x_155, 2, x_146);
lean::cnstr_set(x_155, 3, x_148);
lean::cnstr_set_scalar(x_155, sizeof(void*)*4, x_99);
x_156 = x_155;
if (lean::is_scalar(x_141)) {
 x_157 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_157 = x_141;
}
lean::cnstr_set(x_157, 0, x_154);
lean::cnstr_set(x_157, 1, x_137);
lean::cnstr_set(x_157, 2, x_139);
lean::cnstr_set(x_157, 3, x_156);
lean::cnstr_set_scalar(x_157, sizeof(void*)*4, x_135);
x_158 = x_157;
return x_158;
}
else
{
obj* x_159; obj* x_161; obj* x_163; obj* x_164; obj* x_166; obj* x_168; obj* x_170; obj* x_172; obj* x_173; obj* x_174; uint8 x_175; obj* x_176; obj* x_177; obj* x_178; obj* x_179; 
x_159 = lean::cnstr_get(x_47, 1);
x_161 = lean::cnstr_get(x_47, 2);
if (lean::is_exclusive(x_47)) {
 lean::cnstr_release(x_47, 0);
 lean::cnstr_release(x_47, 3);
 x_163 = x_47;
} else {
 lean::inc(x_159);
 lean::inc(x_161);
 lean::dec(x_47);
 x_163 = lean::box(0);
}
x_164 = lean::cnstr_get(x_52, 0);
x_166 = lean::cnstr_get(x_52, 1);
x_168 = lean::cnstr_get(x_52, 2);
x_170 = lean::cnstr_get(x_52, 3);
if (lean::is_exclusive(x_52)) {
 x_172 = x_52;
} else {
 lean::inc(x_164);
 lean::inc(x_166);
 lean::inc(x_168);
 lean::inc(x_170);
 lean::dec(x_52);
 x_172 = lean::box(0);
}
if (lean::is_scalar(x_172)) {
 x_173 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_173 = x_172;
}
lean::cnstr_set(x_173, 0, x_164);
lean::cnstr_set(x_173, 1, x_166);
lean::cnstr_set(x_173, 2, x_168);
lean::cnstr_set(x_173, 3, x_170);
lean::cnstr_set_scalar(x_173, sizeof(void*)*4, x_135);
x_174 = x_173;
x_175 = 0;
if (lean::is_scalar(x_163)) {
 x_176 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_176 = x_163;
}
lean::cnstr_set(x_176, 0, x_174);
lean::cnstr_set(x_176, 1, x_159);
lean::cnstr_set(x_176, 2, x_161);
lean::cnstr_set(x_176, 3, x_123);
lean::cnstr_set_scalar(x_176, sizeof(void*)*4, x_175);
x_177 = x_176;
if (lean::is_scalar(x_36)) {
 x_178 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_178 = x_36;
}
lean::cnstr_set(x_178, 0, x_28);
lean::cnstr_set(x_178, 1, x_30);
lean::cnstr_set(x_178, 2, x_32);
lean::cnstr_set(x_178, 3, x_177);
lean::cnstr_set_scalar(x_178, sizeof(void*)*4, x_135);
x_179 = x_178;
return x_179;
}
}
}
}
}
}
}
}
else
{
uint8 x_180; 
x_180 = l_RBNode_isRed___main___rarg(x_28);
if (x_180 == 0)
{
obj* x_181; obj* x_182; obj* x_183; 
x_181 = l_RBNode_ins___main___at_Lean_Environment_add___spec__3(x_28, x_1, x_2);
if (lean::is_scalar(x_36)) {
 x_182 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_182 = x_36;
}
lean::cnstr_set(x_182, 0, x_181);
lean::cnstr_set(x_182, 1, x_30);
lean::cnstr_set(x_182, 2, x_32);
lean::cnstr_set(x_182, 3, x_34);
lean::cnstr_set_scalar(x_182, sizeof(void*)*4, x_6);
x_183 = x_182;
return x_183;
}
else
{
obj* x_184; 
x_184 = l_RBNode_ins___main___at_Lean_Environment_add___spec__3(x_28, x_1, x_2);
if (lean::obj_tag(x_184) == 0)
{
lean::dec(x_32);
lean::dec(x_36);
lean::dec(x_30);
lean::dec(x_34);
return x_184;
}
else
{
obj* x_189; 
x_189 = lean::cnstr_get(x_184, 0);
lean::inc(x_189);
if (lean::obj_tag(x_189) == 0)
{
obj* x_191; 
x_191 = lean::cnstr_get(x_184, 3);
lean::inc(x_191);
if (lean::obj_tag(x_191) == 0)
{
obj* x_193; obj* x_195; obj* x_197; uint8 x_198; obj* x_199; obj* x_200; uint8 x_201; obj* x_202; obj* x_203; 
x_193 = lean::cnstr_get(x_184, 1);
x_195 = lean::cnstr_get(x_184, 2);
if (lean::is_exclusive(x_184)) {
 lean::cnstr_release(x_184, 0);
 lean::cnstr_release(x_184, 3);
 x_197 = x_184;
} else {
 lean::inc(x_193);
 lean::inc(x_195);
 lean::dec(x_184);
 x_197 = lean::box(0);
}
x_198 = 0;
if (lean::is_scalar(x_197)) {
 x_199 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_199 = x_197;
}
lean::cnstr_set(x_199, 0, x_191);
lean::cnstr_set(x_199, 1, x_193);
lean::cnstr_set(x_199, 2, x_195);
lean::cnstr_set(x_199, 3, x_191);
lean::cnstr_set_scalar(x_199, sizeof(void*)*4, x_198);
x_200 = x_199;
x_201 = 1;
if (lean::is_scalar(x_36)) {
 x_202 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_202 = x_36;
}
lean::cnstr_set(x_202, 0, x_200);
lean::cnstr_set(x_202, 1, x_30);
lean::cnstr_set(x_202, 2, x_32);
lean::cnstr_set(x_202, 3, x_34);
lean::cnstr_set_scalar(x_202, sizeof(void*)*4, x_201);
x_203 = x_202;
return x_203;
}
else
{
uint8 x_204; 
x_204 = lean::cnstr_get_scalar<uint8>(x_191, sizeof(void*)*4);
if (x_204 == 0)
{
obj* x_205; obj* x_207; obj* x_209; obj* x_210; obj* x_212; obj* x_214; obj* x_216; obj* x_218; uint8 x_219; obj* x_220; obj* x_221; obj* x_222; obj* x_223; obj* x_224; obj* x_225; 
x_205 = lean::cnstr_get(x_184, 1);
x_207 = lean::cnstr_get(x_184, 2);
if (lean::is_exclusive(x_184)) {
 lean::cnstr_release(x_184, 0);
 lean::cnstr_release(x_184, 3);
 x_209 = x_184;
} else {
 lean::inc(x_205);
 lean::inc(x_207);
 lean::dec(x_184);
 x_209 = lean::box(0);
}
x_210 = lean::cnstr_get(x_191, 0);
x_212 = lean::cnstr_get(x_191, 1);
x_214 = lean::cnstr_get(x_191, 2);
x_216 = lean::cnstr_get(x_191, 3);
if (lean::is_exclusive(x_191)) {
 x_218 = x_191;
} else {
 lean::inc(x_210);
 lean::inc(x_212);
 lean::inc(x_214);
 lean::inc(x_216);
 lean::dec(x_191);
 x_218 = lean::box(0);
}
x_219 = 1;
if (lean::is_scalar(x_218)) {
 x_220 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_220 = x_218;
}
lean::cnstr_set(x_220, 0, x_189);
lean::cnstr_set(x_220, 1, x_205);
lean::cnstr_set(x_220, 2, x_207);
lean::cnstr_set(x_220, 3, x_210);
lean::cnstr_set_scalar(x_220, sizeof(void*)*4, x_219);
x_221 = x_220;
if (lean::is_scalar(x_209)) {
 x_222 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_222 = x_209;
}
lean::cnstr_set(x_222, 0, x_216);
lean::cnstr_set(x_222, 1, x_30);
lean::cnstr_set(x_222, 2, x_32);
lean::cnstr_set(x_222, 3, x_34);
lean::cnstr_set_scalar(x_222, sizeof(void*)*4, x_219);
x_223 = x_222;
if (lean::is_scalar(x_36)) {
 x_224 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_224 = x_36;
}
lean::cnstr_set(x_224, 0, x_221);
lean::cnstr_set(x_224, 1, x_212);
lean::cnstr_set(x_224, 2, x_214);
lean::cnstr_set(x_224, 3, x_223);
lean::cnstr_set_scalar(x_224, sizeof(void*)*4, x_204);
x_225 = x_224;
return x_225;
}
else
{
obj* x_226; obj* x_228; obj* x_230; uint8 x_231; obj* x_232; obj* x_233; obj* x_234; obj* x_235; 
x_226 = lean::cnstr_get(x_184, 1);
x_228 = lean::cnstr_get(x_184, 2);
if (lean::is_exclusive(x_184)) {
 lean::cnstr_release(x_184, 0);
 lean::cnstr_release(x_184, 3);
 x_230 = x_184;
} else {
 lean::inc(x_226);
 lean::inc(x_228);
 lean::dec(x_184);
 x_230 = lean::box(0);
}
x_231 = 0;
if (lean::is_scalar(x_230)) {
 x_232 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_232 = x_230;
}
lean::cnstr_set(x_232, 0, x_189);
lean::cnstr_set(x_232, 1, x_226);
lean::cnstr_set(x_232, 2, x_228);
lean::cnstr_set(x_232, 3, x_191);
lean::cnstr_set_scalar(x_232, sizeof(void*)*4, x_231);
x_233 = x_232;
if (lean::is_scalar(x_36)) {
 x_234 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_234 = x_36;
}
lean::cnstr_set(x_234, 0, x_233);
lean::cnstr_set(x_234, 1, x_30);
lean::cnstr_set(x_234, 2, x_32);
lean::cnstr_set(x_234, 3, x_34);
lean::cnstr_set_scalar(x_234, sizeof(void*)*4, x_204);
x_235 = x_234;
return x_235;
}
}
}
else
{
uint8 x_236; 
x_236 = lean::cnstr_get_scalar<uint8>(x_189, sizeof(void*)*4);
if (x_236 == 0)
{
obj* x_237; obj* x_239; obj* x_241; obj* x_243; obj* x_244; obj* x_246; obj* x_248; obj* x_250; obj* x_252; uint8 x_253; obj* x_254; obj* x_255; obj* x_256; obj* x_257; obj* x_258; obj* x_259; 
x_237 = lean::cnstr_get(x_184, 1);
x_239 = lean::cnstr_get(x_184, 2);
x_241 = lean::cnstr_get(x_184, 3);
if (lean::is_exclusive(x_184)) {
 lean::cnstr_release(x_184, 0);
 x_243 = x_184;
} else {
 lean::inc(x_237);
 lean::inc(x_239);
 lean::inc(x_241);
 lean::dec(x_184);
 x_243 = lean::box(0);
}
x_244 = lean::cnstr_get(x_189, 0);
x_246 = lean::cnstr_get(x_189, 1);
x_248 = lean::cnstr_get(x_189, 2);
x_250 = lean::cnstr_get(x_189, 3);
if (lean::is_exclusive(x_189)) {
 x_252 = x_189;
} else {
 lean::inc(x_244);
 lean::inc(x_246);
 lean::inc(x_248);
 lean::inc(x_250);
 lean::dec(x_189);
 x_252 = lean::box(0);
}
x_253 = 1;
if (lean::is_scalar(x_252)) {
 x_254 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_254 = x_252;
}
lean::cnstr_set(x_254, 0, x_244);
lean::cnstr_set(x_254, 1, x_246);
lean::cnstr_set(x_254, 2, x_248);
lean::cnstr_set(x_254, 3, x_250);
lean::cnstr_set_scalar(x_254, sizeof(void*)*4, x_253);
x_255 = x_254;
if (lean::is_scalar(x_243)) {
 x_256 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_256 = x_243;
}
lean::cnstr_set(x_256, 0, x_241);
lean::cnstr_set(x_256, 1, x_30);
lean::cnstr_set(x_256, 2, x_32);
lean::cnstr_set(x_256, 3, x_34);
lean::cnstr_set_scalar(x_256, sizeof(void*)*4, x_253);
x_257 = x_256;
if (lean::is_scalar(x_36)) {
 x_258 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_258 = x_36;
}
lean::cnstr_set(x_258, 0, x_255);
lean::cnstr_set(x_258, 1, x_237);
lean::cnstr_set(x_258, 2, x_239);
lean::cnstr_set(x_258, 3, x_257);
lean::cnstr_set_scalar(x_258, sizeof(void*)*4, x_236);
x_259 = x_258;
return x_259;
}
else
{
obj* x_260; 
x_260 = lean::cnstr_get(x_184, 3);
lean::inc(x_260);
if (lean::obj_tag(x_260) == 0)
{
obj* x_262; obj* x_264; obj* x_266; uint8 x_267; obj* x_268; obj* x_269; obj* x_270; obj* x_271; 
x_262 = lean::cnstr_get(x_184, 1);
x_264 = lean::cnstr_get(x_184, 2);
if (lean::is_exclusive(x_184)) {
 lean::cnstr_release(x_184, 0);
 lean::cnstr_release(x_184, 3);
 x_266 = x_184;
} else {
 lean::inc(x_262);
 lean::inc(x_264);
 lean::dec(x_184);
 x_266 = lean::box(0);
}
x_267 = 0;
if (lean::is_scalar(x_266)) {
 x_268 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_268 = x_266;
}
lean::cnstr_set(x_268, 0, x_189);
lean::cnstr_set(x_268, 1, x_262);
lean::cnstr_set(x_268, 2, x_264);
lean::cnstr_set(x_268, 3, x_260);
lean::cnstr_set_scalar(x_268, sizeof(void*)*4, x_267);
x_269 = x_268;
if (lean::is_scalar(x_36)) {
 x_270 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_270 = x_36;
}
lean::cnstr_set(x_270, 0, x_269);
lean::cnstr_set(x_270, 1, x_30);
lean::cnstr_set(x_270, 2, x_32);
lean::cnstr_set(x_270, 3, x_34);
lean::cnstr_set_scalar(x_270, sizeof(void*)*4, x_236);
x_271 = x_270;
return x_271;
}
else
{
uint8 x_272; 
x_272 = lean::cnstr_get_scalar<uint8>(x_260, sizeof(void*)*4);
if (x_272 == 0)
{
obj* x_274; obj* x_276; obj* x_278; obj* x_279; obj* x_281; obj* x_283; obj* x_285; obj* x_287; obj* x_289; obj* x_290; obj* x_291; obj* x_292; obj* x_293; obj* x_294; obj* x_295; 
lean::dec(x_36);
x_274 = lean::cnstr_get(x_184, 1);
x_276 = lean::cnstr_get(x_184, 2);
if (lean::is_exclusive(x_184)) {
 lean::cnstr_release(x_184, 0);
 lean::cnstr_release(x_184, 3);
 x_278 = x_184;
} else {
 lean::inc(x_274);
 lean::inc(x_276);
 lean::dec(x_184);
 x_278 = lean::box(0);
}
x_279 = lean::cnstr_get(x_260, 0);
x_281 = lean::cnstr_get(x_260, 1);
x_283 = lean::cnstr_get(x_260, 2);
x_285 = lean::cnstr_get(x_260, 3);
if (lean::is_exclusive(x_260)) {
 x_287 = x_260;
} else {
 lean::inc(x_279);
 lean::inc(x_281);
 lean::inc(x_283);
 lean::inc(x_285);
 lean::dec(x_260);
 x_287 = lean::box(0);
}
lean::inc(x_189);
if (lean::is_scalar(x_287)) {
 x_289 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_289 = x_287;
}
lean::cnstr_set(x_289, 0, x_189);
lean::cnstr_set(x_289, 1, x_274);
lean::cnstr_set(x_289, 2, x_276);
lean::cnstr_set(x_289, 3, x_279);
if (lean::is_exclusive(x_189)) {
 lean::cnstr_release(x_189, 0);
 lean::cnstr_release(x_189, 1);
 lean::cnstr_release(x_189, 2);
 lean::cnstr_release(x_189, 3);
 x_290 = x_189;
} else {
 lean::dec(x_189);
 x_290 = lean::box(0);
}
lean::cnstr_set_scalar(x_289, sizeof(void*)*4, x_236);
x_291 = x_289;
if (lean::is_scalar(x_290)) {
 x_292 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_292 = x_290;
}
lean::cnstr_set(x_292, 0, x_285);
lean::cnstr_set(x_292, 1, x_30);
lean::cnstr_set(x_292, 2, x_32);
lean::cnstr_set(x_292, 3, x_34);
lean::cnstr_set_scalar(x_292, sizeof(void*)*4, x_236);
x_293 = x_292;
if (lean::is_scalar(x_278)) {
 x_294 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_294 = x_278;
}
lean::cnstr_set(x_294, 0, x_291);
lean::cnstr_set(x_294, 1, x_281);
lean::cnstr_set(x_294, 2, x_283);
lean::cnstr_set(x_294, 3, x_293);
lean::cnstr_set_scalar(x_294, sizeof(void*)*4, x_272);
x_295 = x_294;
return x_295;
}
else
{
obj* x_296; obj* x_298; obj* x_300; obj* x_301; obj* x_303; obj* x_305; obj* x_307; obj* x_309; obj* x_310; obj* x_311; uint8 x_312; obj* x_313; obj* x_314; obj* x_315; obj* x_316; 
x_296 = lean::cnstr_get(x_184, 1);
x_298 = lean::cnstr_get(x_184, 2);
if (lean::is_exclusive(x_184)) {
 lean::cnstr_release(x_184, 0);
 lean::cnstr_release(x_184, 3);
 x_300 = x_184;
} else {
 lean::inc(x_296);
 lean::inc(x_298);
 lean::dec(x_184);
 x_300 = lean::box(0);
}
x_301 = lean::cnstr_get(x_189, 0);
x_303 = lean::cnstr_get(x_189, 1);
x_305 = lean::cnstr_get(x_189, 2);
x_307 = lean::cnstr_get(x_189, 3);
if (lean::is_exclusive(x_189)) {
 x_309 = x_189;
} else {
 lean::inc(x_301);
 lean::inc(x_303);
 lean::inc(x_305);
 lean::inc(x_307);
 lean::dec(x_189);
 x_309 = lean::box(0);
}
if (lean::is_scalar(x_309)) {
 x_310 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_310 = x_309;
}
lean::cnstr_set(x_310, 0, x_301);
lean::cnstr_set(x_310, 1, x_303);
lean::cnstr_set(x_310, 2, x_305);
lean::cnstr_set(x_310, 3, x_307);
lean::cnstr_set_scalar(x_310, sizeof(void*)*4, x_272);
x_311 = x_310;
x_312 = 0;
if (lean::is_scalar(x_300)) {
 x_313 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_313 = x_300;
}
lean::cnstr_set(x_313, 0, x_311);
lean::cnstr_set(x_313, 1, x_296);
lean::cnstr_set(x_313, 2, x_298);
lean::cnstr_set(x_313, 3, x_260);
lean::cnstr_set_scalar(x_313, sizeof(void*)*4, x_312);
x_314 = x_313;
if (lean::is_scalar(x_36)) {
 x_315 = lean::alloc_cnstr(1, 4, 1);
} else {
 x_315 = x_36;
}
lean::cnstr_set(x_315, 0, x_314);
lean::cnstr_set(x_315, 1, x_30);
lean::cnstr_set(x_315, 2, x_32);
lean::cnstr_set(x_315, 3, x_34);
lean::cnstr_set_scalar(x_315, sizeof(void*)*4, x_272);
x_316 = x_315;
return x_316;
}
}
}
}
}
}
}
}
}
}
}
obj* l_RBNode_insert___at_Lean_Environment_add___spec__2(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = l_RBNode_isRed___main___rarg(x_0);
if (x_3 == 0)
{
obj* x_4; 
x_4 = l_RBNode_ins___main___at_Lean_Environment_add___spec__3(x_0, x_1, x_2);
return x_4;
}
else
{
obj* x_5; obj* x_6; 
x_5 = l_RBNode_ins___main___at_Lean_Environment_add___spec__3(x_0, x_1, x_2);
x_6 = l_RBNode_setBlack___main___rarg(x_5);
return x_6;
}
}
}
uint8 l_AssocList_contains___main___at_Lean_Environment_add___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
else
{
obj* x_3; obj* x_4; uint8 x_5; 
x_3 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 2);
x_5 = lean_name_dec_eq(x_3, x_0);
if (x_5 == 0)
{
x_1 = x_4;
goto _start;
}
else
{
uint8 x_7; 
x_7 = 1;
return x_7;
}
}
}
}
obj* l_AssocList_foldl___main___at_Lean_Environment_add___spec__8(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; usize x_10; usize x_11; obj* x_13; obj* x_14; obj* x_15; 
x_2 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
x_6 = lean::cnstr_get(x_1, 2);
if (lean::is_exclusive(x_1)) {
 x_8 = x_1;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = lean::array_get_size(x_0);
x_10 = lean_name_hash_usize(x_2);
x_11 = lean::usize_modn(x_10, x_9);
lean::dec(x_9);
x_13 = lean::array_uget(x_0, x_11);
if (lean::is_scalar(x_8)) {
 x_14 = lean::alloc_cnstr(1, 3, 0);
} else {
 x_14 = x_8;
}
lean::cnstr_set(x_14, 0, x_2);
lean::cnstr_set(x_14, 1, x_4);
lean::cnstr_set(x_14, 2, x_13);
x_15 = lean::array_uset(x_0, x_11, x_14);
x_0 = x_15;
x_1 = x_6;
goto _start;
}
}
}
obj* l_HashMapImp_moveEntries___main___at_Lean_Environment_add___spec__7(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::array_get_size(x_1);
x_4 = lean::nat_dec_lt(x_0, x_3);
lean::dec(x_3);
if (x_4 == 0)
{
lean::dec(x_1);
lean::dec(x_0);
return x_2;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_8 = lean::array_fget(x_1, x_0);
x_9 = lean::box(0);
x_10 = lean::array_fset(x_1, x_0, x_9);
x_11 = l_AssocList_foldl___main___at_Lean_Environment_add___spec__8(x_2, x_8);
x_12 = lean::mk_nat_obj(1ul);
x_13 = lean::nat_add(x_0, x_12);
lean::dec(x_0);
x_0 = x_13;
x_1 = x_10;
x_2 = x_11;
goto _start;
}
}
}
obj* l_HashMapImp_expand___at_Lean_Environment_add___spec__6(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::array_get_size(x_1);
x_3 = lean::mk_nat_obj(2ul);
x_4 = lean::nat_mul(x_2, x_3);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::mk_array(x_4, x_6);
x_8 = lean::mk_nat_obj(0ul);
x_9 = l_HashMapImp_moveEntries___main___at_Lean_Environment_add___spec__7(x_8, x_1, x_7);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_AssocList_replace___main___at_Lean_Environment_add___spec__9(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_1);
lean::dec(x_0);
return x_2;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; uint8 x_12; 
x_5 = lean::cnstr_get(x_2, 0);
x_7 = lean::cnstr_get(x_2, 1);
x_9 = lean::cnstr_get(x_2, 2);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 lean::cnstr_set(x_2, 1, lean::box(0));
 lean::cnstr_set(x_2, 2, lean::box(0));
 x_11 = x_2;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_2);
 x_11 = lean::box(0);
}
x_12 = lean_name_dec_eq(x_5, x_0);
if (x_12 == 0)
{
obj* x_13; obj* x_14; 
x_13 = l_AssocList_replace___main___at_Lean_Environment_add___spec__9(x_0, x_1, x_9);
if (lean::is_scalar(x_11)) {
 x_14 = lean::alloc_cnstr(1, 3, 0);
} else {
 x_14 = x_11;
}
lean::cnstr_set(x_14, 0, x_5);
lean::cnstr_set(x_14, 1, x_7);
lean::cnstr_set(x_14, 2, x_13);
return x_14;
}
else
{
obj* x_17; 
lean::dec(x_7);
lean::dec(x_5);
if (lean::is_scalar(x_11)) {
 x_17 = lean::alloc_cnstr(1, 3, 0);
} else {
 x_17 = x_11;
}
lean::cnstr_set(x_17, 0, x_0);
lean::cnstr_set(x_17, 1, x_1);
lean::cnstr_set(x_17, 2, x_9);
return x_17;
}
}
}
}
obj* l_HashMapImp_insert___at_Lean_Environment_add___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; usize x_9; usize x_10; obj* x_11; uint8 x_12; 
x_3 = lean::cnstr_get(x_0, 0);
x_5 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_7 = x_0;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::dec(x_0);
 x_7 = lean::box(0);
}
x_8 = lean::array_get_size(x_5);
x_9 = lean_name_hash_usize(x_1);
x_10 = lean::usize_modn(x_9, x_8);
x_11 = lean::array_uget(x_5, x_10);
x_12 = l_AssocList_contains___main___at_Lean_Environment_add___spec__5(x_1, x_11);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_16; obj* x_17; uint8 x_18; 
x_13 = lean::mk_nat_obj(1ul);
x_14 = lean::nat_add(x_3, x_13);
lean::dec(x_3);
x_16 = lean::alloc_cnstr(1, 3, 0);
lean::cnstr_set(x_16, 0, x_1);
lean::cnstr_set(x_16, 1, x_2);
lean::cnstr_set(x_16, 2, x_11);
x_17 = lean::array_uset(x_5, x_10, x_16);
x_18 = lean::nat_dec_le(x_14, x_8);
lean::dec(x_8);
if (x_18 == 0)
{
obj* x_21; 
lean::dec(x_7);
x_21 = l_HashMapImp_expand___at_Lean_Environment_add___spec__6(x_14, x_17);
return x_21;
}
else
{
obj* x_22; 
if (lean::is_scalar(x_7)) {
 x_22 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_22 = x_7;
}
lean::cnstr_set(x_22, 0, x_14);
lean::cnstr_set(x_22, 1, x_17);
return x_22;
}
}
else
{
obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_8);
x_24 = l_AssocList_replace___main___at_Lean_Environment_add___spec__9(x_1, x_2, x_11);
x_25 = lean::array_uset(x_5, x_10, x_24);
if (lean::is_scalar(x_7)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_7;
}
lean::cnstr_set(x_26, 0, x_3);
lean::cnstr_set(x_26, 1, x_25);
return x_26;
}
}
}
obj* _init_l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Name_quickLt___boxed), 2, 0);
return x_0;
}
}
obj* _init_l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_Lean_Name_DecidableEq;
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_beqOfEq___rarg), 3, 1);
lean::closure_set(x_1, 0, x_0);
return x_1;
}
}
obj* l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2);
if (x_3 == 0)
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_4 = lean::cnstr_get(x_0, 0);
x_6 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_8 = x_0;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_0);
 x_8 = lean::box(0);
}
x_9 = l_RBNode_insert___at_Lean_Environment_add___spec__2(x_6, x_1, x_2);
if (lean::is_scalar(x_8)) {
 x_10 = lean::alloc_cnstr(0, 2, 1);
} else {
 x_10 = x_8;
}
lean::cnstr_set(x_10, 0, x_4);
lean::cnstr_set(x_10, 1, x_9);
lean::cnstr_set_scalar(x_10, sizeof(void*)*2, x_3);
x_11 = x_10;
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_12 = lean::cnstr_get(x_0, 0);
x_14 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_16 = x_0;
} else {
 lean::inc(x_12);
 lean::inc(x_14);
 lean::dec(x_0);
 x_16 = lean::box(0);
}
x_17 = l_HashMapImp_insert___at_Lean_Environment_add___spec__4(x_12, x_1, x_2);
if (lean::is_scalar(x_16)) {
 x_18 = lean::alloc_cnstr(0, 2, 1);
} else {
 x_18 = x_16;
}
lean::cnstr_set(x_18, 0, x_17);
lean::cnstr_set(x_18, 1, x_14);
lean::cnstr_set_scalar(x_18, sizeof(void*)*2, x_3);
x_19 = x_18;
return x_19;
}
}
}
namespace lean {
obj* environment_add_core(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; uint32 x_8; uint8 x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
x_6 = lean::cnstr_get(x_0, 2);
x_8 = lean::cnstr_get_scalar<uint32>(x_0, sizeof(void*)*4);
x_9 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4 + 4);
x_10 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 x_12 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::inc(x_6);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
x_13 = l_Lean_ConstantInfo_name(x_1);
x_14 = l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1(x_4, x_13, x_1);
if (lean::is_scalar(x_12)) {
 x_15 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_15 = x_12;
}
lean::cnstr_set(x_15, 0, x_2);
lean::cnstr_set(x_15, 1, x_14);
lean::cnstr_set(x_15, 2, x_6);
lean::cnstr_set(x_15, 3, x_10);
lean::cnstr_set_scalar(x_15, sizeof(void*)*4, x_8);
x_16 = x_15;
lean::cnstr_set_scalar(x_16, sizeof(void*)*4 + 4, x_9);
x_17 = x_16;
return x_17;
}
}
}
obj* l_AssocList_contains___main___at_Lean_Environment_add___spec__5___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_AssocList_contains___main___at_Lean_Environment_add___spec__5(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_RBNode_find___main___at_Lean_Environment_find___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; uint8 x_12; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_0, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 3);
lean::inc(x_9);
lean::dec(x_0);
x_12 = l_Lean_Name_quickLt(x_1, x_5);
if (x_12 == 0)
{
uint8 x_14; 
lean::dec(x_3);
x_14 = l_Lean_Name_quickLt(x_5, x_1);
lean::dec(x_5);
if (x_14 == 0)
{
obj* x_17; 
lean::dec(x_9);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_7);
return x_17;
}
else
{
lean::dec(x_7);
x_0 = x_9;
goto _start;
}
}
else
{
lean::dec(x_7);
lean::dec(x_9);
lean::dec(x_5);
x_0 = x_3;
goto _start;
}
}
}
}
obj* l_AssocList_find___main___at_Lean_Environment_find___spec__4(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; uint8 x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 2);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean_name_dec_eq(x_3, x_0);
lean::dec(x_3);
if (x_10 == 0)
{
lean::dec(x_5);
x_1 = x_7;
goto _start;
}
else
{
obj* x_15; 
lean::dec(x_7);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_5);
return x_15;
}
}
}
}
obj* l_HashMapImp_find___at_Lean_Environment_find___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; usize x_4; usize x_5; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 1);
x_3 = lean::array_get_size(x_2);
x_4 = lean_name_hash_usize(x_1);
x_5 = lean::usize_modn(x_4, x_3);
lean::dec(x_3);
x_7 = lean::array_uget(x_2, x_5);
x_8 = l_AssocList_find___main___at_Lean_Environment_find___spec__4(x_1, x_7);
return x_8;
}
}
obj* l_Lean_SMap_find___main___at_Lean_Environment_find___spec__1(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2);
if (x_2 == 0)
{
obj* x_3; obj* x_5; obj* x_8; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_0, 1);
lean::inc(x_5);
lean::dec(x_0);
x_8 = l_RBNode_find___main___at_Lean_Environment_find___spec__2(x_5, x_1);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; 
x_9 = l_HashMapImp_find___at_Lean_Environment_find___spec__3(x_3, x_1);
lean::dec(x_3);
return x_9;
}
else
{
lean::dec(x_3);
return x_8;
}
}
else
{
obj* x_12; obj* x_15; 
x_12 = lean::cnstr_get(x_0, 0);
lean::inc(x_12);
lean::dec(x_0);
x_15 = l_HashMapImp_find___at_Lean_Environment_find___spec__3(x_12, x_1);
lean::dec(x_12);
return x_15;
}
}
}
namespace lean {
obj* environment_find_core(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_Lean_SMap_find___main___at_Lean_Environment_find___spec__1(x_2, x_1);
lean::dec(x_1);
return x_5;
}
}
}
obj* l_RBNode_find___main___at_Lean_Environment_find___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_RBNode_find___main___at_Lean_Environment_find___spec__2(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_AssocList_find___main___at_Lean_Environment_find___spec__4___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_AssocList_find___main___at_Lean_Environment_find___spec__4(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_HashMapImp_find___at_Lean_Environment_find___spec__3___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_HashMapImp_find___at_Lean_Environment_find___spec__3(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_SMap_find___main___at_Lean_Environment_find___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_SMap_find___main___at_Lean_Environment_find___spec__1(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
uint8 l_Lean_Environment_contains(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_Lean_SMap_find___main___at_Lean_Environment_find___spec__1(x_2, x_1);
if (lean::obj_tag(x_5) == 0)
{
uint8 x_6; 
x_6 = 0;
return x_6;
}
else
{
uint8 x_8; 
lean::dec(x_5);
x_8 = 1;
return x_8;
}
}
}
obj* l_Lean_Environment_contains___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_Lean_Environment_contains(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_SMap_switch___at___private_init_lean_environment_1__switch___spec__1(obj* x_0) {
_start:
{
uint8 x_1; 
x_1 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*2);
if (x_1 == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_6; uint8 x_7; obj* x_8; obj* x_9; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 x_6 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::dec(x_0);
 x_6 = lean::box(0);
}
x_7 = 0;
if (lean::is_scalar(x_6)) {
 x_8 = lean::alloc_cnstr(0, 2, 1);
} else {
 x_8 = x_6;
}
lean::cnstr_set(x_8, 0, x_2);
lean::cnstr_set(x_8, 1, x_4);
lean::cnstr_set_scalar(x_8, sizeof(void*)*2, x_7);
x_9 = x_8;
return x_9;
}
}
}
namespace lean {
obj* environment_switch_core(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; uint32 x_7; uint8 x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_1 = lean::cnstr_get(x_0, 0);
x_3 = lean::cnstr_get(x_0, 1);
x_5 = lean::cnstr_get(x_0, 2);
x_7 = lean::cnstr_get_scalar<uint32>(x_0, sizeof(void*)*4);
x_8 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4 + 4);
x_9 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 x_11 = x_0;
} else {
 lean::inc(x_1);
 lean::inc(x_3);
 lean::inc(x_5);
 lean::inc(x_9);
 lean::dec(x_0);
 x_11 = lean::box(0);
}
x_12 = l_Lean_SMap_switch___at___private_init_lean_environment_1__switch___spec__1(x_3);
if (lean::is_scalar(x_11)) {
 x_13 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_13 = x_11;
}
lean::cnstr_set(x_13, 0, x_1);
lean::cnstr_set(x_13, 1, x_12);
lean::cnstr_set(x_13, 2, x_5);
lean::cnstr_set(x_13, 3, x_9);
lean::cnstr_set_scalar(x_13, sizeof(void*)*4, x_7);
x_14 = x_13;
lean::cnstr_set_scalar(x_14, sizeof(void*)*4 + 4, x_8);
x_15 = x_14;
return x_15;
}
}
}
namespace lean {
obj* environment_mark_quot_init_core(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_5; uint32 x_7; obj* x_8; obj* x_10; uint8 x_11; obj* x_12; obj* x_13; obj* x_14; 
x_1 = lean::cnstr_get(x_0, 0);
x_3 = lean::cnstr_get(x_0, 1);
x_5 = lean::cnstr_get(x_0, 2);
x_7 = lean::cnstr_get_scalar<uint32>(x_0, sizeof(void*)*4);
x_8 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 x_10 = x_0;
} else {
 lean::inc(x_1);
 lean::inc(x_3);
 lean::inc(x_5);
 lean::inc(x_8);
 lean::dec(x_0);
 x_10 = lean::box(0);
}
x_11 = 1;
if (lean::is_scalar(x_10)) {
 x_12 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_12 = x_10;
}
lean::cnstr_set(x_12, 0, x_1);
lean::cnstr_set(x_12, 1, x_3);
lean::cnstr_set(x_12, 2, x_5);
lean::cnstr_set(x_12, 3, x_8);
lean::cnstr_set_scalar(x_12, sizeof(void*)*4, x_7);
x_13 = x_12;
lean::cnstr_set_scalar(x_13, sizeof(void*)*4 + 4, x_11);
x_14 = x_13;
return x_14;
}
}
}
namespace lean {
uint8 environment_quot_init_core(obj* x_0) {
_start:
{
uint8 x_1; 
x_1 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4 + 4);
lean::dec(x_0);
return x_1;
}
}
}
obj* l___private_init_lean_environment_3__isQuotInit___boxed(obj* x_0) {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = lean::environment_quot_init_core(x_0);
x_2 = lean::box(x_1);
return x_2;
}
}
namespace lean {
uint32 environment_trust_level_core(obj* x_0) {
_start:
{
uint32 x_1; 
x_1 = lean::cnstr_get_scalar<uint32>(x_0, sizeof(void*)*4);
lean::dec(x_0);
return x_1;
}
}
}
obj* l___private_init_lean_environment_4__getTrustLevel___boxed(obj* x_0) {
_start:
{
uint32 x_1; obj* x_2; 
x_1 = lean::environment_trust_level_core(x_0);
x_2 = lean::box_uint32(x_1);
return x_2;
}
}
obj* l_AssocList_find___main___at_Lean_Environment_getModuleIdxFor___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_2; 
x_2 = lean::box(0);
return x_2;
}
else
{
obj* x_3; obj* x_5; obj* x_7; uint8 x_10; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 2);
lean::inc(x_7);
lean::dec(x_1);
x_10 = lean_name_dec_eq(x_3, x_0);
lean::dec(x_3);
if (x_10 == 0)
{
lean::dec(x_5);
x_1 = x_7;
goto _start;
}
else
{
obj* x_15; 
lean::dec(x_7);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_5);
return x_15;
}
}
}
}
obj* l_HashMapImp_find___at_Lean_Environment_getModuleIdxFor___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; usize x_4; usize x_5; obj* x_7; obj* x_8; 
x_2 = lean::cnstr_get(x_0, 1);
x_3 = lean::array_get_size(x_2);
x_4 = lean_name_hash_usize(x_1);
x_5 = lean::usize_modn(x_4, x_3);
lean::dec(x_3);
x_7 = lean::array_uget(x_2, x_5);
x_8 = l_AssocList_find___main___at_Lean_Environment_getModuleIdxFor___spec__2(x_1, x_7);
return x_8;
}
}
obj* l_Lean_Environment_getModuleIdxFor(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = lean::cnstr_get(x_0, 0);
x_3 = l_HashMapImp_find___at_Lean_Environment_getModuleIdxFor___spec__1(x_2, x_1);
return x_3;
}
}
obj* l_AssocList_find___main___at_Lean_Environment_getModuleIdxFor___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_AssocList_find___main___at_Lean_Environment_getModuleIdxFor___spec__2(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_HashMapImp_find___at_Lean_Environment_getModuleIdxFor___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_HashMapImp_find___at_Lean_Environment_getModuleIdxFor___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Environment_getModuleIdxFor___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Environment_getModuleIdxFor(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_EnvExtension_setStateUnsafe___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; uint32 x_9; uint8 x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_3 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
x_7 = lean::cnstr_get(x_1, 2);
x_9 = lean::cnstr_get_scalar<uint32>(x_1, sizeof(void*)*4);
x_10 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4 + 4);
x_11 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 x_13 = x_1;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::inc(x_7);
 lean::inc(x_11);
 lean::dec(x_1);
 x_13 = lean::box(0);
}
x_14 = lean::cnstr_get(x_0, 0);
x_15 = l_Lean_EnvExtensionState_Inhabited;
x_16 = x_2;
x_17 = lean::array_set(x_7, x_14, x_16);
if (lean::is_scalar(x_13)) {
 x_18 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_18 = x_13;
}
lean::cnstr_set(x_18, 0, x_3);
lean::cnstr_set(x_18, 1, x_5);
lean::cnstr_set(x_18, 2, x_17);
lean::cnstr_set(x_18, 3, x_11);
lean::cnstr_set_scalar(x_18, sizeof(void*)*4, x_9);
x_19 = x_18;
lean::cnstr_set_scalar(x_19, sizeof(void*)*4 + 4, x_10);
x_20 = x_19;
return x_20;
}
}
obj* l_Lean_EnvExtension_setStateUnsafe(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_EnvExtension_setStateUnsafe___rarg___boxed), 3, 0);
return x_1;
}
}
obj* l_Lean_EnvExtension_setStateUnsafe___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_EnvExtension_setStateUnsafe___rarg(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_Lean_EnvExtension_setStateUnsafe___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_EnvExtension_setStateUnsafe(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_Lean_EnvExtension_setState___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; uint8 x_3; obj* x_5; obj* x_6; obj* x_7; obj* x_8; uint32 x_9; uint8 x_10; obj* x_12; obj* x_13; obj* x_14; 
x_0 = lean::mk_nat_obj(8ul);
x_1 = l_mkHashMapImp___rarg(x_0);
x_2 = lean::box(0);
x_3 = 1;
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 2, 1);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_2);
lean::cnstr_set_scalar(x_5, sizeof(void*)*2, x_3);
x_6 = x_5;
x_7 = lean::mk_nat_obj(0ul);
x_8 = lean::mk_empty_array(x_7);
x_9 = 0;
x_10 = 0;
lean::inc(x_8);
x_12 = lean::alloc_cnstr(0, 4, 5);
lean::cnstr_set(x_12, 0, x_1);
lean::cnstr_set(x_12, 1, x_6);
lean::cnstr_set(x_12, 2, x_8);
lean::cnstr_set(x_12, 3, x_8);
lean::cnstr_set_scalar(x_12, sizeof(void*)*4, x_9);
x_13 = x_12;
lean::cnstr_set_scalar(x_13, sizeof(void*)*4 + 4, x_10);
x_14 = x_13;
return x_14;
}
}
obj* l_Lean_EnvExtension_setState(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_EnvExtension_setState___closed__1;
return x_4;
}
}
obj* l_Lean_EnvExtension_setState___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_EnvExtension_setState(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
return x_4;
}
}
obj* l_Lean_EnvExtension_getStateUnsafe___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_5; obj* x_6; obj* x_8; obj* x_11; 
x_2 = lean::cnstr_get(x_1, 2);
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = l_Lean_EnvExtensionState_Inhabited;
x_6 = lean::array_get(x_5, x_2, x_3);
lean::dec(x_3);
x_8 = lean::cnstr_get(x_0, 1);
lean::inc(x_8);
lean::dec(x_0);
x_11 = x_6;
return x_11;
}
}
obj* l_Lean_EnvExtension_getStateUnsafe(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_EnvExtension_getStateUnsafe___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_EnvExtension_getStateUnsafe___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_EnvExtension_getStateUnsafe___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_EnvExtension_getStateUnsafe___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_EnvExtension_getStateUnsafe(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Lean_EnvExtension_getState___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_0, 1);
lean::inc(x_2);
return x_2;
}
}
obj* l_Lean_EnvExtension_getState(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_EnvExtension_getState___rarg___boxed), 2, 0);
return x_1;
}
}
obj* l_Lean_EnvExtension_getState___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_EnvExtension_getState___rarg(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_EnvExtension_getState___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_EnvExtension_getState(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Lean_EnvExtension_modifyStateUnsafe___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; uint32 x_9; uint8 x_10; obj* x_11; obj* x_13; obj* x_14; obj* x_16; uint8 x_17; 
x_3 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
x_7 = lean::cnstr_get(x_1, 2);
x_9 = lean::cnstr_get_scalar<uint32>(x_1, sizeof(void*)*4);
x_10 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4 + 4);
x_11 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_13 = x_1;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::inc(x_7);
 lean::inc(x_11);
 lean::dec(x_1);
 x_13 = lean::box(0);
}
x_14 = lean::cnstr_get(x_0, 0);
lean::inc(x_14);
x_16 = lean::array_get_size(x_7);
x_17 = lean::nat_dec_lt(x_14, x_16);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_22; obj* x_23; obj* x_24; 
lean::dec(x_14);
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_13)) {
 x_22 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_22 = x_13;
}
lean::cnstr_set(x_22, 0, x_3);
lean::cnstr_set(x_22, 1, x_5);
lean::cnstr_set(x_22, 2, x_7);
lean::cnstr_set(x_22, 3, x_11);
lean::cnstr_set_scalar(x_22, sizeof(void*)*4, x_9);
x_23 = x_22;
lean::cnstr_set_scalar(x_23, sizeof(void*)*4 + 4, x_10);
x_24 = x_23;
return x_24;
}
else
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; obj* x_37; obj* x_38; obj* x_39; 
x_25 = lean::array_fget(x_7, x_14);
x_26 = lean::mk_nat_obj(0ul);
x_27 = lean::array_fset(x_7, x_14, x_26);
x_28 = lean::cnstr_get(x_0, 1);
lean::inc(x_28);
lean::dec(x_0);
x_31 = x_25;
x_32 = lean::apply_1(x_2, x_31);
x_33 = l_Lean_EnvExtensionState_Inhabited;
x_34 = x_32;
x_35 = lean::array_fset(x_27, x_14, x_34);
lean::dec(x_14);
if (lean::is_scalar(x_13)) {
 x_37 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_37 = x_13;
}
lean::cnstr_set(x_37, 0, x_3);
lean::cnstr_set(x_37, 1, x_5);
lean::cnstr_set(x_37, 2, x_35);
lean::cnstr_set(x_37, 3, x_11);
lean::cnstr_set_scalar(x_37, sizeof(void*)*4, x_9);
x_38 = x_37;
lean::cnstr_set_scalar(x_38, sizeof(void*)*4 + 4, x_10);
x_39 = x_38;
return x_39;
}
}
}
obj* l_Lean_EnvExtension_modifyStateUnsafe(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_EnvExtension_modifyStateUnsafe___rarg), 3, 0);
return x_1;
}
}
obj* l_Lean_EnvExtension_modifyStateUnsafe___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_EnvExtension_modifyStateUnsafe(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Lean_EnvExtension_modifyState(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_EnvExtension_setState___closed__1;
return x_4;
}
}
obj* l_Lean_EnvExtension_modifyState___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_EnvExtension_modifyState(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
return x_4;
}
}
obj* l___private_init_lean_environment_5__mkEnvExtensionsRef(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Array_empty___closed__1;
x_2 = lean::io_mk_ref(x_1, x_0);
return x_2;
}
}
obj* l_Lean_EnvExtension_Inhabited___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::mk_nat_obj(0ul);
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_1);
lean::cnstr_set(x_2, 1, x_0);
return x_2;
}
}
obj* l_Lean_EnvExtension_Inhabited(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_EnvExtension_Inhabited___rarg), 1, 0);
return x_1;
}
}
obj* l_Lean_EnvExtension_Inhabited___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_EnvExtension_Inhabited(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_Lean_registerEnvExtensionUnsafe___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("Failed to register environment, extensions can only be registered during initialization");
return x_0;
}
}
obj* _init_l_Lean_registerEnvExtensionUnsafe___rarg___closed__2() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = lean::mk_nat_obj(0ul);
x_1 = l_Lean_EnvExtensionState_Inhabited;
x_2 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_2, 0, x_0);
lean::cnstr_set(x_2, 1, x_1);
return x_2;
}
}
obj* l_Lean_registerEnvExtensionUnsafe___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean_io_initializing(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; uint8 x_5; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::unbox(x_3);
if (x_5 == 0)
{
obj* x_7; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_0);
x_7 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_9 = x_2;
} else {
 lean::inc(x_7);
 lean::dec(x_2);
 x_9 = lean::box(0);
}
x_10 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
if (lean::is_scalar(x_9)) {
 x_11 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_11 = x_9;
 lean::cnstr_set_tag(x_9, 1);
}
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_7);
return x_11;
}
else
{
obj* x_12; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_12 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_14 = x_2;
} else {
 lean::inc(x_12);
 lean::dec(x_2);
 x_14 = lean::box(0);
}
x_15 = lean::box(0);
if (lean::is_scalar(x_14)) {
 x_16 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_16 = x_14;
}
lean::cnstr_set(x_16, 0, x_15);
lean::cnstr_set(x_16, 1, x_12);
x_17 = l___private_init_lean_environment_6__envExtensionsRef;
x_18 = lean::io_ref_get(x_17, x_16);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_21; obj* x_23; obj* x_24; obj* x_25; obj* x_27; obj* x_28; 
x_19 = lean::cnstr_get(x_18, 0);
x_21 = lean::cnstr_get(x_18, 1);
if (lean::is_exclusive(x_18)) {
 x_23 = x_18;
} else {
 lean::inc(x_19);
 lean::inc(x_21);
 lean::dec(x_18);
 x_23 = lean::box(0);
}
if (lean::is_scalar(x_23)) {
 x_24 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_24 = x_23;
}
lean::cnstr_set(x_24, 0, x_15);
lean::cnstr_set(x_24, 1, x_21);
x_25 = lean::array_get_size(x_19);
lean::dec(x_19);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_25);
lean::cnstr_set(x_27, 1, x_0);
x_28 = lean::io_ref_get(x_17, x_24);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; obj* x_31; obj* x_33; obj* x_34; obj* x_35; 
x_29 = lean::cnstr_get(x_28, 0);
x_31 = lean::cnstr_get(x_28, 1);
if (lean::is_exclusive(x_28)) {
 x_33 = x_28;
} else {
 lean::inc(x_29);
 lean::inc(x_31);
 lean::dec(x_28);
 x_33 = lean::box(0);
}
if (lean::is_scalar(x_33)) {
 x_34 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_34 = x_33;
}
lean::cnstr_set(x_34, 0, x_15);
lean::cnstr_set(x_34, 1, x_31);
x_35 = lean::io_ref_reset(x_17, x_34);
if (lean::obj_tag(x_35) == 0)
{
obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_42; obj* x_43; obj* x_44; 
x_36 = lean::cnstr_get(x_35, 1);
if (lean::is_exclusive(x_35)) {
 lean::cnstr_release(x_35, 0);
 x_38 = x_35;
} else {
 lean::inc(x_36);
 lean::dec(x_35);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_15);
lean::cnstr_set(x_39, 1, x_36);
x_40 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean::inc(x_27);
x_42 = x_27;
x_43 = lean::array_push(x_29, x_42);
x_44 = lean::io_ref_set(x_17, x_43, x_39);
if (lean::obj_tag(x_44) == 0)
{
obj* x_45; obj* x_47; obj* x_48; 
x_45 = lean::cnstr_get(x_44, 1);
if (lean::is_exclusive(x_44)) {
 lean::cnstr_release(x_44, 0);
 x_47 = x_44;
} else {
 lean::inc(x_45);
 lean::dec(x_44);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_27);
lean::cnstr_set(x_48, 1, x_45);
return x_48;
}
else
{
obj* x_50; obj* x_52; obj* x_54; obj* x_55; 
lean::dec(x_27);
x_50 = lean::cnstr_get(x_44, 0);
x_52 = lean::cnstr_get(x_44, 1);
if (lean::is_exclusive(x_44)) {
 x_54 = x_44;
} else {
 lean::inc(x_50);
 lean::inc(x_52);
 lean::dec(x_44);
 x_54 = lean::box(0);
}
if (lean::is_scalar(x_54)) {
 x_55 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_55 = x_54;
}
lean::cnstr_set(x_55, 0, x_50);
lean::cnstr_set(x_55, 1, x_52);
return x_55;
}
}
else
{
obj* x_58; obj* x_60; obj* x_62; obj* x_63; 
lean::dec(x_27);
lean::dec(x_29);
x_58 = lean::cnstr_get(x_35, 0);
x_60 = lean::cnstr_get(x_35, 1);
if (lean::is_exclusive(x_35)) {
 x_62 = x_35;
} else {
 lean::inc(x_58);
 lean::inc(x_60);
 lean::dec(x_35);
 x_62 = lean::box(0);
}
if (lean::is_scalar(x_62)) {
 x_63 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_63 = x_62;
}
lean::cnstr_set(x_63, 0, x_58);
lean::cnstr_set(x_63, 1, x_60);
return x_63;
}
}
else
{
obj* x_65; obj* x_67; obj* x_69; obj* x_70; 
lean::dec(x_27);
x_65 = lean::cnstr_get(x_28, 0);
x_67 = lean::cnstr_get(x_28, 1);
if (lean::is_exclusive(x_28)) {
 x_69 = x_28;
} else {
 lean::inc(x_65);
 lean::inc(x_67);
 lean::dec(x_28);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_65);
lean::cnstr_set(x_70, 1, x_67);
return x_70;
}
}
else
{
obj* x_72; obj* x_74; obj* x_76; obj* x_77; 
lean::dec(x_0);
x_72 = lean::cnstr_get(x_18, 0);
x_74 = lean::cnstr_get(x_18, 1);
if (lean::is_exclusive(x_18)) {
 x_76 = x_18;
} else {
 lean::inc(x_72);
 lean::inc(x_74);
 lean::dec(x_18);
 x_76 = lean::box(0);
}
if (lean::is_scalar(x_76)) {
 x_77 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_77 = x_76;
}
lean::cnstr_set(x_77, 0, x_72);
lean::cnstr_set(x_77, 1, x_74);
return x_77;
}
}
}
else
{
obj* x_79; obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_0);
x_79 = lean::cnstr_get(x_2, 0);
x_81 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 x_83 = x_2;
} else {
 lean::inc(x_79);
 lean::inc(x_81);
 lean::dec(x_2);
 x_83 = lean::box(0);
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_79);
lean::cnstr_set(x_84, 1, x_81);
return x_84;
}
}
}
obj* l_Lean_registerEnvExtensionUnsafe(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_registerEnvExtensionUnsafe___rarg), 2, 0);
return x_1;
}
}
obj* l_Lean_registerEnvExtensionUnsafe___boxed(obj* x_0) {
_start:
{
obj* x_1; 
x_1 = l_Lean_registerEnvExtensionUnsafe(x_0);
lean::dec(x_0);
return x_1;
}
}
obj* l_Lean_registerEnvExtension___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; obj* x_5; 
x_1 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 x_3 = x_0;
} else {
 lean::inc(x_1);
 lean::dec(x_0);
 x_3 = lean::box(0);
}
x_4 = l_String_splitAux___main___closed__1;
if (lean::is_scalar(x_3)) {
 x_5 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_5 = x_3;
 lean::cnstr_set_tag(x_3, 1);
}
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_Lean_registerEnvExtension(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_registerEnvExtension___rarg), 1, 0);
return x_2;
}
}
obj* l_Lean_registerEnvExtension___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_registerEnvExtension(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_7__mkInitialExtensionStates___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::array_get_size(x_1);
x_5 = lean::nat_dec_lt(x_2, x_4);
lean::dec(x_4);
if (x_5 == 0)
{
lean::dec(x_2);
return x_3;
}
else
{
obj* x_8; obj* x_9; obj* x_12; obj* x_13; obj* x_14; 
x_8 = lean::array_fget(x_1, x_2);
x_9 = lean::cnstr_get(x_8, 1);
lean::inc(x_9);
lean::dec(x_8);
x_12 = lean::array_push(x_3, x_9);
x_13 = lean::mk_nat_obj(1ul);
x_14 = lean::nat_add(x_2, x_13);
lean::dec(x_2);
x_2 = x_14;
x_3 = x_12;
goto _start;
}
}
}
obj* l___private_init_lean_environment_7__mkInitialExtensionStates(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l___private_init_lean_environment_6__envExtensionsRef;
x_2 = lean::io_ref_get(x_1, x_0);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_14; 
x_3 = lean::cnstr_get(x_2, 0);
x_5 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 x_7 = x_2;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::dec(x_2);
 x_7 = lean::box(0);
}
x_8 = lean::array_get_size(x_3);
x_9 = lean::mk_empty_array(x_8);
lean::dec(x_8);
x_11 = lean::mk_nat_obj(0ul);
x_12 = l_Array_miterateAux___main___at___private_init_lean_environment_7__mkInitialExtensionStates___spec__1(x_3, x_3, x_11, x_9);
lean::dec(x_3);
if (lean::is_scalar(x_7)) {
 x_14 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_14 = x_7;
}
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_5);
return x_14;
}
else
{
obj* x_15; obj* x_17; obj* x_19; obj* x_20; 
x_15 = lean::cnstr_get(x_2, 0);
x_17 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 x_19 = x_2;
} else {
 lean::inc(x_15);
 lean::inc(x_17);
 lean::dec(x_2);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_15);
lean::cnstr_set(x_20, 1, x_17);
return x_20;
}
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_7__mkInitialExtensionStates___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Array_miterateAux___main___at___private_init_lean_environment_7__mkInitialExtensionStates___spec__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_mkEmptyEnvironment___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; uint8 x_3; obj* x_4; obj* x_5; 
x_0 = lean::mk_nat_obj(8ul);
x_1 = l_mkHashMapImp___rarg(x_0);
x_2 = lean::box(0);
x_3 = 1;
x_4 = lean::alloc_cnstr(0, 2, 1);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_2);
lean::cnstr_set_scalar(x_4, sizeof(void*)*2, x_3);
x_5 = x_4;
return x_5;
}
}
obj* _init_l_Lean_mkEmptyEnvironment___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("Environment objects cannot be created during initialization");
return x_0;
}
}
namespace lean {
obj* mk_empty_environment_core(uint32 x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean_io_initializing(x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; uint8 x_5; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_5 = lean::unbox(x_3);
if (x_5 == 0)
{
obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_6 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_8 = x_2;
} else {
 lean::inc(x_6);
 lean::dec(x_2);
 x_8 = lean::box(0);
}
x_9 = lean::box(0);
if (lean::is_scalar(x_8)) {
 x_10 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_10 = x_8;
}
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_6);
x_11 = l___private_init_lean_environment_7__mkInitialExtensionStates(x_10);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_14; obj* x_16; obj* x_17; obj* x_18; uint8 x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_12 = lean::cnstr_get(x_11, 0);
x_14 = lean::cnstr_get(x_11, 1);
if (lean::is_exclusive(x_11)) {
 x_16 = x_11;
} else {
 lean::inc(x_12);
 lean::inc(x_14);
 lean::dec(x_11);
 x_16 = lean::box(0);
}
x_17 = l_HashMap_Inhabited___closed__1;
x_18 = l_Lean_mkEmptyEnvironment___closed__1;
x_19 = 0;
x_20 = l_Array_empty___closed__1;
x_21 = lean::alloc_cnstr(0, 4, 5);
lean::cnstr_set(x_21, 0, x_17);
lean::cnstr_set(x_21, 1, x_18);
lean::cnstr_set(x_21, 2, x_12);
lean::cnstr_set(x_21, 3, x_20);
lean::cnstr_set_scalar(x_21, sizeof(void*)*4, x_0);
x_22 = x_21;
lean::cnstr_set_scalar(x_22, sizeof(void*)*4 + 4, x_19);
x_23 = x_22;
if (lean::is_scalar(x_16)) {
 x_24 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_24 = x_16;
}
lean::cnstr_set(x_24, 0, x_23);
lean::cnstr_set(x_24, 1, x_14);
return x_24;
}
else
{
obj* x_25; obj* x_27; obj* x_29; obj* x_30; 
x_25 = lean::cnstr_get(x_11, 0);
x_27 = lean::cnstr_get(x_11, 1);
if (lean::is_exclusive(x_11)) {
 x_29 = x_11;
} else {
 lean::inc(x_25);
 lean::inc(x_27);
 lean::dec(x_11);
 x_29 = lean::box(0);
}
if (lean::is_scalar(x_29)) {
 x_30 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_30 = x_29;
}
lean::cnstr_set(x_30, 0, x_25);
lean::cnstr_set(x_30, 1, x_27);
return x_30;
}
}
else
{
obj* x_31; obj* x_33; obj* x_34; obj* x_35; 
x_31 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_33 = x_2;
} else {
 lean::inc(x_31);
 lean::dec(x_2);
 x_33 = lean::box(0);
}
x_34 = l_Lean_mkEmptyEnvironment___closed__2;
if (lean::is_scalar(x_33)) {
 x_35 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_35 = x_33;
 lean::cnstr_set_tag(x_33, 1);
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_31);
return x_35;
}
}
else
{
obj* x_36; obj* x_38; obj* x_40; obj* x_41; 
x_36 = lean::cnstr_get(x_2, 0);
x_38 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 x_40 = x_2;
} else {
 lean::inc(x_36);
 lean::inc(x_38);
 lean::dec(x_2);
 x_40 = lean::box(0);
}
if (lean::is_scalar(x_40)) {
 x_41 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_41 = x_40;
}
lean::cnstr_set(x_41, 0, x_36);
lean::cnstr_set(x_41, 1, x_38);
return x_41;
}
}
}
}
obj* l_Lean_mkEmptyEnvironment___boxed(obj* x_0, obj* x_1) {
_start:
{
uint32 x_2; obj* x_3; 
x_2 = lean::unbox_uint32(x_0);
x_3 = lean::mk_empty_environment_core(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_EnvExtensionEntry_Inhabited() {
_start:
{
obj* x_0; 
x_0 = l_NonScalar_Inhabited;
return x_0;
}
}
obj* l_Lean_PersistentEnvExtensionState_inhabited___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = lean::thunk_pure(x_0);
x_2 = lean::box(0);
x_3 = lean::box(0);
x_4 = l_Array_empty___closed__1;
x_5 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
lean::cnstr_set(x_5, 2, x_2);
lean::cnstr_set(x_5, 3, x_3);
return x_5;
}
}
obj* l_Lean_PersistentEnvExtensionState_inhabited(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_PersistentEnvExtensionState_inhabited___rarg), 1, 0);
return x_3;
}
}
obj* l_Lean_PersistentEnvExtensionState_inhabited___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_PersistentEnvExtensionState_inhabited(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_Lean_PersistentEnvExtension_inhabited___rarg___lambda__1(uint8 x_0, obj* x_1, obj* x_2) {
_start:
{
lean::inc(x_1);
return x_1;
}
}
obj* l_Lean_PersistentEnvExtension_inhabited___rarg___lambda__2(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; obj* x_4; 
x_1 = l_List_redLength___main___rarg(x_0);
x_2 = lean::mk_empty_array(x_1);
lean::dec(x_1);
x_4 = l_List_toArrayAux___main___rarg(x_0, x_2);
return x_4;
}
}
obj* _init_l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_PersistentEnvExtension_inhabited___rarg___lambda__1___boxed), 3, 0);
return x_0;
}
}
obj* _init_l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_PersistentEnvExtension_inhabited___rarg___lambda__2), 1, 0);
return x_0;
}
}
obj* l_Lean_PersistentEnvExtension_inhabited___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; uint8 x_12; obj* x_13; obj* x_14; 
x_2 = lean::thunk_pure(x_1);
x_3 = lean::box(0);
x_4 = lean::box(0);
x_5 = l_Array_empty___closed__1;
x_6 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_4);
x_7 = lean::mk_nat_obj(0ul);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_6);
x_9 = lean::box(0);
x_10 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1;
x_11 = l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2;
x_12 = 1;
x_13 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_13, 0, x_8);
lean::cnstr_set(x_13, 1, x_9);
lean::cnstr_set(x_13, 2, x_0);
lean::cnstr_set(x_13, 3, x_10);
lean::cnstr_set(x_13, 4, x_11);
lean::cnstr_set_scalar(x_13, sizeof(void*)*5, x_12);
x_14 = x_13;
return x_14;
}
}
obj* l_Lean_PersistentEnvExtension_inhabited(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_PersistentEnvExtension_inhabited___rarg), 2, 0);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_inhabited___rarg___lambda__1___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_0);
x_4 = l_Lean_PersistentEnvExtension_inhabited___rarg___lambda__1(x_3, x_1, x_2);
lean::dec(x_1);
lean::dec(x_2);
return x_4;
}
}
obj* l_Lean_PersistentEnvExtension_inhabited___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_PersistentEnvExtension_inhabited(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_getEntries___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_5; obj* x_6; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
lean::dec(x_0);
x_5 = l_Lean_EnvExtension_getStateUnsafe___rarg(x_2, x_1);
x_6 = lean::cnstr_get(x_5, 2);
lean::inc(x_6);
lean::dec(x_5);
return x_6;
}
}
obj* l_Lean_PersistentEnvExtension_getEntries(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_PersistentEnvExtension_getEntries___rarg___boxed), 2, 0);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_getEntries___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_PersistentEnvExtension_getEntries___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_getEntries___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_PersistentEnvExtension_getEntries(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_getModuleEntries___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_6; obj* x_7; obj* x_10; obj* x_11; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
lean::dec(x_0);
x_6 = l_Lean_EnvExtension_getStateUnsafe___rarg(x_3, x_1);
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
lean::dec(x_6);
x_10 = l_Array_empty___closed__1;
x_11 = lean::array_get(x_10, x_7, x_2);
lean::dec(x_7);
return x_11;
}
}
obj* l_Lean_PersistentEnvExtension_getModuleEntries(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_PersistentEnvExtension_getModuleEntries___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_getModuleEntries___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_PersistentEnvExtension_getModuleEntries___rarg(x_0, x_1, x_2);
lean::dec(x_1);
lean::dec(x_2);
return x_3;
}
}
obj* l_Lean_PersistentEnvExtension_getModuleEntries___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_PersistentEnvExtension_getModuleEntries(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_addEntry___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; uint32 x_11; uint8 x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_18; uint8 x_19; 
x_3 = lean::cnstr_get(x_0, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 0);
x_7 = lean::cnstr_get(x_1, 1);
x_9 = lean::cnstr_get(x_1, 2);
x_11 = lean::cnstr_get_scalar<uint32>(x_1, sizeof(void*)*4);
x_12 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4 + 4);
x_13 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_15 = x_1;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::inc(x_9);
 lean::inc(x_13);
 lean::dec(x_1);
 x_15 = lean::box(0);
}
x_16 = lean::cnstr_get(x_3, 0);
lean::inc(x_16);
x_18 = lean::array_get_size(x_9);
x_19 = lean::nat_dec_lt(x_16, x_18);
lean::dec(x_18);
if (x_19 == 0)
{
obj* x_25; obj* x_26; obj* x_27; 
lean::dec(x_16);
lean::dec(x_3);
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_15)) {
 x_25 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_25 = x_15;
}
lean::cnstr_set(x_25, 0, x_5);
lean::cnstr_set(x_25, 1, x_7);
lean::cnstr_set(x_25, 2, x_9);
lean::cnstr_set(x_25, 3, x_13);
lean::cnstr_set_scalar(x_25, sizeof(void*)*4, x_11);
x_26 = x_25;
lean::cnstr_set_scalar(x_26, sizeof(void*)*4 + 4, x_12);
x_27 = x_26;
return x_27;
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_34; obj* x_35; obj* x_37; obj* x_39; obj* x_41; obj* x_43; obj* x_45; 
x_28 = lean::array_fget(x_9, x_16);
x_29 = lean::mk_nat_obj(0ul);
x_30 = lean::array_fset(x_9, x_16, x_29);
x_31 = lean::cnstr_get(x_3, 1);
lean::inc(x_31);
lean::dec(x_3);
x_34 = x_28;
x_35 = lean::cnstr_get(x_34, 0);
x_37 = lean::cnstr_get(x_34, 1);
x_39 = lean::cnstr_get(x_34, 2);
x_41 = lean::cnstr_get(x_34, 3);
if (lean::is_exclusive(x_34)) {
 lean::cnstr_set(x_34, 0, lean::box(0));
 lean::cnstr_set(x_34, 1, lean::box(0));
 lean::cnstr_set(x_34, 2, lean::box(0));
 lean::cnstr_set(x_34, 3, lean::box(0));
 x_43 = x_34;
} else {
 lean::inc(x_35);
 lean::inc(x_37);
 lean::inc(x_39);
 lean::inc(x_41);
 lean::dec(x_34);
 x_43 = lean::box(0);
}
lean::inc(x_2);
x_45 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_45, 0, x_2);
lean::cnstr_set(x_45, 1, x_39);
if (lean::obj_tag(x_41) == 0)
{
obj* x_48; obj* x_49; obj* x_50; obj* x_51; obj* x_53; obj* x_54; obj* x_55; 
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_43)) {
 x_48 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_48 = x_43;
}
lean::cnstr_set(x_48, 0, x_35);
lean::cnstr_set(x_48, 1, x_37);
lean::cnstr_set(x_48, 2, x_45);
lean::cnstr_set(x_48, 3, x_41);
x_49 = l_Lean_EnvExtensionState_Inhabited;
x_50 = x_48;
x_51 = lean::array_fset(x_30, x_16, x_50);
lean::dec(x_16);
if (lean::is_scalar(x_15)) {
 x_53 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_53 = x_15;
}
lean::cnstr_set(x_53, 0, x_5);
lean::cnstr_set(x_53, 1, x_7);
lean::cnstr_set(x_53, 2, x_51);
lean::cnstr_set(x_53, 3, x_13);
lean::cnstr_set_scalar(x_53, sizeof(void*)*4, x_11);
x_54 = x_53;
lean::cnstr_set_scalar(x_54, sizeof(void*)*4 + 4, x_12);
x_55 = x_54;
return x_55;
}
else
{
obj* x_56; obj* x_58; obj* x_59; uint8 x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_71; obj* x_72; obj* x_73; 
x_56 = lean::cnstr_get(x_41, 0);
if (lean::is_exclusive(x_41)) {
 x_58 = x_41;
} else {
 lean::inc(x_56);
 lean::dec(x_41);
 x_58 = lean::box(0);
}
x_59 = lean::cnstr_get(x_0, 3);
lean::inc(x_59);
lean::dec(x_0);
x_62 = 0;
x_63 = lean::box(x_62);
x_64 = lean::apply_3(x_59, x_63, x_56, x_2);
if (lean::is_scalar(x_58)) {
 x_65 = lean::alloc_cnstr(1, 1, 0);
} else {
 x_65 = x_58;
}
lean::cnstr_set(x_65, 0, x_64);
if (lean::is_scalar(x_43)) {
 x_66 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_66 = x_43;
}
lean::cnstr_set(x_66, 0, x_35);
lean::cnstr_set(x_66, 1, x_37);
lean::cnstr_set(x_66, 2, x_45);
lean::cnstr_set(x_66, 3, x_65);
x_67 = l_Lean_EnvExtensionState_Inhabited;
x_68 = x_66;
x_69 = lean::array_fset(x_30, x_16, x_68);
lean::dec(x_16);
if (lean::is_scalar(x_15)) {
 x_71 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_71 = x_15;
}
lean::cnstr_set(x_71, 0, x_5);
lean::cnstr_set(x_71, 1, x_7);
lean::cnstr_set(x_71, 2, x_69);
lean::cnstr_set(x_71, 3, x_13);
lean::cnstr_set_scalar(x_71, sizeof(void*)*4, x_11);
x_72 = x_71;
lean::cnstr_set_scalar(x_72, sizeof(void*)*4 + 4, x_12);
x_73 = x_72;
return x_73;
}
}
}
}
obj* l_Lean_PersistentEnvExtension_addEntry(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_PersistentEnvExtension_addEntry___rarg), 3, 0);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_addEntry___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_PersistentEnvExtension_addEntry(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_0);
lean::inc(x_1);
return x_1;
}
else
{
obj* x_5; obj* x_7; obj* x_11; obj* x_12; uint8 x_15; obj* x_16; obj* x_17; 
x_5 = lean::cnstr_get(x_2, 0);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_2, 1);
lean::inc(x_7);
lean::dec(x_2);
lean::inc(x_0);
x_11 = l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1___rarg(x_0, x_1, x_7);
x_12 = lean::cnstr_get(x_0, 3);
lean::inc(x_12);
lean::dec(x_0);
x_15 = 0;
x_16 = lean::box(x_15);
x_17 = lean::apply_3(x_12, x_16, x_11, x_5);
return x_17;
}
}
}
obj* l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_forceStateAux___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 3);
lean::inc(x_2);
if (lean::obj_tag(x_2) == 0)
{
obj* x_4; obj* x_6; obj* x_8; obj* x_11; 
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
x_6 = lean::thunk_get_own(x_4);
lean::dec(x_4);
x_8 = lean::cnstr_get(x_1, 2);
lean::inc(x_8);
lean::dec(x_1);
x_11 = l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1___rarg(x_0, x_6, x_8);
lean::dec(x_6);
return x_11;
}
else
{
obj* x_15; 
lean::dec(x_1);
lean::dec(x_0);
x_15 = lean::cnstr_get(x_2, 0);
lean::inc(x_15);
lean::dec(x_2);
return x_15;
}
}
}
obj* l_Lean_PersistentEnvExtension_forceStateAux(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_PersistentEnvExtension_forceStateAux___rarg), 2, 0);
return x_2;
}
}
obj* l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1___rarg(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_List_foldr___main___at_Lean_PersistentEnvExtension_forceStateAux___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_forceStateAux___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_PersistentEnvExtension_forceStateAux(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_forceState___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; uint32 x_10; uint8 x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_17; uint8 x_18; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 0);
x_6 = lean::cnstr_get(x_1, 1);
x_8 = lean::cnstr_get(x_1, 2);
x_10 = lean::cnstr_get_scalar<uint32>(x_1, sizeof(void*)*4);
x_11 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*4 + 4);
x_12 = lean::cnstr_get(x_1, 3);
if (lean::is_exclusive(x_1)) {
 lean::cnstr_set(x_1, 0, lean::box(0));
 lean::cnstr_set(x_1, 1, lean::box(0));
 lean::cnstr_set(x_1, 2, lean::box(0));
 lean::cnstr_set(x_1, 3, lean::box(0));
 x_14 = x_1;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::inc(x_8);
 lean::inc(x_12);
 lean::dec(x_1);
 x_14 = lean::box(0);
}
x_15 = lean::cnstr_get(x_2, 0);
lean::inc(x_15);
x_17 = lean::array_get_size(x_8);
x_18 = lean::nat_dec_lt(x_15, x_17);
lean::dec(x_17);
if (x_18 == 0)
{
obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_15);
lean::dec(x_0);
lean::dec(x_2);
if (lean::is_scalar(x_14)) {
 x_23 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_23 = x_14;
}
lean::cnstr_set(x_23, 0, x_4);
lean::cnstr_set(x_23, 1, x_6);
lean::cnstr_set(x_23, 2, x_8);
lean::cnstr_set(x_23, 3, x_12);
lean::cnstr_set_scalar(x_23, sizeof(void*)*4, x_10);
x_24 = x_23;
lean::cnstr_set_scalar(x_24, sizeof(void*)*4 + 4, x_11);
x_25 = x_24;
return x_25;
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_32; obj* x_33; obj* x_35; obj* x_37; obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_48; obj* x_49; obj* x_50; 
x_26 = lean::array_fget(x_8, x_15);
x_27 = lean::mk_nat_obj(0ul);
x_28 = lean::array_fset(x_8, x_15, x_27);
x_29 = lean::cnstr_get(x_2, 1);
lean::inc(x_29);
lean::dec(x_2);
x_32 = x_26;
x_33 = lean::cnstr_get(x_32, 0);
lean::inc(x_33);
x_35 = lean::cnstr_get(x_32, 1);
lean::inc(x_35);
x_37 = lean::cnstr_get(x_32, 2);
lean::inc(x_37);
lean::inc(x_32);
x_40 = l_Lean_PersistentEnvExtension_forceStateAux___rarg(x_0, x_32);
if (lean::is_exclusive(x_32)) {
 lean::cnstr_release(x_32, 0);
 lean::cnstr_release(x_32, 1);
 lean::cnstr_release(x_32, 2);
 lean::cnstr_release(x_32, 3);
 x_41 = x_32;
} else {
 lean::dec(x_32);
 x_41 = lean::box(0);
}
x_42 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_42, 0, x_40);
if (lean::is_scalar(x_41)) {
 x_43 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_43 = x_41;
}
lean::cnstr_set(x_43, 0, x_33);
lean::cnstr_set(x_43, 1, x_35);
lean::cnstr_set(x_43, 2, x_37);
lean::cnstr_set(x_43, 3, x_42);
x_44 = l_Lean_EnvExtensionState_Inhabited;
x_45 = x_43;
x_46 = lean::array_fset(x_28, x_15, x_45);
lean::dec(x_15);
if (lean::is_scalar(x_14)) {
 x_48 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_48 = x_14;
}
lean::cnstr_set(x_48, 0, x_4);
lean::cnstr_set(x_48, 1, x_6);
lean::cnstr_set(x_48, 2, x_46);
lean::cnstr_set(x_48, 3, x_12);
lean::cnstr_set_scalar(x_48, sizeof(void*)*4, x_10);
x_49 = x_48;
lean::cnstr_set_scalar(x_49, sizeof(void*)*4 + 4, x_11);
x_50 = x_49;
return x_50;
}
}
}
obj* l_Lean_PersistentEnvExtension_forceState(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_PersistentEnvExtension_forceState___rarg), 2, 0);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_forceState___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_PersistentEnvExtension_forceState(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_getState___rarg(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_5; 
x_2 = lean::cnstr_get(x_0, 0);
lean::inc(x_2);
x_4 = l_Lean_EnvExtension_getStateUnsafe___rarg(x_2, x_1);
x_5 = l_Lean_PersistentEnvExtension_forceStateAux___rarg(x_0, x_4);
return x_5;
}
}
obj* l_Lean_PersistentEnvExtension_getState(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_PersistentEnvExtension_getState___rarg___boxed), 2, 0);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_getState___rarg___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_PersistentEnvExtension_getState___rarg(x_0, x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_PersistentEnvExtension_getState___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_PersistentEnvExtension_getState(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_environment_8__mkPersistentEnvExtensionsRef(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Array_empty___closed__1;
x_2 = lean::io_mk_ref(x_1, x_0);
return x_2;
}
}
uint8 l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::array_get_size(x_2);
x_5 = lean::nat_dec_lt(x_3, x_4);
lean::dec(x_4);
if (x_5 == 0)
{
uint8 x_8; 
lean::dec(x_3);
x_8 = 0;
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_13; uint8 x_14; 
x_9 = lean::array_fget(x_2, x_3);
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
x_13 = lean::cnstr_get(x_1, 0);
x_14 = lean_name_dec_eq(x_10, x_13);
lean::dec(x_10);
if (x_14 == 0)
{
obj* x_16; obj* x_17; 
x_16 = lean::mk_nat_obj(1ul);
x_17 = lean::nat_add(x_3, x_16);
lean::dec(x_3);
x_3 = x_17;
goto _start;
}
else
{
lean::dec(x_3);
return x_14;
}
}
}
}
obj* l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg___boxed), 4, 0);
return x_2;
}
}
obj* _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; 
x_0 = l_Lean_EnvExtensionEntry_Inhabited;
x_1 = l_Lean_EnvExtensionState_Inhabited;
x_2 = l_Lean_PersistentEnvExtension_inhabited___rarg(x_0, x_1);
return x_2;
}
}
obj* _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("invalid environment extension, '");
return x_0;
}
}
obj* _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3() {
_start:
{
obj* x_0; 
x_0 = lean::mk_string("' has already been used");
return x_0;
}
}
obj* l_Lean_registerPersistentEnvExtensionUnsafe___rarg(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_9; obj* x_11; uint8 x_13; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_3 = lean::cnstr_get(x_1, 0);
lean::inc(x_3);
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
x_7 = lean::cnstr_get(x_1, 2);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_1, 3);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_1, 4);
lean::inc(x_11);
x_13 = lean::cnstr_get_scalar<uint8>(x_1, sizeof(void*)*5);
lean::inc(x_5);
x_15 = lean::thunk_pure(x_5);
x_16 = lean::box(0);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_5);
x_18 = l_Array_empty___closed__1;
x_19 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_15);
lean::cnstr_set(x_19, 2, x_16);
lean::cnstr_set(x_19, 3, x_17);
x_20 = l___private_init_lean_environment_9__persistentEnvExtensionsRef;
x_21 = lean::io_ref_get(x_20, x_2);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; obj* x_24; obj* x_26; obj* x_27; uint8 x_28; 
x_22 = lean::cnstr_get(x_21, 0);
x_24 = lean::cnstr_get(x_21, 1);
if (lean::is_exclusive(x_21)) {
 lean::cnstr_set(x_21, 0, lean::box(0));
 lean::cnstr_set(x_21, 1, lean::box(0));
 x_26 = x_21;
} else {
 lean::inc(x_22);
 lean::inc(x_24);
 lean::dec(x_21);
 x_26 = lean::box(0);
}
x_27 = lean::mk_nat_obj(0ul);
x_28 = l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg(x_0, x_1, x_22, x_27);
lean::dec(x_22);
lean::dec(x_1);
if (x_28 == 0)
{
obj* x_31; obj* x_32; obj* x_33; 
x_31 = lean::box(0);
if (lean::is_scalar(x_26)) {
 x_32 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_32 = x_26;
}
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_24);
x_33 = l_Lean_registerEnvExtensionUnsafe___rarg(x_19, x_32);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; obj* x_36; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_34 = lean::cnstr_get(x_33, 0);
x_36 = lean::cnstr_get(x_33, 1);
if (lean::is_exclusive(x_33)) {
 x_38 = x_33;
} else {
 lean::inc(x_34);
 lean::inc(x_36);
 lean::dec(x_33);
 x_38 = lean::box(0);
}
if (lean::is_scalar(x_38)) {
 x_39 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_39 = x_38;
}
lean::cnstr_set(x_39, 0, x_31);
lean::cnstr_set(x_39, 1, x_36);
x_40 = lean::alloc_cnstr(0, 5, 1);
lean::cnstr_set(x_40, 0, x_34);
lean::cnstr_set(x_40, 1, x_3);
lean::cnstr_set(x_40, 2, x_7);
lean::cnstr_set(x_40, 3, x_9);
lean::cnstr_set(x_40, 4, x_11);
lean::cnstr_set_scalar(x_40, sizeof(void*)*5, x_13);
x_41 = x_40;
x_42 = lean::io_ref_get(x_20, x_39);
if (lean::obj_tag(x_42) == 0)
{
obj* x_43; obj* x_45; obj* x_47; obj* x_48; obj* x_49; 
x_43 = lean::cnstr_get(x_42, 0);
x_45 = lean::cnstr_get(x_42, 1);
if (lean::is_exclusive(x_42)) {
 x_47 = x_42;
} else {
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_42);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_31);
lean::cnstr_set(x_48, 1, x_45);
x_49 = lean::io_ref_reset(x_20, x_48);
if (lean::obj_tag(x_49) == 0)
{
obj* x_50; obj* x_52; obj* x_53; obj* x_54; obj* x_56; obj* x_57; obj* x_58; 
x_50 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 lean::cnstr_release(x_49, 0);
 x_52 = x_49;
} else {
 lean::inc(x_50);
 lean::dec(x_49);
 x_52 = lean::box(0);
}
if (lean::is_scalar(x_52)) {
 x_53 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_53 = x_52;
}
lean::cnstr_set(x_53, 0, x_31);
lean::cnstr_set(x_53, 1, x_50);
x_54 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
lean::inc(x_41);
x_56 = x_41;
x_57 = lean::array_push(x_43, x_56);
x_58 = lean::io_ref_set(x_20, x_57, x_53);
if (lean::obj_tag(x_58) == 0)
{
obj* x_59; obj* x_61; obj* x_62; 
x_59 = lean::cnstr_get(x_58, 1);
if (lean::is_exclusive(x_58)) {
 lean::cnstr_release(x_58, 0);
 x_61 = x_58;
} else {
 lean::inc(x_59);
 lean::dec(x_58);
 x_61 = lean::box(0);
}
if (lean::is_scalar(x_61)) {
 x_62 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_62 = x_61;
}
lean::cnstr_set(x_62, 0, x_41);
lean::cnstr_set(x_62, 1, x_59);
return x_62;
}
else
{
obj* x_64; obj* x_66; obj* x_68; obj* x_69; 
lean::dec(x_41);
x_64 = lean::cnstr_get(x_58, 0);
x_66 = lean::cnstr_get(x_58, 1);
if (lean::is_exclusive(x_58)) {
 x_68 = x_58;
} else {
 lean::inc(x_64);
 lean::inc(x_66);
 lean::dec(x_58);
 x_68 = lean::box(0);
}
if (lean::is_scalar(x_68)) {
 x_69 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_69 = x_68;
}
lean::cnstr_set(x_69, 0, x_64);
lean::cnstr_set(x_69, 1, x_66);
return x_69;
}
}
else
{
obj* x_72; obj* x_74; obj* x_76; obj* x_77; 
lean::dec(x_41);
lean::dec(x_43);
x_72 = lean::cnstr_get(x_49, 0);
x_74 = lean::cnstr_get(x_49, 1);
if (lean::is_exclusive(x_49)) {
 x_76 = x_49;
} else {
 lean::inc(x_72);
 lean::inc(x_74);
 lean::dec(x_49);
 x_76 = lean::box(0);
}
if (lean::is_scalar(x_76)) {
 x_77 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_77 = x_76;
}
lean::cnstr_set(x_77, 0, x_72);
lean::cnstr_set(x_77, 1, x_74);
return x_77;
}
}
else
{
obj* x_79; obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_41);
x_79 = lean::cnstr_get(x_42, 0);
x_81 = lean::cnstr_get(x_42, 1);
if (lean::is_exclusive(x_42)) {
 x_83 = x_42;
} else {
 lean::inc(x_79);
 lean::inc(x_81);
 lean::dec(x_42);
 x_83 = lean::box(0);
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_79);
lean::cnstr_set(x_84, 1, x_81);
return x_84;
}
}
else
{
obj* x_89; obj* x_91; obj* x_93; obj* x_94; 
lean::dec(x_7);
lean::dec(x_11);
lean::dec(x_9);
lean::dec(x_3);
x_89 = lean::cnstr_get(x_33, 0);
x_91 = lean::cnstr_get(x_33, 1);
if (lean::is_exclusive(x_33)) {
 x_93 = x_33;
} else {
 lean::inc(x_89);
 lean::inc(x_91);
 lean::dec(x_33);
 x_93 = lean::box(0);
}
if (lean::is_scalar(x_93)) {
 x_94 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_94 = x_93;
}
lean::cnstr_set(x_94, 0, x_89);
lean::cnstr_set(x_94, 1, x_91);
return x_94;
}
}
else
{
obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_104; obj* x_105; obj* x_106; 
lean::dec(x_7);
lean::dec(x_11);
lean::dec(x_9);
lean::dec(x_19);
x_99 = l_Lean_Name_toString___closed__1;
x_100 = l_Lean_Name_toStringWithSep___main(x_99, x_3);
x_101 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
x_102 = lean::string_append(x_101, x_100);
lean::dec(x_100);
x_104 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
x_105 = lean::string_append(x_102, x_104);
if (lean::is_scalar(x_26)) {
 x_106 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_106 = x_26;
 lean::cnstr_set_tag(x_26, 1);
}
lean::cnstr_set(x_106, 0, x_105);
lean::cnstr_set(x_106, 1, x_24);
return x_106;
}
}
else
{
obj* x_113; obj* x_115; obj* x_117; obj* x_118; 
lean::dec(x_7);
lean::dec(x_11);
lean::dec(x_1);
lean::dec(x_9);
lean::dec(x_3);
lean::dec(x_19);
x_113 = lean::cnstr_get(x_21, 0);
x_115 = lean::cnstr_get(x_21, 1);
if (lean::is_exclusive(x_21)) {
 x_117 = x_21;
} else {
 lean::inc(x_113);
 lean::inc(x_115);
 lean::dec(x_21);
 x_117 = lean::box(0);
}
if (lean::is_scalar(x_117)) {
 x_118 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_118 = x_117;
}
lean::cnstr_set(x_118, 0, x_113);
lean::cnstr_set(x_118, 1, x_115);
return x_118;
}
}
}
obj* l_Lean_registerPersistentEnvExtensionUnsafe(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_registerPersistentEnvExtensionUnsafe___rarg___boxed), 3, 0);
return x_2;
}
}
obj* l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___rarg(x_0, x_1, x_2, x_3);
x_5 = lean::box(x_4);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Array_anyMAux___main___at_Lean_registerPersistentEnvExtensionUnsafe___spec__1(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_Lean_registerPersistentEnvExtensionUnsafe___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_registerPersistentEnvExtensionUnsafe(x_0, x_1);
lean::dec(x_0);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_registerPersistentEnvExtension___rarg(obj* x_0) {
_start:
{
obj* x_1; obj* x_3; obj* x_4; obj* x_5; 
x_1 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_release(x_0, 0);
 x_3 = x_0;
} else {
 lean::inc(x_1);
 lean::dec(x_0);
 x_3 = lean::box(0);
}
x_4 = l_String_splitAux___main___closed__1;
if (lean::is_scalar(x_3)) {
 x_5 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_5 = x_3;
 lean::cnstr_set_tag(x_3, 1);
}
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_1);
return x_5;
}
}
obj* l_Lean_registerPersistentEnvExtension(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_registerPersistentEnvExtension___rarg), 1, 0);
return x_4;
}
}
obj* l_Lean_registerPersistentEnvExtension___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_registerPersistentEnvExtension(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
lean::dec(x_3);
return x_4;
}
}
obj* _init_l_Lean_CPPExtensionState_Inhabited() {
_start:
{
obj* x_0; 
x_0 = l_NonScalar_Inhabited;
return x_0;
}
}
namespace lean {
obj* register_extension_core(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_unsafeIO___rarg___closed__1;
x_2 = l_Lean_registerEnvExtensionUnsafe___rarg(x_0, x_1);
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; obj* x_6; obj* x_9; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
lean::dec(x_2);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
lean::dec(x_3);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_6);
return x_9;
}
else
{
obj* x_11; 
lean::dec(x_2);
x_11 = lean::box(0);
return x_11;
}
}
}
}
namespace lean {
obj* set_extension_core(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_3);
x_5 = l___private_init_lean_environment_6__envExtensionsRef;
x_6 = lean::io_ref_get(x_5, x_4);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_10; obj* x_11; obj* x_14; obj* x_16; 
x_7 = lean::cnstr_get(x_6, 0);
lean::inc(x_7);
lean::dec(x_6);
x_10 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
x_11 = lean::array_get(x_10, x_7, x_1);
lean::dec(x_1);
lean::dec(x_7);
x_14 = l_Lean_EnvExtension_setStateUnsafe___rarg(x_11, x_0, x_2);
lean::dec(x_11);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_14);
return x_16;
}
else
{
obj* x_21; 
lean::dec(x_1);
lean::dec(x_6);
lean::dec(x_0);
lean::dec(x_2);
x_21 = lean::box(0);
return x_21;
}
}
}
}
namespace lean {
obj* get_extension_core(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = lean::box(0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_2);
x_4 = l___private_init_lean_environment_6__envExtensionsRef;
x_5 = lean::io_ref_get(x_4, x_3);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_9; obj* x_10; obj* x_13; obj* x_15; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
lean::dec(x_5);
x_9 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
x_10 = lean::array_get(x_9, x_6, x_1);
lean::dec(x_1);
lean::dec(x_6);
x_13 = l_Lean_EnvExtension_getStateUnsafe___rarg(x_10, x_0);
lean::dec(x_0);
x_15 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_15, 0, x_13);
return x_15;
}
else
{
obj* x_19; 
lean::dec(x_5);
lean::dec(x_1);
lean::dec(x_0);
x_19 = lean::box(0);
return x_19;
}
}
}
}
obj* _init_l_Lean_Modification_Inhabited() {
_start:
{
obj* x_0; 
x_0 = l_NonScalar_Inhabited;
return x_0;
}
}
obj* l_Lean_regModListExtension(obj* x_0) {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::box(0);
x_2 = l_Lean_registerEnvExtensionUnsafe___rarg(x_1, x_0);
return x_2;
}
}
obj* _init_l_Lean_addModification___closed__1() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_Lean_modListExtension;
x_1 = lean::cnstr_get(x_0, 0);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
obj* _init_l_Lean_addModification___closed__2() {
_start:
{
obj* x_0; obj* x_1; 
x_0 = l_Lean_modListExtension;
x_1 = lean::cnstr_get(x_0, 1);
lean::inc(x_1);
lean::dec(x_0);
return x_1;
}
}
namespace lean {
obj* environment_add_modification_core(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_4; obj* x_6; uint32 x_8; uint8 x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_14; uint8 x_15; 
x_2 = lean::cnstr_get(x_0, 0);
x_4 = lean::cnstr_get(x_0, 1);
x_6 = lean::cnstr_get(x_0, 2);
x_8 = lean::cnstr_get_scalar<uint32>(x_0, sizeof(void*)*4);
x_9 = lean::cnstr_get_scalar<uint8>(x_0, sizeof(void*)*4 + 4);
x_10 = lean::cnstr_get(x_0, 3);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 lean::cnstr_set(x_0, 2, lean::box(0));
 lean::cnstr_set(x_0, 3, lean::box(0));
 x_12 = x_0;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::inc(x_6);
 lean::inc(x_10);
 lean::dec(x_0);
 x_12 = lean::box(0);
}
x_13 = lean::array_get_size(x_6);
x_14 = l_Lean_addModification___closed__1;
x_15 = lean::nat_dec_lt(x_14, x_13);
lean::dec(x_13);
if (x_15 == 0)
{
obj* x_18; obj* x_19; obj* x_20; 
lean::dec(x_1);
if (lean::is_scalar(x_12)) {
 x_18 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_18 = x_12;
}
lean::cnstr_set(x_18, 0, x_2);
lean::cnstr_set(x_18, 1, x_4);
lean::cnstr_set(x_18, 2, x_6);
lean::cnstr_set(x_18, 3, x_10);
lean::cnstr_set_scalar(x_18, sizeof(void*)*4, x_8);
x_19 = x_18;
lean::cnstr_set_scalar(x_19, sizeof(void*)*4 + 4, x_9);
x_20 = x_19;
return x_20;
}
else
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_21 = lean::array_fget(x_6, x_14);
x_22 = lean::mk_nat_obj(0ul);
x_23 = lean::array_fset(x_6, x_14, x_22);
x_24 = l_Lean_addModification___closed__2;
x_25 = x_21;
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_1);
lean::cnstr_set(x_26, 1, x_25);
x_27 = l_Lean_EnvExtensionState_Inhabited;
x_28 = x_26;
x_29 = lean::array_fset(x_23, x_14, x_28);
if (lean::is_scalar(x_12)) {
 x_30 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_30 = x_12;
}
lean::cnstr_set(x_30, 0, x_2);
lean::cnstr_set(x_30, 1, x_4);
lean::cnstr_set(x_30, 2, x_29);
lean::cnstr_set(x_30, 3, x_10);
lean::cnstr_set_scalar(x_30, sizeof(void*)*4, x_8);
x_31 = x_30;
lean::cnstr_set_scalar(x_31, sizeof(void*)*4 + 4, x_9);
x_32 = x_31;
return x_32;
}
}
}
}
obj* l_Lean_serializeModifications___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean_serialize_modifications(x_0, x_1);
return x_2;
}
}
obj* l_Lean_performModifications___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean_perform_serialized_modifications(x_0, x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_ModuleData_inhabited() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_5; 
x_0 = lean::mk_nat_obj(0ul);
x_1 = lean::mk_empty_array(x_0);
x_2 = l_ByteArray_empty;
lean::inc(x_1);
lean::inc(x_1);
x_5 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_1);
lean::cnstr_set(x_5, 2, x_1);
lean::cnstr_set(x_5, 3, x_2);
return x_5;
}
}
obj* l_Lean_saveModuleData___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean_save_module_data(x_0, x_1, x_2);
lean::dec(x_0);
return x_3;
}
}
obj* l_Lean_readModuleData___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean_read_module_data(x_0, x_1);
lean::dec(x_0);
return x_2;
}
}
obj* l_Nat_foldAux___main___at_Lean_mkModuleData___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0ul);
x_6 = lean::nat_dec_eq(x_3, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_11; obj* x_12; obj* x_15; obj* x_16; obj* x_18; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_7 = lean::mk_nat_obj(1ul);
x_8 = lean::nat_sub(x_3, x_7);
x_9 = lean::nat_sub(x_2, x_3);
lean::dec(x_3);
x_11 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_12 = lean::array_get(x_11, x_1, x_9);
lean::dec(x_9);
lean::inc(x_12);
x_15 = l_Lean_PersistentEnvExtension_getEntries___rarg(x_12, x_0);
x_16 = lean::cnstr_get(x_12, 4);
lean::inc(x_16);
x_18 = lean::cnstr_get(x_12, 1);
lean::inc(x_18);
lean::dec(x_12);
x_21 = l_List_reverse___rarg(x_15);
x_22 = lean::apply_1(x_16, x_21);
x_23 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_23, 0, x_18);
lean::cnstr_set(x_23, 1, x_22);
x_24 = lean::array_push(x_4, x_23);
x_3 = x_8;
x_4 = x_24;
goto _start;
}
else
{
lean::dec(x_3);
return x_4;
}
}
}
obj* l_RBNode_fold___main___at_Lean_mkModuleData___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_9; obj* x_10; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_4 = lean::cnstr_get(x_1, 2);
lean::inc(x_4);
x_6 = lean::cnstr_get(x_1, 3);
lean::inc(x_6);
lean::dec(x_1);
x_9 = l_RBNode_fold___main___at_Lean_mkModuleData___spec__2(x_0, x_2);
x_10 = lean::array_push(x_9, x_4);
x_0 = x_10;
x_1 = x_6;
goto _start;
}
}
}
obj* l_Lean_mkModuleData(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l___private_init_lean_environment_9__persistentEnvExtensionsRef;
x_3 = lean::io_ref_get(x_2, x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_14; obj* x_17; obj* x_18; obj* x_19; 
x_4 = lean::cnstr_get(x_3, 0);
x_6 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 x_8 = x_3;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_3);
 x_8 = lean::box(0);
}
x_9 = lean::box(0);
if (lean::is_scalar(x_8)) {
 x_10 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_10 = x_8;
}
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_6);
x_11 = lean::array_get_size(x_4);
x_12 = l_Array_empty___closed__1;
lean::inc(x_11);
x_14 = l_Nat_foldAux___main___at_Lean_mkModuleData___spec__1(x_0, x_4, x_11, x_11, x_12);
lean::dec(x_11);
lean::dec(x_4);
x_17 = l_Lean_modListExtension;
x_18 = l_Lean_EnvExtension_getStateUnsafe___rarg(x_17, x_0);
x_19 = lean_serialize_modifications(x_18, x_10);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_22; obj* x_24; obj* x_25; obj* x_27; obj* x_30; obj* x_33; obj* x_34; obj* x_35; 
x_20 = lean::cnstr_get(x_19, 0);
x_22 = lean::cnstr_get(x_19, 1);
if (lean::is_exclusive(x_19)) {
 x_24 = x_19;
} else {
 lean::inc(x_20);
 lean::inc(x_22);
 lean::dec(x_19);
 x_24 = lean::box(0);
}
x_25 = lean::cnstr_get(x_0, 3);
lean::inc(x_25);
x_27 = lean::cnstr_get(x_0, 1);
lean::inc(x_27);
lean::dec(x_0);
x_30 = lean::cnstr_get(x_27, 1);
lean::inc(x_30);
lean::dec(x_27);
x_33 = l_RBNode_fold___main___at_Lean_mkModuleData___spec__2(x_12, x_30);
x_34 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_34, 0, x_25);
lean::cnstr_set(x_34, 1, x_33);
lean::cnstr_set(x_34, 2, x_14);
lean::cnstr_set(x_34, 3, x_20);
if (lean::is_scalar(x_24)) {
 x_35 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_35 = x_24;
}
lean::cnstr_set(x_35, 0, x_34);
lean::cnstr_set(x_35, 1, x_22);
return x_35;
}
else
{
obj* x_38; obj* x_40; obj* x_42; obj* x_43; 
lean::dec(x_0);
lean::dec(x_14);
x_38 = lean::cnstr_get(x_19, 0);
x_40 = lean::cnstr_get(x_19, 1);
if (lean::is_exclusive(x_19)) {
 x_42 = x_19;
} else {
 lean::inc(x_38);
 lean::inc(x_40);
 lean::dec(x_19);
 x_42 = lean::box(0);
}
if (lean::is_scalar(x_42)) {
 x_43 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_43 = x_42;
}
lean::cnstr_set(x_43, 0, x_38);
lean::cnstr_set(x_43, 1, x_40);
return x_43;
}
}
else
{
obj* x_45; obj* x_47; obj* x_49; obj* x_50; 
lean::dec(x_0);
x_45 = lean::cnstr_get(x_3, 0);
x_47 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 x_49 = x_3;
} else {
 lean::inc(x_45);
 lean::inc(x_47);
 lean::dec(x_3);
 x_49 = lean::box(0);
}
if (lean::is_scalar(x_49)) {
 x_50 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_50 = x_49;
}
lean::cnstr_set(x_50, 0, x_45);
lean::cnstr_set(x_50, 1, x_47);
return x_50;
}
}
}
obj* l_Nat_foldAux___main___at_Lean_mkModuleData___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Nat_foldAux___main___at_Lean_mkModuleData___spec__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
namespace lean {
obj* write_module_core(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_mkModuleData(x_0, x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_4 = lean::cnstr_get(x_3, 0);
x_6 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 x_8 = x_3;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_3);
 x_8 = lean::box(0);
}
x_9 = lean::box(0);
if (lean::is_scalar(x_8)) {
 x_10 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_10 = x_8;
}
lean::cnstr_set(x_10, 0, x_9);
lean::cnstr_set(x_10, 1, x_6);
x_11 = lean_save_module_data(x_1, x_4, x_10);
lean::dec(x_1);
return x_11;
}
else
{
obj* x_14; obj* x_16; obj* x_18; obj* x_19; 
lean::dec(x_1);
x_14 = lean::cnstr_get(x_3, 0);
x_16 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 x_18 = x_3;
} else {
 lean::inc(x_14);
 lean::inc(x_16);
 lean::dec(x_3);
 x_18 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_14);
lean::cnstr_set(x_19, 1, x_16);
return x_19;
}
}
}
}
obj* l_Lean_findOLean___boxed(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean_find_olean(x_0, x_1);
return x_2;
}
}
obj* l_Lean_importModulesAux___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_0) == 0)
{
obj* x_3; obj* x_5; obj* x_6; 
x_3 = lean::cnstr_get(x_2, 1);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_release(x_2, 0);
 x_5 = x_2;
} else {
 lean::inc(x_3);
 lean::dec(x_2);
 x_5 = lean::box(0);
}
if (lean::is_scalar(x_5)) {
 x_6 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_6 = x_5;
}
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_3);
return x_6;
}
else
{
obj* x_7; obj* x_9; obj* x_12; obj* x_14; uint8 x_17; 
x_7 = lean::cnstr_get(x_0, 0);
lean::inc(x_7);
x_9 = lean::cnstr_get(x_0, 1);
lean::inc(x_9);
lean::dec(x_0);
x_12 = lean::cnstr_get(x_1, 0);
lean::inc(x_12);
x_14 = lean::cnstr_get(x_1, 1);
lean::inc(x_14);
lean::inc(x_12);
x_17 = l_Lean_NameSet_contains(x_12, x_7);
if (x_17 == 0)
{
obj* x_18; obj* x_19; obj* x_21; obj* x_22; 
if (lean::is_exclusive(x_1)) {
 lean::cnstr_release(x_1, 0);
 lean::cnstr_release(x_1, 1);
 x_18 = x_1;
} else {
 lean::dec(x_1);
 x_18 = lean::box(0);
}
x_19 = lean::box(0);
lean::inc(x_7);
x_21 = l_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_12, x_7, x_19);
x_22 = lean_find_olean(x_7, x_2);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_25; obj* x_27; obj* x_28; obj* x_29; 
x_23 = lean::cnstr_get(x_22, 0);
x_25 = lean::cnstr_get(x_22, 1);
if (lean::is_exclusive(x_22)) {
 x_27 = x_22;
} else {
 lean::inc(x_23);
 lean::inc(x_25);
 lean::dec(x_22);
 x_27 = lean::box(0);
}
if (lean::is_scalar(x_27)) {
 x_28 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_28 = x_27;
}
lean::cnstr_set(x_28, 0, x_19);
lean::cnstr_set(x_28, 1, x_25);
x_29 = lean_read_module_data(x_23, x_28);
lean::dec(x_23);
if (lean::obj_tag(x_29) == 0)
{
obj* x_31; obj* x_33; obj* x_35; obj* x_36; obj* x_37; obj* x_39; obj* x_41; obj* x_42; 
x_31 = lean::cnstr_get(x_29, 0);
x_33 = lean::cnstr_get(x_29, 1);
if (lean::is_exclusive(x_29)) {
 x_35 = x_29;
} else {
 lean::inc(x_31);
 lean::inc(x_33);
 lean::dec(x_29);
 x_35 = lean::box(0);
}
if (lean::is_scalar(x_35)) {
 x_36 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_36 = x_35;
}
lean::cnstr_set(x_36, 0, x_19);
lean::cnstr_set(x_36, 1, x_33);
x_37 = lean::cnstr_get(x_31, 0);
lean::inc(x_37);
x_39 = l_Array_toList___rarg(x_37);
lean::dec(x_37);
if (lean::is_scalar(x_18)) {
 x_41 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_41 = x_18;
}
lean::cnstr_set(x_41, 0, x_21);
lean::cnstr_set(x_41, 1, x_14);
x_42 = l_Lean_importModulesAux___main(x_39, x_41, x_36);
if (lean::obj_tag(x_42) == 0)
{
obj* x_43; obj* x_45; obj* x_47; obj* x_48; obj* x_49; obj* x_51; obj* x_53; obj* x_54; obj* x_55; 
x_43 = lean::cnstr_get(x_42, 0);
x_45 = lean::cnstr_get(x_42, 1);
if (lean::is_exclusive(x_42)) {
 x_47 = x_42;
} else {
 lean::inc(x_43);
 lean::inc(x_45);
 lean::dec(x_42);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_19);
lean::cnstr_set(x_48, 1, x_45);
x_49 = lean::cnstr_get(x_43, 0);
x_51 = lean::cnstr_get(x_43, 1);
if (lean::is_exclusive(x_43)) {
 x_53 = x_43;
} else {
 lean::inc(x_49);
 lean::inc(x_51);
 lean::dec(x_43);
 x_53 = lean::box(0);
}
x_54 = lean::array_push(x_51, x_31);
if (lean::is_scalar(x_53)) {
 x_55 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_55 = x_53;
}
lean::cnstr_set(x_55, 0, x_49);
lean::cnstr_set(x_55, 1, x_54);
x_0 = x_9;
x_1 = x_55;
x_2 = x_48;
goto _start;
}
else
{
obj* x_59; obj* x_61; obj* x_63; obj* x_64; 
lean::dec(x_9);
lean::dec(x_31);
x_59 = lean::cnstr_get(x_42, 0);
x_61 = lean::cnstr_get(x_42, 1);
if (lean::is_exclusive(x_42)) {
 x_63 = x_42;
} else {
 lean::inc(x_59);
 lean::inc(x_61);
 lean::dec(x_42);
 x_63 = lean::box(0);
}
if (lean::is_scalar(x_63)) {
 x_64 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_64 = x_63;
}
lean::cnstr_set(x_64, 0, x_59);
lean::cnstr_set(x_64, 1, x_61);
return x_64;
}
}
else
{
obj* x_69; obj* x_71; obj* x_73; obj* x_74; 
lean::dec(x_14);
lean::dec(x_9);
lean::dec(x_18);
lean::dec(x_21);
x_69 = lean::cnstr_get(x_29, 0);
x_71 = lean::cnstr_get(x_29, 1);
if (lean::is_exclusive(x_29)) {
 x_73 = x_29;
} else {
 lean::inc(x_69);
 lean::inc(x_71);
 lean::dec(x_29);
 x_73 = lean::box(0);
}
if (lean::is_scalar(x_73)) {
 x_74 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_74 = x_73;
}
lean::cnstr_set(x_74, 0, x_69);
lean::cnstr_set(x_74, 1, x_71);
return x_74;
}
}
else
{
obj* x_79; obj* x_81; obj* x_83; obj* x_84; 
lean::dec(x_14);
lean::dec(x_9);
lean::dec(x_18);
lean::dec(x_21);
x_79 = lean::cnstr_get(x_22, 0);
x_81 = lean::cnstr_get(x_22, 1);
if (lean::is_exclusive(x_22)) {
 x_83 = x_22;
} else {
 lean::inc(x_79);
 lean::inc(x_81);
 lean::dec(x_22);
 x_83 = lean::box(0);
}
if (lean::is_scalar(x_83)) {
 x_84 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_84 = x_83;
}
lean::cnstr_set(x_84, 0, x_79);
lean::cnstr_set(x_84, 1, x_81);
return x_84;
}
}
else
{
lean::dec(x_14);
lean::dec(x_7);
lean::dec(x_12);
x_0 = x_9;
goto _start;
}
}
}
}
obj* l_Lean_importModulesAux(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_importModulesAux___main(x_0, x_1, x_2);
return x_3;
}
}
obj* _init_l___private_init_lean_environment_10__getEntriesFor___main___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::mk_nat_obj(0ul);
x_1 = lean::mk_empty_array(x_0);
x_2 = l_Lean_Inhabited;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l___private_init_lean_environment_10__getEntriesFor___main(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; uint8 x_5; 
x_3 = lean::cnstr_get(x_0, 2);
x_4 = lean::array_get_size(x_3);
x_5 = lean::nat_dec_lt(x_2, x_4);
lean::dec(x_4);
if (x_5 == 0)
{
obj* x_8; 
lean::dec(x_2);
x_8 = l_Array_empty___closed__1;
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_11; uint8 x_13; 
x_9 = l___private_init_lean_environment_10__getEntriesFor___main___closed__1;
x_10 = lean::array_get(x_9, x_3, x_2);
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
x_13 = lean_name_dec_eq(x_11, x_1);
lean::dec(x_11);
if (x_13 == 0)
{
obj* x_16; obj* x_17; 
lean::dec(x_10);
x_16 = lean::mk_nat_obj(1ul);
x_17 = lean::nat_add(x_2, x_16);
lean::dec(x_2);
x_2 = x_17;
goto _start;
}
else
{
obj* x_21; 
lean::dec(x_2);
x_21 = lean::cnstr_get(x_10, 1);
lean::inc(x_21);
lean::dec(x_10);
return x_21;
}
}
}
}
obj* l___private_init_lean_environment_10__getEntriesFor___main___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_environment_10__getEntriesFor___main(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l___private_init_lean_environment_10__getEntriesFor(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_environment_10__getEntriesFor___main(x_0, x_1, x_2);
return x_3;
}
}
obj* l___private_init_lean_environment_10__getEntriesFor___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_environment_10__getEntriesFor(x_0, x_1, x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_2);
x_6 = lean::nat_dec_lt(x_3, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
lean::dec(x_3);
return x_4;
}
else
{
obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_15; obj* x_18; obj* x_20; obj* x_22; uint32 x_24; uint8 x_25; obj* x_26; obj* x_28; obj* x_29; obj* x_31; uint8 x_32; obj* x_34; obj* x_35; 
x_9 = lean::array_fget(x_2, x_3);
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
x_12 = lean::mk_nat_obj(0ul);
x_13 = l___private_init_lean_environment_10__getEntriesFor___main(x_1, x_10, x_12);
lean::dec(x_10);
x_15 = lean::cnstr_get(x_9, 0);
lean::inc(x_15);
lean::dec(x_9);
x_18 = lean::cnstr_get(x_4, 0);
x_20 = lean::cnstr_get(x_4, 1);
x_22 = lean::cnstr_get(x_4, 2);
x_24 = lean::cnstr_get_scalar<uint32>(x_4, sizeof(void*)*4);
x_25 = lean::cnstr_get_scalar<uint8>(x_4, sizeof(void*)*4 + 4);
x_26 = lean::cnstr_get(x_4, 3);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_set(x_4, 0, lean::box(0));
 lean::cnstr_set(x_4, 1, lean::box(0));
 lean::cnstr_set(x_4, 2, lean::box(0));
 lean::cnstr_set(x_4, 3, lean::box(0));
 x_28 = x_4;
} else {
 lean::inc(x_18);
 lean::inc(x_20);
 lean::inc(x_22);
 lean::inc(x_26);
 lean::dec(x_4);
 x_28 = lean::box(0);
}
x_29 = lean::cnstr_get(x_15, 0);
lean::inc(x_29);
x_31 = lean::array_get_size(x_22);
x_32 = lean::nat_dec_lt(x_29, x_31);
lean::dec(x_31);
x_34 = lean::mk_nat_obj(1ul);
x_35 = lean::nat_add(x_3, x_34);
lean::dec(x_3);
if (x_32 == 0)
{
obj* x_40; obj* x_41; obj* x_42; 
lean::dec(x_13);
lean::dec(x_15);
lean::dec(x_29);
if (lean::is_scalar(x_28)) {
 x_40 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_40 = x_28;
}
lean::cnstr_set(x_40, 0, x_18);
lean::cnstr_set(x_40, 1, x_20);
lean::cnstr_set(x_40, 2, x_22);
lean::cnstr_set(x_40, 3, x_26);
lean::cnstr_set_scalar(x_40, sizeof(void*)*4, x_24);
x_41 = x_40;
lean::cnstr_set_scalar(x_41, sizeof(void*)*4 + 4, x_25);
x_42 = x_41;
x_3 = x_35;
x_4 = x_42;
goto _start;
}
else
{
obj* x_44; obj* x_45; obj* x_46; obj* x_49; obj* x_50; obj* x_52; obj* x_54; obj* x_56; obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_65; obj* x_66; obj* x_67; 
x_44 = lean::array_fget(x_22, x_29);
x_45 = lean::array_fset(x_22, x_29, x_12);
x_46 = lean::cnstr_get(x_15, 1);
lean::inc(x_46);
lean::dec(x_15);
x_49 = x_44;
x_50 = lean::cnstr_get(x_49, 0);
x_52 = lean::cnstr_get(x_49, 1);
x_54 = lean::cnstr_get(x_49, 2);
x_56 = lean::cnstr_get(x_49, 3);
if (lean::is_exclusive(x_49)) {
 x_58 = x_49;
} else {
 lean::inc(x_50);
 lean::inc(x_52);
 lean::inc(x_54);
 lean::inc(x_56);
 lean::dec(x_49);
 x_58 = lean::box(0);
}
x_59 = lean::array_push(x_50, x_13);
if (lean::is_scalar(x_58)) {
 x_60 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_60 = x_58;
}
lean::cnstr_set(x_60, 0, x_59);
lean::cnstr_set(x_60, 1, x_52);
lean::cnstr_set(x_60, 2, x_54);
lean::cnstr_set(x_60, 3, x_56);
x_61 = l_Lean_EnvExtensionState_Inhabited;
x_62 = x_60;
x_63 = lean::array_fset(x_45, x_29, x_62);
lean::dec(x_29);
if (lean::is_scalar(x_28)) {
 x_65 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_65 = x_28;
}
lean::cnstr_set(x_65, 0, x_18);
lean::cnstr_set(x_65, 1, x_20);
lean::cnstr_set(x_65, 2, x_63);
lean::cnstr_set(x_65, 3, x_26);
lean::cnstr_set_scalar(x_65, sizeof(void*)*4, x_24);
x_66 = x_65;
lean::cnstr_set_scalar(x_66, sizeof(void*)*4 + 4, x_25);
x_67 = x_66;
x_3 = x_35;
x_4 = x_67;
goto _start;
}
}
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_2);
x_6 = lean::nat_dec_lt(x_3, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
lean::dec(x_3);
return x_4;
}
else
{
obj* x_9; obj* x_10; obj* x_11; obj* x_13; obj* x_14; 
x_9 = lean::array_fget(x_2, x_3);
x_10 = lean::mk_nat_obj(0ul);
x_11 = l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__1(x_1, x_9, x_1, x_10, x_4);
lean::dec(x_9);
x_13 = lean::mk_nat_obj(1ul);
x_14 = lean::nat_add(x_3, x_13);
lean::dec(x_3);
x_3 = x_14;
x_4 = x_11;
goto _start;
}
}
}
obj* l___private_init_lean_environment_11__setImportedEntries(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l___private_init_lean_environment_9__persistentEnvExtensionsRef;
x_4 = lean::io_ref_get(x_3, x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_7; obj* x_9; obj* x_10; obj* x_11; obj* x_13; 
x_5 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 x_9 = x_4;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::dec(x_4);
 x_9 = lean::box(0);
}
x_10 = lean::mk_nat_obj(0ul);
x_11 = l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__2(x_1, x_5, x_1, x_10, x_0);
lean::dec(x_5);
if (lean::is_scalar(x_9)) {
 x_13 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_13 = x_9;
}
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_7);
return x_13;
}
else
{
obj* x_15; obj* x_17; obj* x_19; obj* x_20; 
lean::dec(x_0);
x_15 = lean::cnstr_get(x_4, 0);
x_17 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 x_19 = x_4;
} else {
 lean::inc(x_15);
 lean::inc(x_17);
 lean::dec(x_4);
 x_19 = lean::box(0);
}
if (lean::is_scalar(x_19)) {
 x_20 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_20 = x_19;
}
lean::cnstr_set(x_20, 0, x_15);
lean::cnstr_set(x_20, 1, x_17);
return x_20;
}
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_miterateAux___main___at___private_init_lean_environment_11__setImportedEntries___spec__2(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l___private_init_lean_environment_11__setImportedEntries___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l___private_init_lean_environment_11__setImportedEntries(x_0, x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_2);
x_6 = lean::nat_dec_lt(x_3, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
lean::dec(x_3);
lean::dec(x_0);
return x_4;
}
else
{
obj* x_10; uint8 x_11; obj* x_12; obj* x_14; obj* x_15; obj* x_16; 
x_10 = lean::array_fget(x_2, x_3);
x_11 = 1;
x_12 = lean::box(x_11);
lean::inc(x_0);
x_14 = lean::apply_3(x_0, x_12, x_4, x_10);
x_15 = lean::mk_nat_obj(1ul);
x_16 = lean::nat_add(x_3, x_15);
lean::dec(x_3);
x_3 = x_16;
x_4 = x_14;
goto _start;
}
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__2(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_2);
x_6 = lean::nat_dec_lt(x_3, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
lean::dec(x_1);
lean::dec(x_3);
return x_4;
}
else
{
obj* x_10; obj* x_11; obj* x_13; obj* x_15; obj* x_16; 
x_10 = lean::array_fget(x_2, x_3);
x_11 = lean::mk_nat_obj(0ul);
lean::inc(x_1);
x_13 = l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__1(x_1, x_10, x_10, x_11, x_4);
lean::dec(x_10);
x_15 = lean::mk_nat_obj(1ul);
x_16 = lean::nat_add(x_3, x_15);
lean::dec(x_3);
x_3 = x_16;
x_4 = x_13;
goto _start;
}
}
}
obj* l___private_init_lean_environment_12__mkImportedStateThunk___elambda__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = lean::mk_nat_obj(0ul);
x_5 = l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__2(x_0, x_2, x_0, x_4, x_1);
return x_5;
}
}
obj* l___private_init_lean_environment_12__mkImportedStateThunk(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___boxed), 4, 3);
lean::closure_set(x_3, 0, x_0);
lean::closure_set(x_3, 1, x_1);
lean::closure_set(x_3, 2, x_2);
x_4 = lean::mk_thunk(x_3);
return x_4;
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__1(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__2___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_miterateAux___main___at___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___spec__2(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_2);
return x_5;
}
}
obj* l___private_init_lean_environment_12__mkImportedStateThunk___elambda__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_environment_12__mkImportedStateThunk___elambda__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_3);
return x_4;
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_13__finalizePersistentExtensions___spec__1(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::array_get_size(x_1);
x_5 = lean::nat_dec_lt(x_2, x_4);
lean::dec(x_4);
if (x_5 == 0)
{
lean::dec(x_2);
return x_3;
}
else
{
obj* x_8; obj* x_9; obj* x_11; obj* x_13; obj* x_15; uint32 x_17; uint8 x_18; obj* x_19; obj* x_21; obj* x_22; obj* x_24; uint8 x_25; obj* x_27; obj* x_28; 
x_8 = lean::array_fget(x_1, x_2);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_11 = lean::cnstr_get(x_3, 0);
x_13 = lean::cnstr_get(x_3, 1);
x_15 = lean::cnstr_get(x_3, 2);
x_17 = lean::cnstr_get_scalar<uint32>(x_3, sizeof(void*)*4);
x_18 = lean::cnstr_get_scalar<uint8>(x_3, sizeof(void*)*4 + 4);
x_19 = lean::cnstr_get(x_3, 3);
if (lean::is_exclusive(x_3)) {
 lean::cnstr_set(x_3, 0, lean::box(0));
 lean::cnstr_set(x_3, 1, lean::box(0));
 lean::cnstr_set(x_3, 2, lean::box(0));
 lean::cnstr_set(x_3, 3, lean::box(0));
 x_21 = x_3;
} else {
 lean::inc(x_11);
 lean::inc(x_13);
 lean::inc(x_15);
 lean::inc(x_19);
 lean::dec(x_3);
 x_21 = lean::box(0);
}
x_22 = lean::cnstr_get(x_9, 0);
lean::inc(x_22);
x_24 = lean::array_get_size(x_15);
x_25 = lean::nat_dec_lt(x_22, x_24);
lean::dec(x_24);
x_27 = lean::mk_nat_obj(1ul);
x_28 = lean::nat_add(x_2, x_27);
lean::dec(x_2);
if (x_25 == 0)
{
obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_9);
lean::dec(x_8);
lean::dec(x_22);
if (lean::is_scalar(x_21)) {
 x_33 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_33 = x_21;
}
lean::cnstr_set(x_33, 0, x_11);
lean::cnstr_set(x_33, 1, x_13);
lean::cnstr_set(x_33, 2, x_15);
lean::cnstr_set(x_33, 3, x_19);
lean::cnstr_set_scalar(x_33, sizeof(void*)*4, x_17);
x_34 = x_33;
lean::cnstr_set_scalar(x_34, sizeof(void*)*4 + 4, x_18);
x_35 = x_34;
x_2 = x_28;
x_3 = x_35;
goto _start;
}
else
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_44; obj* x_45; obj* x_47; obj* x_48; obj* x_51; obj* x_53; obj* x_56; obj* x_57; uint8 x_58; 
x_37 = lean::array_fget(x_15, x_22);
x_38 = lean::mk_nat_obj(0ul);
x_39 = lean::array_fset(x_15, x_22, x_38);
x_40 = lean::cnstr_get(x_9, 1);
lean::inc(x_40);
lean::dec(x_9);
lean::inc(x_40);
x_44 = x_37;
x_45 = lean::cnstr_get(x_44, 0);
if (lean::is_exclusive(x_44)) {
 lean::cnstr_set(x_44, 0, lean::box(0));
 lean::cnstr_release(x_44, 1);
 lean::cnstr_release(x_44, 2);
 lean::cnstr_release(x_44, 3);
 x_47 = x_44;
} else {
 lean::inc(x_45);
 lean::dec(x_44);
 x_47 = lean::box(0);
}
x_48 = lean::cnstr_get(x_40, 1);
lean::inc(x_48);
lean::dec(x_40);
x_51 = lean::thunk_get_own(x_48);
lean::dec(x_48);
x_53 = lean::cnstr_get(x_8, 3);
lean::inc(x_53);
lean::inc(x_45);
x_56 = l___private_init_lean_environment_12__mkImportedStateThunk(x_45, x_51, x_53);
x_57 = lean::box(0);
x_58 = lean::cnstr_get_scalar<uint8>(x_8, sizeof(void*)*5);
lean::dec(x_8);
if (x_58 == 0)
{
obj* x_60; obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_67; obj* x_68; obj* x_69; 
x_60 = lean::thunk_get_own(x_56);
x_61 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_61, 0, x_60);
if (lean::is_scalar(x_47)) {
 x_62 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_62 = x_47;
}
lean::cnstr_set(x_62, 0, x_45);
lean::cnstr_set(x_62, 1, x_56);
lean::cnstr_set(x_62, 2, x_57);
lean::cnstr_set(x_62, 3, x_61);
x_63 = l_Lean_EnvExtensionState_Inhabited;
x_64 = x_62;
x_65 = lean::array_fset(x_39, x_22, x_64);
lean::dec(x_22);
if (lean::is_scalar(x_21)) {
 x_67 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_67 = x_21;
}
lean::cnstr_set(x_67, 0, x_11);
lean::cnstr_set(x_67, 1, x_13);
lean::cnstr_set(x_67, 2, x_65);
lean::cnstr_set(x_67, 3, x_19);
lean::cnstr_set_scalar(x_67, sizeof(void*)*4, x_17);
x_68 = x_67;
lean::cnstr_set_scalar(x_68, sizeof(void*)*4 + 4, x_18);
x_69 = x_68;
x_2 = x_28;
x_3 = x_69;
goto _start;
}
else
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; obj* x_77; obj* x_78; obj* x_79; 
x_71 = lean::box(0);
if (lean::is_scalar(x_47)) {
 x_72 = lean::alloc_cnstr(0, 4, 0);
} else {
 x_72 = x_47;
}
lean::cnstr_set(x_72, 0, x_45);
lean::cnstr_set(x_72, 1, x_56);
lean::cnstr_set(x_72, 2, x_57);
lean::cnstr_set(x_72, 3, x_71);
x_73 = l_Lean_EnvExtensionState_Inhabited;
x_74 = x_72;
x_75 = lean::array_fset(x_39, x_22, x_74);
lean::dec(x_22);
if (lean::is_scalar(x_21)) {
 x_77 = lean::alloc_cnstr(0, 4, 5);
} else {
 x_77 = x_21;
}
lean::cnstr_set(x_77, 0, x_11);
lean::cnstr_set(x_77, 1, x_13);
lean::cnstr_set(x_77, 2, x_75);
lean::cnstr_set(x_77, 3, x_19);
lean::cnstr_set_scalar(x_77, sizeof(void*)*4, x_17);
x_78 = x_77;
lean::cnstr_set_scalar(x_78, sizeof(void*)*4 + 4, x_18);
x_79 = x_78;
x_2 = x_28;
x_3 = x_79;
goto _start;
}
}
}
}
}
obj* l___private_init_lean_environment_13__finalizePersistentExtensions(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; 
x_2 = l___private_init_lean_environment_9__persistentEnvExtensionsRef;
x_3 = lean::io_ref_get(x_2, x_1);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_6; obj* x_8; obj* x_9; obj* x_10; obj* x_12; 
x_4 = lean::cnstr_get(x_3, 0);
x_6 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 x_8 = x_3;
} else {
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_3);
 x_8 = lean::box(0);
}
x_9 = lean::mk_nat_obj(0ul);
x_10 = l_Array_miterateAux___main___at___private_init_lean_environment_13__finalizePersistentExtensions___spec__1(x_4, x_4, x_9, x_0);
lean::dec(x_4);
if (lean::is_scalar(x_8)) {
 x_12 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_12 = x_8;
}
lean::cnstr_set(x_12, 0, x_10);
lean::cnstr_set(x_12, 1, x_6);
return x_12;
}
else
{
obj* x_14; obj* x_16; obj* x_18; obj* x_19; 
lean::dec(x_0);
x_14 = lean::cnstr_get(x_3, 0);
x_16 = lean::cnstr_get(x_3, 1);
if (lean::is_exclusive(x_3)) {
 x_18 = x_3;
} else {
 lean::inc(x_14);
 lean::inc(x_16);
 lean::dec(x_3);
 x_18 = lean::box(0);
}
if (lean::is_scalar(x_18)) {
 x_19 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_19 = x_18;
}
lean::cnstr_set(x_19, 0, x_14);
lean::cnstr_set(x_19, 1, x_16);
return x_19;
}
}
}
obj* l_Array_miterateAux___main___at___private_init_lean_environment_13__finalizePersistentExtensions___spec__1___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Array_miterateAux___main___at___private_init_lean_environment_13__finalizePersistentExtensions___spec__1(x_0, x_1, x_2, x_3);
lean::dec(x_0);
lean::dec(x_1);
return x_4;
}
}
uint8 l_AssocList_contains___main___at_Lean_importModules___spec__2(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
uint8 x_2; 
x_2 = 0;
return x_2;
}
else
{
obj* x_3; obj* x_4; uint8 x_5; 
x_3 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 2);
x_5 = lean_name_dec_eq(x_3, x_0);
if (x_5 == 0)
{
x_1 = x_4;
goto _start;
}
else
{
uint8 x_7; 
x_7 = 1;
return x_7;
}
}
}
}
obj* l_AssocList_foldl___main___at_Lean_importModules___spec__5(obj* x_0, obj* x_1) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
return x_0;
}
else
{
obj* x_2; obj* x_4; obj* x_6; obj* x_8; obj* x_9; usize x_10; usize x_11; obj* x_13; obj* x_14; obj* x_15; 
x_2 = lean::cnstr_get(x_1, 0);
x_4 = lean::cnstr_get(x_1, 1);
x_6 = lean::cnstr_get(x_1, 2);
if (lean::is_exclusive(x_1)) {
 x_8 = x_1;
} else {
 lean::inc(x_2);
 lean::inc(x_4);
 lean::inc(x_6);
 lean::dec(x_1);
 x_8 = lean::box(0);
}
x_9 = lean::array_get_size(x_0);
x_10 = lean_name_hash_usize(x_2);
x_11 = lean::usize_modn(x_10, x_9);
lean::dec(x_9);
x_13 = lean::array_uget(x_0, x_11);
if (lean::is_scalar(x_8)) {
 x_14 = lean::alloc_cnstr(1, 3, 0);
} else {
 x_14 = x_8;
}
lean::cnstr_set(x_14, 0, x_2);
lean::cnstr_set(x_14, 1, x_4);
lean::cnstr_set(x_14, 2, x_13);
x_15 = lean::array_uset(x_0, x_11, x_14);
x_0 = x_15;
x_1 = x_6;
goto _start;
}
}
}
obj* l_HashMapImp_moveEntries___main___at_Lean_importModules___spec__4(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; uint8 x_4; 
x_3 = lean::array_get_size(x_1);
x_4 = lean::nat_dec_lt(x_0, x_3);
lean::dec(x_3);
if (x_4 == 0)
{
lean::dec(x_1);
lean::dec(x_0);
return x_2;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_8 = lean::array_fget(x_1, x_0);
x_9 = lean::box(0);
x_10 = lean::array_fset(x_1, x_0, x_9);
x_11 = l_AssocList_foldl___main___at_Lean_importModules___spec__5(x_2, x_8);
x_12 = lean::mk_nat_obj(1ul);
x_13 = lean::nat_add(x_0, x_12);
lean::dec(x_0);
x_0 = x_13;
x_1 = x_10;
x_2 = x_11;
goto _start;
}
}
}
obj* l_HashMapImp_expand___at_Lean_importModules___spec__3(obj* x_0, obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_2 = lean::array_get_size(x_1);
x_3 = lean::mk_nat_obj(2ul);
x_4 = lean::nat_mul(x_2, x_3);
lean::dec(x_2);
x_6 = lean::box(0);
x_7 = lean::mk_array(x_4, x_6);
x_8 = lean::mk_nat_obj(0ul);
x_9 = l_HashMapImp_moveEntries___main___at_Lean_importModules___spec__4(x_8, x_1, x_7);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_0);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
obj* l_AssocList_replace___main___at_Lean_importModules___spec__6(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
lean::dec(x_1);
lean::dec(x_0);
return x_2;
}
else
{
obj* x_5; obj* x_7; obj* x_9; obj* x_11; uint8 x_12; 
x_5 = lean::cnstr_get(x_2, 0);
x_7 = lean::cnstr_get(x_2, 1);
x_9 = lean::cnstr_get(x_2, 2);
if (lean::is_exclusive(x_2)) {
 lean::cnstr_set(x_2, 0, lean::box(0));
 lean::cnstr_set(x_2, 1, lean::box(0));
 lean::cnstr_set(x_2, 2, lean::box(0));
 x_11 = x_2;
} else {
 lean::inc(x_5);
 lean::inc(x_7);
 lean::inc(x_9);
 lean::dec(x_2);
 x_11 = lean::box(0);
}
x_12 = lean_name_dec_eq(x_5, x_0);
if (x_12 == 0)
{
obj* x_13; obj* x_14; 
x_13 = l_AssocList_replace___main___at_Lean_importModules___spec__6(x_0, x_1, x_9);
if (lean::is_scalar(x_11)) {
 x_14 = lean::alloc_cnstr(1, 3, 0);
} else {
 x_14 = x_11;
}
lean::cnstr_set(x_14, 0, x_5);
lean::cnstr_set(x_14, 1, x_7);
lean::cnstr_set(x_14, 2, x_13);
return x_14;
}
else
{
obj* x_17; 
lean::dec(x_7);
lean::dec(x_5);
if (lean::is_scalar(x_11)) {
 x_17 = lean::alloc_cnstr(1, 3, 0);
} else {
 x_17 = x_11;
}
lean::cnstr_set(x_17, 0, x_0);
lean::cnstr_set(x_17, 1, x_1);
lean::cnstr_set(x_17, 2, x_9);
return x_17;
}
}
}
}
obj* l_HashMapImp_insert___at_Lean_importModules___spec__1(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; obj* x_7; obj* x_8; usize x_9; usize x_10; obj* x_11; uint8 x_12; 
x_3 = lean::cnstr_get(x_0, 0);
x_5 = lean::cnstr_get(x_0, 1);
if (lean::is_exclusive(x_0)) {
 lean::cnstr_set(x_0, 0, lean::box(0));
 lean::cnstr_set(x_0, 1, lean::box(0));
 x_7 = x_0;
} else {
 lean::inc(x_3);
 lean::inc(x_5);
 lean::dec(x_0);
 x_7 = lean::box(0);
}
x_8 = lean::array_get_size(x_5);
x_9 = lean_name_hash_usize(x_1);
x_10 = lean::usize_modn(x_9, x_8);
x_11 = lean::array_uget(x_5, x_10);
x_12 = l_AssocList_contains___main___at_Lean_importModules___spec__2(x_1, x_11);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_16; obj* x_17; uint8 x_18; 
x_13 = lean::mk_nat_obj(1ul);
x_14 = lean::nat_add(x_3, x_13);
lean::dec(x_3);
x_16 = lean::alloc_cnstr(1, 3, 0);
lean::cnstr_set(x_16, 0, x_1);
lean::cnstr_set(x_16, 1, x_2);
lean::cnstr_set(x_16, 2, x_11);
x_17 = lean::array_uset(x_5, x_10, x_16);
x_18 = lean::nat_dec_le(x_14, x_8);
lean::dec(x_8);
if (x_18 == 0)
{
obj* x_21; 
lean::dec(x_7);
x_21 = l_HashMapImp_expand___at_Lean_importModules___spec__3(x_14, x_17);
return x_21;
}
else
{
obj* x_22; 
if (lean::is_scalar(x_7)) {
 x_22 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_22 = x_7;
}
lean::cnstr_set(x_22, 0, x_14);
lean::cnstr_set(x_22, 1, x_17);
return x_22;
}
}
else
{
obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_8);
x_24 = l_AssocList_replace___main___at_Lean_importModules___spec__6(x_1, x_2, x_11);
x_25 = lean::array_uset(x_5, x_10, x_24);
if (lean::is_scalar(x_7)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_7;
}
lean::cnstr_set(x_26, 0, x_3);
lean::cnstr_set(x_26, 1, x_25);
return x_26;
}
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__7(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; uint8 x_8; 
x_7 = lean::array_get_size(x_4);
x_8 = lean::nat_dec_lt(x_5, x_7);
lean::dec(x_7);
if (x_8 == 0)
{
lean::dec(x_5);
lean::dec(x_2);
return x_6;
}
else
{
obj* x_12; obj* x_13; obj* x_15; obj* x_16; obj* x_19; 
x_12 = lean::array_fget(x_4, x_5);
x_13 = l_Lean_ConstantInfo_name(x_12);
lean::dec(x_12);
x_15 = lean::mk_nat_obj(1ul);
x_16 = lean::nat_add(x_5, x_15);
lean::dec(x_5);
lean::inc(x_2);
x_19 = l_HashMapImp_insert___at_Lean_importModules___spec__1(x_6, x_13, x_2);
x_5 = x_16;
x_6 = x_19;
goto _start;
}
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__8(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_2);
x_6 = lean::nat_dec_lt(x_3, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
lean::dec(x_3);
return x_4;
}
else
{
obj* x_9; obj* x_10; obj* x_12; obj* x_14; obj* x_17; obj* x_18; 
x_9 = lean::array_fget(x_2, x_3);
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
x_12 = lean::mk_nat_obj(0ul);
lean::inc(x_3);
x_14 = l_Array_miterateAux___main___at_Lean_importModules___spec__7(x_0, x_1, x_3, x_9, x_10, x_12, x_4);
lean::dec(x_10);
lean::dec(x_9);
x_17 = lean::mk_nat_obj(1ul);
x_18 = lean::nat_add(x_3, x_17);
lean::dec(x_3);
x_3 = x_18;
x_4 = x_14;
goto _start;
}
}
}
obj* _init_l_Lean_SMap_empty___at_Lean_importModules___spec__9() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; uint8 x_3; obj* x_4; obj* x_5; 
x_0 = lean::mk_nat_obj(8ul);
x_1 = l_mkHashMapImp___rarg(x_0);
x_2 = lean::box(0);
x_3 = 1;
x_4 = lean::alloc_cnstr(0, 2, 1);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_2);
lean::cnstr_set_scalar(x_4, sizeof(void*)*2, x_3);
x_5 = x_4;
return x_5;
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__10(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_2);
x_6 = lean::nat_dec_lt(x_3, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
lean::dec(x_3);
return x_4;
}
else
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_9 = lean::array_fget(x_2, x_3);
x_10 = l_Lean_ConstantInfo_name(x_9);
x_11 = l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1(x_4, x_10, x_9);
x_12 = lean::mk_nat_obj(1ul);
x_13 = lean::nat_add(x_3, x_12);
lean::dec(x_3);
x_3 = x_13;
x_4 = x_11;
goto _start;
}
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__11(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_2);
x_6 = lean::nat_dec_lt(x_3, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
lean::dec(x_3);
return x_4;
}
else
{
obj* x_9; obj* x_10; obj* x_12; obj* x_13; obj* x_16; obj* x_17; 
x_9 = lean::array_fget(x_2, x_3);
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
x_12 = lean::mk_nat_obj(0ul);
x_13 = l_Array_miterateAux___main___at_Lean_importModules___spec__10(x_1, x_9, x_10, x_12, x_4);
lean::dec(x_10);
lean::dec(x_9);
x_16 = lean::mk_nat_obj(1ul);
x_17 = lean::nat_add(x_3, x_16);
lean::dec(x_3);
x_3 = x_17;
x_4 = x_13;
goto _start;
}
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__12(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_1);
x_6 = lean::nat_dec_lt(x_2, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
obj* x_9; obj* x_11; obj* x_12; 
lean::dec(x_2);
x_9 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_11 = x_4;
} else {
 lean::inc(x_9);
 lean::dec(x_4);
 x_11 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_12 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_12 = x_11;
}
lean::cnstr_set(x_12, 0, x_3);
lean::cnstr_set(x_12, 1, x_9);
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_20; 
x_13 = lean::array_fget(x_1, x_2);
x_14 = lean::mk_nat_obj(1ul);
x_15 = lean::nat_add(x_2, x_14);
lean::dec(x_2);
x_17 = lean::cnstr_get(x_13, 3);
lean::inc(x_17);
lean::dec(x_13);
x_20 = lean_perform_serialized_modifications(x_3, x_17, x_4);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_23; obj* x_25; obj* x_26; obj* x_27; 
x_21 = lean::cnstr_get(x_20, 0);
x_23 = lean::cnstr_get(x_20, 1);
if (lean::is_exclusive(x_20)) {
 x_25 = x_20;
} else {
 lean::inc(x_21);
 lean::inc(x_23);
 lean::dec(x_20);
 x_25 = lean::box(0);
}
x_26 = lean::box(0);
if (lean::is_scalar(x_25)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_25;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_23);
x_2 = x_15;
x_3 = x_21;
x_4 = x_27;
goto _start;
}
else
{
obj* x_30; obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_15);
x_30 = lean::cnstr_get(x_20, 0);
x_32 = lean::cnstr_get(x_20, 1);
if (lean::is_exclusive(x_20)) {
 x_34 = x_20;
} else {
 lean::inc(x_30);
 lean::inc(x_32);
 lean::dec(x_20);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_30);
lean::cnstr_set(x_35, 1, x_32);
return x_35;
}
}
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__13(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::array_get_size(x_1);
x_6 = lean::nat_dec_lt(x_2, x_5);
lean::dec(x_5);
if (x_6 == 0)
{
obj* x_9; obj* x_11; obj* x_12; 
lean::dec(x_2);
x_9 = lean::cnstr_get(x_4, 1);
if (lean::is_exclusive(x_4)) {
 lean::cnstr_release(x_4, 0);
 x_11 = x_4;
} else {
 lean::inc(x_9);
 lean::dec(x_4);
 x_11 = lean::box(0);
}
if (lean::is_scalar(x_11)) {
 x_12 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_12 = x_11;
}
lean::cnstr_set(x_12, 0, x_3);
lean::cnstr_set(x_12, 1, x_9);
return x_12;
}
else
{
obj* x_13; obj* x_14; obj* x_15; obj* x_17; obj* x_20; 
x_13 = lean::array_fget(x_1, x_2);
x_14 = lean::mk_nat_obj(1ul);
x_15 = lean::nat_add(x_2, x_14);
lean::dec(x_2);
x_17 = lean::cnstr_get(x_13, 3);
lean::inc(x_17);
lean::dec(x_13);
x_20 = lean_perform_serialized_modifications(x_3, x_17, x_4);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_23; obj* x_25; obj* x_26; obj* x_27; 
x_21 = lean::cnstr_get(x_20, 0);
x_23 = lean::cnstr_get(x_20, 1);
if (lean::is_exclusive(x_20)) {
 x_25 = x_20;
} else {
 lean::inc(x_21);
 lean::inc(x_23);
 lean::dec(x_20);
 x_25 = lean::box(0);
}
x_26 = lean::box(0);
if (lean::is_scalar(x_25)) {
 x_27 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_27 = x_25;
}
lean::cnstr_set(x_27, 0, x_26);
lean::cnstr_set(x_27, 1, x_23);
x_2 = x_15;
x_3 = x_21;
x_4 = x_27;
goto _start;
}
else
{
obj* x_30; obj* x_32; obj* x_34; obj* x_35; 
lean::dec(x_15);
x_30 = lean::cnstr_get(x_20, 0);
x_32 = lean::cnstr_get(x_20, 1);
if (lean::is_exclusive(x_20)) {
 x_34 = x_20;
} else {
 lean::inc(x_30);
 lean::inc(x_32);
 lean::dec(x_20);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_30);
lean::cnstr_set(x_35, 1, x_32);
return x_35;
}
}
}
}
obj* _init_l_Lean_importModules___closed__1() {
_start:
{
obj* x_0; obj* x_1; obj* x_2; obj* x_3; 
x_0 = lean::box(0);
x_1 = lean::mk_nat_obj(0ul);
x_2 = lean::mk_empty_array(x_1);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_0);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
namespace lean {
obj* import_modules_core(obj* x_0, uint32 x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_5; 
x_3 = l_Lean_importModules___closed__1;
lean::inc(x_0);
x_5 = l_Lean_importModulesAux___main(x_0, x_3, x_2);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_8; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_6 = lean::cnstr_get(x_5, 0);
x_8 = lean::cnstr_get(x_5, 1);
if (lean::is_exclusive(x_5)) {
 x_10 = x_5;
} else {
 lean::inc(x_6);
 lean::inc(x_8);
 lean::dec(x_5);
 x_10 = lean::box(0);
}
x_11 = lean::box(0);
if (lean::is_scalar(x_10)) {
 x_12 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_12 = x_10;
}
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_8);
x_13 = lean::cnstr_get(x_6, 1);
lean::inc(x_13);
lean::dec(x_6);
x_16 = l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1___closed__2;
x_17 = lean::mk_nat_obj(0ul);
x_18 = l_HashMap_Inhabited___closed__1;
x_19 = l_Array_miterateAux___main___at_Lean_importModules___spec__8(x_13, x_16, x_13, x_17, x_18);
x_20 = l_Lean_SMap_empty___at_Lean_importModules___spec__9;
x_21 = l_Array_miterateAux___main___at_Lean_importModules___spec__11(x_13, x_16, x_13, x_17, x_20);
x_22 = l_Lean_SMap_switch___at___private_init_lean_environment_1__switch___spec__1(x_21);
x_23 = l___private_init_lean_environment_7__mkInitialExtensionStates(x_12);
if (lean::obj_tag(x_23) == 0)
{
obj* x_24; obj* x_26; obj* x_28; obj* x_29; uint8 x_30; obj* x_31; obj* x_32; obj* x_34; 
x_24 = lean::cnstr_get(x_23, 0);
x_26 = lean::cnstr_get(x_23, 1);
if (lean::is_exclusive(x_23)) {
 x_28 = x_23;
} else {
 lean::inc(x_24);
 lean::inc(x_26);
 lean::dec(x_23);
 x_28 = lean::box(0);
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_11);
lean::cnstr_set(x_29, 1, x_26);
x_30 = l_List_isEmpty___main___rarg(x_0);
x_31 = l_List_redLength___main___rarg(x_0);
x_32 = lean::mk_empty_array(x_31);
lean::dec(x_31);
x_34 = l_List_toArrayAux___main___rarg(x_0, x_32);
if (x_30 == 0)
{
uint8 x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_35 = 1;
x_36 = lean::alloc_cnstr(0, 4, 5);
lean::cnstr_set(x_36, 0, x_19);
lean::cnstr_set(x_36, 1, x_22);
lean::cnstr_set(x_36, 2, x_24);
lean::cnstr_set(x_36, 3, x_34);
lean::cnstr_set_scalar(x_36, sizeof(void*)*4, x_1);
x_37 = x_36;
lean::cnstr_set_scalar(x_37, sizeof(void*)*4 + 4, x_35);
x_38 = x_37;
x_39 = l___private_init_lean_environment_11__setImportedEntries(x_38, x_13, x_29);
if (lean::obj_tag(x_39) == 0)
{
obj* x_40; obj* x_42; obj* x_44; obj* x_45; obj* x_46; 
x_40 = lean::cnstr_get(x_39, 0);
x_42 = lean::cnstr_get(x_39, 1);
if (lean::is_exclusive(x_39)) {
 x_44 = x_39;
} else {
 lean::inc(x_40);
 lean::inc(x_42);
 lean::dec(x_39);
 x_44 = lean::box(0);
}
if (lean::is_scalar(x_44)) {
 x_45 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_45 = x_44;
}
lean::cnstr_set(x_45, 0, x_11);
lean::cnstr_set(x_45, 1, x_42);
x_46 = l___private_init_lean_environment_13__finalizePersistentExtensions(x_40, x_45);
if (lean::obj_tag(x_46) == 0)
{
obj* x_47; obj* x_49; obj* x_51; obj* x_52; obj* x_53; 
x_47 = lean::cnstr_get(x_46, 0);
x_49 = lean::cnstr_get(x_46, 1);
if (lean::is_exclusive(x_46)) {
 x_51 = x_46;
} else {
 lean::inc(x_47);
 lean::inc(x_49);
 lean::dec(x_46);
 x_51 = lean::box(0);
}
if (lean::is_scalar(x_51)) {
 x_52 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_52 = x_51;
}
lean::cnstr_set(x_52, 0, x_11);
lean::cnstr_set(x_52, 1, x_49);
x_53 = l_Array_miterateAux___main___at_Lean_importModules___spec__12(x_13, x_13, x_17, x_47, x_52);
lean::dec(x_13);
if (lean::obj_tag(x_53) == 0)
{
obj* x_55; obj* x_57; obj* x_59; obj* x_60; 
x_55 = lean::cnstr_get(x_53, 0);
x_57 = lean::cnstr_get(x_53, 1);
if (lean::is_exclusive(x_53)) {
 x_59 = x_53;
} else {
 lean::inc(x_55);
 lean::inc(x_57);
 lean::dec(x_53);
 x_59 = lean::box(0);
}
if (lean::is_scalar(x_59)) {
 x_60 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_60 = x_59;
}
lean::cnstr_set(x_60, 0, x_55);
lean::cnstr_set(x_60, 1, x_57);
return x_60;
}
else
{
obj* x_61; obj* x_63; obj* x_65; obj* x_66; 
x_61 = lean::cnstr_get(x_53, 0);
x_63 = lean::cnstr_get(x_53, 1);
if (lean::is_exclusive(x_53)) {
 x_65 = x_53;
} else {
 lean::inc(x_61);
 lean::inc(x_63);
 lean::dec(x_53);
 x_65 = lean::box(0);
}
if (lean::is_scalar(x_65)) {
 x_66 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_66 = x_65;
}
lean::cnstr_set(x_66, 0, x_61);
lean::cnstr_set(x_66, 1, x_63);
return x_66;
}
}
else
{
obj* x_68; obj* x_70; obj* x_72; obj* x_73; 
lean::dec(x_13);
x_68 = lean::cnstr_get(x_46, 0);
x_70 = lean::cnstr_get(x_46, 1);
if (lean::is_exclusive(x_46)) {
 x_72 = x_46;
} else {
 lean::inc(x_68);
 lean::inc(x_70);
 lean::dec(x_46);
 x_72 = lean::box(0);
}
if (lean::is_scalar(x_72)) {
 x_73 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_73 = x_72;
}
lean::cnstr_set(x_73, 0, x_68);
lean::cnstr_set(x_73, 1, x_70);
return x_73;
}
}
else
{
obj* x_75; obj* x_77; obj* x_79; obj* x_80; 
lean::dec(x_13);
x_75 = lean::cnstr_get(x_39, 0);
x_77 = lean::cnstr_get(x_39, 1);
if (lean::is_exclusive(x_39)) {
 x_79 = x_39;
} else {
 lean::inc(x_75);
 lean::inc(x_77);
 lean::dec(x_39);
 x_79 = lean::box(0);
}
if (lean::is_scalar(x_79)) {
 x_80 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_80 = x_79;
}
lean::cnstr_set(x_80, 0, x_75);
lean::cnstr_set(x_80, 1, x_77);
return x_80;
}
}
else
{
uint8 x_81; obj* x_82; obj* x_83; obj* x_84; obj* x_85; 
x_81 = 0;
x_82 = lean::alloc_cnstr(0, 4, 5);
lean::cnstr_set(x_82, 0, x_19);
lean::cnstr_set(x_82, 1, x_22);
lean::cnstr_set(x_82, 2, x_24);
lean::cnstr_set(x_82, 3, x_34);
lean::cnstr_set_scalar(x_82, sizeof(void*)*4, x_1);
x_83 = x_82;
lean::cnstr_set_scalar(x_83, sizeof(void*)*4 + 4, x_81);
x_84 = x_83;
x_85 = l___private_init_lean_environment_11__setImportedEntries(x_84, x_13, x_29);
if (lean::obj_tag(x_85) == 0)
{
obj* x_86; obj* x_88; obj* x_90; obj* x_91; obj* x_92; 
x_86 = lean::cnstr_get(x_85, 0);
x_88 = lean::cnstr_get(x_85, 1);
if (lean::is_exclusive(x_85)) {
 x_90 = x_85;
} else {
 lean::inc(x_86);
 lean::inc(x_88);
 lean::dec(x_85);
 x_90 = lean::box(0);
}
if (lean::is_scalar(x_90)) {
 x_91 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_91 = x_90;
}
lean::cnstr_set(x_91, 0, x_11);
lean::cnstr_set(x_91, 1, x_88);
x_92 = l___private_init_lean_environment_13__finalizePersistentExtensions(x_86, x_91);
if (lean::obj_tag(x_92) == 0)
{
obj* x_93; obj* x_95; obj* x_97; obj* x_98; obj* x_99; 
x_93 = lean::cnstr_get(x_92, 0);
x_95 = lean::cnstr_get(x_92, 1);
if (lean::is_exclusive(x_92)) {
 x_97 = x_92;
} else {
 lean::inc(x_93);
 lean::inc(x_95);
 lean::dec(x_92);
 x_97 = lean::box(0);
}
if (lean::is_scalar(x_97)) {
 x_98 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_98 = x_97;
}
lean::cnstr_set(x_98, 0, x_11);
lean::cnstr_set(x_98, 1, x_95);
x_99 = l_Array_miterateAux___main___at_Lean_importModules___spec__13(x_13, x_13, x_17, x_93, x_98);
lean::dec(x_13);
if (lean::obj_tag(x_99) == 0)
{
obj* x_101; obj* x_103; obj* x_105; obj* x_106; 
x_101 = lean::cnstr_get(x_99, 0);
x_103 = lean::cnstr_get(x_99, 1);
if (lean::is_exclusive(x_99)) {
 x_105 = x_99;
} else {
 lean::inc(x_101);
 lean::inc(x_103);
 lean::dec(x_99);
 x_105 = lean::box(0);
}
if (lean::is_scalar(x_105)) {
 x_106 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_106 = x_105;
}
lean::cnstr_set(x_106, 0, x_101);
lean::cnstr_set(x_106, 1, x_103);
return x_106;
}
else
{
obj* x_107; obj* x_109; obj* x_111; obj* x_112; 
x_107 = lean::cnstr_get(x_99, 0);
x_109 = lean::cnstr_get(x_99, 1);
if (lean::is_exclusive(x_99)) {
 x_111 = x_99;
} else {
 lean::inc(x_107);
 lean::inc(x_109);
 lean::dec(x_99);
 x_111 = lean::box(0);
}
if (lean::is_scalar(x_111)) {
 x_112 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_112 = x_111;
}
lean::cnstr_set(x_112, 0, x_107);
lean::cnstr_set(x_112, 1, x_109);
return x_112;
}
}
else
{
obj* x_114; obj* x_116; obj* x_118; obj* x_119; 
lean::dec(x_13);
x_114 = lean::cnstr_get(x_92, 0);
x_116 = lean::cnstr_get(x_92, 1);
if (lean::is_exclusive(x_92)) {
 x_118 = x_92;
} else {
 lean::inc(x_114);
 lean::inc(x_116);
 lean::dec(x_92);
 x_118 = lean::box(0);
}
if (lean::is_scalar(x_118)) {
 x_119 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_119 = x_118;
}
lean::cnstr_set(x_119, 0, x_114);
lean::cnstr_set(x_119, 1, x_116);
return x_119;
}
}
else
{
obj* x_121; obj* x_123; obj* x_125; obj* x_126; 
lean::dec(x_13);
x_121 = lean::cnstr_get(x_85, 0);
x_123 = lean::cnstr_get(x_85, 1);
if (lean::is_exclusive(x_85)) {
 x_125 = x_85;
} else {
 lean::inc(x_121);
 lean::inc(x_123);
 lean::dec(x_85);
 x_125 = lean::box(0);
}
if (lean::is_scalar(x_125)) {
 x_126 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_126 = x_125;
}
lean::cnstr_set(x_126, 0, x_121);
lean::cnstr_set(x_126, 1, x_123);
return x_126;
}
}
}
else
{
obj* x_131; obj* x_133; obj* x_135; obj* x_136; 
lean::dec(x_13);
lean::dec(x_0);
lean::dec(x_22);
lean::dec(x_19);
x_131 = lean::cnstr_get(x_23, 0);
x_133 = lean::cnstr_get(x_23, 1);
if (lean::is_exclusive(x_23)) {
 x_135 = x_23;
} else {
 lean::inc(x_131);
 lean::inc(x_133);
 lean::dec(x_23);
 x_135 = lean::box(0);
}
if (lean::is_scalar(x_135)) {
 x_136 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_136 = x_135;
}
lean::cnstr_set(x_136, 0, x_131);
lean::cnstr_set(x_136, 1, x_133);
return x_136;
}
}
else
{
obj* x_138; obj* x_140; obj* x_142; obj* x_143; 
lean::dec(x_0);
x_138 = lean::cnstr_get(x_5, 0);
x_140 = lean::cnstr_get(x_5, 1);
if (lean::is_exclusive(x_5)) {
 x_142 = x_5;
} else {
 lean::inc(x_138);
 lean::inc(x_140);
 lean::dec(x_5);
 x_142 = lean::box(0);
}
if (lean::is_scalar(x_142)) {
 x_143 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_143 = x_142;
}
lean::cnstr_set(x_143, 0, x_138);
lean::cnstr_set(x_143, 1, x_140);
return x_143;
}
}
}
}
obj* l_AssocList_contains___main___at_Lean_importModules___spec__2___boxed(obj* x_0, obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = l_AssocList_contains___main___at_Lean_importModules___spec__2(x_0, x_1);
x_3 = lean::box(x_2);
lean::dec(x_0);
lean::dec(x_1);
return x_3;
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__7___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6) {
_start:
{
obj* x_7; 
x_7 = l_Array_miterateAux___main___at_Lean_importModules___spec__7(x_0, x_1, x_2, x_3, x_4, x_5, x_6);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_3);
lean::dec(x_4);
return x_7;
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__8___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_miterateAux___main___at_Lean_importModules___spec__8(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__10___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_miterateAux___main___at_Lean_importModules___spec__10(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__11___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_miterateAux___main___at_Lean_importModules___spec__11(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_1);
lean::dec(x_2);
return x_5;
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__12___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_miterateAux___main___at_Lean_importModules___spec__12(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_1);
return x_5;
}
}
obj* l_Array_miterateAux___main___at_Lean_importModules___spec__13___boxed(obj* x_0, obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_miterateAux___main___at_Lean_importModules___spec__13(x_0, x_1, x_2, x_3, x_4);
lean::dec(x_0);
lean::dec(x_1);
return x_5;
}
}
obj* l_Lean_importModules___boxed(obj* x_0, obj* x_1, obj* x_2) {
_start:
{
uint32 x_3; obj* x_4; 
x_3 = lean::unbox_uint32(x_1);
x_4 = lean::import_modules_core(x_0, x_3, x_2);
return x_4;
}
}
obj* initialize_init_io(obj*);
obj* initialize_init_util(obj*);
obj* initialize_init_data_bytearray_default(obj*);
obj* initialize_init_lean_declaration(obj*);
obj* initialize_init_lean_smap(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_environment(obj* w) {
 if (_G_initialized) return w;
 _G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_io(w);
if (io_result_is_error(w)) return w;
w = initialize_init_util(w);
if (io_result_is_error(w)) return w;
w = initialize_init_data_bytearray_default(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_declaration(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_smap(w);
if (io_result_is_error(w)) return w;
 l_Lean_EnvExtensionState_Inhabited = _init_l_Lean_EnvExtensionState_Inhabited();
lean::mark_persistent(l_Lean_EnvExtensionState_Inhabited);
 l_Lean_ModuleIdx_Inhabited = _init_l_Lean_ModuleIdx_Inhabited();
lean::mark_persistent(l_Lean_ModuleIdx_Inhabited);
 l_Lean_Environment_Inhabited = _init_l_Lean_Environment_Inhabited();
lean::mark_persistent(l_Lean_Environment_Inhabited);
 l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1___closed__1 = _init_l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1___closed__1();
lean::mark_persistent(l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1___closed__1);
 l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1___closed__2 = _init_l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1___closed__2();
lean::mark_persistent(l_Lean_SMap_insert___main___at_Lean_Environment_add___spec__1___closed__2);
 l_Lean_EnvExtension_setState___closed__1 = _init_l_Lean_EnvExtension_setState___closed__1();
lean::mark_persistent(l_Lean_EnvExtension_setState___closed__1);
w = l___private_init_lean_environment_5__mkEnvExtensionsRef(w);
if (io_result_is_error(w)) return w;
 l___private_init_lean_environment_6__envExtensionsRef = io_result_get_value(w);
lean::mark_persistent(l___private_init_lean_environment_6__envExtensionsRef);
 l_Lean_registerEnvExtensionUnsafe___rarg___closed__1 = _init_l_Lean_registerEnvExtensionUnsafe___rarg___closed__1();
lean::mark_persistent(l_Lean_registerEnvExtensionUnsafe___rarg___closed__1);
 l_Lean_registerEnvExtensionUnsafe___rarg___closed__2 = _init_l_Lean_registerEnvExtensionUnsafe___rarg___closed__2();
lean::mark_persistent(l_Lean_registerEnvExtensionUnsafe___rarg___closed__2);
 l_Lean_mkEmptyEnvironment___closed__1 = _init_l_Lean_mkEmptyEnvironment___closed__1();
lean::mark_persistent(l_Lean_mkEmptyEnvironment___closed__1);
 l_Lean_mkEmptyEnvironment___closed__2 = _init_l_Lean_mkEmptyEnvironment___closed__2();
lean::mark_persistent(l_Lean_mkEmptyEnvironment___closed__2);
 l_Lean_EnvExtensionEntry_Inhabited = _init_l_Lean_EnvExtensionEntry_Inhabited();
lean::mark_persistent(l_Lean_EnvExtensionEntry_Inhabited);
 l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1 = _init_l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1();
lean::mark_persistent(l_Lean_PersistentEnvExtension_inhabited___rarg___closed__1);
 l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2 = _init_l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2();
lean::mark_persistent(l_Lean_PersistentEnvExtension_inhabited___rarg___closed__2);
w = l___private_init_lean_environment_8__mkPersistentEnvExtensionsRef(w);
if (io_result_is_error(w)) return w;
 l___private_init_lean_environment_9__persistentEnvExtensionsRef = io_result_get_value(w);
lean::mark_persistent(l___private_init_lean_environment_9__persistentEnvExtensionsRef);
 l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1 = _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1();
lean::mark_persistent(l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1);
 l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2 = _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2();
lean::mark_persistent(l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2);
 l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3 = _init_l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3();
lean::mark_persistent(l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3);
 l_Lean_CPPExtensionState_Inhabited = _init_l_Lean_CPPExtensionState_Inhabited();
lean::mark_persistent(l_Lean_CPPExtensionState_Inhabited);
 l_Lean_Modification_Inhabited = _init_l_Lean_Modification_Inhabited();
lean::mark_persistent(l_Lean_Modification_Inhabited);
w = l_Lean_regModListExtension(w);
if (io_result_is_error(w)) return w;
 l_Lean_modListExtension = io_result_get_value(w);
lean::mark_persistent(l_Lean_modListExtension);
 l_Lean_addModification___closed__1 = _init_l_Lean_addModification___closed__1();
lean::mark_persistent(l_Lean_addModification___closed__1);
 l_Lean_addModification___closed__2 = _init_l_Lean_addModification___closed__2();
lean::mark_persistent(l_Lean_addModification___closed__2);
 l_Lean_ModuleData_inhabited = _init_l_Lean_ModuleData_inhabited();
lean::mark_persistent(l_Lean_ModuleData_inhabited);
 l___private_init_lean_environment_10__getEntriesFor___main___closed__1 = _init_l___private_init_lean_environment_10__getEntriesFor___main___closed__1();
lean::mark_persistent(l___private_init_lean_environment_10__getEntriesFor___main___closed__1);
 l_Lean_SMap_empty___at_Lean_importModules___spec__9 = _init_l_Lean_SMap_empty___at_Lean_importModules___spec__9();
lean::mark_persistent(l_Lean_SMap_empty___at_Lean_importModules___spec__9);
 l_Lean_importModules___closed__1 = _init_l_Lean_importModules___closed__1();
lean::mark_persistent(l_Lean_importModules___closed__1);
return w;
}

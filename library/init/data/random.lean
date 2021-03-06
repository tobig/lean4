/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.io init.data.int
universes u

/-
Basic random number generator support based on the one
available on the Haskell library
-/

/- Interface for random number generators. -/
class RandomGen (g : Type u) :=
/- `range` returns the range of values returned by
    the generator. -/
(range : g → Nat × Nat)
/- `next` operation returns a natural number that is uniformly distributed
    the range returned by `range` (including both end points),
   and a new generator. -/
(next  : g → Nat × g)
/-
  The 'split' operation allows one to obtain two distinct random number
  generators. This is very useful in functional programs (for example, when
  passing a random number generator down to recursive calls). -/
(split : g → g × g)

/- "Standard" random number generator. -/
structure StdGen :=
(s1 : Nat) (s2 : Nat)

def stdRange := (1, 2147483562)

instance : HasRepr StdGen :=
{ repr := λ ⟨s1, s2⟩, "⟨" ++ toString s1 ++ ", " ++ toString s2 ++ "⟩" }

def stdNext : StdGen → Nat × StdGen
| ⟨s1, s2⟩ :=
  let k    : Int := s1 / 53668,
      s1'  : Int := 40014 * ((s1 : Int) - k * 53668) - k * 12211,
      s1'' : Int := if s1' < 0 then s1' + 2147483563 else s1',
      k'   : Int := s2 / 52774,
      s2'  : Int := 40692 * ((s2 : Int) - k' * 52774) - k' * 3791,
      s2'' : Int := if s2' < 0 then s2' + 2147483399 else s2',
      z    : Int := s1'' - s2'',
      z'   : Int := if z < 1 then z + 2147483562 else z % 2147483562
  in (z'.toNat, ⟨s1''.toNat, s2''.toNat⟩)

def stdSplit : StdGen → StdGen × StdGen
| g@⟨s1, s2⟩ :=
  let newS1  := if s1 = 2147483562 then 1 else s1 + 1,
      newS2  := if s2 = 1          then 2147483398 else s2 - 1,
      newG   := (stdNext g).2,
      leftG  := StdGen.mk newS1 newG.2,
      rightG := StdGen.mk newG.1 newS2
in (leftG, rightG)

instance : RandomGen StdGen :=
{range  := λ _, stdRange,
 next   := stdNext,
 split  := stdSplit}

/-- Return a standard number generator. -/
def mkStdGen (s : Nat := 0) : StdGen :=
let q  := s / 2147483562,
    s1 := s % 2147483562,
    s2 := q % 2147483398 in
⟨s1 + 1, s2 + 1⟩

/-
Auxiliary function for randomNatVal.
Generate random values until we exceed the target magnitude.
`genLo` and `genMag` are the generator lower bound and magnitude.
The parameter `r` is the "remaining" magnitude.
-/
private partial def randNatAux {gen : Type u} [RandomGen gen] (genLo genMag : Nat) : Nat → (Nat × gen) → Nat × gen
| 0        (v, g) := (v, g)
| r'@(r+1) (v, g) :=
  let (x, g') := RandomGen.next g,
      v'      := v*genMag + (x - genLo)
  in randNatAux (r' / genMag - 1) (v', g')

/-- Generate a random natural number in the interval [lo, hi]. -/
def randNat {gen : Type u} [RandomGen gen] (g : gen) (lo hi : Nat) : Nat × gen :=
let lo'            := if lo > hi then hi else lo,
    hi'            := if lo > hi then lo else hi,
    (genLo, genHi) := RandomGen.range g,
    genMag         := genHi - genLo + 1,
    /-
      Probabilities of the most likely and least likely result
      will differ at most by a factor of (1 +- 1/q).  Assuming the RandomGen
      is uniform, of course
    -/
    q       := 1000,
    k       := hi' - lo' + 1,
    tgtMag  := k * q,
    (v, g') := randNatAux genLo genMag tgtMag (0, g),
    v'      := lo' + (v % k)
in (v', g')

/-- Generate a random Boolean. -/
def randBool {gen : Type u} [RandomGen gen] (g : gen) : Bool × gen :=
let (v, g') := randNat g 0 1
in (v = 1, g')

def IO.mkStdGenRef : IO (IO.Ref StdGen) :=
IO.mkRef mkStdGen

@[init IO.mkStdGenRef]
constant IO.stdGenRef : IO.Ref StdGen := default _

def IO.setRandSeed (n : Nat) : IO Unit :=
IO.stdGenRef.set (mkStdGen n)

def IO.rand (lo hi : Nat) : IO Nat :=
do gen ← IO.stdGenRef.get,
   let (r, gen) := randNat gen lo hi,
   IO.stdGenRef.set gen,
   pure r

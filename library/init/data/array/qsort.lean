/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.data.array.basic

namespace Array
-- TODO: remove the [Inhabited α] parameters as soon as we have the tactic framework for automating proof generation and using Array.fget
-- TODO: remove `partial` using well-founded recursion

@[specialize] private partial def partitionAux {α : Type} [Inhabited α] (lt : α → α → Bool) (hi : Nat) (pivot : α) : Array α → Nat → Nat → Nat × Array α
| as i j :=
  if j < hi then
    if lt (as.get j) pivot then
      let as := as.swap i j in
      partitionAux as (i+1) (j+1)
    else
      partitionAux as i (j+1)
  else
    let as := as.swap i hi in
    (i, as)

@[inline] def partition {α : Type} [Inhabited α] (as : Array α) (lt : α → α → Bool) (lo hi : Nat) : Nat × Array α :=
let mid := (lo + hi) / 2 in
let as  := if lt (as.get mid) (as.get lo) then as.swap lo mid else as in
let as  := if lt (as.get hi)  (as.get lo) then as.swap lo hi  else as in
let as  := if lt (as.get mid) (as.get hi) then as.swap mid hi else as in
let pivot := as.get hi in
partitionAux lt hi pivot as lo lo

@[specialize] partial def qsortAux {α : Type} [Inhabited α] (lt : α → α → Bool) : Array α → Nat → Nat → Array α
| as low high :=
  if low < high then
    let p   := partition as lt low high in
    -- TODO: fix `partial` support in the equation compiler, it breaks if we use `let (mid, as) := partition as lt low high`
    let mid := p.1 in
    let as  := p.2 in
    let as  := qsortAux as low mid in
    qsortAux as (mid+1) high
  else as

@[inline] def qsort {α : Type} [Inhabited α] (as : Array α) (lt : α → α → Bool) (low := 0) (high := as.size - 1) : Array α :=
qsortAux lt as low high

end Array

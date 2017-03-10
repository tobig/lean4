--
open nat prod

constant R : nat → nat → Prop
constant f (a b : nat) (H : R a b) : nat
axiom Rtrue (a b : nat) : R a b


#check f 1 0 (Rtrue (fst (prod.mk 1 (0:nat))) 0)

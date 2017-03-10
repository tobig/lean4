example (p q r s: Prop): p ∧ q → r ∧ s → s ∧ q :=
begin
  intros h1 h2,
  cases h1,
  cases h2,
  trace_state,
  constructor; assumption
end

#print "------------"

example (p q r s: Prop): p ∧ q → r ∧ s → s ∧ q :=
begin
  intros h1 h2,
  induction h1,
  induction h2,
  trace_state,
  constructor; assumption
end

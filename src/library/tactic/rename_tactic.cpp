/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "kernel/replace_fn.h"
#include "library/tactic/tactic.h"
#include "library/tactic/expr_to_tactic.h"

namespace lean {
tactic rename_tactic(name const & from, name const & to) {
    return tactic01([=](environment const &, io_state const &, proof_state const & s) -> optional<proof_state> {
            goals const & gs = s.get_goals();
            if (empty(gs))
                return none_proof_state();
            goal const & g        = head(gs);
            goals const & rest_gs = tail(gs);
            buffer<expr> locals;
            get_app_args(g.get_meta(), locals);
            unsigned i = locals.size();
            optional<expr> from_local;
            while (i > 0) {
                --i;
                expr const & local = locals[i];
                if (local_pp_name(local) == from) {
                    from_local = local;
                    break;
                }
            }
            if (!from_local)
                return none_proof_state();
            expr to_local = mk_local(mlocal_name(*from_local), to, mlocal_type(*from_local), local_info(*from_local));
            auto fn = [&](expr const & e) {
                if (is_local(e) && mlocal_name(e) == mlocal_name(*from_local))
                    return some_expr(to_local);
                else
                    return none_expr();
            };
            goal new_g(replace(g.get_meta(), fn), replace(g.get_type(), fn));
            return some(proof_state(s, goals(new_g, rest_gs)));
        });
}

static name * g_rename_tactic_name = nullptr;

expr mk_rename_tactic_macro(name const & from, name const & to) {
    expr args[2] = { Const(from), Const(to) };
    return mk_tactic_macro(*g_rename_tactic_name, 2, args);
}

void initialize_rename_tactic() {
    g_rename_tactic_name = new name({"tactic", "rename"});
    auto fn = [](type_checker &, elaborate_fn const &, expr const & e, pos_info_provider const *) {
        check_macro_args(e, 2, "invalid 'rename' tactic, it must have two arguments");
        if (!is_constant(macro_arg(e, 0)) || !is_constant(macro_arg(e, 1)))
            throw expr_to_tactic_exception(e, "invalid 'rename' tactic, arguments must be identifiers");
        return rename_tactic(const_name(macro_arg(e, 0)), const_name(macro_arg(e, 1)));
    };
    register_tactic_macro(*g_rename_tactic_name, fn);
}

void finalize_rename_tactic() {
    delete g_rename_tactic_name;
}
}

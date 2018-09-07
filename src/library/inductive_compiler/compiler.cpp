/*
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Daniel Selsam
*/
#include "kernel/inductive/inductive.h"
#include "kernel/abstract.h"
#include "util/sexpr/option_declarations.h"
#include "library/locals.h"
#include "library/module.h"
#include "library/attribute_manager.h"
#include "library/inductive_compiler/compiler.h"
#include "library/inductive_compiler/basic.h"
#include "library/inductive_compiler/ginductive.h"

namespace lean {
environment add_inner_inductive_declaration(environment const & env, name_generator &, options const & opts,
                                            name_map<implicit_infer_kind> implicit_infer_map,
                                            ginductive_decl & decl, bool is_meta) {
    lean_assert(decl.get_inds().size() == decl.get_intro_rules().size());
    if (decl.is_mutual())
        throw exception("mutual inductive declarations have been disabled");
    return register_ginductive_decl(add_basic_inductive_decl(env, opts, implicit_infer_map, decl, is_meta),
                                    decl, ginductive_kind::BASIC);
}

void initialize_inductive_compiler() {}
void finalize_inductive_compiler() {}

}
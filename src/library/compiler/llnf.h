/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "kernel/environment.h"

namespace lean {
/* Convert expression to Low Level Normal Form (LLNF). This is the last normal form
   before converting to the IR. */
expr to_llnf(environment const & env, expr const & e, bool unboxed_data = false);
void initialize_llnf();
void finalize_llnf();
}
/*
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "kernel/environment.h"

namespace lean {
optional<name> get_implemented_by_attribute(environment const & env, name const & n);
void initialize_implemented_by_attribute();
void finalize_implemented_by_attribute();
}

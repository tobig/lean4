/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "util/object_ref.h"

namespace lean {
object_ref mk_cnstr(unsigned tag, unsigned num_objs, object_ref * objs, unsigned scalar_sz) {
    object_ref r(alloc_cnstr(tag, num_objs, scalar_sz));
    for (unsigned i = 0; i < num_objs; i++) {
        inc(objs[i]);
        cnstr_set_obj(r.raw(), i, objs[i]);
    }
    return r;
}

object_ref mk_cnstr(unsigned tag, unsigned num_objs, object ** objs, unsigned scalar_sz) {
    object_ref r(alloc_cnstr(tag, num_objs, scalar_sz));
    for (unsigned i = 0; i < num_objs; i++) {
        inc(objs[i]);
        cnstr_set_obj(r.raw(), i, objs[i]);
    }
    return r;
}
}
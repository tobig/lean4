/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "runtime/object.h"

namespace lean {
/* Smart point for Lean objects. It is useful for writing C++ code that manipulates Lean objects.  */
class object_ref {
    object * m_obj;
public:
    object_ref():m_obj(nullptr) {}
    explicit object_ref(object * o):m_obj(o) {
        lean_assert(get_rc(o) > 0);
    }
    object_ref(object_ref const & s):m_obj(s.m_obj) { if (m_obj) inc(m_obj); }
    object_ref(object_ref && s):m_obj(s.m_obj) { s.m_obj = nullptr; }
    ~object_ref() { if (m_obj) dec(m_obj); }
    object_ref & operator=(object_ref const & s) {
        if (s.m_obj)
            inc(s.m_obj);
        object * new_obj = s.m_obj;
        if (m_obj)
            dec(m_obj);
        m_obj = new_obj;
        return *this;
    }
    object_ref & operator=(object_ref && s) {
        if (m_obj)
            dec(m_obj);
        m_obj   = s.m_obj;
        s.m_obj = nullptr;
        return *this;
    }
    object * raw() const { return m_obj; }
    operator object*() const { return m_obj; }
    static void swap(object_ref & a, object_ref & b) { std::swap(a.m_obj, b.m_obj); }
};

object_ref mk_cnstr(unsigned tag, unsigned num_objs, object_ref * objs, unsigned scalar_sz = 0);
object_ref mk_cnstr(unsigned tag, unsigned num_objs, object ** objs, unsigned scalar_sz = 0);
inline object_ref mk_cnstr(unsigned tag, object * o, unsigned scalar_sz = 0) { return mk_cnstr(tag, 1, &o, scalar_sz); }
inline object_ref mk_cnstr(unsigned tag, object_ref const & r, unsigned scalar_sz = 0) { return mk_cnstr(tag, r.raw(), scalar_sz); }
inline object_ref mk_cnstr(unsigned tag, object * o1, object * o2, unsigned scalar_sz = 0) {
    object * os[] = { o1, o2 };
    return mk_cnstr(tag, 2, os, scalar_sz);
}
inline object_ref mk_cnstr(unsigned tag, object_ref const & r1, object_ref const & r2, unsigned scalar_sz = 0) {
    return mk_cnstr(tag, r1.raw(), r2.raw(), scalar_sz);
}
/* The following definition is a low level hack that relies on the fact that sizeof(object_ref) == sizeof(object *). */
inline object_ref const & cnstr_obj_ref(object_ref const & ref, unsigned i) {
    static_assert(sizeof(object_ref) == sizeof(object *), "unexpected object_ref size");
    lean_assert(is_cnstr(ref));
    return reinterpret_cast<object_ref const *>(reinterpret_cast<char*>(ref.raw()) + sizeof(constructor))[i];
}

}
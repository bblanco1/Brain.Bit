#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.TrackedReference
struct TrackedReference_t286;
struct TrackedReference_t286_marshaled;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m1941 (TrackedReference_t286 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m1942 (TrackedReference_t286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m1943 (Object_t * __this /* static, unused */, TrackedReference_t286 * ___x, TrackedReference_t286 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void TrackedReference_t286_marshal(const TrackedReference_t286& unmarshaled, TrackedReference_t286_marshaled& marshaled);
extern "C" void TrackedReference_t286_marshal_back(const TrackedReference_t286_marshaled& marshaled, TrackedReference_t286& unmarshaled);
extern "C" void TrackedReference_t286_marshal_cleanup(TrackedReference_t286_marshaled& marshaled);

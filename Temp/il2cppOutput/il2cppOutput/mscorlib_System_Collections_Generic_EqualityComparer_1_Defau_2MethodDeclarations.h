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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>
struct DefaultComparer_t2278;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::.ctor()
extern "C" void DefaultComparer__ctor_m14181_gshared (DefaultComparer_t2278 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14181(__this, method) (( void (*) (DefaultComparer_t2278 *, const MethodInfo*))DefaultComparer__ctor_m14181_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14182_gshared (DefaultComparer_t2278 * __this, Vector2_t11  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14182(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2278 *, Vector2_t11 , const MethodInfo*))DefaultComparer_GetHashCode_m14182_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector2>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14183_gshared (DefaultComparer_t2278 * __this, Vector2_t11  ___x, Vector2_t11  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14183(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2278 *, Vector2_t11 , Vector2_t11 , const MethodInfo*))DefaultComparer_Equals_m14183_gshared)(__this, ___x, ___y, method)

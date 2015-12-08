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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3146;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m25954_gshared (DefaultComparer_t3146 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25954(__this, method) (( void (*) (DefaultComparer_t3146 *, const MethodInfo*))DefaultComparer__ctor_m25954_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25955_gshared (DefaultComparer_t3146 * __this, DateTimeOffset_t2050  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25955(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3146 *, DateTimeOffset_t2050 , const MethodInfo*))DefaultComparer_GetHashCode_m25955_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25956_gshared (DefaultComparer_t3146 * __this, DateTimeOffset_t2050  ___x, DateTimeOffset_t2050  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25956(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3146 *, DateTimeOffset_t2050 , DateTimeOffset_t2050 , const MethodInfo*))DefaultComparer_Equals_m25956_gshared)(__this, ___x, ___y, method)

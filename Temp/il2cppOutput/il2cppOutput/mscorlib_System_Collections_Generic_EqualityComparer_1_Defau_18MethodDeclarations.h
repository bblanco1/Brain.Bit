﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>
struct DefaultComparer_t3114;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::.ctor()
extern "C" void DefaultComparer__ctor_m25716_gshared (DefaultComparer_t3114 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25716(__this, method) (( void (*) (DefaultComparer_t3114 *, const MethodInfo*))DefaultComparer__ctor_m25716_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25717_gshared (DefaultComparer_t3114 * __this, CustomAttributeNamedArgument_t1727  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25717(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3114 *, CustomAttributeNamedArgument_t1727 , const MethodInfo*))DefaultComparer_GetHashCode_m25717_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25718_gshared (DefaultComparer_t3114 * __this, CustomAttributeNamedArgument_t1727  ___x, CustomAttributeNamedArgument_t1727  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25718(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3114 *, CustomAttributeNamedArgument_t1727 , CustomAttributeNamedArgument_t1727 , const MethodInfo*))DefaultComparer_Equals_m25718_gshared)(__this, ___x, ___y, method)

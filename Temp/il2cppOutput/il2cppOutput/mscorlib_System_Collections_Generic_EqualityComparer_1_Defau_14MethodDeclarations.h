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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>
struct DefaultComparer_t2955;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::.ctor()
extern "C" void DefaultComparer__ctor_m23884_gshared (DefaultComparer_t2955 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m23884(__this, method) (( void (*) (DefaultComparer_t2955 *, const MethodInfo*))DefaultComparer__ctor_m23884_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m23885_gshared (DefaultComparer_t2955 * __this, TargetSearchResult_t910  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m23885(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2955 *, TargetSearchResult_t910 , const MethodInfo*))DefaultComparer_GetHashCode_m23885_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.TargetFinder/TargetSearchResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m23886_gshared (DefaultComparer_t2955 * __this, TargetSearchResult_t910  ___x, TargetSearchResult_t910  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m23886(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2955 *, TargetSearchResult_t910 , TargetSearchResult_t910 , const MethodInfo*))DefaultComparer_Equals_m23886_gshared)(__this, ___x, ___y, method)

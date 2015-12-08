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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.WebCamProfile/ProfileData>
struct DefaultComparer_t2981;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.WebCamProfile/ProfileData>::.ctor()
extern "C" void DefaultComparer__ctor_m24191_gshared (DefaultComparer_t2981 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m24191(__this, method) (( void (*) (DefaultComparer_t2981 *, const MethodInfo*))DefaultComparer__ctor_m24191_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.WebCamProfile/ProfileData>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m24192_gshared (DefaultComparer_t2981 * __this, ProfileData_t924  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m24192(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2981 *, ProfileData_t924 , const MethodInfo*))DefaultComparer_GetHashCode_m24192_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Vuforia.WebCamProfile/ProfileData>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m24193_gshared (DefaultComparer_t2981 * __this, ProfileData_t924  ___x, ProfileData_t924  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m24193(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2981 *, ProfileData_t924 , ProfileData_t924 , const MethodInfo*))DefaultComparer_Equals_m24193_gshared)(__this, ___x, ___y, method)

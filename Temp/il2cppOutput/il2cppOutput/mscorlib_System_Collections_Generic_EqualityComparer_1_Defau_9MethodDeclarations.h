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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t2522;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m17064_gshared (DefaultComparer_t2522 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17064(__this, method) (( void (*) (DefaultComparer_t2522 *, const MethodInfo*))DefaultComparer__ctor_m17064_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17065_gshared (DefaultComparer_t2522 * __this, RaycastResult_t532  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17065(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2522 *, RaycastResult_t532 , const MethodInfo*))DefaultComparer_GetHashCode_m17065_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17066_gshared (DefaultComparer_t2522 * __this, RaycastResult_t532  ___x, RaycastResult_t532  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17066(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2522 *, RaycastResult_t532 , RaycastResult_t532 , const MethodInfo*))DefaultComparer_Equals_m17066_gshared)(__this, ___x, ___y, method)

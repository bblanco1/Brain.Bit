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

// System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>
struct Transform_1_t2754;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t206;
// System.AsyncCallback
struct AsyncCallback_t207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m20467_gshared (Transform_1_t2754 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m20467(__this, ___object, ___method, method) (( void (*) (Transform_1_t2754 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m20467_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2744  Transform_1_Invoke_m20468_gshared (Transform_1_t2754 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m20468(__this, ___key, ___value, method) (( KeyValuePair_2_t2744  (*) (Transform_1_t2754 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m20468_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m20469_gshared (Transform_1_t2754 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t207 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m20469(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2754 *, int32_t, Object_t *, AsyncCallback_t207 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m20469_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Vuforia.Image/PIXEL_FORMAT,System.Object,System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2744  Transform_1_EndInvoke_m20470_gshared (Transform_1_t2754 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m20470(__this, ___result, method) (( KeyValuePair_2_t2744  (*) (Transform_1_t2754 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m20470_gshared)(__this, ___result, method)
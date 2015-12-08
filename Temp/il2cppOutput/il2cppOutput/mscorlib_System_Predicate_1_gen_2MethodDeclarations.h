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

// System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Predicate_1_t1009;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t206;
// System.AsyncCallback
struct AsyncCallback_t207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m5801_gshared (Predicate_1_t1009 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m5801(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1009 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m5801_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m21388_gshared (Predicate_1_t1009 * __this, TrackableResultData_t832  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m21388(__this, ___obj, method) (( bool (*) (Predicate_1_t1009 *, TrackableResultData_t832 , const MethodInfo*))Predicate_1_Invoke_m21388_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m21389_gshared (Predicate_1_t1009 * __this, TrackableResultData_t832  ___obj, AsyncCallback_t207 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m21389(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1009 *, TrackableResultData_t832 , AsyncCallback_t207 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21389_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.VuforiaManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m21390_gshared (Predicate_1_t1009 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m21390(__this, ___result, method) (( bool (*) (Predicate_1_t1009 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21390_gshared)(__this, ___result, method)

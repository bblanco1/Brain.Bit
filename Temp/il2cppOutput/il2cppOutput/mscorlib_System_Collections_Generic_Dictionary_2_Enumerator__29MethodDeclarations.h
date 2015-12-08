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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Dictionary_2_t1070;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23452_gshared (Enumerator_t2920 * __this, Dictionary_2_t1070 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23452(__this, ___dictionary, method) (( void (*) (Enumerator_t2920 *, Dictionary_2_t1070 *, const MethodInfo*))Enumerator__ctor_m23452_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23453_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23453(__this, method) (( Object_t * (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23453_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23454_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m23454(__this, method) (( void (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m23454_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1459  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23455_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23455(__this, method) (( DictionaryEntry_t1459  (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23455_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23456_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23456(__this, method) (( Object_t * (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23456_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23457_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23457(__this, method) (( Object_t * (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23457_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23458_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23458(__this, method) (( bool (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_MoveNext_m23458_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Current()
extern "C" KeyValuePair_2_t2916  Enumerator_get_Current_m23459_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23459(__this, method) (( KeyValuePair_2_t2916  (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_get_Current_m23459_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m23460_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23460(__this, method) (( int32_t (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_get_CurrentKey_m23460_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_CurrentValue()
extern "C" TrackableResultData_t832  Enumerator_get_CurrentValue_m23461_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23461(__this, method) (( TrackableResultData_t832  (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_get_CurrentValue_m23461_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Reset()
extern "C" void Enumerator_Reset_m23462_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_Reset_m23462(__this, method) (( void (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_Reset_m23462_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::VerifyState()
extern "C" void Enumerator_VerifyState_m23463_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23463(__this, method) (( void (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_VerifyState_m23463_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23464_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23464(__this, method) (( void (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_VerifyCurrent_m23464_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Dispose()
extern "C" void Enumerator_Dispose_m23465_gshared (Enumerator_t2920 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23465(__this, method) (( void (*) (Enumerator_t2920 *, const MethodInfo*))Enumerator_Dispose_m23465_gshared)(__this, method)

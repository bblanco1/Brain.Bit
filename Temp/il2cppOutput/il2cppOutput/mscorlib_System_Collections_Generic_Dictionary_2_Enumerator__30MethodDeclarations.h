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

// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct Dictionary_2_t1071;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23600_gshared (Enumerator_t2936 * __this, Dictionary_2_t1071 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23600(__this, ___dictionary, method) (( void (*) (Enumerator_t2936 *, Dictionary_2_t1071 *, const MethodInfo*))Enumerator__ctor_m23600_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23601_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23601(__this, method) (( Object_t * (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23601_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m23602_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m23602(__this, method) (( void (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m23602_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1459  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23603_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23603(__this, method) (( DictionaryEntry_t1459  (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23603_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23604_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23604(__this, method) (( Object_t * (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23604_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23605_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23605(__this, method) (( Object_t * (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23605_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23606_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23606(__this, method) (( bool (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_MoveNext_m23606_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Current()
extern "C" KeyValuePair_2_t2931  Enumerator_get_Current_m23607_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23607(__this, method) (( KeyValuePair_2_t2931  (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_get_Current_m23607_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m23608_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23608(__this, method) (( int32_t (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_get_CurrentKey_m23608_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_CurrentValue()
extern "C" VirtualButtonData_t833  Enumerator_get_CurrentValue_m23609_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23609(__this, method) (( VirtualButtonData_t833  (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_get_CurrentValue_m23609_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Reset()
extern "C" void Enumerator_Reset_m23610_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_Reset_m23610(__this, method) (( void (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_Reset_m23610_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::VerifyState()
extern "C" void Enumerator_VerifyState_m23611_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23611(__this, method) (( void (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_VerifyState_m23611_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23612_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23612(__this, method) (( void (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_VerifyCurrent_m23612_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Dispose()
extern "C" void Enumerator_Dispose_m23613_gshared (Enumerator_t2936 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23613(__this, method) (( void (*) (Enumerator_t2936 *, const MethodInfo*))Enumerator_Dispose_m23613_gshared)(__this, method)

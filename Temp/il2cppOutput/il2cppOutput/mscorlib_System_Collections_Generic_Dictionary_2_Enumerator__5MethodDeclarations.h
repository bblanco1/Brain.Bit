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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2384;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15568_gshared (Enumerator_t2390 * __this, Dictionary_2_t2384 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15568(__this, ___dictionary, method) (( void (*) (Enumerator_t2390 *, Dictionary_2_t2384 *, const MethodInfo*))Enumerator__ctor_m15568_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15569_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15569(__this, method) (( Object_t * (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15569_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m15570_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m15570(__this, method) (( void (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m15570_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1459  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15571_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15571(__this, method) (( DictionaryEntry_t1459  (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15571_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15572_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15572(__this, method) (( Object_t * (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15572_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15573_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15573(__this, method) (( Object_t * (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15573_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15574_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15574(__this, method) (( bool (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_MoveNext_m15574_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2386  Enumerator_get_Current_m15575_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15575(__this, method) (( KeyValuePair_2_t2386  (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_get_Current_m15575_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m15576_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15576(__this, method) (( int32_t (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_get_CurrentKey_m15576_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m15577_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15577(__this, method) (( Object_t * (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_get_CurrentValue_m15577_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m15578_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_Reset_m15578(__this, method) (( void (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_Reset_m15578_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m15579_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15579(__this, method) (( void (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_VerifyState_m15579_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15580_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15580(__this, method) (( void (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_VerifyCurrent_m15580_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m15581_gshared (Enumerator_t2390 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15581(__this, method) (( void (*) (Enumerator_t2390 *, const MethodInfo*))Enumerator_Dispose_m15581_gshared)(__this, method)

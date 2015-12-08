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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2440;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2362;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t453;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t3193;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t3194;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1274;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t2445;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2449;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m16163_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m16163(__this, method) (( void (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2__ctor_m16163_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m16165_gshared (Dictionary_2_t2440 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m16165(__this, ___comparer, method) (( void (*) (Dictionary_2_t2440 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m16165_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m16167_gshared (Dictionary_2_t2440 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m16167(__this, ___capacity, method) (( void (*) (Dictionary_2_t2440 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m16167_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m16169_gshared (Dictionary_2_t2440 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m16169(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2440 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2__ctor_m16169_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m16171_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16171(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2440 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m16171_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m16173_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16173(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2440 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m16173_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m16175_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m16175(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2440 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m16175_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m16177_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m16177(__this, ___key, method) (( bool (*) (Dictionary_2_t2440 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m16177_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m16179_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m16179(__this, ___key, method) (( void (*) (Dictionary_2_t2440 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m16179_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16181_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16181(__this, method) (( bool (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16181_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16183_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16183(__this, method) (( Object_t * (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16183_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16185_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16185(__this, method) (( bool (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16185_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16187_gshared (Dictionary_2_t2440 * __this, KeyValuePair_2_t2442  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16187(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2440 *, KeyValuePair_2_t2442 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16187_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16189_gshared (Dictionary_2_t2440 * __this, KeyValuePair_2_t2442  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16189(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2440 *, KeyValuePair_2_t2442 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16189_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16191_gshared (Dictionary_2_t2440 * __this, KeyValuePair_2U5BU5D_t3193* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16191(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2440 *, KeyValuePair_2U5BU5D_t3193*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16191_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16193_gshared (Dictionary_2_t2440 * __this, KeyValuePair_2_t2442  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16193(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2440 *, KeyValuePair_2_t2442 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16193_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m16195_gshared (Dictionary_2_t2440 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16195(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2440 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m16195_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16197_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16197(__this, method) (( Object_t * (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16197_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16199_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16199(__this, method) (( Object_t* (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16199_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16201_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16201(__this, method) (( Object_t * (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16201_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m16203_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m16203(__this, method) (( int32_t (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_get_Count_m16203_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m16205_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m16205(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2440 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m16205_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m16207_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m16207(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2440 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m16207_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m16209_gshared (Dictionary_2_t2440 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m16209(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2440 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m16209_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m16211_gshared (Dictionary_2_t2440 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m16211(__this, ___size, method) (( void (*) (Dictionary_2_t2440 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m16211_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16213_gshared (Dictionary_2_t2440 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16213(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2440 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16213_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2442  Dictionary_2_make_pair_m16215_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16215(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2442  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m16215_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m16217_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m16217(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m16217_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m16219_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16219(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m16219_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16221_gshared (Dictionary_2_t2440 * __this, KeyValuePair_2U5BU5D_t3193* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16221(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2440 *, KeyValuePair_2U5BU5D_t3193*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16221_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m16223_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16223(__this, method) (( void (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_Resize_m16223_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16225_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16225(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2440 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m16225_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m16227_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16227(__this, method) (( void (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_Clear_m16227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16229_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16229(__this, ___key, method) (( bool (*) (Dictionary_2_t2440 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16229_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16231_gshared (Dictionary_2_t2440 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16231(__this, ___value, method) (( bool (*) (Dictionary_2_t2440 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m16231_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16233_gshared (Dictionary_2_t2440 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16233(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2440 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2_GetObjectData_m16233_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16235_gshared (Dictionary_2_t2440 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16235(__this, ___sender, method) (( void (*) (Dictionary_2_t2440 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16235_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16237_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16237(__this, ___key, method) (( bool (*) (Dictionary_2_t2440 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16237_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16239_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16239(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2440 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m16239_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t2445 * Dictionary_2_get_Keys_m16241_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m16241(__this, method) (( KeyCollection_t2445 * (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_get_Keys_m16241_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2449 * Dictionary_2_get_Values_m16243_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16243(__this, method) (( ValueCollection_t2449 * (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_get_Values_m16243_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16245_gshared (Dictionary_2_t2440 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16245(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2440 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16245_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m16247_gshared (Dictionary_2_t2440 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16247(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2440 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16247_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16249_gshared (Dictionary_2_t2440 * __this, KeyValuePair_2_t2442  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16249(__this, ___pair, method) (( bool (*) (Dictionary_2_t2440 *, KeyValuePair_2_t2442 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16249_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2447  Dictionary_2_GetEnumerator_m16251_gshared (Dictionary_2_t2440 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16251(__this, method) (( Enumerator_t2447  (*) (Dictionary_2_t2440 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16251_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1459  Dictionary_2_U3CCopyToU3Em__0_m16253_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16253(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1459  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16253_gshared)(__this /* static, unused */, ___key, ___value, method)

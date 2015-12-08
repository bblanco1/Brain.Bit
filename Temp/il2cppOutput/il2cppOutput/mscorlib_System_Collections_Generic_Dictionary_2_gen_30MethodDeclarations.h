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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2408;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2362;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t453;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t3189;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t3190;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1274;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2412;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2416;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__7.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m15775_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15775(__this, method) (( void (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2__ctor_m15775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15776_gshared (Dictionary_2_t2408 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15776(__this, ___comparer, method) (( void (*) (Dictionary_2_t2408 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15776_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15778_gshared (Dictionary_2_t2408 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15778(__this, ___capacity, method) (( void (*) (Dictionary_2_t2408 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15778_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15780_gshared (Dictionary_2_t2408 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15780(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2408 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2__ctor_m15780_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15782_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15782(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2408 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15782_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15784_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15784(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2408 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15784_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15786_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15786(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2408 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15786_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15788_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15788(__this, ___key, method) (( bool (*) (Dictionary_2_t2408 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15788_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15790_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15790(__this, ___key, method) (( void (*) (Dictionary_2_t2408 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15790_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15792_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15792(__this, method) (( bool (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15792_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15794_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15794(__this, method) (( Object_t * (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15794_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15796_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15796(__this, method) (( bool (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15796_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15798_gshared (Dictionary_2_t2408 * __this, KeyValuePair_2_t2410  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15798(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2408 *, KeyValuePair_2_t2410 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15798_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15800_gshared (Dictionary_2_t2408 * __this, KeyValuePair_2_t2410  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15800(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2408 *, KeyValuePair_2_t2410 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15800_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15802_gshared (Dictionary_2_t2408 * __this, KeyValuePair_2U5BU5D_t3189* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15802(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2408 *, KeyValuePair_2U5BU5D_t3189*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15802_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15804_gshared (Dictionary_2_t2408 * __this, KeyValuePair_2_t2410  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15804(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2408 *, KeyValuePair_2_t2410 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15804_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15806_gshared (Dictionary_2_t2408 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15806(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2408 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15806_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15808_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15808(__this, method) (( Object_t * (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15808_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15810_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15810(__this, method) (( Object_t* (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15810_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15812_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15812(__this, method) (( Object_t * (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15812_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15814_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15814(__this, method) (( int32_t (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_get_Count_m15814_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m15816_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15816(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2408 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m15816_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15818_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15818(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2408 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15818_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15820_gshared (Dictionary_2_t2408 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15820(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2408 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15820_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15822_gshared (Dictionary_2_t2408 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15822(__this, ___size, method) (( void (*) (Dictionary_2_t2408 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15822_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15824_gshared (Dictionary_2_t2408 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15824(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2408 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15824_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2410  Dictionary_2_make_pair_m15826_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15826(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2410  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15826_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m15828_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15828(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15828_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m15830_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15830(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15830_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15832_gshared (Dictionary_2_t2408 * __this, KeyValuePair_2U5BU5D_t3189* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15832(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2408 *, KeyValuePair_2U5BU5D_t3189*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15832_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m15834_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15834(__this, method) (( void (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_Resize_m15834_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15836_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15836(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2408 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m15836_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m15838_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15838(__this, method) (( void (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_Clear_m15838_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15840_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15840(__this, ___key, method) (( bool (*) (Dictionary_2_t2408 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m15840_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15842_gshared (Dictionary_2_t2408 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15842(__this, ___value, method) (( bool (*) (Dictionary_2_t2408 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15842_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15844_gshared (Dictionary_2_t2408 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15844(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2408 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2_GetObjectData_m15844_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15846_gshared (Dictionary_2_t2408 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15846(__this, ___sender, method) (( void (*) (Dictionary_2_t2408 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15846_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15848_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15848(__this, ___key, method) (( bool (*) (Dictionary_2_t2408 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m15848_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15850_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15850(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2408 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15850_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2412 * Dictionary_2_get_Keys_m15852_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15852(__this, method) (( KeyCollection_t2412 * (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_get_Keys_m15852_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2416 * Dictionary_2_get_Values_m15853_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15853(__this, method) (( ValueCollection_t2416 * (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_get_Values_m15853_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m15855_gshared (Dictionary_2_t2408 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15855(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2408 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15855_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m15857_gshared (Dictionary_2_t2408 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15857(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2408 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15857_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15859_gshared (Dictionary_2_t2408 * __this, KeyValuePair_2_t2410  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15859(__this, ___pair, method) (( bool (*) (Dictionary_2_t2408 *, KeyValuePair_2_t2410 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15859_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2414  Dictionary_2_GetEnumerator_m15861_gshared (Dictionary_2_t2408 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15861(__this, method) (( Enumerator_t2414  (*) (Dictionary_2_t2408 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15861_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1459  Dictionary_2_U3CCopyToU3Em__0_m15863_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15863(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1459  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15863_gshared)(__this /* static, unused */, ___key, ___value, method)

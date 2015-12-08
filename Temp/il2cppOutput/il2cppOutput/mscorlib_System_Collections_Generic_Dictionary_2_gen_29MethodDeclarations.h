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
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2383;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t453;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3184;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t3185;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1274;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t2388;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t2392;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m15445_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15445(__this, method) (( void (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2__ctor_m15445_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15447_gshared (Dictionary_2_t2384 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15447(__this, ___comparer, method) (( void (*) (Dictionary_2_t2384 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15447_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15449_gshared (Dictionary_2_t2384 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15449(__this, ___capacity, method) (( void (*) (Dictionary_2_t2384 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15449_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15451_gshared (Dictionary_2_t2384 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15451(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2384 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2__ctor_m15451_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15453_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15453(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15453_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15455_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15455(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2384 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15455_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15457_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15457(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2384 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15457_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15459_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15459(__this, ___key, method) (( bool (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15459_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15461_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15461(__this, ___key, method) (( void (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15461_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15463_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15463(__this, method) (( bool (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15463_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15465_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15465(__this, method) (( Object_t * (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15465_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15467_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15467(__this, method) (( bool (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15467_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15469_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2_t2386  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15469(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2384 *, KeyValuePair_2_t2386 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15469_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15471_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2_t2386  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15471(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2384 *, KeyValuePair_2_t2386 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15471_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15473_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2U5BU5D_t3184* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15473(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2384 *, KeyValuePair_2U5BU5D_t3184*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15473_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15475_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2_t2386  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15475(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2384 *, KeyValuePair_2_t2386 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15475_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15477_gshared (Dictionary_2_t2384 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15477(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2384 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15477_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15479_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15479(__this, method) (( Object_t * (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15479_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15481_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15481(__this, method) (( Object_t* (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15481_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15483_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15483(__this, method) (( Object_t * (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15483_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15485_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15485(__this, method) (( int32_t (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_get_Count_m15485_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m15487_gshared (Dictionary_2_t2384 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15487(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2384 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m15487_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15489_gshared (Dictionary_2_t2384 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15489(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2384 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m15489_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15491_gshared (Dictionary_2_t2384 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15491(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2384 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15491_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15493_gshared (Dictionary_2_t2384 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15493(__this, ___size, method) (( void (*) (Dictionary_2_t2384 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15493_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15495_gshared (Dictionary_2_t2384 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15495(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2384 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15495_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2386  Dictionary_2_make_pair_m15497_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15497(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2386  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m15497_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m15499_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15499(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m15499_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m15501_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15501(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m15501_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15503_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2U5BU5D_t3184* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15503(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2384 *, KeyValuePair_2U5BU5D_t3184*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15503_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m15505_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15505(__this, method) (( void (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_Resize_m15505_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15507_gshared (Dictionary_2_t2384 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15507(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2384 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m15507_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m15509_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15509(__this, method) (( void (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_Clear_m15509_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15511_gshared (Dictionary_2_t2384 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15511(__this, ___key, method) (( bool (*) (Dictionary_2_t2384 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m15511_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15513_gshared (Dictionary_2_t2384 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15513(__this, ___value, method) (( bool (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m15513_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15515_gshared (Dictionary_2_t2384 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15515(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2384 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2_GetObjectData_m15515_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15517_gshared (Dictionary_2_t2384 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15517(__this, ___sender, method) (( void (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15517_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15519_gshared (Dictionary_2_t2384 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15519(__this, ___key, method) (( bool (*) (Dictionary_2_t2384 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m15519_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15521_gshared (Dictionary_2_t2384 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15521(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2384 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m15521_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t2388 * Dictionary_2_get_Keys_m15523_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15523(__this, method) (( KeyCollection_t2388 * (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_get_Keys_m15523_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t2392 * Dictionary_2_get_Values_m15525_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15525(__this, method) (( ValueCollection_t2392 * (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_get_Values_m15525_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m15527_gshared (Dictionary_2_t2384 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15527(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15527_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m15529_gshared (Dictionary_2_t2384 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15529(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2384 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15529_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15531_gshared (Dictionary_2_t2384 * __this, KeyValuePair_2_t2386  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15531(__this, ___pair, method) (( bool (*) (Dictionary_2_t2384 *, KeyValuePair_2_t2386 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15531_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t2390  Dictionary_2_GetEnumerator_m15533_gshared (Dictionary_2_t2384 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15533(__this, method) (( Enumerator_t2390  (*) (Dictionary_2_t2384 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15533_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1459  Dictionary_2_U3CCopyToU3Em__0_m15535_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15535(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1459  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15535_gshared)(__this /* static, unused */, ___key, ___value, method)

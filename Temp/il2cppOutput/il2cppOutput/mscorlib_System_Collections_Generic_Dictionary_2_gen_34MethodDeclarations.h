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

// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t2825;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2362;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t453;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>[]
struct KeyValuePair_2U5BU5D_t3250;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
struct IEnumerator_1_t3251;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1274;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.UInt16>
struct KeyCollection_t2830;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.UInt16>
struct ValueCollection_t2834;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_22.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__22.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor()
extern "C" void Dictionary_2__ctor_m21607_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m21607(__this, method) (( void (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2__ctor_m21607_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m21609_gshared (Dictionary_2_t2825 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m21609(__this, ___comparer, method) (( void (*) (Dictionary_2_t2825 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m21609_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m21611_gshared (Dictionary_2_t2825 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m21611(__this, ___capacity, method) (( void (*) (Dictionary_2_t2825 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m21611_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m21613_gshared (Dictionary_2_t2825 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m21613(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2825 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2__ctor_m21613_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m21615_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m21615(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2825 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m21615_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m21617_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m21617(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2825 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m21617_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m21619_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m21619(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2825 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m21619_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m21621_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m21621(__this, ___key, method) (( bool (*) (Dictionary_2_t2825 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m21621_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m21623_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m21623(__this, ___key, method) (( void (*) (Dictionary_2_t2825 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m21623_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21625_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21625(__this, method) (( bool (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m21625_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21627_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21627(__this, method) (( Object_t * (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21627_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21629_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21629(__this, method) (( bool (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21629_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21631_gshared (Dictionary_2_t2825 * __this, KeyValuePair_2_t2827  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21631(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2825 *, KeyValuePair_2_t2827 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21631_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21633_gshared (Dictionary_2_t2825 * __this, KeyValuePair_2_t2827  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21633(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2825 *, KeyValuePair_2_t2827 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21633_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21635_gshared (Dictionary_2_t2825 * __this, KeyValuePair_2U5BU5D_t3250* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21635(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2825 *, KeyValuePair_2U5BU5D_t3250*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21635_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21637_gshared (Dictionary_2_t2825 * __this, KeyValuePair_2_t2827  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21637(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2825 *, KeyValuePair_2_t2827 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21637_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21639_gshared (Dictionary_2_t2825 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21639(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2825 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21639_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21641_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21641(__this, method) (( Object_t * (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21641_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21643_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21643(__this, method) (( Object_t* (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21643_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21645_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21645(__this, method) (( Object_t * (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21645_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21647_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21647(__this, method) (( int32_t (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_get_Count_m21647_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Item(TKey)
extern "C" uint16_t Dictionary_2_get_Item_m21649_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21649(__this, ___key, method) (( uint16_t (*) (Dictionary_2_t2825 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21649_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21651_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21651(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2825 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_set_Item_m21651_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21653_gshared (Dictionary_2_t2825 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21653(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2825 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21653_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21655_gshared (Dictionary_2_t2825 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21655(__this, ___size, method) (( void (*) (Dictionary_2_t2825 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21655_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21657_gshared (Dictionary_2_t2825 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21657(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2825 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21657_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2827  Dictionary_2_make_pair_m21659_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21659(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2827  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_make_pair_m21659_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21661_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21661(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_key_m21661_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::pick_value(TKey,TValue)
extern "C" uint16_t Dictionary_2_pick_value_m21663_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21663(__this /* static, unused */, ___key, ___value, method) (( uint16_t (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_pick_value_m21663_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21665_gshared (Dictionary_2_t2825 * __this, KeyValuePair_2U5BU5D_t3250* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21665(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2825 *, KeyValuePair_2U5BU5D_t3250*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21665_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Resize()
extern "C" void Dictionary_2_Resize_m21667_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21667(__this, method) (( void (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_Resize_m21667_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21669_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21669(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2825 *, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_Add_m21669_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Clear()
extern "C" void Dictionary_2_Clear_m21671_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21671(__this, method) (( void (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_Clear_m21671_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21673_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21673(__this, ___key, method) (( bool (*) (Dictionary_2_t2825 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21673_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21675_gshared (Dictionary_2_t2825 * __this, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21675(__this, ___value, method) (( bool (*) (Dictionary_2_t2825 *, uint16_t, const MethodInfo*))Dictionary_2_ContainsValue_m21675_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21677_gshared (Dictionary_2_t2825 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21677(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2825 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2_GetObjectData_m21677_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21679_gshared (Dictionary_2_t2825 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21679(__this, ___sender, method) (( void (*) (Dictionary_2_t2825 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21679_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21681_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21681(__this, ___key, method) (( bool (*) (Dictionary_2_t2825 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21681_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21683_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, uint16_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21683(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2825 *, Object_t *, uint16_t*, const MethodInfo*))Dictionary_2_TryGetValue_m21683_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Keys()
extern "C" KeyCollection_t2830 * Dictionary_2_get_Keys_m21685_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21685(__this, method) (( KeyCollection_t2830 * (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_get_Keys_m21685_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::get_Values()
extern "C" ValueCollection_t2834 * Dictionary_2_get_Values_m21687_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21687(__this, method) (( ValueCollection_t2834 * (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_get_Values_m21687_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21689_gshared (Dictionary_2_t2825 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21689(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2825 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21689_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ToTValue(System.Object)
extern "C" uint16_t Dictionary_2_ToTValue_m21691_gshared (Dictionary_2_t2825 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21691(__this, ___value, method) (( uint16_t (*) (Dictionary_2_t2825 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21691_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21693_gshared (Dictionary_2_t2825 * __this, KeyValuePair_2_t2827  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21693(__this, ___pair, method) (( bool (*) (Dictionary_2_t2825 *, KeyValuePair_2_t2827 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21693_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::GetEnumerator()
extern "C" Enumerator_t2832  Dictionary_2_GetEnumerator_m21695_gshared (Dictionary_2_t2825 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21695(__this, method) (( Enumerator_t2832  (*) (Dictionary_2_t2825 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21695_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1459  Dictionary_2_U3CCopyToU3Em__0_m21697_gshared (Object_t * __this /* static, unused */, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21697(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1459  (*) (Object_t * /* static, unused */, Object_t *, uint16_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21697_gshared)(__this /* static, unused */, ___key, ___value, method)

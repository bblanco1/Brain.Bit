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

// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct Dictionary_2_t2742;
// System.Collections.Generic.IEqualityComparer`1<Vuforia.Image/PIXEL_FORMAT>
struct IEqualityComparer_1_t2741;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t453;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>[]
struct KeyValuePair_2U5BU5D_t3236;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>>
struct IEnumerator_1_t3237;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1274;
// System.Collections.Generic.Dictionary`2/KeyCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct KeyCollection_t2747;
// System.Collections.Generic.Dictionary`2/ValueCollection<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct ValueCollection_t2751;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_17.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__17.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m20293_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20293(__this, method) (( void (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2__ctor_m20293_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20295_gshared (Dictionary_2_t2742 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20295(__this, ___comparer, method) (( void (*) (Dictionary_2_t2742 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20295_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20297_gshared (Dictionary_2_t2742 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20297(__this, ___capacity, method) (( void (*) (Dictionary_2_t2742 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20297_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20299_gshared (Dictionary_2_t2742 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20299(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2742 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2__ctor_m20299_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20301_gshared (Dictionary_2_t2742 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20301(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2742 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20301_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20303_gshared (Dictionary_2_t2742 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20303(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2742 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20303_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20305_gshared (Dictionary_2_t2742 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20305(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2742 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20305_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20307_gshared (Dictionary_2_t2742 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20307(__this, ___key, method) (( bool (*) (Dictionary_2_t2742 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20307_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20309_gshared (Dictionary_2_t2742 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20309(__this, ___key, method) (( void (*) (Dictionary_2_t2742 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20309_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20311_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20311(__this, method) (( bool (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20311_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20313_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20313(__this, method) (( Object_t * (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20313_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20315_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20315(__this, method) (( bool (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20315_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20317_gshared (Dictionary_2_t2742 * __this, KeyValuePair_2_t2744  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20317(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2742 *, KeyValuePair_2_t2744 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20317_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20319_gshared (Dictionary_2_t2742 * __this, KeyValuePair_2_t2744  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20319(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2742 *, KeyValuePair_2_t2744 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20319_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20321_gshared (Dictionary_2_t2742 * __this, KeyValuePair_2U5BU5D_t3236* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20321(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2742 *, KeyValuePair_2U5BU5D_t3236*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20321_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20323_gshared (Dictionary_2_t2742 * __this, KeyValuePair_2_t2744  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20323(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2742 *, KeyValuePair_2_t2744 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20323_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20325_gshared (Dictionary_2_t2742 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20325(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2742 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20325_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20327_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20327(__this, method) (( Object_t * (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20327_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20329_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20329(__this, method) (( Object_t* (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20329_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20331_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20331(__this, method) (( Object_t * (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20331_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20333_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20333(__this, method) (( int32_t (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_get_Count_m20333_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m20335_gshared (Dictionary_2_t2742 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20335(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2742 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m20335_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20337_gshared (Dictionary_2_t2742 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20337(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2742 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m20337_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20339_gshared (Dictionary_2_t2742 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20339(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2742 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20339_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20341_gshared (Dictionary_2_t2742 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20341(__this, ___size, method) (( void (*) (Dictionary_2_t2742 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20341_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20343_gshared (Dictionary_2_t2742 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20343(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2742 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20343_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2744  Dictionary_2_make_pair_m20345_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20345(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2744  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m20345_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m20347_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20347(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m20347_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m20349_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20349(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m20349_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20351_gshared (Dictionary_2_t2742 * __this, KeyValuePair_2U5BU5D_t3236* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20351(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2742 *, KeyValuePair_2U5BU5D_t3236*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20351_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m20353_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20353(__this, method) (( void (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_Resize_m20353_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20355_gshared (Dictionary_2_t2742 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20355(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2742 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m20355_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m20357_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20357(__this, method) (( void (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_Clear_m20357_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20359_gshared (Dictionary_2_t2742 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20359(__this, ___key, method) (( bool (*) (Dictionary_2_t2742 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m20359_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20361_gshared (Dictionary_2_t2742 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20361(__this, ___value, method) (( bool (*) (Dictionary_2_t2742 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m20361_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20363_gshared (Dictionary_2_t2742 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20363(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2742 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2_GetObjectData_m20363_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20365_gshared (Dictionary_2_t2742 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20365(__this, ___sender, method) (( void (*) (Dictionary_2_t2742 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20365_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20367_gshared (Dictionary_2_t2742 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20367(__this, ___key, method) (( bool (*) (Dictionary_2_t2742 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m20367_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20369_gshared (Dictionary_2_t2742 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20369(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2742 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m20369_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Keys()
extern "C" KeyCollection_t2747 * Dictionary_2_get_Keys_m20371_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20371(__this, method) (( KeyCollection_t2747 * (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_get_Keys_m20371_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Values()
extern "C" ValueCollection_t2751 * Dictionary_2_get_Values_m20372_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m20372(__this, method) (( ValueCollection_t2751 * (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_get_Values_m20372_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m20374_gshared (Dictionary_2_t2742 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m20374(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2742 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20374_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m20376_gshared (Dictionary_2_t2742 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m20376(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2742 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20376_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20378_gshared (Dictionary_2_t2742 * __this, KeyValuePair_2_t2744  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20378(__this, ___pair, method) (( bool (*) (Dictionary_2_t2742 *, KeyValuePair_2_t2744 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20378_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::GetEnumerator()
extern "C" Enumerator_t2749  Dictionary_2_GetEnumerator_m20380_gshared (Dictionary_2_t2742 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20380(__this, method) (( Enumerator_t2749  (*) (Dictionary_2_t2742 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20380_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1459  Dictionary_2_U3CCopyToU3Em__0_m20382_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20382(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1459  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20382_gshared)(__this /* static, unused */, ___key, ___value, method)

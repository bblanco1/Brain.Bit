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
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2383;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t453;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>[]
struct KeyValuePair_2U5BU5D_t3272;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>>
struct IEnumerator_1_t3273;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1274;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct KeyCollection_t2918;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct ValueCollection_t2922;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_29.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__29.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor()
extern "C" void Dictionary_2__ctor_m5951_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m5951(__this, method) (( void (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2__ctor_m5951_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23375_gshared (Dictionary_2_t1070 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23375(__this, ___comparer, method) (( void (*) (Dictionary_2_t1070 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23375_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23376_gshared (Dictionary_2_t1070 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23376(__this, ___capacity, method) (( void (*) (Dictionary_2_t1070 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23376_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23377_gshared (Dictionary_2_t1070 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23377(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1070 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2__ctor_m23377_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23378_gshared (Dictionary_2_t1070 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23378(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1070 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23378_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23379_gshared (Dictionary_2_t1070 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23379(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1070 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23379_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23380_gshared (Dictionary_2_t1070 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23380(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1070 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23380_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23381_gshared (Dictionary_2_t1070 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23381(__this, ___key, method) (( bool (*) (Dictionary_2_t1070 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23381_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23382_gshared (Dictionary_2_t1070 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23382(__this, ___key, method) (( void (*) (Dictionary_2_t1070 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23382_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23383_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23383(__this, method) (( bool (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23383_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23384_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23384(__this, method) (( Object_t * (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23384_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23385_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23385(__this, method) (( bool (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23385_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23386_gshared (Dictionary_2_t1070 * __this, KeyValuePair_2_t2916  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23386(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1070 *, KeyValuePair_2_t2916 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23386_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23387_gshared (Dictionary_2_t1070 * __this, KeyValuePair_2_t2916  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23387(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1070 *, KeyValuePair_2_t2916 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23387_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23388_gshared (Dictionary_2_t1070 * __this, KeyValuePair_2U5BU5D_t3272* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23388(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1070 *, KeyValuePair_2U5BU5D_t3272*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23388_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23389_gshared (Dictionary_2_t1070 * __this, KeyValuePair_2_t2916  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23389(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1070 *, KeyValuePair_2_t2916 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23389_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23390_gshared (Dictionary_2_t1070 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23390(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1070 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23390_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23391_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23391(__this, method) (( Object_t * (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23391_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23392_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23392(__this, method) (( Object_t* (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23392_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23393_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23393(__this, method) (( Object_t * (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23393_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23394_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23394(__this, method) (( int32_t (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_get_Count_m23394_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Item(TKey)
extern "C" TrackableResultData_t832  Dictionary_2_get_Item_m23395_gshared (Dictionary_2_t1070 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23395(__this, ___key, method) (( TrackableResultData_t832  (*) (Dictionary_2_t1070 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m23395_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23396_gshared (Dictionary_2_t1070 * __this, int32_t ___key, TrackableResultData_t832  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23396(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1070 *, int32_t, TrackableResultData_t832 , const MethodInfo*))Dictionary_2_set_Item_m23396_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23397_gshared (Dictionary_2_t1070 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23397(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1070 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23397_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23398_gshared (Dictionary_2_t1070 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23398(__this, ___size, method) (( void (*) (Dictionary_2_t1070 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23398_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23399_gshared (Dictionary_2_t1070 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23399(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1070 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23399_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2916  Dictionary_2_make_pair_m23400_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t832  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23400(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2916  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t832 , const MethodInfo*))Dictionary_2_make_pair_m23400_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m23401_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t832  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23401(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t832 , const MethodInfo*))Dictionary_2_pick_key_m23401_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::pick_value(TKey,TValue)
extern "C" TrackableResultData_t832  Dictionary_2_pick_value_m23402_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t832  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23402(__this /* static, unused */, ___key, ___value, method) (( TrackableResultData_t832  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t832 , const MethodInfo*))Dictionary_2_pick_value_m23402_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23403_gshared (Dictionary_2_t1070 * __this, KeyValuePair_2U5BU5D_t3272* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23403(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1070 *, KeyValuePair_2U5BU5D_t3272*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23403_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Resize()
extern "C" void Dictionary_2_Resize_m23404_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23404(__this, method) (( void (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_Resize_m23404_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23405_gshared (Dictionary_2_t1070 * __this, int32_t ___key, TrackableResultData_t832  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23405(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1070 *, int32_t, TrackableResultData_t832 , const MethodInfo*))Dictionary_2_Add_m23405_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Clear()
extern "C" void Dictionary_2_Clear_m23406_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23406(__this, method) (( void (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_Clear_m23406_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23407_gshared (Dictionary_2_t1070 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23407(__this, ___key, method) (( bool (*) (Dictionary_2_t1070 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m23407_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23408_gshared (Dictionary_2_t1070 * __this, TrackableResultData_t832  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23408(__this, ___value, method) (( bool (*) (Dictionary_2_t1070 *, TrackableResultData_t832 , const MethodInfo*))Dictionary_2_ContainsValue_m23408_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23409_gshared (Dictionary_2_t1070 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23409(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1070 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2_GetObjectData_m23409_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23410_gshared (Dictionary_2_t1070 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23410(__this, ___sender, method) (( void (*) (Dictionary_2_t1070 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23410_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23411_gshared (Dictionary_2_t1070 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23411(__this, ___key, method) (( bool (*) (Dictionary_2_t1070 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m23411_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23412_gshared (Dictionary_2_t1070 * __this, int32_t ___key, TrackableResultData_t832 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23412(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1070 *, int32_t, TrackableResultData_t832 *, const MethodInfo*))Dictionary_2_TryGetValue_m23412_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Keys()
extern "C" KeyCollection_t2918 * Dictionary_2_get_Keys_m23413_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23413(__this, method) (( KeyCollection_t2918 * (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_get_Keys_m23413_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::get_Values()
extern "C" ValueCollection_t2922 * Dictionary_2_get_Values_m23414_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23414(__this, method) (( ValueCollection_t2922 * (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_get_Values_m23414_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m23415_gshared (Dictionary_2_t1070 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23415(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1070 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23415_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ToTValue(System.Object)
extern "C" TrackableResultData_t832  Dictionary_2_ToTValue_m23416_gshared (Dictionary_2_t1070 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23416(__this, ___value, method) (( TrackableResultData_t832  (*) (Dictionary_2_t1070 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23416_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23417_gshared (Dictionary_2_t1070 * __this, KeyValuePair_2_t2916  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23417(__this, ___pair, method) (( bool (*) (Dictionary_2_t1070 *, KeyValuePair_2_t2916 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23417_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::GetEnumerator()
extern "C" Enumerator_t2920  Dictionary_2_GetEnumerator_m23418_gshared (Dictionary_2_t1070 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23418(__this, method) (( Enumerator_t2920  (*) (Dictionary_2_t1070 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23418_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1459  Dictionary_2_U3CCopyToU3Em__0_m23419_gshared (Object_t * __this /* static, unused */, int32_t ___key, TrackableResultData_t832  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23419(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1459  (*) (Object_t * /* static, unused */, int32_t, TrackableResultData_t832 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23419_gshared)(__this /* static, unused */, ___key, ___value, method)

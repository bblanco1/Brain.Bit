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

// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t2966;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2362;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t453;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>[]
struct KeyValuePair_2U5BU5D_t3282;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>>
struct IEnumerator_1_t3283;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1274;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
struct KeyCollection_t2971;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Vuforia.WebCamProfile/ProfileData>
struct ValueCollection_t2975;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__32.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor()
extern "C" void Dictionary_2__ctor_m24000_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m24000(__this, method) (( void (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2__ctor_m24000_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m24002_gshared (Dictionary_2_t2966 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m24002(__this, ___comparer, method) (( void (*) (Dictionary_2_t2966 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m24002_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m24004_gshared (Dictionary_2_t2966 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m24004(__this, ___capacity, method) (( void (*) (Dictionary_2_t2966 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m24004_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m24006_gshared (Dictionary_2_t2966 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m24006(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2966 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2__ctor_m24006_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m24008_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24008(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2966 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m24008_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m24010_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24010(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2966 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m24010_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m24012_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m24012(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2966 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m24012_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m24014_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m24014(__this, ___key, method) (( bool (*) (Dictionary_2_t2966 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m24014_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m24016_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m24016(__this, ___key, method) (( void (*) (Dictionary_2_t2966 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m24016_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24018_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24018(__this, method) (( bool (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24018_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24020_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24020(__this, method) (( Object_t * (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24020_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24022_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24022(__this, method) (( bool (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24022_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24024_gshared (Dictionary_2_t2966 * __this, KeyValuePair_2_t2968  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24024(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2966 *, KeyValuePair_2_t2968 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24024_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24026_gshared (Dictionary_2_t2966 * __this, KeyValuePair_2_t2968  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24026(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2966 *, KeyValuePair_2_t2968 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24026_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24028_gshared (Dictionary_2_t2966 * __this, KeyValuePair_2U5BU5D_t3282* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24028(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2966 *, KeyValuePair_2U5BU5D_t3282*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24028_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24030_gshared (Dictionary_2_t2966 * __this, KeyValuePair_2_t2968  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24030(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2966 *, KeyValuePair_2_t2968 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24030_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m24032_gshared (Dictionary_2_t2966 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24032(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2966 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m24032_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24034_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24034(__this, method) (( Object_t * (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24034_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24036_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24036(__this, method) (( Object_t* (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24036_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24038_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24038(__this, method) (( Object_t * (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24038_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m24040_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m24040(__this, method) (( int32_t (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_get_Count_m24040_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Item(TKey)
extern "C" ProfileData_t924  Dictionary_2_get_Item_m24042_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m24042(__this, ___key, method) (( ProfileData_t924  (*) (Dictionary_2_t2966 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m24042_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m24044_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, ProfileData_t924  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m24044(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2966 *, Object_t *, ProfileData_t924 , const MethodInfo*))Dictionary_2_set_Item_m24044_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m24046_gshared (Dictionary_2_t2966 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m24046(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2966 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m24046_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m24048_gshared (Dictionary_2_t2966 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m24048(__this, ___size, method) (( void (*) (Dictionary_2_t2966 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m24048_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m24050_gshared (Dictionary_2_t2966 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m24050(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2966 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m24050_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2968  Dictionary_2_make_pair_m24052_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t924  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m24052(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2968  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t924 , const MethodInfo*))Dictionary_2_make_pair_m24052_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m24054_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t924  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m24054(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t924 , const MethodInfo*))Dictionary_2_pick_key_m24054_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::pick_value(TKey,TValue)
extern "C" ProfileData_t924  Dictionary_2_pick_value_m24056_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t924  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m24056(__this /* static, unused */, ___key, ___value, method) (( ProfileData_t924  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t924 , const MethodInfo*))Dictionary_2_pick_value_m24056_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m24058_gshared (Dictionary_2_t2966 * __this, KeyValuePair_2U5BU5D_t3282* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m24058(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2966 *, KeyValuePair_2U5BU5D_t3282*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m24058_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Resize()
extern "C" void Dictionary_2_Resize_m24060_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m24060(__this, method) (( void (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_Resize_m24060_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m24062_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, ProfileData_t924  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m24062(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2966 *, Object_t *, ProfileData_t924 , const MethodInfo*))Dictionary_2_Add_m24062_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Clear()
extern "C" void Dictionary_2_Clear_m24064_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m24064(__this, method) (( void (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_Clear_m24064_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m24066_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m24066(__this, ___key, method) (( bool (*) (Dictionary_2_t2966 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m24066_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m24068_gshared (Dictionary_2_t2966 * __this, ProfileData_t924  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m24068(__this, ___value, method) (( bool (*) (Dictionary_2_t2966 *, ProfileData_t924 , const MethodInfo*))Dictionary_2_ContainsValue_m24068_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m24070_gshared (Dictionary_2_t2966 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m24070(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2966 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2_GetObjectData_m24070_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m24072_gshared (Dictionary_2_t2966 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m24072(__this, ___sender, method) (( void (*) (Dictionary_2_t2966 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m24072_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m24074_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m24074(__this, ___key, method) (( bool (*) (Dictionary_2_t2966 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m24074_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m24076_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, ProfileData_t924 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m24076(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2966 *, Object_t *, ProfileData_t924 *, const MethodInfo*))Dictionary_2_TryGetValue_m24076_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Keys()
extern "C" KeyCollection_t2971 * Dictionary_2_get_Keys_m24078_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m24078(__this, method) (( KeyCollection_t2971 * (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_get_Keys_m24078_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Values()
extern "C" ValueCollection_t2975 * Dictionary_2_get_Values_m24080_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m24080(__this, method) (( ValueCollection_t2975 * (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_get_Values_m24080_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m24082_gshared (Dictionary_2_t2966 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m24082(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2966 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m24082_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToTValue(System.Object)
extern "C" ProfileData_t924  Dictionary_2_ToTValue_m24084_gshared (Dictionary_2_t2966 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m24084(__this, ___value, method) (( ProfileData_t924  (*) (Dictionary_2_t2966 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m24084_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m24086_gshared (Dictionary_2_t2966 * __this, KeyValuePair_2_t2968  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m24086(__this, ___pair, method) (( bool (*) (Dictionary_2_t2966 *, KeyValuePair_2_t2968 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m24086_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::GetEnumerator()
extern "C" Enumerator_t2973  Dictionary_2_GetEnumerator_m24088_gshared (Dictionary_2_t2966 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m24088(__this, method) (( Enumerator_t2973  (*) (Dictionary_2_t2966 *, const MethodInfo*))Dictionary_2_GetEnumerator_m24088_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1459  Dictionary_2_U3CCopyToU3Em__0_m24090_gshared (Object_t * __this /* static, unused */, Object_t * ___key, ProfileData_t924  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m24090(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1459  (*) (Object_t * /* static, unused */, Object_t *, ProfileData_t924 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m24090_gshared)(__this /* static, unused */, ___key, ___value, method)

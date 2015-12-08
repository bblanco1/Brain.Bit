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
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2383;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t453;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>[]
struct KeyValuePair_2U5BU5D_t3275;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t105;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>>
struct IEnumerator_1_t3276;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1274;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct KeyCollection_t2934;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct ValueCollection_t2938;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__30.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor()
extern "C" void Dictionary_2__ctor_m5953_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m5953(__this, method) (( void (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2__ctor_m5953_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m23517_gshared (Dictionary_2_t1071 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m23517(__this, ___comparer, method) (( void (*) (Dictionary_2_t1071 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m23517_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m23518_gshared (Dictionary_2_t1071 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m23518(__this, ___capacity, method) (( void (*) (Dictionary_2_t1071 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m23518_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m23519_gshared (Dictionary_2_t1071 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m23519(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1071 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2__ctor_m23519_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m23520_gshared (Dictionary_2_t1071 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m23520(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1071 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m23520_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m23521_gshared (Dictionary_2_t1071 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m23521(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1071 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m23521_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m23522_gshared (Dictionary_2_t1071 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m23522(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1071 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m23522_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m23523_gshared (Dictionary_2_t1071 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m23523(__this, ___key, method) (( bool (*) (Dictionary_2_t1071 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m23523_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m23524_gshared (Dictionary_2_t1071 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m23524(__this, ___key, method) (( void (*) (Dictionary_2_t1071 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m23524_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23525_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23525(__this, method) (( bool (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m23525_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23526_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23526(__this, method) (( Object_t * (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m23526_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23527_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23527(__this, method) (( bool (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m23527_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23528_gshared (Dictionary_2_t1071 * __this, KeyValuePair_2_t2931  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23528(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1071 *, KeyValuePair_2_t2931 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m23528_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23529_gshared (Dictionary_2_t1071 * __this, KeyValuePair_2_t2931  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23529(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1071 *, KeyValuePair_2_t2931 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m23529_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23530_gshared (Dictionary_2_t1071 * __this, KeyValuePair_2U5BU5D_t3275* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23530(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1071 *, KeyValuePair_2U5BU5D_t3275*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m23530_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23531_gshared (Dictionary_2_t1071 * __this, KeyValuePair_2_t2931  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23531(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1071 *, KeyValuePair_2_t2931 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m23531_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m23532_gshared (Dictionary_2_t1071 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m23532(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1071 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m23532_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23533_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23533(__this, method) (( Object_t * (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m23533_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23534_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23534(__this, method) (( Object_t* (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m23534_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23535_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23535(__this, method) (( Object_t * (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m23535_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m23536_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m23536(__this, method) (( int32_t (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_get_Count_m23536_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Item(TKey)
extern "C" VirtualButtonData_t833  Dictionary_2_get_Item_m23537_gshared (Dictionary_2_t1071 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m23537(__this, ___key, method) (( VirtualButtonData_t833  (*) (Dictionary_2_t1071 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m23537_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m23538_gshared (Dictionary_2_t1071 * __this, int32_t ___key, VirtualButtonData_t833  ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m23538(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1071 *, int32_t, VirtualButtonData_t833 , const MethodInfo*))Dictionary_2_set_Item_m23538_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m23539_gshared (Dictionary_2_t1071 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m23539(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1071 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m23539_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m23540_gshared (Dictionary_2_t1071 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m23540(__this, ___size, method) (( void (*) (Dictionary_2_t1071 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m23540_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m23541_gshared (Dictionary_2_t1071 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m23541(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1071 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m23541_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2931  Dictionary_2_make_pair_m23542_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t833  ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m23542(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2931  (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t833 , const MethodInfo*))Dictionary_2_make_pair_m23542_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m23543_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t833  ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m23543(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t833 , const MethodInfo*))Dictionary_2_pick_key_m23543_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::pick_value(TKey,TValue)
extern "C" VirtualButtonData_t833  Dictionary_2_pick_value_m23544_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t833  ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m23544(__this /* static, unused */, ___key, ___value, method) (( VirtualButtonData_t833  (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t833 , const MethodInfo*))Dictionary_2_pick_value_m23544_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m23545_gshared (Dictionary_2_t1071 * __this, KeyValuePair_2U5BU5D_t3275* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m23545(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1071 *, KeyValuePair_2U5BU5D_t3275*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m23545_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Resize()
extern "C" void Dictionary_2_Resize_m23546_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m23546(__this, method) (( void (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_Resize_m23546_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m23547_gshared (Dictionary_2_t1071 * __this, int32_t ___key, VirtualButtonData_t833  ___value, const MethodInfo* method);
#define Dictionary_2_Add_m23547(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1071 *, int32_t, VirtualButtonData_t833 , const MethodInfo*))Dictionary_2_Add_m23547_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Clear()
extern "C" void Dictionary_2_Clear_m23548_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m23548(__this, method) (( void (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_Clear_m23548_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m23549_gshared (Dictionary_2_t1071 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m23549(__this, ___key, method) (( bool (*) (Dictionary_2_t1071 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m23549_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m23550_gshared (Dictionary_2_t1071 * __this, VirtualButtonData_t833  ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m23550(__this, ___value, method) (( bool (*) (Dictionary_2_t1071 *, VirtualButtonData_t833 , const MethodInfo*))Dictionary_2_ContainsValue_m23550_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m23551_gshared (Dictionary_2_t1071 * __this, SerializationInfo_t453 * ___info, StreamingContext_t454  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m23551(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1071 *, SerializationInfo_t453 *, StreamingContext_t454 , const MethodInfo*))Dictionary_2_GetObjectData_m23551_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m23552_gshared (Dictionary_2_t1071 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m23552(__this, ___sender, method) (( void (*) (Dictionary_2_t1071 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m23552_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m23553_gshared (Dictionary_2_t1071 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m23553(__this, ___key, method) (( bool (*) (Dictionary_2_t1071 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m23553_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m23554_gshared (Dictionary_2_t1071 * __this, int32_t ___key, VirtualButtonData_t833 * ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m23554(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1071 *, int32_t, VirtualButtonData_t833 *, const MethodInfo*))Dictionary_2_TryGetValue_m23554_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Keys()
extern "C" KeyCollection_t2934 * Dictionary_2_get_Keys_m23555_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m23555(__this, method) (( KeyCollection_t2934 * (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_get_Keys_m23555_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Values()
extern "C" ValueCollection_t2938 * Dictionary_2_get_Values_m23556_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m23556(__this, method) (( ValueCollection_t2938 * (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_get_Values_m23556_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m23557_gshared (Dictionary_2_t1071 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m23557(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1071 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m23557_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToTValue(System.Object)
extern "C" VirtualButtonData_t833  Dictionary_2_ToTValue_m23558_gshared (Dictionary_2_t1071 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m23558(__this, ___value, method) (( VirtualButtonData_t833  (*) (Dictionary_2_t1071 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m23558_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m23559_gshared (Dictionary_2_t1071 * __this, KeyValuePair_2_t2931  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m23559(__this, ___pair, method) (( bool (*) (Dictionary_2_t1071 *, KeyValuePair_2_t2931 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m23559_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::GetEnumerator()
extern "C" Enumerator_t2936  Dictionary_2_GetEnumerator_m23560_gshared (Dictionary_2_t1071 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m23560(__this, method) (( Enumerator_t2936  (*) (Dictionary_2_t1071 *, const MethodInfo*))Dictionary_2_GetEnumerator_m23560_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1459  Dictionary_2_U3CCopyToU3Em__0_m23561_gshared (Object_t * __this /* static, unused */, int32_t ___key, VirtualButtonData_t833  ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m23561(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1459  (*) (Object_t * /* static, unused */, int32_t, VirtualButtonData_t833 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m23561_gshared)(__this /* static, unused */, ___key, ___value, method)

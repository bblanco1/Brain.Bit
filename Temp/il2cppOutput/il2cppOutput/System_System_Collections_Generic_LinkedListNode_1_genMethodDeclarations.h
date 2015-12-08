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

// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t1011;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t850;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m21378_gshared (LinkedListNode_1_t1011 * __this, LinkedList_1_t850 * ___list, int32_t ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m21378(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t1011 *, LinkedList_1_t850 *, int32_t, const MethodInfo*))LinkedListNode_1__ctor_m21378_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m21379_gshared (LinkedListNode_1_t1011 * __this, LinkedList_1_t850 * ___list, int32_t ___value, LinkedListNode_1_t1011 * ___previousNode, LinkedListNode_1_t1011 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m21379(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t1011 *, LinkedList_1_t850 *, int32_t, LinkedListNode_1_t1011 *, LinkedListNode_1_t1011 *, const MethodInfo*))LinkedListNode_1__ctor_m21379_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::Detach()
extern "C" void LinkedListNode_1_Detach_m21380_gshared (LinkedListNode_1_t1011 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m21380(__this, method) (( void (*) (LinkedListNode_1_t1011 *, const MethodInfo*))LinkedListNode_1_Detach_m21380_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_List()
extern "C" LinkedList_1_t850 * LinkedListNode_1_get_List_m21381_gshared (LinkedListNode_1_t1011 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m21381(__this, method) (( LinkedList_1_t850 * (*) (LinkedListNode_1_t1011 *, const MethodInfo*))LinkedListNode_1_get_List_m21381_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Next()
extern "C" LinkedListNode_1_t1011 * LinkedListNode_1_get_Next_m5949_gshared (LinkedListNode_1_t1011 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m5949(__this, method) (( LinkedListNode_1_t1011 * (*) (LinkedListNode_1_t1011 *, const MethodInfo*))LinkedListNode_1_get_Next_m5949_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Value()
extern "C" int32_t LinkedListNode_1_get_Value_m5806_gshared (LinkedListNode_1_t1011 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m5806(__this, method) (( int32_t (*) (LinkedListNode_1_t1011 *, const MethodInfo*))LinkedListNode_1_get_Value_m5806_gshared)(__this, method)

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>
struct InvokableCall_4_t2466;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t140;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_4__ctor_m16431_gshared (InvokableCall_4_t2466 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_4__ctor_m16431(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_4_t2466 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_4__ctor_m16431_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Invoke(System.Object[])
extern "C" void InvokableCall_4_Invoke_m16432_gshared (InvokableCall_4_t2466 * __this, ObjectU5BU5D_t140* ___args, const MethodInfo* method);
#define InvokableCall_4_Invoke_m16432(__this, ___args, method) (( void (*) (InvokableCall_4_t2466 *, ObjectU5BU5D_t140*, const MethodInfo*))InvokableCall_4_Invoke_m16432_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`4<System.Object,System.Object,System.Object,System.Object>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_4_Find_m16433_gshared (InvokableCall_4_t2466 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_4_Find_m16433(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_4_t2466 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_4_Find_m16433_gshared)(__this, ___targetObj, ___method, method)

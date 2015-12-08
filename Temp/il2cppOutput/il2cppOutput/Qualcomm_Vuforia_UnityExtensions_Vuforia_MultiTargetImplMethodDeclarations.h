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

// Vuforia.MultiTargetImpl
struct MultiTargetImpl_t822;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t784;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.MultiTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void MultiTargetImpl__ctor_m4227 (MultiTargetImpl_t822 * __this, String_t* ___name, int32_t ___id, DataSet_t784 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.MultiTargetImpl::GetSize()
extern "C" Vector3_t12  MultiTargetImpl_GetSize_m4228 (MultiTargetImpl_t822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MultiTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void MultiTargetImpl_SetSize_m4229 (MultiTargetImpl_t822 * __this, Vector3_t12  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;

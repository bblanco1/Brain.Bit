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

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t40;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Boolean UnityEngine.NavMeshAgent::SetDestination(UnityEngine.Vector3)
extern "C" bool NavMeshAgent_SetDestination_m327 (NavMeshAgent_t40 * __this, Vector3_t12  ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.NavMeshAgent::INTERNAL_CALL_SetDestination(UnityEngine.NavMeshAgent,UnityEngine.Vector3&)
extern "C" bool NavMeshAgent_INTERNAL_CALL_SetDestination_m1310 (Object_t * __this /* static, unused */, NavMeshAgent_t40 * ___self, Vector3_t12 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.NavMeshAgent::get_destination()
extern "C" Vector3_t12  NavMeshAgent_get_destination_m328 (NavMeshAgent_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.NavMeshAgent::INTERNAL_get_destination(UnityEngine.Vector3&)
extern "C" void NavMeshAgent_INTERNAL_get_destination_m1311 (NavMeshAgent_t40 * __this, Vector3_t12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;

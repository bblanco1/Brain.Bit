#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.NavMeshAgent
struct NavMeshAgent_t40;
// UnityEngine.Transform
struct Transform_t30;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ZombieMovement
struct  ZombieMovement_t39  : public MonoBehaviour_t2
{
	// System.Boolean ZombieMovement::bothAlive
	bool ___bothAlive_2;
	// UnityEngine.NavMeshAgent ZombieMovement::navMeshAgent
	NavMeshAgent_t40 * ___navMeshAgent_3;
	// UnityEngine.Transform ZombieMovement::player
	Transform_t30 * ___player_4;
};

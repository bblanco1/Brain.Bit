#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t6;
// UnityEngine.Animator
struct Animator_t19;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// ZombieAttack
struct  ZombieAttack_t37  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject ZombieAttack::player
	GameObject_t6 * ___player_2;
	// UnityEngine.Animator ZombieAttack::animator
	Animator_t19 * ___animator_3;
	// System.Boolean ZombieAttack::playerInRange
	bool ___playerInRange_4;
};

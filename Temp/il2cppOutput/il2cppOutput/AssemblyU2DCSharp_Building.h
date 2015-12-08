#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t5;
// UnityEngine.GameObject
struct GameObject_t6;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Building
struct  Building_t4  : public MonoBehaviour_t2
{
	// System.Boolean Building::squareIsOccupied
	bool ___squareIsOccupied_2;
	// UnityEngine.AudioSource Building::audioSource
	AudioSource_t5 * ___audioSource_3;
	// UnityEngine.GameObject Building::towerPrefab
	GameObject_t6 * ___towerPrefab_4;
};

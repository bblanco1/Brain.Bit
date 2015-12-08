#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LineRenderer
struct LineRenderer_t35;
// UnityEngine.AudioSource
struct AudioSource_t5;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// TowerAttack
struct  TowerAttack_t32  : public MonoBehaviour_t2
{
	// System.Single TowerAttack::timeBetweenBullets
	float ___timeBetweenBullets_2;
	// System.Single TowerAttack::damagerPerShot
	float ___damagerPerShot_3;
	// System.Single TowerAttack::timer
	float ___timer_4;
	// UnityEngine.Ray TowerAttack::shootRay
	Ray_t33  ___shootRay_5;
	// UnityEngine.RaycastHit TowerAttack::shootHit
	RaycastHit_t34  ___shootHit_6;
	// UnityEngine.LineRenderer TowerAttack::gunLine
	LineRenderer_t35 * ___gunLine_7;
	// UnityEngine.AudioSource TowerAttack::gunAudio
	AudioSource_t5 * ___gunAudio_8;
	// System.Single TowerAttack::effectsDisplayTime
	float ___effectsDisplayTime_9;
};

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
// UnityEngine.TextMesh
struct TextMesh_t17;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// FenceHealth
struct  FenceHealth_t16  : public MonoBehaviour_t2
{
	// System.Boolean FenceHealth::isAlive
	bool ___isAlive_2;
	// System.Int32 FenceHealth::health
	int32_t ___health_3;
	// UnityEngine.AudioSource FenceHealth::audioSource
	AudioSource_t5 * ___audioSource_4;
	// UnityEngine.TextMesh FenceHealth::tm
	TextMesh_t17 * ___tm_5;
};

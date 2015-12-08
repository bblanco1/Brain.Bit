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
// UnityEngine.RectTransform
struct RectTransform_t9;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// DragMe
struct  DragMe_t8  : public MonoBehaviour_t2
{
	// System.Boolean DragMe::dragOnSurfaces
	bool ___dragOnSurfaces_2;
	// UnityEngine.GameObject DragMe::m_DraggingIcon
	GameObject_t6 * ___m_DraggingIcon_3;
	// UnityEngine.RectTransform DragMe::m_DraggingPlane
	RectTransform_t9 * ___m_DraggingPlane_4;
};

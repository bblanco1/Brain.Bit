#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t30;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// TiltWindow
struct  TiltWindow_t29  : public MonoBehaviour_t2
{
	// UnityEngine.Vector2 TiltWindow::range
	Vector2_t11  ___range_2;
	// UnityEngine.Transform TiltWindow::mTrans
	Transform_t30 * ___mTrans_3;
	// UnityEngine.Quaternion TiltWindow::mStart
	Quaternion_t31  ___mStart_4;
	// UnityEngine.Vector2 TiltWindow::mRot
	Vector2_t11  ___mRot_5;
};

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTarget
struct ObjectTarget_t756;
// UnityEngine.Texture2D
struct Texture2D_t200;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSetTrackableBeh.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.ObjectTargetAbstractBehaviour
struct  ObjectTargetAbstractBehaviour_t74  : public DataSetTrackableBehaviour_t755
{
	// Vuforia.ObjectTarget Vuforia.ObjectTargetAbstractBehaviour::mObjectTarget
	Object_t * ___mObjectTarget_20;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mAspectRatioXY
	float ___mAspectRatioXY_21;
	// System.Single Vuforia.ObjectTargetAbstractBehaviour::mAspectRatioXZ
	float ___mAspectRatioXZ_22;
	// System.Boolean Vuforia.ObjectTargetAbstractBehaviour::mShowBoundingBox
	bool ___mShowBoundingBox_23;
	// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::mBBoxMin
	Vector3_t12  ___mBBoxMin_24;
	// UnityEngine.Vector3 Vuforia.ObjectTargetAbstractBehaviour::mBBoxMax
	Vector3_t12  ___mBBoxMax_25;
	// UnityEngine.Texture2D Vuforia.ObjectTargetAbstractBehaviour::mPreviewImage
	Texture2D_t200 * ___mPreviewImage_26;
};

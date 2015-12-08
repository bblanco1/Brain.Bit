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

// TowerAttack
struct TowerAttack_t32;
// ZombieHealth
struct ZombieHealth_t38;
// ZombieMovement
struct ZombieMovement_t39;
// UnityEngine.Collider
struct Collider_t106;

#include "codegen/il2cpp-codegen.h"

// System.Void TowerAttack::.ctor()
extern "C" void TowerAttack__ctor_m66 (TowerAttack_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TowerAttack::Awake()
extern "C" void TowerAttack_Awake_m67 (TowerAttack_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TowerAttack::Update()
extern "C" void TowerAttack_Update_m68 (TowerAttack_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TowerAttack::DisableEffects()
extern "C" void TowerAttack_DisableEffects_m69 (TowerAttack_t32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TowerAttack::Attack(ZombieHealth,ZombieMovement)
extern "C" void TowerAttack_Attack_m70 (TowerAttack_t32 * __this, ZombieHealth_t38 * ___enemyToDamage, ZombieMovement_t39 * ___pointToHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TowerAttack::OnTriggerEnter(UnityEngine.Collider)
extern "C" void TowerAttack_OnTriggerEnter_m71 (TowerAttack_t32 * __this, Collider_t106 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TowerAttack::OnTriggerStay(UnityEngine.Collider)
extern "C" void TowerAttack_OnTriggerStay_m72 (TowerAttack_t32 * __this, Collider_t106 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;

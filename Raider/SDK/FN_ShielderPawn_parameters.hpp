#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ShielderPawn.ShielderPawn_C.SpawnSuperShielderBGA
struct AShielderPawn_C_SpawnSuperShielderBGA_Params
{
};

// Function ShielderPawn.ShielderPawn_C.RemoveShield
struct AShielderPawn_C_RemoveShield_Params
{
	class AActor*                                      RemoveShieldFrom;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.Orphaned
struct AShielderPawn_C_Orphaned_Params
{
	bool                                               IsOrphaned;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class AFortPawn*                                   AttachedPawn;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.SetMiniMapIconStatus
struct AShielderPawn_C_SetMiniMapIconStatus_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnRep_bShieldApplied
struct AShielderPawn_C_OnRep_bShieldApplied_Params
{
};

// Function ShielderPawn.ShielderPawn_C.UpdateShieldFXVisibility
struct AShielderPawn_C_UpdateShieldFXVisibility_Params
{
};

// Function ShielderPawn.ShielderPawn_C.ApplyShield
struct AShielderPawn_C_ApplyShield_Params
{
};

// Function ShielderPawn.ShielderPawn_C.GameTimeString
struct AShielderPawn_C_GameTimeString_Params
{
	struct FString                                     NewParam;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function ShielderPawn.ShielderPawn_C.OnRep_ShielderSpringArm
struct AShielderPawn_C_OnRep_ShielderSpringArm_Params
{
};

// Function ShielderPawn.ShielderPawn_C.DebugLineAndSphere
struct AShielderPawn_C_DebugLineAndSphere_Params
{
	bool                                               Line;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Sphere;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SphereColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              VisibilityOffset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.OnRep_ShielderVisible
struct AShielderPawn_C_OnRep_ShielderVisible_Params
{
};

// Function ShielderPawn.ShielderPawn_C.AttachShielderToSpringArm
struct AShielderPawn_C_AttachShielderToSpringArm_Params
{
};

// Function ShielderPawn.ShielderPawn_C.AttachSpringArmToAttachPawn
struct AShielderPawn_C_AttachSpringArmToAttachPawn_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnRep_SpringArmTargetRotation
struct AShielderPawn_C_OnRep_SpringArmTargetRotation_Params
{
};

// Function ShielderPawn.ShielderPawn_C.UserConstructionScript
struct AShielderPawn_C_UserConstructionScript_Params
{
};

// Function ShielderPawn.ShielderPawn_C.InterpShielderToNewLocation__FinishedFunc
struct AShielderPawn_C_InterpShielderToNewLocation__FinishedFunc_Params
{
};

// Function ShielderPawn.ShielderPawn_C.InterpShielderToNewLocation__UpdateFunc
struct AShielderPawn_C_InterpShielderToNewLocation__UpdateFunc_Params
{
};

// Function ShielderPawn.ShielderPawn_C.RotateShielder__FinishedFunc
struct AShielderPawn_C_RotateShielder__FinishedFunc_Params
{
};

// Function ShielderPawn.ShielderPawn_C.RotateShielder__UpdateFunc
struct AShielderPawn_C_RotateShielder__UpdateFunc_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnStunned
struct AShielderPawn_C_OnStunned_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnDamageServer
struct AShielderPawn_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShielderPawn.ShielderPawn_C.OnKnockedback
struct AShielderPawn_C_OnKnockedback_Params
{
};

// Function ShielderPawn.ShielderPawn_C.ReceiveBeginPlay
struct AShielderPawn_C_ReceiveBeginPlay_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnDeathServer
struct AShielderPawn_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ShielderPawn.ShielderPawn_C.ShielderAttachComplete
struct AShielderPawn_C_ShielderAttachComplete_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnEncounterEnemySpawned
struct AShielderPawn_C_OnEncounterEnemySpawned_Params
{
	class UFortAIEncounterInfo*                        Encounter;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortAIPawn*                                 SpawnedEnemy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.SetShielderOrphanStatus
struct AShielderPawn_C_SetShielderOrphanStatus_Params
{
	bool                                               Orphaned;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GiveZVelocityOnDetach;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ShielderPawn.ShielderPawn_C.OnComponentBeginOverlap
struct AShielderPawn_C_OnComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.VerifyPotentialAttachPawnIsValidAndAttachToIt
struct AShielderPawn_C_VerifyPotentialAttachPawnIsValidAndAttachToIt_Params
{
	class AFortPawn*                                   PotentialAttachPawn;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HiddenAttach;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.GrabRandomPotentialAttachPawn
struct AShielderPawn_C_GrabRandomPotentialAttachPawn_Params
{
	bool                                               HiddenAttach;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.AttachShielderToPotentialAttachPawn
struct AShielderPawn_C_AttachShielderToPotentialAttachPawn_Params
{
};

// Function ShielderPawn.ShielderPawn_C.BindEncounterSpawn
struct AShielderPawn_C_BindEncounterSpawn_Params
{
};

// Function ShielderPawn.ShielderPawn_C.ReApplyShield
struct AShielderPawn_C_ReApplyShield_Params
{
};

// Function ShielderPawn.ShielderPawn_C.UnBindEncounterSpawn
struct AShielderPawn_C_UnBindEncounterSpawn_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnComponentEndOverlap
struct AShielderPawn_C_OnComponentEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.ShielderShieldBroken
struct AShielderPawn_C_ShielderShieldBroken_Params
{
};

// Function ShielderPawn.ShielderPawn_C.AnimateSpringArm
struct AShielderPawn_C_AnimateSpringArm_Params
{
};

// Function ShielderPawn.ShielderPawn_C.AttachPawnDead
struct AShielderPawn_C_AttachPawnDead_Params
{
	bool                                               Despawn;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.OrphanForceKillTimer
struct AShielderPawn_C_OrphanForceKillTimer_Params
{
};

// Function ShielderPawn.ShielderPawn_C.BindProxOverlap
struct AShielderPawn_C_BindProxOverlap_Params
{
};

// Function ShielderPawn.ShielderPawn_C.UnBindProxOverlap
struct AShielderPawn_C_UnBindProxOverlap_Params
{
};

// Function ShielderPawn.ShielderPawn_C.InterpShielderToSpringArm
struct AShielderPawn_C_InterpShielderToSpringArm_Params
{
};

// Function ShielderPawn.ShielderPawn_C.RotateShielderForward
struct AShielderPawn_C_RotateShielderForward_Params
{
};

// Function ShielderPawn.ShielderPawn_C.AdditiveHitReactDelay
struct AShielderPawn_C_AdditiveHitReactDelay_Params
{
};

// Function ShielderPawn.ShielderPawn_C.InvisibleOrphanTick
struct AShielderPawn_C_InvisibleOrphanTick_Params
{
};

// Function ShielderPawn.ShielderPawn_C.ReceiveEndPlay
struct AShielderPawn_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.PostSpawnIn
struct AShielderPawn_C_PostSpawnIn_Params
{
};

// Function ShielderPawn.ShielderPawn_C.ExecuteUbergraph_ShielderPawn
struct AShielderPawn_C_ExecuteUbergraph_ShielderPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

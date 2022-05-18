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

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.SpawnImpactEffects
struct ATrap_Floor_Turret_C_SpawnImpactEffects_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.ShouldFire
struct ATrap_Floor_Turret_C_ShouldFire_Params
{
	bool                                               ShouldFire;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.SpawnTracer
struct ATrap_Floor_Turret_C_SpawnTracer_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.AttemptFire
struct ATrap_Floor_Turret_C_AttemptFire_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnPotentialTargetUntouched
struct ATrap_Floor_Turret_C_OnPotentialTargetUntouched_Params
{
	class AFortPawn*                                   UntouchedPotentialTarget;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnNewPotentialTargetTouched
struct ATrap_Floor_Turret_C_OnNewPotentialTargetTouched_Params
{
	class AFortPawn*                                   PotentialTargetPawn;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnRep_IsDeployed
struct ATrap_Floor_Turret_C_OnRep_IsDeployed_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.SetTargetAcquisitionTimer
struct ATrap_Floor_Turret_C_SetTargetAcquisitionTimer_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.IsPawnInsidePitchLimits
struct ATrap_Floor_Turret_C_IsPawnInsidePitchLimits_Params
{
	class AFortPawn*                                   Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInsideYawLimits;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.IsPawnInsideYawLimits
struct ATrap_Floor_Turret_C_IsPawnInsideYawLimits_Params
{
	class AFortPawn*                                   Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInsideYawLimits;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.IsValidTarget
struct ATrap_Floor_Turret_C_IsValidTarget_Params
{
	class AFortPawn*                                   PotentialTarget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IncludeSimpleRangeCheck;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IncludeObstructionCheck;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bValidTarget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.AttemptAcquireTarget
struct ATrap_Floor_Turret_C_AttemptAcquireTarget_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.SetFiringTimer
struct ATrap_Floor_Turret_C_SetFiringTimer_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.ClearFiringTimer
struct ATrap_Floor_Turret_C_ClearFiringTimer_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.ClearTargetAcquisitionTimer
struct ATrap_Floor_Turret_C_ClearTargetAcquisitionTimer_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.SetTrackingTarget
struct ATrap_Floor_Turret_C_SetTrackingTarget_Params
{
	class AFortPawn*                                   PawnToTrack;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.CalcDesiredAngle
struct ATrap_Floor_Turret_C_CalcDesiredAngle_Params
{
	float                                              InitialRelativeAngle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CurrentRelativeAngle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleOffset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleClamp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DesiredAngle;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.PerformGunRotation
struct ATrap_Floor_Turret_C_PerformGunRotation_Params
{
	class AActor*                                      LookAtActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.UserConstructionScript
struct ATrap_Floor_Turret_C_UserConstructionScript_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnReloadEnd
struct ATrap_Floor_Turret_C_OnReloadEnd_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnPlaced
struct ATrap_Floor_Turret_C_OnPlaced_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnFinishedBuilding
struct ATrap_Floor_Turret_C_OnFinishedBuilding_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
struct ATrap_Floor_Turret_C_GameplayCue_Abilities_Activation_Traps_ReloadBegin_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
struct ATrap_Floor_Turret_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.OnOutOfDurability
struct ATrap_Floor_Turret_C_OnOutOfDurability_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.TriggerLaunchEffects
struct ATrap_Floor_Turret_C_TriggerLaunchEffects_Params
{
	class AFortPlayerPawnAthena*                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ATrap_Floor_Turret_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ATrap_Floor_Turret_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.RotationTimer
struct ATrap_Floor_Turret_C_RotationTimer_Params
{
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Abilities.Activation.Generic.SentryGun
struct ATrap_Floor_Turret_C_GameplayCue_Abilities_Activation_Generic_SentryGun_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.GameplayCue.Impact.Physical
struct ATrap_Floor_Turret_C_GameplayCue_Impact_Physical_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Trap_Floor_Turret.Trap_Floor_Turret_C.ExecuteUbergraph_Trap_Floor_Turret
struct ATrap_Floor_Turret_C_ExecuteUbergraph_Trap_Floor_Turret_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

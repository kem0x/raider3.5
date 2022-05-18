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

// Function SmasherPawn.SmasherPawn_C.GetCollisionPredictionComponent
struct ASmasherPawn_C_GetCollisionPredictionComponent_Params
{
	class UShapeComponent*                             Collision_Prediction_Shape_Component;                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SmasherPawn.SmasherPawn_C.SetSmasherRotationRate
struct ASmasherPawn_C_SetSmasherRotationRate_Params
{
	float                                              YawRate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmasherPawn.SmasherPawn_C.ResetSmasherRotationRateToDefault
struct ASmasherPawn_C_ResetSmasherRotationRateToDefault_Params
{
};

// Function SmasherPawn.SmasherPawn_C.HandleHitEffects
struct ASmasherPawn_C_HandleHitEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SmasherPawn.SmasherPawn_C.PaceHitSoundsAndVocalizations
struct ASmasherPawn_C_PaceHitSoundsAndVocalizations_Params
{
	TEnumAsByte<EFortDamageZone>                       Damage_Zone;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SmasherPawn.SmasherPawn_C.CalculateBumpMomentum
struct ASmasherPawn_C_CalculateBumpMomentum_Params
{
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              YawAngle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortPawn*                                   BumpedPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BumpMomentum;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function SmasherPawn.SmasherPawn_C.UserConstructionScript
struct ASmasherPawn_C_UserConstructionScript_Params
{
};

// Function SmasherPawn.SmasherPawn_C.Timeline_3__FinishedFunc
struct ASmasherPawn_C_Timeline_3__FinishedFunc_Params
{
};

// Function SmasherPawn.SmasherPawn_C.Timeline_3__UpdateFunc
struct ASmasherPawn_C_Timeline_3__UpdateFunc_Params
{
};

// Function SmasherPawn.SmasherPawn_C.Timeline_3__Spawn__EventFunc
struct ASmasherPawn_C_Timeline_3__Spawn__EventFunc_Params
{
};

// Function SmasherPawn.SmasherPawn_C.InitializeCrushing
struct ASmasherPawn_C_InitializeCrushing_Params
{
};

// Function SmasherPawn.SmasherPawn_C.OnCrushBoxBeginOverlap
struct ASmasherPawn_C_OnCrushBoxBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SmasherPawn.SmasherPawn_C.HitSoundTimeout
struct ASmasherPawn_C_HitSoundTimeout_Params
{
};

// Function SmasherPawn.SmasherPawn_C.HitSoundVocalTimeout
struct ASmasherPawn_C_HitSoundVocalTimeout_Params
{
};

// Function SmasherPawn.SmasherPawn_C.ReceiveBeginPlay
struct ASmasherPawn_C_ReceiveBeginPlay_Params
{
};

// Function SmasherPawn.SmasherPawn_C.Trigger_Death_Effect
struct ASmasherPawn_C_Trigger_Death_Effect_Params
{
};

// Function SmasherPawn.SmasherPawn_C.OnDeathPlayEffects
struct ASmasherPawn_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SmasherPawn.SmasherPawn_C.GameplayCue.Impact.Physical.Creature
struct ASmasherPawn_C_GameplayCue_Impact_Physical_Creature_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SmasherPawn.SmasherPawn_C.OnDamagePlayEffects
struct ASmasherPawn_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SmasherPawn.SmasherPawn_C.GameplayCue.NPC.Smasher.Charge
struct ASmasherPawn_C_GameplayCue_NPC_Smasher_Charge_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SmasherPawn.SmasherPawn_C.OnStartedEncounterSpawn
struct ASmasherPawn_C_OnStartedEncounterSpawn_Params
{
};

// Function SmasherPawn.SmasherPawn_C.OnFinishedEncounterSpawn
struct ASmasherPawn_C_OnFinishedEncounterSpawn_Params
{
};

// Function SmasherPawn.SmasherPawn_C.GameplayCue.Shield.Reapplied
struct ASmasherPawn_C_GameplayCue_Shield_Reapplied_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SmasherPawn.SmasherPawn_C.GameplayCue.Shield.Destroyed
struct ASmasherPawn_C_GameplayCue_Shield_Destroyed_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SmasherPawn.SmasherPawn_C.GameplayCue.Damage.Shielded
struct ASmasherPawn_C_GameplayCue_Damage_Shielded_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SmasherPawn.SmasherPawn_C.OnPushCapsuleBeginOverlap
struct ASmasherPawn_C_OnPushCapsuleBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function SmasherPawn.SmasherPawn_C.ExecuteUbergraph_SmasherPawn
struct ASmasherPawn_C_ExecuteUbergraph_SmasherPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

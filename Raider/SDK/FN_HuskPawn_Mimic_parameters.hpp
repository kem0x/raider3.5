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

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.KillPawnOnceTransformedToChest
struct AHuskPawn_Mimic_C_KillPawnOnceTransformedToChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChest
struct AHuskPawn_Mimic_C_BecomeChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChestIfConditionsSatisfied
struct AHuskPawn_Mimic_C_BecomeChestIfConditionsSatisfied_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.InitMimic
struct AHuskPawn_Mimic_C_InitMimic_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.UserConstructionScript
struct AHuskPawn_Mimic_C_UserConstructionScript_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceiveBeginPlay
struct AHuskPawn_Mimic_C_ReceiveBeginPlay_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.OnDeathPlayEffects
struct AHuskPawn_Mimic_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.TryToBecomeChest
struct AHuskPawn_Mimic_C_TryToBecomeChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.Event_LastTimeDamaged
struct AHuskPawn_Mimic_C_Event_LastTimeDamaged_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReturnToSpawnAndBecomeChest
struct AHuskPawn_Mimic_C_ReturnToSpawnAndBecomeChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ResetTimerForBecomingChest
struct AHuskPawn_Mimic_C_ResetTimerForBecomingChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceivePossessed
struct AHuskPawn_Mimic_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.DisableRibbons
struct AHuskPawn_Mimic_C_DisableRibbons_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.EnableRibbons
struct AHuskPawn_Mimic_C_EnableRibbons_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ExecuteUbergraph_HuskPawn_Mimic
struct AHuskPawn_Mimic_C_ExecuteUbergraph_HuskPawn_Mimic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

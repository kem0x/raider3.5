#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnRep_DestroyBalloon
struct ABP_DamageBalloon_Athena_C_OnRep_DestroyBalloon_Params
{
};

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ShouldDie
struct ABP_DamageBalloon_Athena_C_ShouldDie_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.UserConstructionScript
struct ABP_DamageBalloon_Athena_C_UserConstructionScript_Params
{
};

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnDamageServer
struct ABP_DamageBalloon_Athena_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.CrateIsGone
struct ABP_DamageBalloon_Athena_C_CrateIsGone_Params
{
};

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ReceiveBeginPlay
struct ABP_DamageBalloon_Athena_C_ReceiveBeginPlay_Params
{
};

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.ExecuteUbergraph_BP_DamageBalloon_Athena
struct ABP_DamageBalloon_Athena_C_ExecuteUbergraph_BP_DamageBalloon_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DamageBalloon_Athena.BP_DamageBalloon_Athena_C.OnBalloonDestroyed__DelegateSignature
struct ABP_DamageBalloon_Athena_C_OnBalloonDestroyed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

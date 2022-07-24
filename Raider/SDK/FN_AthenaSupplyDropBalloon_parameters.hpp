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

// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.UserConstructionScript
struct AAthenaSupplyDropBalloon_C_UserConstructionScript_Params
{
};

// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDamageServer
struct AAthenaSupplyDropBalloon_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.ReceiveBeginPlay
struct AAthenaSupplyDropBalloon_C_ReceiveBeginPlay_Params
{
};

// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDeathPlayEffects
struct AAthenaSupplyDropBalloon_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnDeathServer
struct AAthenaSupplyDropBalloon_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.ExecuteUbergraph_AthenaSupplyDropBalloon
struct AAthenaSupplyDropBalloon_C_ExecuteUbergraph_AthenaSupplyDropBalloon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDropBalloon.AthenaSupplyDropBalloon_C.OnBalloonDestroyed__DelegateSignature
struct AAthenaSupplyDropBalloon_C_OnBalloonDestroyed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

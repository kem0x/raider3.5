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

// Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.Cancelled_D1EFDCE0423864512AEAC8A06114562A
struct UGA_SentryTurret_Fire_C_Cancelled_D1EFDCE0423864512AEAC8A06114562A_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.Targeted_D1EFDCE0423864512AEAC8A06114562A
struct UGA_SentryTurret_Fire_C_Targeted_D1EFDCE0423864512AEAC8A06114562A_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.K2_ActivateAbility
struct UGA_SentryTurret_Fire_C_K2_ActivateAbility_Params
{
};

// Function GA_SentryTurret_Fire.GA_SentryTurret_Fire_C.ExecuteUbergraph_GA_SentryTurret_Fire
struct UGA_SentryTurret_Fire_C_ExecuteUbergraph_GA_SentryTurret_Fire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

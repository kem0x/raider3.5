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

// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.SetupAbility
struct UGA_Ninja_SwordHitsHeal_C_SetupAbility_Params
{
	class UAbilitySystemComponent**                    AbilitySystem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ShouldAbilityRespondToEvent
struct UGA_Ninja_SwordHitsHeal_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEventData*                         Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ActivateAbilityFromEvent
struct UGA_Ninja_SwordHitsHeal_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.ExecuteUbergraph_GA_Ninja_SwordHitsHeal
struct UGA_Ninja_SwordHitsHeal_C_ExecuteUbergraph_GA_Ninja_SwordHitsHeal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

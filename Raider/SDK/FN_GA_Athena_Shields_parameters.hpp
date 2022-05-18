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

// Function GA_Athena_Shields.GA_Athena_Shields_C.K2_CanActivateAbility
struct UGA_Athena_Shields_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Shields.GA_Athena_Shields_C.Completed_8143D5814CB74D956510E191077DBB83
struct UGA_Athena_Shields_C_Completed_8143D5814CB74D956510E191077DBB83_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Shields.GA_Athena_Shields_C.Cancelled_8143D5814CB74D956510E191077DBB83
struct UGA_Athena_Shields_C_Cancelled_8143D5814CB74D956510E191077DBB83_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Shields.GA_Athena_Shields_C.Triggered_8143D5814CB74D956510E191077DBB83
struct UGA_Athena_Shields_C_Triggered_8143D5814CB74D956510E191077DBB83_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Shields.GA_Athena_Shields_C.K2_ActivateAbility
struct UGA_Athena_Shields_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Shields.GA_Athena_Shields_C.ExecuteUbergraph_GA_Athena_Shields
struct UGA_Athena_Shields_C_ExecuteUbergraph_GA_Athena_Shields_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

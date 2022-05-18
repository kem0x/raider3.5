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

// Function GA_Athena_Backpack.GA_Athena_Backpack_C.K2_CanActivateAbility
struct UGA_Athena_Backpack_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Backpack.GA_Athena_Backpack_C.Completed_EA0DD4594F6C8473994D1EA2FC3B3024
struct UGA_Athena_Backpack_C_Completed_EA0DD4594F6C8473994D1EA2FC3B3024_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Backpack.GA_Athena_Backpack_C.Cancelled_EA0DD4594F6C8473994D1EA2FC3B3024
struct UGA_Athena_Backpack_C_Cancelled_EA0DD4594F6C8473994D1EA2FC3B3024_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Backpack.GA_Athena_Backpack_C.Triggered_EA0DD4594F6C8473994D1EA2FC3B3024
struct UGA_Athena_Backpack_C_Triggered_EA0DD4594F6C8473994D1EA2FC3B3024_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Backpack.GA_Athena_Backpack_C.K2_ActivateAbility
struct UGA_Athena_Backpack_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Backpack.GA_Athena_Backpack_C.ExecuteUbergraph_GA_Athena_Backpack
struct UGA_Athena_Backpack_C_ExecuteUbergraph_GA_Athena_Backpack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

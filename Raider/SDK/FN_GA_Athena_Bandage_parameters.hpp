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

// Function GA_Athena_Bandage.GA_Athena_Bandage_C.K2_CanActivateAbility
struct UGA_Athena_Bandage_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Bandage.GA_Athena_Bandage_C.Completed_BFC97FED4C67D0ACBCFD4E8BA1BBAADF
struct UGA_Athena_Bandage_C_Completed_BFC97FED4C67D0ACBCFD4E8BA1BBAADF_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Bandage.GA_Athena_Bandage_C.Cancelled_BFC97FED4C67D0ACBCFD4E8BA1BBAADF
struct UGA_Athena_Bandage_C_Cancelled_BFC97FED4C67D0ACBCFD4E8BA1BBAADF_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Bandage.GA_Athena_Bandage_C.Triggered_BFC97FED4C67D0ACBCFD4E8BA1BBAADF
struct UGA_Athena_Bandage_C_Triggered_BFC97FED4C67D0ACBCFD4E8BA1BBAADF_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Bandage.GA_Athena_Bandage_C.K2_ActivateAbility
struct UGA_Athena_Bandage_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Bandage.GA_Athena_Bandage_C.ExecuteUbergraph_GA_Athena_Bandage
struct UGA_Athena_Bandage_C_ExecuteUbergraph_GA_Athena_Bandage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

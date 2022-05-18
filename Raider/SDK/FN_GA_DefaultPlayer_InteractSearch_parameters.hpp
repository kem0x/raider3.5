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

// Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_B697D9B445CA2BFDB1328D93C33FBCF3
struct UGA_DefaultPlayer_InteractSearch_C_Completed_B697D9B445CA2BFDB1328D93C33FBCF3_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3
struct UGA_DefaultPlayer_InteractSearch_C_Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_B697D9B445CA2BFDB1328D93C33FBCF3
struct UGA_DefaultPlayer_InteractSearch_C_Triggered_B697D9B445CA2BFDB1328D93C33FBCF3_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.K2_ActivateAbility
struct UGA_DefaultPlayer_InteractSearch_C_K2_ActivateAbility_Params
{
};

// Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.ExecuteUbergraph_GA_DefaultPlayer_InteractSearch
struct UGA_DefaultPlayer_InteractSearch_C_ExecuteUbergraph_GA_DefaultPlayer_InteractSearch_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

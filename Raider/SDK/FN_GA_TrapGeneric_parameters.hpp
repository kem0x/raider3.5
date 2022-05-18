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

// Function GA_TrapGeneric.GA_TrapGeneric_C.Cancelled_EFEC611E4D988CAA3867F28EE35771B3
struct UGA_TrapGeneric_C_Cancelled_EFEC611E4D988CAA3867F28EE35771B3_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_TrapGeneric.GA_TrapGeneric_C.Targeted_EFEC611E4D988CAA3867F28EE35771B3
struct UGA_TrapGeneric_C_Targeted_EFEC611E4D988CAA3867F28EE35771B3_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_TrapGeneric.GA_TrapGeneric_C.K2_ActivateAbility
struct UGA_TrapGeneric_C_K2_ActivateAbility_Params
{
};

// Function GA_TrapGeneric.GA_TrapGeneric_C.ExecuteUbergraph_GA_TrapGeneric
struct UGA_TrapGeneric_C_ExecuteUbergraph_GA_TrapGeneric_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Completed_2221E89D4148023005FB94B04BA06EF9
struct UGAB_AIBaseRanged_C_Completed_2221E89D4148023005FB94B04BA06EF9_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Cancelled_2221E89D4148023005FB94B04BA06EF9
struct UGAB_AIBaseRanged_C_Cancelled_2221E89D4148023005FB94B04BA06EF9_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Triggered_2221E89D4148023005FB94B04BA06EF9
struct UGAB_AIBaseRanged_C_Triggered_2221E89D4148023005FB94B04BA06EF9_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_ActivateAbility
struct UGAB_AIBaseRanged_C_K2_ActivateAbility_Params
{
};

// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_TriggerFromAnimation
struct UGAB_AIBaseRanged_C_K2_TriggerFromAnimation_Params
{
	struct FGameplayTag*                               ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.IncreaseAccuracyAndUpdateLastThrowTime
struct UGAB_AIBaseRanged_C_IncreaseAccuracyAndUpdateLastThrowTime_Params
{
};

// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.ExecuteUbergraph_GAB_AIBaseRanged
struct UGAB_AIBaseRanged_C_ExecuteUbergraph_GAB_AIBaseRanged_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

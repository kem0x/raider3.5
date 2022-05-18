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

// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Completed_8CCC8A6B41B7B728038BDE887BD23BCC
struct UGAB_AIBaseMelee_C_Completed_8CCC8A6B41B7B728038BDE887BD23BCC_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC
struct UGAB_AIBaseMelee_C_Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.Triggered_8CCC8A6B41B7B728038BDE887BD23BCC
struct UGAB_AIBaseMelee_C_Triggered_8CCC8A6B41B7B728038BDE887BD23BCC_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.K2_ActivateAbility
struct UGAB_AIBaseMelee_C_K2_ActivateAbility_Params
{
};

// Function GAB_AIBaseMelee.GAB_AIBaseMelee_C.ExecuteUbergraph_GAB_AIBaseMelee
struct UGAB_AIBaseMelee_C_ExecuteUbergraph_GAB_AIBaseMelee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

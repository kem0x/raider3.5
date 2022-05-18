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

// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B
struct UGAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B
struct UGAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B
struct UGAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_ActivateAbility
struct UGAB_Melee_GenericCombo_C_K2_ActivateAbility_Params
{
};

// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_OnEndAbility
struct UGAB_Melee_GenericCombo_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.ExecuteUbergraph_GAB_Melee_GenericCombo
struct UGAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

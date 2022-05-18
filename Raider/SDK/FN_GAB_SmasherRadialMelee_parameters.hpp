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

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.Completed_2EFEB45748E11A8A846C14AD7ADF164D
struct UGAB_SmasherRadialMelee_C_Completed_2EFEB45748E11A8A846C14AD7ADF164D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.Cancelled_2EFEB45748E11A8A846C14AD7ADF164D
struct UGAB_SmasherRadialMelee_C_Cancelled_2EFEB45748E11A8A846C14AD7ADF164D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.Triggered_2EFEB45748E11A8A846C14AD7ADF164D
struct UGAB_SmasherRadialMelee_C_Triggered_2EFEB45748E11A8A846C14AD7ADF164D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.OnMoveFinished_1C768C2A4BDB2902BA3FDD92DD5F3C46
struct UGAB_SmasherRadialMelee_C_OnMoveFinished_1C768C2A4BDB2902BA3FDD92DD5F3C46_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.OnRequestFailed_1C768C2A4BDB2902BA3FDD92DD5F3C46
struct UGAB_SmasherRadialMelee_C_OnRequestFailed_1C768C2A4BDB2902BA3FDD92DD5F3C46_Params
{
};

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.OnCancelled_1C768C2A4BDB2902BA3FDD92DD5F3C46
struct UGAB_SmasherRadialMelee_C_OnCancelled_1C768C2A4BDB2902BA3FDD92DD5F3C46_Params
{
};

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.OnInterrupted_1C768C2A4BDB2902BA3FDD92DD5F3C46
struct UGAB_SmasherRadialMelee_C_OnInterrupted_1C768C2A4BDB2902BA3FDD92DD5F3C46_Params
{
};

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.OnComplete_1C768C2A4BDB2902BA3FDD92DD5F3C46
struct UGAB_SmasherRadialMelee_C_OnComplete_1C768C2A4BDB2902BA3FDD92DD5F3C46_Params
{
};

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.K2_ActivateAbility
struct UGAB_SmasherRadialMelee_C_K2_ActivateAbility_Params
{
};

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.MoveToLoop
struct UGAB_SmasherRadialMelee_C_MoveToLoop_Params
{
};

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.K2_OnEndAbility
struct UGAB_SmasherRadialMelee_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.ExecuteUbergraph_GAB_SmasherRadialMelee
struct UGAB_SmasherRadialMelee_C_ExecuteUbergraph_GAB_SmasherRadialMelee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.Completed_D4EB604A4AFDAD65E3461A86287A3EFE
struct UGAB_SmasherMelee_C_Completed_D4EB604A4AFDAD65E3461A86287A3EFE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.Cancelled_D4EB604A4AFDAD65E3461A86287A3EFE
struct UGAB_SmasherMelee_C_Cancelled_D4EB604A4AFDAD65E3461A86287A3EFE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.Triggered_D4EB604A4AFDAD65E3461A86287A3EFE
struct UGAB_SmasherMelee_C_Triggered_D4EB604A4AFDAD65E3461A86287A3EFE_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnMoveFinished_6E0FFA2F4367D5F26D5F5CB20E78DEFC
struct UGAB_SmasherMelee_C_OnMoveFinished_6E0FFA2F4367D5F26D5F5CB20E78DEFC_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnRequestFailed_6E0FFA2F4367D5F26D5F5CB20E78DEFC
struct UGAB_SmasherMelee_C_OnRequestFailed_6E0FFA2F4367D5F26D5F5CB20E78DEFC_Params
{
};

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnCancelled_6E0FFA2F4367D5F26D5F5CB20E78DEFC
struct UGAB_SmasherMelee_C_OnCancelled_6E0FFA2F4367D5F26D5F5CB20E78DEFC_Params
{
};

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnInterrupted_6E0FFA2F4367D5F26D5F5CB20E78DEFC
struct UGAB_SmasherMelee_C_OnInterrupted_6E0FFA2F4367D5F26D5F5CB20E78DEFC_Params
{
};

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.OnComplete_6E0FFA2F4367D5F26D5F5CB20E78DEFC
struct UGAB_SmasherMelee_C_OnComplete_6E0FFA2F4367D5F26D5F5CB20E78DEFC_Params
{
};

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.K2_ActivateAbility
struct UGAB_SmasherMelee_C_K2_ActivateAbility_Params
{
};

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.MoveToLoop
struct UGAB_SmasherMelee_C_MoveToLoop_Params
{
};

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.K2_OnEndAbility
struct UGAB_SmasherMelee_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_SmasherMelee.GAB_SmasherMelee_C.ExecuteUbergraph_GAB_SmasherMelee
struct UGAB_SmasherMelee_C_ExecuteUbergraph_GAB_SmasherMelee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

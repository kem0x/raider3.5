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

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_CanActivateAbility
struct UGAB_TakerMeleeStun_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnMoveFinished_513D85AB446CCC17A8F8AAA9835468D1
struct UGAB_TakerMeleeStun_C_OnMoveFinished_513D85AB446CCC17A8F8AAA9835468D1_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnRequestFailed_513D85AB446CCC17A8F8AAA9835468D1
struct UGAB_TakerMeleeStun_C_OnRequestFailed_513D85AB446CCC17A8F8AAA9835468D1_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnCancelled_513D85AB446CCC17A8F8AAA9835468D1
struct UGAB_TakerMeleeStun_C_OnCancelled_513D85AB446CCC17A8F8AAA9835468D1_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1
struct UGAB_TakerMeleeStun_C_OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnComplete_513D85AB446CCC17A8F8AAA9835468D1
struct UGAB_TakerMeleeStun_C_OnComplete_513D85AB446CCC17A8F8AAA9835468D1_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042
struct UGAB_TakerMeleeStun_C_Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042
struct UGAB_TakerMeleeStun_C_Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042
struct UGAB_TakerMeleeStun_C_Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.MoveTimerComplete
struct UGAB_TakerMeleeStun_C_MoveTimerComplete_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.ResetDoOnce
struct UGAB_TakerMeleeStun_C_ResetDoOnce_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_OnEndAbility
struct UGAB_TakerMeleeStun_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_ActivateAbility
struct UGAB_TakerMeleeStun_C_K2_ActivateAbility_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.ExecuteUbergraph_GAB_TakerMeleeStun
struct UGAB_TakerMeleeStun_C_ExecuteUbergraph_GAB_TakerMeleeStun_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

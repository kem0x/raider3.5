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

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnMoveFinished_16BAAEB04DC04FA84D2FF3BBFD3A3425
struct UGAB_TakerPortalBase_C_OnMoveFinished_16BAAEB04DC04FA84D2FF3BBFD3A3425_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnRequestFailed_16BAAEB04DC04FA84D2FF3BBFD3A3425
struct UGAB_TakerPortalBase_C_OnRequestFailed_16BAAEB04DC04FA84D2FF3BBFD3A3425_Params
{
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnCancelled_16BAAEB04DC04FA84D2FF3BBFD3A3425
struct UGAB_TakerPortalBase_C_OnCancelled_16BAAEB04DC04FA84D2FF3BBFD3A3425_Params
{
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnInterrupted_16BAAEB04DC04FA84D2FF3BBFD3A3425
struct UGAB_TakerPortalBase_C_OnInterrupted_16BAAEB04DC04FA84D2FF3BBFD3A3425_Params
{
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnComplete_16BAAEB04DC04FA84D2FF3BBFD3A3425
struct UGAB_TakerPortalBase_C_OnComplete_16BAAEB04DC04FA84D2FF3BBFD3A3425_Params
{
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnMoveFinished_F402FFCD40B6F77E728220BFF4A37F11
struct UGAB_TakerPortalBase_C_OnMoveFinished_F402FFCD40B6F77E728220BFF4A37F11_Params
{
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AAIController*                               AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnRequestFailed_F402FFCD40B6F77E728220BFF4A37F11
struct UGAB_TakerPortalBase_C_OnRequestFailed_F402FFCD40B6F77E728220BFF4A37F11_Params
{
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnCancelled_F402FFCD40B6F77E728220BFF4A37F11
struct UGAB_TakerPortalBase_C_OnCancelled_F402FFCD40B6F77E728220BFF4A37F11_Params
{
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnInterrupted_F402FFCD40B6F77E728220BFF4A37F11
struct UGAB_TakerPortalBase_C_OnInterrupted_F402FFCD40B6F77E728220BFF4A37F11_Params
{
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnComplete_F402FFCD40B6F77E728220BFF4A37F11
struct UGAB_TakerPortalBase_C_OnComplete_F402FFCD40B6F77E728220BFF4A37F11_Params
{
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.Completed_7D4D41B64C4603D73B5B158D82C73287
struct UGAB_TakerPortalBase_C_Completed_7D4D41B64C4603D73B5B158D82C73287_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.Cancelled_7D4D41B64C4603D73B5B158D82C73287
struct UGAB_TakerPortalBase_C_Cancelled_7D4D41B64C4603D73B5B158D82C73287_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.Triggered_7D4D41B64C4603D73B5B158D82C73287
struct UGAB_TakerPortalBase_C_Triggered_7D4D41B64C4603D73B5B158D82C73287_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.K2_OnEndAbility
struct UGAB_TakerPortalBase_C_K2_OnEndAbility_Params
{
	bool*                                              bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.K2_ActivateAbility
struct UGAB_TakerPortalBase_C_K2_ActivateAbility_Params
{
};

// Function GAB_TakerPortalBase.GAB_TakerPortalBase_C.ExecuteUbergraph_GAB_TakerPortalBase
struct UGAB_TakerPortalBase_C_ExecuteUbergraph_GAB_TakerPortalBase_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

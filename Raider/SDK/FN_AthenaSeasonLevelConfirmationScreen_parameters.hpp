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

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.SelectReward
struct UAthenaSeasonLevelConfirmationScreen_C_SelectReward_Params
{
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.HandleBack
struct UAthenaSeasonLevelConfirmationScreen_C_HandleBack_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.ModifyNumberOfTiersToBuy
struct UAthenaSeasonLevelConfirmationScreen_C_ModifyNumberOfTiersToBuy_Params
{
	int                                                Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GenerateItemWidgets
struct UAthenaSeasonLevelConfirmationScreen_C_GenerateItemWidgets_Params
{
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetNumberOfTiersBuying
struct UAthenaSeasonLevelConfirmationScreen_C_GetNumberOfTiersBuying_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetVBuckPrice
struct UAthenaSeasonLevelConfirmationScreen_C_GetVBuckPrice_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetRewards
struct UAthenaSeasonLevelConfirmationScreen_C_GetRewards_Params
{
	TArray<class UFortItem*>                           Output_Get;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.GetHeaderText
struct UAthenaSeasonLevelConfirmationScreen_C_GetHeaderText_Params
{
	struct FText                                       Result;                                                   // (Parm, OutParm)
	int                                                TierPurchaseNumber;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.Setup
struct UAthenaSeasonLevelConfirmationScreen_C_Setup_Params
{
	class UFortSeasonPassLevelInfo*                    Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<int, class UFortSeasonPassLevelInfo*>         AllLevels;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                MaxLevel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.InitWidgets
struct UAthenaSeasonLevelConfirmationScreen_C_InitWidgets_Params
{
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonLevelConfirmationScreen_C_BndEvt__PurchaseBtn_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.OnPurchaseFinished
struct UAthenaSeasonLevelConfirmationScreen_C_OnPurchaseFinished_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_396_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonLevelConfirmationScreen_C_BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_396_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_409_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonLevelConfirmationScreen_C_BndEvt__IncreasePurchaseTier_K2Node_ComponentBoundEvent_409_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_429_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonLevelConfirmationScreen_C_BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_429_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_450_CommonButtonClicked__DelegateSignature
struct UAthenaSeasonLevelConfirmationScreen_C_BndEvt__DecreasePurchaseTier_K2Node_ComponentBoundEvent_450_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.Construct
struct UAthenaSeasonLevelConfirmationScreen_C_Construct_Params
{
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.OnActivated
struct UAthenaSeasonLevelConfirmationScreen_C_OnActivated_Params
{
};

// Function AthenaSeasonLevelConfirmationScreen.AthenaSeasonLevelConfirmationScreen_C.ExecuteUbergraph_AthenaSeasonLevelConfirmationScreen
struct UAthenaSeasonLevelConfirmationScreen_C_ExecuteUbergraph_AthenaSeasonLevelConfirmationScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

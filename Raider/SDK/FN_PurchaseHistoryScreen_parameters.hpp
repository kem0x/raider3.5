#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ToggleBackAction
struct UPurchaseHistoryScreen_C_ToggleBackAction_Params
{
	bool                                               bShouldShow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.HandleBack
struct UPurchaseHistoryScreen_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UPurchaseHistoryScreen_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.Construct
struct UPurchaseHistoryScreen_C_Construct_Params
{
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnItemRefresh
struct UPurchaseHistoryScreen_C_OnItemRefresh_Params
{
	struct FMtxPurchaseHistory*                        PurchaseHistory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnPopulateView
struct UPurchaseHistoryScreen_C_OnPopulateView_Params
{
	EPurchaseReturnStep*                               CurrentStep;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnActivated
struct UPurchaseHistoryScreen_C_OnActivated_Params
{
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnNoPurchasesAvailable
struct UPurchaseHistoryScreen_C_OnNoPurchasesAvailable_Params
{
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UPurchaseHistoryScreen_C_BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
struct UPurchaseHistoryScreen_C_BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature
struct UPurchaseHistoryScreen_C_BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnBeginRefundSubmission
struct UPurchaseHistoryScreen_C_OnBeginRefundSubmission_Params
{
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnEndRefundSubmission
struct UPurchaseHistoryScreen_C_OnEndRefundSubmission_Params
{
	bool*                                              bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MtxRefunded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItemDefinition**                        ReturnedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TicketIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.InitializeTickets
struct UPurchaseHistoryScreen_C_InitializeTickets_Params
{
	int*                                               NumTicketsAvailableToUse;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ExecuteUbergraph_PurchaseHistoryScreen
struct UPurchaseHistoryScreen_C_ExecuteUbergraph_PurchaseHistoryScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

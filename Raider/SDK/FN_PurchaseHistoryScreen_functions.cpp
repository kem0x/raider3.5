// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ToggleBackAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldShow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryScreen_C::ToggleBackAction(bool bShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ToggleBackAction");

	UPurchaseHistoryScreen_C_ToggleBackAction_Params params;
	params.bShouldShow = bShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryScreen_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.HandleBack");

	UPurchaseHistoryScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPurchaseHistoryScreen_C::BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UPurchaseHistoryScreen_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPurchaseHistoryScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.Construct");

	UPurchaseHistoryScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnItemRefresh
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FMtxPurchaseHistory*    PurchaseHistory                (BlueprintVisible, BlueprintReadOnly, Parm)

void UPurchaseHistoryScreen_C::OnItemRefresh(struct FMtxPurchaseHistory* PurchaseHistory)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnItemRefresh");

	UPurchaseHistoryScreen_C_OnItemRefresh_Params params;
	params.PurchaseHistory = PurchaseHistory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnPopulateView
// (Event, Protected, BlueprintEvent)
// Parameters:
// EPurchaseReturnStep*           CurrentStep                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryScreen_C::OnPopulateView(EPurchaseReturnStep* CurrentStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnPopulateView");

	UPurchaseHistoryScreen_C_OnPopulateView_Params params;
	params.CurrentStep = CurrentStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPurchaseHistoryScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnActivated");

	UPurchaseHistoryScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnNoPurchasesAvailable
// (Event, Protected, BlueprintEvent)

void UPurchaseHistoryScreen_C::OnNoPurchasesAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnNoPurchasesAvailable");

	UPurchaseHistoryScreen_C_OnNoPurchasesAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPurchaseHistoryScreen_C::BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UPurchaseHistoryScreen_C_BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPurchaseHistoryScreen_C::BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature");

	UPurchaseHistoryScreen_C_BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPurchaseHistoryScreen_C::BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature");

	UPurchaseHistoryScreen_C_BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnBeginRefundSubmission
// (Event, Protected, BlueprintEvent)

void UPurchaseHistoryScreen_C::OnBeginRefundSubmission()
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnBeginRefundSubmission");

	UPurchaseHistoryScreen_C_OnBeginRefundSubmission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnEndRefundSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MtxRefunded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItemDefinition**    ReturnedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TicketIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryScreen_C::OnEndRefundSubmission(bool* bSuccess, int* MtxRefunded, class UFortItemDefinition** ReturnedItem, int* TicketIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.OnEndRefundSubmission");

	UPurchaseHistoryScreen_C_OnEndRefundSubmission_Params params;
	params.bSuccess = bSuccess;
	params.MtxRefunded = MtxRefunded;
	params.ReturnedItem = ReturnedItem;
	params.TicketIndex = TicketIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.InitializeTickets
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           NumTicketsAvailableToUse       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryScreen_C::InitializeTickets(int* NumTicketsAvailableToUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.InitializeTickets");

	UPurchaseHistoryScreen_C_InitializeTickets_Params params;
	params.NumTicketsAvailableToUse = NumTicketsAvailableToUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ExecuteUbergraph_PurchaseHistoryScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPurchaseHistoryScreen_C::ExecuteUbergraph_PurchaseHistoryScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PurchaseHistoryScreen.PurchaseHistoryScreen_C.ExecuteUbergraph_PurchaseHistoryScreen");

	UPurchaseHistoryScreen_C_ExecuteUbergraph_PurchaseHistoryScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

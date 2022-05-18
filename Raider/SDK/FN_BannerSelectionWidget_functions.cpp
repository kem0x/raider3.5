// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BannerSelectionWidget.BannerSelectionWidget_C.HandleNextCategoryAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBannerSelectionWidget_C::HandleNextCategoryAction(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.HandleNextCategoryAction");

	UBannerSelectionWidget_C_HandleNextCategoryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.HandlePreviousCategoryAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBannerSelectionWidget_C::HandlePreviousCategoryAction(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.HandlePreviousCategoryAction");

	UBannerSelectionWidget_C_HandlePreviousCategoryAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBannerSelectionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.Construct");

	UBannerSelectionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   IconId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBannerSelectionWidget_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature(const struct FName& IconId, const struct FName& ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature");

	UBannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature_Params params;
	params.IconId = IconId;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UBannerSelectionWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.OnActivated");

	UBannerSelectionWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBannerSelectionWidget_C::BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature");

	UBannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitFailed
// (Event, Public, BlueprintEvent)

void UBannerSelectionWidget_C::OnHomebaseNameCommitFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitFailed");

	UBannerSelectionWidget_C_OnHomebaseNameCommitFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitSucceeded
// (Event, Public, BlueprintEvent)

void UBannerSelectionWidget_C::OnHomebaseNameCommitSucceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitSucceeded");

	UBannerSelectionWidget_C_OnHomebaseNameCommitSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.GainFocusOfTextBox
// (BlueprintCallable, BlueprintEvent)

void UBannerSelectionWidget_C::GainFocusOfTextBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.GainFocusOfTextBox");

	UBannerSelectionWidget_C_GainFocusOfTextBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BannerSelectionWidget.BannerSelectionWidget_C.ExecuteUbergraph_BannerSelectionWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBannerSelectionWidget_C::ExecuteUbergraph_BannerSelectionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BannerSelectionWidget.BannerSelectionWidget_C.ExecuteUbergraph_BannerSelectionWidget");

	UBannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

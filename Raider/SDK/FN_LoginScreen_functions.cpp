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

// Function LoginScreen.LoginScreen_C.PopContentWidgetInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* ULoginScreen_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.PopContentWidgetInternal");

	ULoginScreen_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::ShowAccountLinkingWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowAccountLinkingWindow");

	ULoginScreen_C_ShowAccountLinkingWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoginScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.Construct");

	ULoginScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnEnterState");

	ULoginScreen_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   StatusText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoginScreen_C::AccountLinking_PushStatus(const struct FText& StatusText)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_PushStatus");

	ULoginScreen_C_AccountLinking_PushStatus_Params params;
	params.StatusText = StatusText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus
// (BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::AccountLinking_PopStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_PopStatus");

	ULoginScreen_C_AccountLinking_PopStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   FailReason                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoginScreen_C::AccountLinking_LinkingFailed(const struct FText& FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_LinkingFailed");

	ULoginScreen_C_AccountLinking_LinkingFailed_Params params;
	params.FailReason = FailReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn
// (BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::AccountLinking_RequestSignIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_RequestSignIn");

	ULoginScreen_C_AccountLinking_RequestSignIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin
// (BlueprintCallable, BlueprintEvent)

void ULoginScreen_C::AccountLinking_RequestAutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.AccountLinking_RequestAutoLogin");

	ULoginScreen_C_AccountLinking_RequestAutoLogin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoginScreen_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.PushContentWidgetInternal");

	ULoginScreen_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULoginScreen_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature");

	ULoginScreen_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_20_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bLinkedAccountNeedsPurchase    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::OnNeedsPurchaseOrAccountLinking(bool* bLinkedAccountNeedsPurchase)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnNeedsPurchaseOrAccountLinking");

	ULoginScreen_C_OnNeedsPurchaseOrAccountLinking_Params params;
	params.bLinkedAccountNeedsPurchase = bLinkedAccountNeedsPurchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ShowBackBar
// (Event, Protected, BlueprintEvent)

void ULoginScreen_C::ShowBackBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ShowBackBar");

	ULoginScreen_C_ShowBackBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.HideTopBarOptions
// (Event, Protected, BlueprintEvent)

void ULoginScreen_C::HideTopBarOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.HideTopBarOptions");

	ULoginScreen_C_HideTopBarOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::ExecuteUbergraph_LoginScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen");

	ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

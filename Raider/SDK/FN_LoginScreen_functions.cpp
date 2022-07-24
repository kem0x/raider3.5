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

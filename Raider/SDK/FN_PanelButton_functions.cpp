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

// Function PanelButton.PanelButton_C.UpdateInputActionLayout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPanelButton_C::UpdateInputActionLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.UpdateInputActionLayout");

	UPanelButton_C_UpdateInputActionLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.UpdateStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPanelButton_C::UpdateStyle(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.UpdateStyle");

	UPanelButton_C_UpdateStyle_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UPanelButton_C::InitializeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.InitializeButton");

	UPanelButton_C_InitializeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UPanelButton_C::UpdateTextAndStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.UpdateTextAndStyle");

	UPanelButton_C_UpdateTextAndStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPanelButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.PreConstruct");

	UPanelButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPanelButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	UPanelButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle*    NewTriggeredAction             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPanelButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle* NewTriggeredAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.OnTriggeredInputActionChanged");

	UPanelButton_C_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         HeldPercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPanelButton_C::OnActionProgress(float* HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.OnActionProgress");

	UPanelButton_C_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UPanelButton_C::OnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.OnActionComplete");

	UPanelButton_C_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPanelButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.Construct");

	UPanelButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UPanelButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.OnHovered");

	UPanelButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UPanelButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.OnUnhovered");

	UPanelButton_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPanelButton_C::ExecuteUbergraph_PanelButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton");

	UPanelButton_C_ExecuteUbergraph_PanelButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

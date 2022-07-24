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

// Function InputReflectorButton.InputReflectorButton_C.ShowIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldShow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflectorButton_C::ShowIcon(bool bShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.ShowIcon");

	UInputReflectorButton_C_ShowIcon_Params params;
	params.bShouldShow = bShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.SetTextInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InButtonText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputReflectorButton_C::SetTextInternal(const struct FText& InButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.SetTextInternal");

	UInputReflectorButton_C_SetTextInternal_Params params;
	params.InButtonText = InButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.SetInitialMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UInputReflectorButton_C::SetInitialMouseKeyboardStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.SetInitialMouseKeyboardStyle");

	UInputReflectorButton_C_SetInitialMouseKeyboardStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UInputReflectorButton_C::UpdateTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.UpdateTextStyle");

	UInputReflectorButton_C_UpdateTextStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> ContentAlignment               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflectorButton_C::SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.SetContentAlignment");

	UInputReflectorButton_C_SetContentAlignment_Params params;
	params.ContentAlignment = ContentAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)

void UInputReflectorButton_C::UpdateContentAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.UpdateContentAlignment");

	UInputReflectorButton_C_UpdateContentAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflectorButton_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.SetMouseKeyboardStyle");

	UInputReflectorButton_C_SetMouseKeyboardStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflectorButton_C::UpdateStyle(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.UpdateStyle");

	UInputReflectorButton_C_UpdateStyle_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInputReflectorButton_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.UpdateText");

	UInputReflectorButton_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflectorButton_C::SetControllerStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.SetControllerStyle");

	UInputReflectorButton_C_SetControllerStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflectorButton_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.UpdateTextAndStyle");

	UInputReflectorButton_C_UpdateTextAndStyle_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UInputReflectorButton_C::InitializeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.InitializeButton");

	UInputReflectorButton_C_InitializeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputReflectorButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.Set Icon");

	UInputReflectorButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UInputReflectorButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.Set Text");

	UInputReflectorButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UInputReflectorButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.OnCurrentTextStyleChanged");

	UInputReflectorButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflectorButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.PreConstruct");

	UInputReflectorButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflectorButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	UInputReflectorButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle*    NewTriggeredAction             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInputReflectorButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle* NewTriggeredAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.OnTriggeredInputActionChanged");

	UInputReflectorButton_C_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         HeldPercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflectorButton_C::OnActionProgress(float* HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.OnActionProgress");

	UInputReflectorButton_C_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UInputReflectorButton_C::OnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.OnActionComplete");

	UInputReflectorButton_C_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputReflectorButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.Construct");

	UInputReflectorButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputReflectorButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.Destruct");

	UInputReflectorButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputReflectorButton.InputReflectorButton_C.ExecuteUbergraph_InputReflectorButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputReflectorButton_C::ExecuteUbergraph_InputReflectorButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputReflectorButton.InputReflectorButton_C.ExecuteUbergraph_InputReflectorButton");

	UInputReflectorButton_C_ExecuteUbergraph_InputReflectorButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

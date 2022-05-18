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

// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateCheckmark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconCheckmarkTextButton_C::UpdateCheckmark(bool Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateCheckmark");

	UIconCheckmarkTextButton_C_UpdateCheckmark_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.ShowIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldShow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconCheckmarkTextButton_C::ShowIcon(bool bShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.ShowIcon");

	UIconCheckmarkTextButton_C_ShowIcon_Params params;
	params.bShouldShow = bShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetTextInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InButtonText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconCheckmarkTextButton_C::SetTextInternal(const struct FText& InButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetTextInternal");

	UIconCheckmarkTextButton_C_SetTextInternal_Params params;
	params.InButtonText = InButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetInitialMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconCheckmarkTextButton_C::SetInitialMouseKeyboardStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetInitialMouseKeyboardStyle");

	UIconCheckmarkTextButton_C_SetInitialMouseKeyboardStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconCheckmarkTextButton_C::UpdateTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateTextStyle");

	UIconCheckmarkTextButton_C_UpdateTextStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> ContentAlignment               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconCheckmarkTextButton_C::SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetContentAlignment");

	UIconCheckmarkTextButton_C_SetContentAlignment_Params params;
	params.ContentAlignment = ContentAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)

void UIconCheckmarkTextButton_C::UpdateContentAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateContentAlignment");

	UIconCheckmarkTextButton_C_UpdateContentAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconCheckmarkTextButton_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetMouseKeyboardStyle");

	UIconCheckmarkTextButton_C_SetMouseKeyboardStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconCheckmarkTextButton_C::UpdateStyle(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateStyle");

	UIconCheckmarkTextButton_C_UpdateStyle_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconCheckmarkTextButton_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateText");

	UIconCheckmarkTextButton_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconCheckmarkTextButton_C::SetControllerStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetControllerStyle");

	UIconCheckmarkTextButton_C_SetControllerStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconCheckmarkTextButton_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.UpdateTextAndStyle");

	UIconCheckmarkTextButton_C_UpdateTextAndStyle_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UIconCheckmarkTextButton_C::InitializeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.InitializeButton");

	UIconCheckmarkTextButton_C_InitializeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconCheckmarkTextButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Set Icon");

	UIconCheckmarkTextButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconCheckmarkTextButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Set Text");

	UIconCheckmarkTextButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UIconCheckmarkTextButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnCurrentTextStyleChanged");

	UIconCheckmarkTextButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconCheckmarkTextButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.PreConstruct");

	UIconCheckmarkTextButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconCheckmarkTextButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.SetTabLabelInfo");

	UIconCheckmarkTextButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconCheckmarkTextButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	UIconCheckmarkTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle*    NewTriggeredAction             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconCheckmarkTextButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle* NewTriggeredAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnTriggeredInputActionChanged");

	UIconCheckmarkTextButton_C_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         HeldPercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconCheckmarkTextButton_C::OnActionProgress(float* HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnActionProgress");

	UIconCheckmarkTextButton_C_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UIconCheckmarkTextButton_C::OnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.OnActionComplete");

	UIconCheckmarkTextButton_C_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconCheckmarkTextButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Construct");

	UIconCheckmarkTextButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconCheckmarkTextButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.Destruct");

	UIconCheckmarkTextButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.ExecuteUbergraph_IconCheckmarkTextButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconCheckmarkTextButton_C::ExecuteUbergraph_IconCheckmarkTextButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconCheckmarkTextButton.IconCheckmarkTextButton_C.ExecuteUbergraph_IconCheckmarkTextButton");

	UIconCheckmarkTextButton_C_ExecuteUbergraph_IconCheckmarkTextButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

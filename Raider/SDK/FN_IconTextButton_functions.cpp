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

// Function IconTextButton.IconTextButton_C.ShowIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldShow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButton_C::ShowIcon(bool bShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.ShowIcon");

	UIconTextButton_C_ShowIcon_Params params;
	params.bShouldShow = bShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.SetTextInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InButtonText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButton_C::SetTextInternal(const struct FText& InButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.SetTextInternal");

	UIconTextButton_C_SetTextInternal_Params params;
	params.InButtonText = InButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.SetInitialMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButton_C::SetInitialMouseKeyboardStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.SetInitialMouseKeyboardStyle");

	UIconTextButton_C_SetInitialMouseKeyboardStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButton_C::UpdateTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.UpdateTextStyle");

	UIconTextButton_C_UpdateTextStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> ContentAlignment               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButton_C::SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.SetContentAlignment");

	UIconTextButton_C_SetContentAlignment_Params params;
	params.ContentAlignment = ContentAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)

void UIconTextButton_C::UpdateContentAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.UpdateContentAlignment");

	UIconTextButton_C_UpdateContentAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButton_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.SetMouseKeyboardStyle");

	UIconTextButton_C_SetMouseKeyboardStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButton_C::UpdateStyle(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.UpdateStyle");

	UIconTextButton_C_UpdateStyle_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconTextButton_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.UpdateText");

	UIconTextButton_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButton_C::SetControllerStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.SetControllerStyle");

	UIconTextButton_C_SetControllerStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButton_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.UpdateTextAndStyle");

	UIconTextButton_C_UpdateTextAndStyle_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButton_C::InitializeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.InitializeButton");

	UIconTextButton_C_InitializeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.Set Icon");

	UIconTextButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButton_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.Set Text");

	UIconTextButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UIconTextButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.OnCurrentTextStyleChanged");

	UIconTextButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.PreConstruct");

	UIconTextButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTextButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.SetTabLabelInfo");

	UIconTextButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	UIconTextButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle*    NewTriggeredAction             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTextButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle* NewTriggeredAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged");

	UIconTextButton_C_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         HeldPercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButton_C::OnActionProgress(float* HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.OnActionProgress");

	UIconTextButton_C_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UIconTextButton_C::OnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.OnActionComplete");

	UIconTextButton_C_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTextButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.Construct");

	UIconTextButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTextButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.Destruct");

	UIconTextButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButton_C::ExecuteUbergraph_IconTextButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton");

	UIconTextButton_C_ExecuteUbergraph_IconTextButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function IconTextButtonReplay.IconTextButtonReplay_C.ActivateButton
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButtonReplay_C::ActivateButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.ActivateButton");

	UIconTextButtonReplay_C_ActivateButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButtonReplay_C::UpdateTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateTextStyle");

	UIconTextButtonReplay_C_UpdateTextStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> ContentAlignment               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReplay_C::SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.SetContentAlignment");

	UIconTextButtonReplay_C_SetContentAlignment_Params params;
	params.ContentAlignment = ContentAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)

void UIconTextButtonReplay_C::UpdateContentAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateContentAlignment");

	UIconTextButtonReplay_C_UpdateContentAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReplay_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.SetMouseKeyboardStyle");

	UIconTextButtonReplay_C_SetMouseKeyboardStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReplay_C::UpdateStyle(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateStyle");

	UIconTextButtonReplay_C_UpdateStyle_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconTextButtonReplay_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateText");

	UIconTextButtonReplay_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReplay_C::SetControllerStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.SetControllerStyle");

	UIconTextButtonReplay_C_SetControllerStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReplay_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.UpdateTextAndStyle");

	UIconTextButtonReplay_C_UpdateTextAndStyle_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButtonReplay_C::InitializeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.InitializeButton");

	UIconTextButtonReplay_C_InitializeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButtonReplay_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.Set Icon");

	UIconTextButtonReplay_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButtonReplay_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.Set Text");

	UIconTextButtonReplay_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UIconTextButtonReplay_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.OnCurrentTextStyleChanged");

	UIconTextButtonReplay_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReplay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.PreConstruct");

	UIconTextButtonReplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTextButtonReplay_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.SetTabLabelInfo");

	UIconTextButtonReplay_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReplay_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	UIconTextButtonReplay_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle*    NewTriggeredAction             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTextButtonReplay_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle* NewTriggeredAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.OnTriggeredInputActionChanged");

	UIconTextButtonReplay_C_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         HeldPercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReplay_C::OnActionProgress(float* HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.OnActionProgress");

	UIconTextButtonReplay_C_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UIconTextButtonReplay_C::OnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.OnActionComplete");

	UIconTextButtonReplay_C_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTextButtonReplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.Construct");

	UIconTextButtonReplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UIconTextButtonReplay_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.OnHovered");

	UIconTextButtonReplay_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UIconTextButtonReplay_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.OnUnhovered");

	UIconTextButtonReplay_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UIconTextButtonReplay_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.OnSelected");

	UIconTextButtonReplay_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.OnDeselected
// (Event, Protected, BlueprintEvent)

void UIconTextButtonReplay_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.OnDeselected");

	UIconTextButtonReplay_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReplay.IconTextButtonReplay_C.ExecuteUbergraph_IconTextButtonReplay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReplay_C::ExecuteUbergraph_IconTextButtonReplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReplay.IconTextButtonReplay_C.ExecuteUbergraph_IconTextButtonReplay");

	UIconTextButtonReplay_C_ExecuteUbergraph_IconTextButtonReplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

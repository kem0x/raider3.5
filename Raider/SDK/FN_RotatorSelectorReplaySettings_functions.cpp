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

// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply URotatorSelectorReplaySettings_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnFocusReceived");

	URotatorSelectorReplaySettings_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Update Options
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void URotatorSelectorReplaySettings_C::Update_Options(TArray<struct FText>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Update Options");

	URotatorSelectorReplaySettings_C_Update_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)

void URotatorSelectorReplaySettings_C::Center_on_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Center on Widget");

	URotatorSelectorReplaySettings_C_Center_on_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Initialize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Display_Text                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FText>           Options                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   Hover_Text                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonTextBlock*        Tab_Tooltip                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URotatorSelectorReplaySettings_C::Initialize(const struct FText& Display_Text, const struct FText& Hover_Text, class UCommonTextBlock* Tab_Tooltip, TArray<struct FText>* Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Initialize");

	URotatorSelectorReplaySettings_C_Initialize_Params params;
	params.Display_Text = Display_Text;
	params.Hover_Text = Hover_Text;
	params.Tab_Tooltip = Tab_Tooltip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Options != nullptr)
		*Options = params.Options;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Update Row Selector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Currently_Selected             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URotatorSelectorReplaySettings_C::Update_Row_Selector(int Currently_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Update Row Selector");

	URotatorSelectorReplaySettings_C_Update_Row_Selector_Params params;
	params.Currently_Selected = Currently_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URotatorSelectorReplaySettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Construct");

	URotatorSelectorReplaySettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URotatorSelectorReplaySettings_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnMouseLeave");

	URotatorSelectorReplaySettings_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URotatorSelectorReplaySettings_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.OnMouseEnter");

	URotatorSelectorReplaySettings_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URotatorSelectorReplaySettings_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature");

	URotatorSelectorReplaySettings_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URotatorSelectorReplaySettings_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	URotatorSelectorReplaySettings_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URotatorSelectorReplaySettings_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	URotatorSelectorReplaySettings_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.ExecuteUbergraph_RotatorSelectorReplaySettings
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URotatorSelectorReplaySettings_C::ExecuteUbergraph_RotatorSelectorReplaySettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.ExecuteUbergraph_RotatorSelectorReplaySettings");

	URotatorSelectorReplaySettings_C_ExecuteUbergraph_RotatorSelectorReplaySettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Selection Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URotatorSelectorReplaySettings_C::Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function RotatorSelectorReplaySettings.RotatorSelectorReplaySettings_C.Selection Changed__DelegateSignature");

	URotatorSelectorReplaySettings_C_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

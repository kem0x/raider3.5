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

// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UOptionsMenuInputOneKey_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.GetListItemObject");

	UOptionsMenuInputOneKey_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetClearButtonVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenuInputOneKey_C::SetClearButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.SetClearButtonVisibility");

	UOptionsMenuInputOneKey_C_SetClearButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UOptionsMenuInputOneKey_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnFocusReceived");

	UOptionsMenuInputOneKey_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Center On Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuInputOneKey_C::Center_On_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Center On Widget");

	UOptionsMenuInputOneKey_C_Center_On_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputOneKey_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnListItemObjectSet");

	UOptionsMenuInputOneKey_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuInputOneKey_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnMouseLeave");

	UOptionsMenuInputOneKey_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuInputOneKey_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.OnMouseEnter");

	UOptionsMenuInputOneKey_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuInputOneKey_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature");

	UOptionsMenuInputOneKey_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_226_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuInputOneKey_C::BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature");

	UOptionsMenuInputOneKey_C_BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputOneKey_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BP_OnItemSelectionChanged");

	UOptionsMenuInputOneKey_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputOneKey_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BP_OnItemExpansionChanged");

	UOptionsMenuInputOneKey_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UOptionsMenuInputOneKey_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.BP_OnEntryReleased");

	UOptionsMenuInputOneKey_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.ExecuteUbergraph_OptionsMenuInputOneKey
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputOneKey_C::ExecuteUbergraph_OptionsMenuInputOneKey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.ExecuteUbergraph_OptionsMenuInputOneKey");

	UOptionsMenuInputOneKey_C_ExecuteUbergraph_OptionsMenuInputOneKey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.UnbindClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number_in_List                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOptionsMenuInputOneKey_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuInputOneKey_C::UnbindClicked__DelegateSignature(int Number_in_List, class UOptionsMenuInputOneKey_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.UnbindClicked__DelegateSignature");

	UOptionsMenuInputOneKey_C_UnbindClicked__DelegateSignature_Params params;
	params.Number_in_List = Number_in_List;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Input Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number_in_List                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Primary_Button              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputOneKey_C::Input_Clicked__DelegateSignature(int Number_in_List, bool Is_Primary_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKey.OptionsMenuInputOneKey_C.Input Clicked__DelegateSignature");

	UOptionsMenuInputOneKey_C_Input_Clicked__DelegateSignature_Params params;
	params.Number_in_List = Number_in_List;
	params.Is_Primary_Button = Is_Primary_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

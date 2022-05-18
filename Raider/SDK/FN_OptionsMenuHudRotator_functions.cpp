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

// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.DoesItemHaveChildren
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOptionsMenuHudRotator_C::DoesItemHaveChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.DoesItemHaveChildren");

	UOptionsMenuHudRotator_C_DoesItemHaveChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetIndentLevel
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UOptionsMenuHudRotator_C::GetIndentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetIndentLevel");

	UOptionsMenuHudRotator_C_GetIndentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.IsItemExpanded
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOptionsMenuHudRotator_C::IsItemExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.IsItemExpanded");

	UOptionsMenuHudRotator_C_IsItemExpanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UOptionsMenuHudRotator_C::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.GetData");

	UOptionsMenuHudRotator_C_GetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.UpdateSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHudRotator_C::UpdateSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.UpdateSize");

	UOptionsMenuHudRotator_C_UpdateSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Options
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOptionsMenuHudRotator_C::Update_Options(TArray<struct FText>* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Options");

	UOptionsMenuHudRotator_C_Update_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Center on Widget
// (Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHudRotator_C::Center_on_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Center on Widget");

	UOptionsMenuHudRotator_C_Center_on_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Row Selector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Currently_Selected             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuHudRotator_C::Update_Row_Selector(int Currently_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Update Row Selector");

	UOptionsMenuHudRotator_C_Update_Row_Selector_Params params;
	params.Currently_Selected = Currently_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnAcquireFromPool
// (Event, Protected, BlueprintEvent)

void UOptionsMenuHudRotator_C::OnAcquireFromPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnAcquireFromPool");

	UOptionsMenuHudRotator_C_OnAcquireFromPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnReleaseToPool
// (Event, Protected, BlueprintEvent)

void UOptionsMenuHudRotator_C::OnReleaseToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnReleaseToPool");

	UOptionsMenuHudRotator_C_OnReleaseToPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHudRotator_C::Private_OnExpanderArrowShiftClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Private_OnExpanderArrowShiftClicked");

	UOptionsMenuHudRotator_C_Private_OnExpanderArrowShiftClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.RegisterOnClicked
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOptionsMenuHudRotator_C::RegisterOnClicked(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.RegisterOnClicked");

	UOptionsMenuHudRotator_C_RegisterOnClicked_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetExpanded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bExpanded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuHudRotator_C::SetExpanded(bool bExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetExpanded");

	UOptionsMenuHudRotator_C_SetExpanded_Params params;
	params.bExpanded = bExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetIndexInList
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InIndexInList                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuHudRotator_C::SetIndexInList(int InIndexInList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetIndexInList");

	UOptionsMenuHudRotator_C_SetIndexInList_Params params;
	params.InIndexInList = InIndexInList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetSelected
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSelected                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuHudRotator_C::SetSelected(bool bSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetSelected");

	UOptionsMenuHudRotator_C_SetSelected_Params params;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ToggleExpansion
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHudRotator_C::ToggleExpansion()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ToggleExpansion");

	UOptionsMenuHudRotator_C_ToggleExpansion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UOptionsMenuHudRotator_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Reset");

	UOptionsMenuHudRotator_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UOptionsMenuHudRotator_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Construct");

	UOptionsMenuHudRotator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuHudRotator_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseLeave");

	UOptionsMenuHudRotator_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuHudRotator_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.OnMouseEnter");

	UOptionsMenuHudRotator_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuHudRotator_C::BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature");

	UOptionsMenuHudRotator_C_BndEvt__TextRotator_K2Node_ComponentBoundEvent_5_OnRotated__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 InData                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCommonListView*         OwningList                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuHudRotator_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.SetData");

	UOptionsMenuHudRotator_C_SetData_Params params;
	params.InData = InData;
	params.OwningList = OwningList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuHudRotator_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UOptionsMenuHudRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuHudRotator_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature");

	UOptionsMenuHudRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_15_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ExecuteUbergraph_OptionsMenuHudRotator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuHudRotator_C::ExecuteUbergraph_OptionsMenuHudRotator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.ExecuteUbergraph_OptionsMenuHudRotator");

	UOptionsMenuHudRotator_C_ExecuteUbergraph_OptionsMenuHudRotator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Selection Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Gameplay_Tag                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UOptionsMenuHudRotator_C::Selection_Changed__DelegateSignature(int Selected_Index, const struct FGameplayTag& Gameplay_Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuHudRotator.OptionsMenuHudRotator_C.Selection Changed__DelegateSignature");

	UOptionsMenuHudRotator_C_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;
	params.Gameplay_Tag = Gameplay_Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

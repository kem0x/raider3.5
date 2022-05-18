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

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Navigate to Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotScreen_C::Navigate_to_Button(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Navigate to Button");

	UItemTransformSlotScreen_C_Navigate_to_Button_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.NavigateToFirstItem
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformSlotScreen_C::NavigateToFirstItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.NavigateToFirstItem");

	UItemTransformSlotScreen_C_NavigateToFirstItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Get Transform Data
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedKey                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UFortItem*>       SacrificeItems                 (Parm, OutParm, ZeroConstructor)
// int                            CurrentSacrificePoints         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTier                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotScreen_C::Get_Transform_Data(class UFortItem** SelectedKey, TArray<class UFortItem*>* SacrificeItems, int* CurrentSacrificePoints, int* CurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Get Transform Data");

	UItemTransformSlotScreen_C_Get_Transform_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedKey != nullptr)
		*SelectedKey = params.SelectedKey;
	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
	if (CurrentSacrificePoints != nullptr)
		*CurrentSacrificePoints = params.CurrentSacrificePoints;
	if (CurrentTier != nullptr)
		*CurrentTier = params.CurrentTier;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ResetScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformSlotScreen_C::ResetScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ResetScreen");

	UItemTransformSlotScreen_C_ResetScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.CloseItemPicker
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformSlotScreen_C::CloseItemPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.CloseItemPicker");

	UItemTransformSlotScreen_C_CloseItemPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.SetupSlotScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformSlotScreen_C::SetupSlotScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.SetupSlotScreen");

	UItemTransformSlotScreen_C_SetupSlotScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenItemPicker
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformSlotScreen_C::OpenItemPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenItemPicker");

	UItemTransformSlotScreen_C_OpenItemPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenSlotScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransformSlotScreen_C::OpenSlotScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenSlotScreen");

	UItemTransformSlotScreen_C_OpenSlotScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemTransformSlotScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Construct");

	UItemTransformSlotScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            SacrificePoints                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature(int SacrificePoints, int CurrentTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature_Params params;
	params.SacrificePoints = SacrificePoints;
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           TransformActive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotScreen_C::BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature(bool TransformActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature");

	UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature_Params params;
	params.TransformActive = TransformActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.HandleSlotButton_Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           AssociatedButton               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotScreen_C::HandleSlotButton_Clicked(class UCommonButton* AssociatedButton, int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.HandleSlotButton_Clicked");

	UItemTransformSlotScreen_C_HandleSlotButton_Clicked_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.HandleSlotButton_DoubleClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           AssociatedButton               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotScreen_C::HandleSlotButton_DoubleClicked(class UCommonButton* AssociatedButton, int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.HandleSlotButton_DoubleClicked");

	UItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ExecuteUbergraph_ItemTransformSlotScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotScreen_C::ExecuteUbergraph_ItemTransformSlotScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ExecuteUbergraph_ItemTransformSlotScreen");

	UItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UItemTransformSlotScreen_C::OnItemPickerOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerOpened__DelegateSignature");

	UItemTransformSlotScreen_C_OnItemPickerOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UItemTransformSlotScreen_C::OnItemPickerClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerClosed__DelegateSignature");

	UItemTransformSlotScreen_C_OnItemPickerClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformButtonUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TransformActive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotScreen_C::OnTransformButtonUpdated__DelegateSignature(bool TransformActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformButtonUpdated__DelegateSignature");

	UItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature_Params params;
	params.TransformActive = TransformActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformConfirmed__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortItem*>       ItemsToSacrifice               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SacrificePoints                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentTier                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransformSlotScreen_C::OnTransformConfirmed__DelegateSignature(int SacrificePoints, int CurrentTier, TArray<class UFortItem*>* ItemsToSacrifice)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformConfirmed__DelegateSignature");

	UItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature_Params params;
	params.SacrificePoints = SacrificePoints;
	params.CurrentTier = CurrentTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsToSacrifice != nullptr)
		*ItemsToSacrifice = params.ItemsToSacrifice;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

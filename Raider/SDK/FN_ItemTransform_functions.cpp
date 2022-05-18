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

// Function ItemTransform.ItemTransform_C.SetAndLogSelectedKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransform_C::SetAndLogSelectedKey(class UFortItem* SelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.SetAndLogSelectedKey");

	UItemTransform_C_SetAndLogSelectedKey_Params params;
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.Handle SubScreen Activated
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::Handle_SubScreen_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.Handle SubScreen Activated");

	UItemTransform_C_Handle_SubScreen_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HandleClosePicker
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransform_C::HandleClosePicker(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleClosePicker");

	UItemTransform_C_HandleClosePicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ItemTransform.ItemTransform_C.OnItemPickerOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::OnItemPickerOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OnItemPickerOpened");

	UItemTransform_C_OnItemPickerOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OnItemPickerClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::OnItemPickerClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OnItemPickerClosed");

	UItemTransform_C_OnItemPickerClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.UpdateTransformAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TransformActive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransform_C::UpdateTransformAction(bool TransformActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.UpdateTransformAction");

	UItemTransform_C_UpdateTransformAction_Params params;
	params.TransformActive = TransformActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.Handle Slot Screen Activated
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::Handle_Slot_Screen_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.Handle Slot Screen Activated");

	UItemTransform_C_Handle_Slot_Screen_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.Handle Key Screen Activated
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::Handle_Key_Screen_Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.Handle Key Screen Activated");

	UItemTransform_C_Handle_Key_Screen_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.DisableTransformAction
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::DisableTransformAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.DisableTransformAction");

	UItemTransform_C_DisableTransformAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HideTransformAction
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::HideTransformAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HideTransformAction");

	UItemTransform_C_HideTransformAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.ShowTransformAction
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::ShowTransformAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.ShowTransformAction");

	UItemTransform_C_ShowTransformAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.UpdateSelectKeyAction
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::UpdateSelectKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.UpdateSelectKeyAction");

	UItemTransform_C_UpdateSelectKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.DisableSelectKeyAction
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::DisableSelectKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.DisableSelectKeyAction");

	UItemTransform_C_DisableSelectKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HideSelectKeyAction
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::HideSelectKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HideSelectKeyAction");

	UItemTransform_C_HideSelectKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.ShowSelectKeyAction
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::ShowSelectKeyAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.ShowSelectKeyAction");

	UItemTransform_C_ShowSelectKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HandleSelectKeyAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransform_C::HandleSelectKeyAction(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleSelectKeyAction");

	UItemTransform_C_HandleSelectKeyAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ItemTransform.ItemTransform_C.HandleTransformAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransform_C::HandleTransformAction(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleTransformAction");

	UItemTransform_C_HandleTransformAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ItemTransform.ItemTransform_C.ResetItemTransform
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::ResetItemTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.ResetItemTransform");

	UItemTransform_C_ResetItemTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HandleTransformFailed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ErrorMessage                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemTransform_C::HandleTransformFailed(struct FText* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleTransformFailed");

	UItemTransform_C_HandleTransformFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;
}


// Function ItemTransform.ItemTransform_C.HandleTransformSucceeded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> RewardedItems                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FFortItemInstanceQuantityPair> SacrificedItems                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemTransform_C::HandleTransformSucceeded(TArray<struct FFortItemInstanceQuantityPair>* RewardedItems, TArray<struct FFortItemInstanceQuantityPair>* SacrificedItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleTransformSucceeded");

	UItemTransform_C_HandleTransformSucceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RewardedItems != nullptr)
		*RewardedItems = params.RewardedItems;
	if (SacrificedItems != nullptr)
		*SacrificedItems = params.SacrificedItems;
}


// Function ItemTransform.ItemTransform_C.OpenResult
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> RewardItems                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FFortItemInstanceQuantityPair> SacrificeItems                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemTransform_C::OpenResult(TArray<struct FFortItemInstanceQuantityPair>* RewardItems, TArray<struct FFortItemInstanceQuantityPair>* SacrificeItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OpenResult");

	UItemTransform_C_OpenResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RewardItems != nullptr)
		*RewardItems = params.RewardItems;
	if (SacrificeItems != nullptr)
		*SacrificeItems = params.SacrificeItems;
}


// Function ItemTransform.ItemTransform_C.HandleTransformConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::HandleTransformConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleTransformConfirm");

	UItemTransform_C_HandleTransformConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HandleTransformCancel
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::HandleTransformCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleTransformCancel");

	UItemTransform_C_HandleTransformCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OpenConfirmation
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::OpenConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OpenConfirmation");

	UItemTransform_C_OpenConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.HandleSelect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransform_C::HandleSelect(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleSelect");

	UItemTransform_C_HandleSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ItemTransform.ItemTransform_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemTransform_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.HandleBack");

	UItemTransform_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ItemTransform.ItemTransform_C.SetupActionHandlers
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::SetupActionHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.SetupActionHandlers");

	UItemTransform_C_SetupActionHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OpenSlotScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::OpenSlotScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OpenSlotScreen");

	UItemTransform_C_OpenSlotScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OpenKeyScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::OpenKeyScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OpenKeyScreen");

	UItemTransform_C_OpenKeyScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OpenItemTransform
// (Public, BlueprintCallable, BlueprintEvent)

void UItemTransform_C::OpenItemTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OpenItemTransform");

	UItemTransform_C_OpenItemTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransform_C::BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature");

	UItemTransform_C_BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemTransform_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OnActivated");

	UItemTransform_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature
// (BlueprintEvent)

void UItemTransform_C::BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature");

	UItemTransform_C_BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           TransformActive                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransform_C::BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature(bool TransformActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature");

	UItemTransform_C_BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature_Params params;
	params.TransformActive = TransformActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*               Key                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransform_C::BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature(class UFortItem* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature");

	UItemTransform_C_BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemTransform_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.Construct");

	UItemTransform_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.OnRequestCloseItemPicker
// (Event, Public, BlueprintEvent)

void UItemTransform_C::OnRequestCloseItemPicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.OnRequestCloseItemPicker");

	UItemTransform_C_OnRequestCloseItemPicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemTransform.ItemTransform_C.ExecuteUbergraph_ItemTransform
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemTransform_C::ExecuteUbergraph_ItemTransform(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemTransform.ItemTransform_C.ExecuteUbergraph_ItemTransform");

	UItemTransform_C_ExecuteUbergraph_ItemTransform_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

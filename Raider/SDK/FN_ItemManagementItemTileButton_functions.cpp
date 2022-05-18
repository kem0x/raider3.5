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

// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateCollectionBookIndicator
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::UpdateCollectionBookIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateCollectionBookIndicator");

	UItemManagementItemTileButton_C_UpdateCollectionBookIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleSlottedSurvivor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleSlottedSurvivor()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleSlottedSurvivor");

	UItemManagementItemTileButton_C_HandleSlottedSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateQuantityProduced
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::UpdateQuantityProduced()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateQuantityProduced");

	UItemManagementItemTileButton_C_UpdateQuantityProduced_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateBangState
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::UpdateBangState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateBangState");

	UItemManagementItemTileButton_C_UpdateBangState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateInteractionWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::UpdateInteractionWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateInteractionWidgetVisibility");

	UItemManagementItemTileButton_C_UpdateInteractionWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.SetEquipSlotOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EquipSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementItemTileButton_C::SetEquipSlotOverlay(int EquipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.SetEquipSlotOverlay");

	UItemManagementItemTileButton_C_SetEquipSlotOverlay_Params params;
	params.EquipSlot = EquipSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementItemTileButton_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnDragDetected");

	UItemManagementItemTileButton_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UItemManagementItemTileButton_C::On_ItemWidgetHolder_MouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.On_ItemWidgetHolder_MouseButtonDown");

	UItemManagementItemTileButton_C_On_ItemWidgetHolder_MouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::UpdateStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateStyle");

	UItemManagementItemTileButton_C_UpdateStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateMulchStateBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementItemTileButton_C::UpdateMulchStateBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.UpdateMulchStateBox");

	UItemManagementItemTileButton_C_UpdateMulchStateBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleItemMulchStateChanged
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleItemMulchStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleItemMulchStateChanged");

	UItemManagementItemTileButton_C_HandleItemMulchStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleDifferentItemManagementModeSetBP
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleDifferentItemManagementModeSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleDifferentItemManagementModeSetBP");

	UItemManagementItemTileButton_C_HandleDifferentItemManagementModeSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnHovered");

	UItemManagementItemTileButton_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnUnhovered");

	UItemManagementItemTileButton_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleHasItemToDetailChanged
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleHasItemToDetailChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleHasItemToDetailChanged");

	UItemManagementItemTileButton_C_HandleHasItemToDetailChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleHasItemToCompareDetailsWithChanged
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleHasItemToCompareDetailsWithChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleHasItemToCompareDetailsWithChanged");

	UItemManagementItemTileButton_C_HandleHasItemToCompareDetailsWithChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleEquipSlotChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           EquipSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementItemTileButton_C::HandleEquipSlotChanged(int* EquipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleEquipSlotChanged");

	UItemManagementItemTileButton_C_HandleEquipSlotChanged_Params params;
	params.EquipSlot = EquipSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementItemTileButton_C::OnDragCancelled(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnDragCancelled");

	UItemManagementItemTileButton_C_OnDragCancelled_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.OnSelected");

	UItemManagementItemTileButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleItemChangedBP
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleItemChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleItemChangedBP");

	UItemManagementItemTileButton_C_HandleItemChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementItemTileButton_C::BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	UItemManagementItemTileButton_C_BndEvt__PopupMenuAnchor_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleShowCollectionBookIndicatorChanged
// (Event, Protected, BlueprintEvent)

void UItemManagementItemTileButton_C::HandleShowCollectionBookIndicatorChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.HandleShowCollectionBookIndicatorChanged");

	UItemManagementItemTileButton_C_HandleShowCollectionBookIndicatorChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.ExecuteUbergraph_ItemManagementItemTileButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementItemTileButton_C::ExecuteUbergraph_ItemManagementItemTileButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementItemTileButton.ItemManagementItemTileButton_C.ExecuteUbergraph_ItemManagementItemTileButton");

	UItemManagementItemTileButton_C_ExecuteUbergraph_ItemManagementItemTileButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DropItemWithDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::DropItemWithDialog(class UFortWorldItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.DropItemWithDialog");

	UAthenaInventoryPanel_C_DropItemWithDialog_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaInventoryPanel_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnTouchStarted");

	UAthenaInventoryPanel_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.IsDragItemDroppable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 DragDropObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsDroppable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::IsDragItemDroppable(class UObject* DragDropObject, bool* bIsDroppable)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.IsDragItemDroppable");

	UAthenaInventoryPanel_C_IsDragItemDroppable_Params params;
	params.DragDropObject = DragDropObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsDroppable != nullptr)
		*bIsDroppable = params.bIsDroppable;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.IsDragOverDropArea
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPointerEvent           PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bOverDropArea                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::IsDragOverDropArea(struct FPointerEvent* PointerEvent, bool* bOverDropArea)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.IsDragOverDropArea");

	UAthenaInventoryPanel_C_IsDragOverDropArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PointerEvent != nullptr)
		*PointerEvent = params.PointerEvent;
	if (bOverDropArea != nullptr)
		*bOverDropArea = params.bOverDropArea;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDropHalf
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::HandleDropHalf(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDropHalf");

	UAthenaInventoryPanel_C_HandleDropHalf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterDropHalf
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::RegisterDropHalf()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterDropHalf");

	UAthenaInventoryPanel_C_RegisterDropHalf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaInventoryPanel_C::OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDragOver");

	UAthenaInventoryPanel_C_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaInventoryPanel_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDrop");

	UAthenaInventoryPanel_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RefreshItemDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToDetail                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::RefreshItemDetails(class UFortItem* ItemToDetail)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RefreshItemDetails");

	UAthenaInventoryPanel_C_RefreshItemDetails_Params params;
	params.ItemToDetail = ItemToDetail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterMove
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::RegisterMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterMove");

	UAthenaInventoryPanel_C_RegisterMove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.FocusFirstEquipSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::FocusFirstEquipSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.FocusFirstEquipSlot");

	UAthenaInventoryPanel_C_FocusFirstEquipSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.NavAmmo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaInventoryPanel_C::NavAmmo(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.NavAmmo");

	UAthenaInventoryPanel_C_NavAmmo_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.NavResources
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaInventoryPanel_C::NavResources(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.NavResources");

	UAthenaInventoryPanel_C_NavResources_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.NavEquipment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaInventoryPanel_C::NavEquipment(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.NavEquipment");

	UAthenaInventoryPanel_C_NavEquipment_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDropItemConfirmationCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ChosenQuantity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::HandleDropItemConfirmationCallback(int ChosenQuantity, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDropItemConfirmationCallback");

	UAthenaInventoryPanel_C_HandleDropItemConfirmationCallback_Params params;
	params.ChosenQuantity = ChosenQuantity;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DestroyQuantitySelectorWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::DestroyQuantitySelectorWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.DestroyQuantitySelectorWidget");

	UAthenaInventoryPanel_C_DestroyQuantitySelectorWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.CreateQuantitySelectorWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ConfirmationText               (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaInventoryPanel_C::CreateQuantitySelectorWidget(class UFortWorldItem* Item, const struct FText& ConfirmationText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.CreateQuantitySelectorWidget");

	UAthenaInventoryPanel_C_CreateQuantitySelectorWidget_Params params;
	params.Item = Item;
	params.ConfirmationText = ConfirmationText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DropItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*          Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::DropItem(class UFortWorldItem* Item, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.DropItem");

	UAthenaInventoryPanel_C_DropItem_Params params;
	params.Item = Item;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDrop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::HandleDrop(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDrop");

	UAthenaInventoryPanel_C_HandleDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::RegisterDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterDrop");

	UAthenaInventoryPanel_C_RegisterDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterLeaveInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::RegisterLeaveInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterLeaveInventory");

	UAthenaInventoryPanel_C_RegisterLeaveInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.TrySetupInputHandling
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::TrySetupInputHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.TrySetupInputHandling");

	UAthenaInventoryPanel_C_TrySetupInputHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryPanel_C::RegisterBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterBack");

	UAthenaInventoryPanel_C_RegisterBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::HandleClose(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleClose");

	UAthenaInventoryPanel_C_HandleClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleQuickBarChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortQuickBars*                QuickBarType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::HandleQuickBarChangedBP(EFortQuickBars* QuickBarType)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleQuickBarChangedBP");

	UAthenaInventoryPanel_C_HandleQuickBarChangedBP_Params params;
	params.QuickBarType = QuickBarType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryPanel_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnActivated");

	UAthenaInventoryPanel_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaInventoryPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.Construct");

	UAthenaInventoryPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDragLeave");

	UAthenaInventoryPanel_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryPanel_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDeactivated");

	UAthenaInventoryPanel_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RequestEquip
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::RequestEquip(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.RequestEquip");

	UAthenaInventoryPanel_C_RequestEquip_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryPanel.AthenaInventoryPanel_C.ExecuteUbergraph_AthenaInventoryPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryPanel_C::ExecuteUbergraph_AthenaInventoryPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryPanel.AthenaInventoryPanel_C.ExecuteUbergraph_AthenaInventoryPanel");

	UAthenaInventoryPanel_C_ExecuteUbergraph_AthenaInventoryPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

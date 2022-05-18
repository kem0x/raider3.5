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

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.IsFocusOfDrop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsDragHovered                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryEquipSlot_C::IsFocusOfDrop(bool* IsDragHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.IsFocusOfDrop");

	UAthenaInventoryEquipSlot_C_IsFocusOfDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDragHovered != nullptr)
		*IsDragHovered = params.IsDragHovered;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.CanEquipFortItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaInventoryEquipSlot_C::CanEquipFortItem(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.CanEquipFortItem");

	UAthenaInventoryEquipSlot_C_CanEquipFortItem_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDragOver
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaInventoryEquipSlot_C::OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDragOver");

	UAthenaInventoryEquipSlot_C_OnDragOver_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaInventoryEquipSlot_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnPreviewMouseButtonDown");

	UAthenaInventoryEquipSlot_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.IsDraggingEquipableItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaInventoryEquipSlot_C::IsDraggingEquipableItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.IsDraggingEquipableItem");

	UAthenaInventoryEquipSlot_C_IsDraggingEquipableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.TryAndShowDropTarget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryEquipSlot_C::TryAndShowDropTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.TryAndShowDropTarget");

	UAthenaInventoryEquipSlot_C_TryAndShowDropTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*      Operation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryEquipSlot_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDragDetected");

	UAthenaInventoryEquipSlot_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAthenaInventoryEquipSlot_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDrop");

	UAthenaInventoryEquipSlot_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.RefreshItem
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaInventoryEquipSlot_C::RefreshItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.RefreshItem");

	UAthenaInventoryEquipSlot_C_RefreshItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaInventoryEquipSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Construct");

	UAthenaInventoryEquipSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryEquipSlot_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Tick");

	UAthenaInventoryEquipSlot_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnQuickbarContentsChanged_Event_0_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickbarIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ChangedSlots                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaInventoryEquipSlot_C::OnQuickbarContentsChanged_Event_0_1(EFortQuickBars QuickbarIndex, TArray<int> ChangedSlots)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnQuickbarContentsChanged_Event_0_1");

	UAthenaInventoryEquipSlot_C_OnQuickbarContentsChanged_Event_0_1_Params params;
	params.QuickbarIndex = QuickbarIndex;
	params.ChangedSlots = ChangedSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnClicked
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryEquipSlot_C::OnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnClicked");

	UAthenaInventoryEquipSlot_C_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaInventoryEquipSlot_C::OnAddedToFocusPath(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnAddedToFocusPath");

	UAthenaInventoryEquipSlot_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryEquipSlot_C::OnSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnSelected");

	UAthenaInventoryEquipSlot_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDeselected
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryEquipSlot_C::OnDeselected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDeselected");

	UAthenaInventoryEquipSlot_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDoubleClicked
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryEquipSlot_C::OnDoubleClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDoubleClicked");

	UAthenaInventoryEquipSlot_C_OnDoubleClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnInventoryItemSelected_Event_0_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryEquipSlot_C::OnInventoryItemSelected_Event_0_1(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnInventoryItemSelected_Event_0_1");

	UAthenaInventoryEquipSlot_C_OnInventoryItemSelected_Event_0_1_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          PointerEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation**     Operation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryEquipSlot_C::OnDragLeave(struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDragLeave");

	UAthenaInventoryEquipSlot_C_OnDragLeave_Params params;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.ExecuteUbergraph_AthenaInventoryEquipSlot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaInventoryEquipSlot_C::ExecuteUbergraph_AthenaInventoryEquipSlot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.ExecuteUbergraph_AthenaInventoryEquipSlot");

	UAthenaInventoryEquipSlot_C_ExecuteUbergraph_AthenaInventoryEquipSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

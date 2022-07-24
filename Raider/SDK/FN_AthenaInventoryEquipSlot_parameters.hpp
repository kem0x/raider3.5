#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Show Athena Gadget Fuel Widget
struct UAthenaInventoryEquipSlot_C_Show_Athena_Gadget_Fuel_Widget_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Hide Athena Gadget Fuel Widget
struct UAthenaInventoryEquipSlot_C_Hide_Athena_Gadget_Fuel_Widget_Params
{
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Update Athena Gadget Fuel Widget
struct UAthenaInventoryEquipSlot_C_Update_Athena_Gadget_Fuel_Widget_Params
{
	class UFortItem*                                   ItemInSlot;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.IsFocusOfDrop
struct UAthenaInventoryEquipSlot_C_IsFocusOfDrop_Params
{
	bool                                               IsDragHovered;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.CanEquipFortItem
struct UAthenaInventoryEquipSlot_C_CanEquipFortItem_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDragOver
struct UAthenaInventoryEquipSlot_C_OnDragOver_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnPreviewMouseButtonDown
struct UAthenaInventoryEquipSlot_C_OnPreviewMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.IsDraggingEquipableItem
struct UAthenaInventoryEquipSlot_C_IsDraggingEquipableItem_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.TryAndShowDropTarget
struct UAthenaInventoryEquipSlot_C_TryAndShowDropTarget_Params
{
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDragDetected
struct UAthenaInventoryEquipSlot_C_OnDragDetected_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDrop
struct UAthenaInventoryEquipSlot_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.RefreshItem
struct UAthenaInventoryEquipSlot_C_RefreshItem_Params
{
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Construct
struct UAthenaInventoryEquipSlot_C_Construct_Params
{
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.Tick
struct UAthenaInventoryEquipSlot_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnQuickbarContentsChanged_Event_1
struct UAthenaInventoryEquipSlot_C_OnQuickbarContentsChanged_Event_1_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ChangedSlots;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.BP_OnClicked
struct UAthenaInventoryEquipSlot_C_BP_OnClicked_Params
{
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnAddedToFocusPath
struct UAthenaInventoryEquipSlot_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.BP_OnSelected
struct UAthenaInventoryEquipSlot_C_BP_OnSelected_Params
{
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.BP_OnDeselected
struct UAthenaInventoryEquipSlot_C_BP_OnDeselected_Params
{
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.BP_OnDoubleClicked
struct UAthenaInventoryEquipSlot_C_BP_OnDoubleClicked_Params
{
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnInventoryItemSelected_Event_1
struct UAthenaInventoryEquipSlot_C_OnInventoryItemSelected_Event_1_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.OnDragLeave
struct UAthenaInventoryEquipSlot_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryEquipSlot.AthenaInventoryEquipSlot_C.ExecuteUbergraph_AthenaInventoryEquipSlot
struct UAthenaInventoryEquipSlot_C_ExecuteUbergraph_AthenaInventoryEquipSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

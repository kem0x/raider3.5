#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DropItemWithDialog
struct UAthenaInventoryPanel_C_DropItemWithDialog_Params
{
	class UFortWorldItem*                              Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnTouchStarted
struct UAthenaInventoryPanel_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.IsDragItemDroppable
struct UAthenaInventoryPanel_C_IsDragItemDroppable_Params
{
	class UObject*                                     DragDropObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDroppable;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.IsDragOverDropArea
struct UAthenaInventoryPanel_C_IsDragOverDropArea_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bOverDropArea;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDropHalf
struct UAthenaInventoryPanel_C_HandleDropHalf_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterDropHalf
struct UAthenaInventoryPanel_C_RegisterDropHalf_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDragOver
struct UAthenaInventoryPanel_C_OnDragOver_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDrop
struct UAthenaInventoryPanel_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RefreshItemDetails
struct UAthenaInventoryPanel_C_RefreshItemDetails_Params
{
	class UFortItem*                                   ItemToDetail;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterMove
struct UAthenaInventoryPanel_C_RegisterMove_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.FocusFirstEquipSlot
struct UAthenaInventoryPanel_C_FocusFirstEquipSlot_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.NavAmmo
struct UAthenaInventoryPanel_C_NavAmmo_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.NavResources
struct UAthenaInventoryPanel_C_NavResources_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.NavEquipment
struct UAthenaInventoryPanel_C_NavEquipment_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDropItemConfirmationCallback
struct UAthenaInventoryPanel_C_HandleDropItemConfirmationCallback_Params
{
	int                                                ChosenQuantity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DestroyQuantitySelectorWidget
struct UAthenaInventoryPanel_C_DestroyQuantitySelectorWidget_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.CreateQuantitySelectorWidget
struct UAthenaInventoryPanel_C_CreateQuantitySelectorWidget_Params
{
	class UFortWorldItem*                              Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ConfirmationText;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.DropItem
struct UAthenaInventoryPanel_C_DropItem_Params
{
	class UFortWorldItem*                              Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleDrop
struct UAthenaInventoryPanel_C_HandleDrop_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterDrop
struct UAthenaInventoryPanel_C_RegisterDrop_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterLeaveInventory
struct UAthenaInventoryPanel_C_RegisterLeaveInventory_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.TrySetupInputHandling
struct UAthenaInventoryPanel_C_TrySetupInputHandling_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RegisterBack
struct UAthenaInventoryPanel_C_RegisterBack_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleClose
struct UAthenaInventoryPanel_C_HandleClose_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.HandleQuickBarChangedBP
struct UAthenaInventoryPanel_C_HandleQuickBarChangedBP_Params
{
	EFortQuickBars*                                    QuickBarType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnActivated
struct UAthenaInventoryPanel_C_OnActivated_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.Construct
struct UAthenaInventoryPanel_C_Construct_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDragLeave
struct UAthenaInventoryPanel_C_OnDragLeave_Params
{
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.OnDeactivated
struct UAthenaInventoryPanel_C_OnDeactivated_Params
{
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.RequestEquip
struct UAthenaInventoryPanel_C_RequestEquip_Params
{
	class UFortItem**                                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaInventoryPanel.AthenaInventoryPanel_C.ExecuteUbergraph_AthenaInventoryPanel
struct UAthenaInventoryPanel_C_ExecuteUbergraph_AthenaInventoryPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

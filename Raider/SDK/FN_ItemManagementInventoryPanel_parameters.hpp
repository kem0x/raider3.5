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

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateStorageTextVisbility
struct UItemManagementInventoryPanel_C_UpdateStorageTextVisbility_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.PrepOpeningInventory
struct UItemManagementInventoryPanel_C_PrepOpeningInventory_Params
{
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SelectTrapByItem
struct UItemManagementInventoryPanel_C_SelectTrapByItem_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SelectTrapByTag
struct UItemManagementInventoryPanel_C_SelectTrapByTag_Params
{
	struct FGameplayTag                                Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HideEquipSlotDragTargets
struct UItemManagementInventoryPanel_C_HideEquipSlotDragTargets_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ShowEquipSlotDragTargets
struct UItemManagementInventoryPanel_C_ShowEquipSlotDragTargets_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandlePinnedSchematicsChanged
struct UItemManagementInventoryPanel_C_HandlePinnedSchematicsChanged_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.GetSelectedEquipSlot
struct UItemManagementInventoryPanel_C_GetSelectedEquipSlot_Params
{
	int                                                Slot;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ProcessSlotAction
struct UItemManagementInventoryPanel_C_ProcessSlotAction_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateEquipSlotsVisibility
struct UItemManagementInventoryPanel_C_UpdateEquipSlotsVisibility_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateEquipSlots
struct UItemManagementInventoryPanel_C_UpdateEquipSlots_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateRecycleInfo
struct UItemManagementInventoryPanel_C_UpdateRecycleInfo_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SetUniqueFeatures
struct UItemManagementInventoryPanel_C_SetUniqueFeatures_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentFilterSetBP
struct UItemManagementInventoryPanel_C_HandleDifferentFilterSetBP_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentSortTypeSetBP
struct UItemManagementInventoryPanel_C_HandleDifferentSortTypeSetBP_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__SortTypeButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature
struct UItemManagementInventoryPanel_C_BndEvt__SortTypeButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentItemManagementModeSetBP
struct UItemManagementInventoryPanel_C_HandleDifferentItemManagementModeSetBP_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleSetOfItemsToMulchChangedBP
struct UItemManagementInventoryPanel_C_HandleSetOfItemsToMulchChangedBP_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.Construct
struct UItemManagementInventoryPanel_C_Construct_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.Destruct
struct UItemManagementInventoryPanel_C_Destruct_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__CraftingTileView_K2Node_ComponentBoundEvent_126_OnListViewItemSelected__DelegateSignature
struct UItemManagementInventoryPanel_C_BndEvt__CraftingTileView_K2Node_ComponentBoundEvent_126_OnListViewItemSelected__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentFrontendInventoryFilterSetBP
struct UItemManagementInventoryPanel_C_HandleDifferentFrontendInventoryFilterSetBP_Params
{
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleQuickBarChangedBP
struct UItemManagementInventoryPanel_C_HandleQuickBarChangedBP_Params
{
	EFortQuickBars*                                    QuickBarType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__SortTypeButtonWorldItems_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
struct UItemManagementInventoryPanel_C_BndEvt__SortTypeButtonWorldItems_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleCursorModeChangedBP
struct UItemManagementInventoryPanel_C_HandleCursorModeChangedBP_Params
{
	bool*                                              bCursorModeEnabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                CursorModeContentWidget;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ExecuteUbergraph_ItemManagementInventoryPanel
struct UItemManagementInventoryPanel_C_ExecuteUbergraph_ItemManagementInventoryPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

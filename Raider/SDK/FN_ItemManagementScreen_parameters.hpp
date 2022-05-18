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

// Function ItemManagementScreen.ItemManagementScreen_C.GetShouldPrioritizeFavorites
struct UItemManagementScreen_C_GetShouldPrioritizeFavorites_Params
{
	bool                                               SortFavoritesSeparately;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.TogglePrioritizeFavorites
struct UItemManagementScreen_C_TogglePrioritizeFavorites_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.ToggleTileSize
struct UItemManagementScreen_C_ToggleTileSize_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.GuardActionForReadOnlyWIFE
struct UItemManagementScreen_C_GuardActionForReadOnlyWIFE_Params
{
	bool                                               Proceed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.SizeScreen
struct UItemManagementScreen_C_SizeScreen_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.IsEquipAvailable
struct UItemManagementScreen_C_IsEquipAvailable_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EquipAvailable;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchItemsCallback
struct UItemManagementScreen_C_HandleMulchItemsCallback_Params
{
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.GetMaxTransferCount
struct UItemManagementScreen_C_GetMaxTransferCount_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemDrop
struct UItemManagementScreen_C_CompleteItemDrop_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemsCallback
struct UItemManagementScreen_C_HandleDropItemsCallback_Params
{
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleDrop
struct UItemManagementScreen_C_HandleDrop_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemTransfer
struct UItemManagementScreen_C_CompleteItemTransfer_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemsCallback
struct UItemManagementScreen_C_HandleTransferItemsCallback_Params
{
	int                                                Quantity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.CreateQuantitySelector
struct UItemManagementScreen_C_CreateQuantitySelector_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ConfirmText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                InitialQuantity;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxQuantity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransfer
struct UItemManagementScreen_C_HandleTransfer_Params
{
	class UFortItem*                                   ItemToTransfer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.ShowCraftError
struct UItemManagementScreen_C_ShowCraftError_Params
{
	EFortCraftFailCause                                FailCause;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.CraftAndSlot
struct UItemManagementScreen_C_CraftAndSlot_Params
{
	class UFortSchematicItem*                          SchematicItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquip
struct UItemManagementScreen_C_HandleEquip_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.SizeInventoryPanel
struct UItemManagementScreen_C_SizeInventoryPanel_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.OnDrop
struct UItemManagementScreen_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.GetDescriptionText
struct UItemManagementScreen_C_GetDescriptionText_Params
{
	struct FText                                       ItemDescription;                                          // (Parm, OutParm)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspect
struct UItemManagementScreen_C_HandleInspect_Params
{
	class UFortItem*                                   ItemToInspect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleClose
struct UItemManagementScreen_C_HandleClose_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40
struct UItemManagementScreen_C_DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA
struct UItemManagementScreen_C_OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_CDD8108541BE3E4EA0F093B03D59650F
struct UItemManagementScreen_C_DialogResult_CDD8108541BE3E4EA0F093B03D59650F_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleDifferentItemManagementModeSetBP
struct UItemManagementScreen_C_HandleDifferentItemManagementModeSetBP_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquipItemBP
struct UItemManagementScreen_C_HandleEquipItemBP_Params
{
	class UFortItem**                                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleCraftItemBP
struct UItemManagementScreen_C_HandleCraftItemBP_Params
{
	class UFortSchematicItem**                         SchematicItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.DefaultActionRefresh
struct UItemManagementScreen_C_DefaultActionRefresh_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.OnActivated
struct UItemManagementScreen_C_OnActivated_Params
{
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleConsumeItemBP
struct UItemManagementScreen_C_HandleConsumeItemBP_Params
{
	class UFortConsumableAccountItem**                 ConsumableItem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspectItemBP
struct UItemManagementScreen_C_HandleInspectItemBP_Params
{
	class UFortItem**                                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemBP
struct UItemManagementScreen_C_HandleTransferItemBP_Params
{
	class UFortItem**                                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemBP
struct UItemManagementScreen_C_HandleDropItemBP_Params
{
	class UFortItem**                                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchQuantitySelection
struct UItemManagementScreen_C_HandleMulchQuantitySelection_Params
{
	class UFortItem**                                  Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.ShowWarningReadOnlyWIFE
struct UItemManagementScreen_C_ShowWarningReadOnlyWIFE_Params
{
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementScreen.ItemManagementScreen_C.ExecuteUbergraph_ItemManagementScreen
struct UItemManagementScreen_C_ExecuteUbergraph_ItemManagementScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.GetStatsTabVisibility
struct UItemManagementDetailsModeBox_C_GetStatsTabVisibility_Params
{
	ESlateVisibility                                   StatsTabVisbility;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleOpenCustomFilter
struct UItemManagementDetailsModeBox_C_HandleOpenCustomFilter_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterOpenCustomFilter
struct UItemManagementDetailsModeBox_C_RegisterOpenCustomFilter_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshDestroyAction
struct UItemManagementDetailsModeBox_C_RefreshDestroyAction_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.UpdateReadOnlyWIFE
struct UItemManagementDetailsModeBox_C_UpdateReadOnlyWIFE_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.PreferReadOnlyWIFE
struct UItemManagementDetailsModeBox_C_PreferReadOnlyWIFE_Params
{
	bool                                               ReadOnly;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleMore
struct UItemManagementDetailsModeBox_C_HandleMore_Params
{
	bool                                               Pass_Through;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterMore
struct UItemManagementDetailsModeBox_C_RegisterMore_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDestroy
struct UItemManagementDetailsModeBox_C_HandleDestroy_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWithdrawAll
struct UItemManagementDetailsModeBox_C_HandleWithdrawAll_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshSwitchPanelAction
struct UItemManagementDetailsModeBox_C_RefreshSwitchPanelAction_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleSwitchPanel
struct UItemManagementDetailsModeBox_C_HandleSwitchPanel_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.UnbindEvents
struct UItemManagementDetailsModeBox_C_UnbindEvents_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshTransferActions
struct UItemManagementDetailsModeBox_C_RefreshTransferActions_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleTransfer
struct UItemManagementDetailsModeBox_C_HandleTransfer_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterTransferActions
struct UItemManagementDetailsModeBox_C_RegisterTransferActions_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInspectUpgrade
struct UItemManagementDetailsModeBox_C_RegisterInspectUpgrade_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleQuickbarContentsChanged
struct UItemManagementDetailsModeBox_C_HandleQuickbarContentsChanged_Params
{
	EFortQuickBars                                     QuickbarIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ChangedSlots;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterLeaveInventory
struct UItemManagementDetailsModeBox_C_RegisterLeaveInventory_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshMulchAction
struct UItemManagementDetailsModeBox_C_RefreshMulchAction_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCraftAndSlot
struct UItemManagementDetailsModeBox_C_HandleCraftAndSlot_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCraftAndSlot
struct UItemManagementDetailsModeBox_C_RegisterCraftAndSlot_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshCraftActions
struct UItemManagementDetailsModeBox_C_RefreshCraftActions_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWorldItemsChanged
struct UItemManagementDetailsModeBox_C_HandleWorldItemsChanged_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWorldItemListChanged
struct UItemManagementDetailsModeBox_C_HandleWorldItemListChanged_Params
{
	TArray<class UFortWorldItem*>                      ItemsAdded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UFortWorldItem*>                      ItemsRemoved;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInventoryInspect
struct UItemManagementDetailsModeBox_C_RegisterInventoryInspect_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetTabStyling
struct UItemManagementDetailsModeBox_C_SetTabStyling_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetItemVisualization
struct UItemManagementDetailsModeBox_C_SetItemVisualization_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshConsumeAction
struct UItemManagementDetailsModeBox_C_RefreshConsumeAction_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetupDetailPanels
struct UItemManagementDetailsModeBox_C_SetupDetailPanels_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleEquip
struct UItemManagementDetailsModeBox_C_HandleEquip_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterEquip
struct UItemManagementDetailsModeBox_C_RegisterEquip_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleTrack
struct UItemManagementDetailsModeBox_C_HandleTrack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterTrack
struct UItemManagementDetailsModeBox_C_RegisterTrack_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCompare
struct UItemManagementDetailsModeBox_C_RegisterCompare_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterConsumeItem
struct UItemManagementDetailsModeBox_C_RegisterConsumeItem_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterSort
struct UItemManagementDetailsModeBox_C_RegisterSort_Params
{
	bool                                               InGame;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterBack
struct UItemManagementDetailsModeBox_C_RegisterBack_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInspect
struct UItemManagementDetailsModeBox_C_RegisterInspect_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterRetire
struct UItemManagementDetailsModeBox_C_RegisterRetire_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterMulch
struct UItemManagementDetailsModeBox_C_RegisterMulch_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCraft
struct UItemManagementDetailsModeBox_C_RegisterCraft_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterDropOrDestroy
struct UItemManagementDetailsModeBox_C_RegisterDropOrDestroy_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDrop
struct UItemManagementDetailsModeBox_C_HandleDrop_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.ShowSelection
struct UItemManagementDetailsModeBox_C_ShowSelection_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCraft
struct UItemManagementDetailsModeBox_C_HandleCraft_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleConsumeItem
struct UItemManagementDetailsModeBox_C_HandleConsumeItem_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.TrySetupInputHandling
struct UItemManagementDetailsModeBox_C_TrySetupInputHandling_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleSort
struct UItemManagementDetailsModeBox_C_HandleSort_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleMulch
struct UItemManagementDetailsModeBox_C_HandleMulch_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCompare
struct UItemManagementDetailsModeBox_C_HandleCompare_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleInspect
struct UItemManagementDetailsModeBox_C_HandleInspect_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleBack
struct UItemManagementDetailsModeBox_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.DialogResult_475B18A9452A639A04116D83A8B1CC22
struct UItemManagementDetailsModeBox_C_DialogResult_475B18A9452A639A04116D83A8B1CC22_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.DialogResult_4190138B4388B0E2F8396BBD395808D5
struct UItemManagementDetailsModeBox_C_DialogResult_4190138B4388B0E2F8396BBD395808D5_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature
struct UItemManagementDetailsModeBox_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDifferentItemToDetailSetBP
struct UItemManagementDetailsModeBox_C_HandleDifferentItemToDetailSetBP_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnActivated
struct UItemManagementDetailsModeBox_C_OnActivated_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature
struct UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature
struct UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature
struct UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleConsumeItemProgressChangedBP
struct UItemManagementDetailsModeBox_C_HandleConsumeItemProgressChangedBP_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature
struct UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnDeactivated
struct UItemManagementDetailsModeBox_C_OnDeactivated_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.Construct
struct UItemManagementDetailsModeBox_C_Construct_Params
{
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnInputModeChanged
struct UItemManagementDetailsModeBox_C_OnInputModeChanged_Params
{
	bool*                                              bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnDestroyItem
struct UItemManagementDetailsModeBox_C_OnDestroyItem_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCraftItemFailed
struct UItemManagementDetailsModeBox_C_HandleCraftItemFailed_Params
{
	EFortCraftFailCause                                FailureCause;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.ExecuteUbergraph_ItemManagementDetailsModeBox
struct UItemManagementDetailsModeBox_C_ExecuteUbergraph_ItemManagementDetailsModeBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

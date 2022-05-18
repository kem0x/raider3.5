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

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.GetWarningText
struct UItemManagementItemTilePopupMenu_C_GetWarningText_Params
{
	TArray<EItemRecyclingWarning>                      Warnings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               HasAnimateItem;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       WarningText;                                              // (Parm, OutParm)
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateCollectionBookButtonVisibility
struct UItemManagementItemTilePopupMenu_C_UpdateCollectionBookButtonVisibility_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateRecycleButtonVisibility
struct UItemManagementItemTilePopupMenu_C_UpdateRecycleButtonVisibility_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.UpdateFavoriteFlag
struct UItemManagementItemTilePopupMenu_C_UpdateFavoriteFlag_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.SetupRecycleRetireText
struct UItemManagementItemTilePopupMenu_C_SetupRecycleRetireText_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnSlotItemInCollectionBookComplete
struct UItemManagementItemTilePopupMenu_C_OnSlotItemInCollectionBookComplete_Params
{
	class UFortAccountItem*                            AccountItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SlotId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.CacheCollectionBookStatus
struct UItemManagementItemTilePopupMenu_C_CacheCollectionBookStatus_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.DialogResult_AA710CD8400475561228C78BEBCE1FFB
struct UItemManagementItemTilePopupMenu_C_DialogResult_AA710CD8400475561228C78BEBCE1FFB_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitingForLatentActionCompletion;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDialogExternalLatentActionHandle       WaitingDialogHandle;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnActivated
struct UItemManagementItemTilePopupMenu_C_OnActivated_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.HandleItemChanged
struct UItemManagementItemTilePopupMenu_C_HandleItemChanged_Params
{
	bool*                                              bItemChanged;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAmmoChanged;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIngredientsChanged;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__BatchRecycleButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
struct UItemManagementItemTilePopupMenu_C_BndEvt__BatchRecycleButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.Construct
struct UItemManagementItemTilePopupMenu_C_Construct_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
struct UItemManagementItemTilePopupMenu_C_BndEvt__ButtonAddToCB_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.HandlePostDifferentContextProviderSet
struct UItemManagementItemTilePopupMenu_C_HandlePostDifferentContextProviderSet_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnBeginOutro
struct UItemManagementItemTilePopupMenu_C_OnBeginOutro_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnBeginIntro
struct UItemManagementItemTilePopupMenu_C_OnBeginIntro_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UItemManagementItemTilePopupMenu_C_BndEvt__FadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature
struct UItemManagementItemTilePopupMenu_C_BndEvt__ToggleFavoriteButton_K2Node_ComponentBoundEvent_210_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature
struct UItemManagementItemTilePopupMenu_C_BndEvt__AddToCollectionButton_K2Node_ComponentBoundEvent_230_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature
struct UItemManagementItemTilePopupMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_273_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
struct UItemManagementItemTilePopupMenu_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.OnDeactivated
struct UItemManagementItemTilePopupMenu_C_OnDeactivated_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.Tick
struct UItemManagementItemTilePopupMenu_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.ResetGate
struct UItemManagementItemTilePopupMenu_C_ResetGate_Params
{
};

// Function ItemManagementItemTilePopupMenu.ItemManagementItemTilePopupMenu_C.ExecuteUbergraph_ItemManagementItemTilePopupMenu
struct UItemManagementItemTilePopupMenu_C_ExecuteUbergraph_ItemManagementItemTilePopupMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

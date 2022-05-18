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

// Function ItemReceived_Base.ItemReceived_Base_C.Clicked
struct UItemReceived_Base_C_Clicked_Params
{
	class UCommonButton*                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.HandleSelectionIncrement
struct UItemReceived_Base_C_HandleSelectionIncrement_Params
{
	bool                                               Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.HandleRight
struct UItemReceived_Base_C_HandleRight_Params
{
	EUINavigation                                      Nav_Enum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     NewParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.HandleLeft
struct UItemReceived_Base_C_HandleLeft_Params
{
	EUINavigation                                      Navigation_Enum;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     NewParam;                                                 // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromHoverState
struct UItemReceived_Base_C_UpdateFromHoverState_Params
{
	struct FFortReceivedItemLootInfo                   Loot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ItemReceived_Base.ItemReceived_Base_C.AddItemCard
struct UItemReceived_Base_C_AddItemCard_Params
{
	struct FFortReceivedItemLootInfo                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UItemCardWidget_C*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromItemReceivedInfo
struct UItemReceived_Base_C_UpdateFromItemReceivedInfo_Params
{
	struct FFortReceivedItemLootInfo                   Loot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Select;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.HandleBack
struct UItemReceived_Base_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.PreConstruct
struct UItemReceived_Base_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.AnimateRollout
struct UItemReceived_Base_C_AnimateRollout_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.Right
struct UItemReceived_Base_C_Right_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.Left
struct UItemReceived_Base_C_Left_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.UpdateRarityFlare
struct UItemReceived_Base_C_UpdateRarityFlare_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.SelectItem
struct UItemReceived_Base_C_SelectItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CenterWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.OnGiftBoxItemSet
struct UItemReceived_Base_C_OnGiftBoxItemSet_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.OnActivated
struct UItemReceived_Base_C_OnActivated_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature
struct UItemReceived_Base_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.CustomEvent_0_1
struct UItemReceived_Base_C_CustomEvent_0_1_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.Construct
struct UItemReceived_Base_C_Construct_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature
struct UItemReceived_Base_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.OnInputModeChanged
struct UItemReceived_Base_C_OnInputModeChanged_Params
{
	bool*                                              bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.Check if Battlepass upgrade
struct UItemReceived_Base_C_Check_if_Battlepass_upgrade_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.Rollout Items Received
struct UItemReceived_Base_C_Rollout_Items_Received_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.Play BattlePass Upgrade Anim
struct UItemReceived_Base_C_Play_BattlePass_Upgrade_Anim_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.OnBattlepassAnimFinished
struct UItemReceived_Base_C_OnBattlepassAnimFinished_Params
{
};

// Function ItemReceived_Base.ItemReceived_Base_C.ExecuteUbergraph_ItemReceived_Base
struct UItemReceived_Base_C_ExecuteUbergraph_ItemReceived_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemReceived_Base.ItemReceived_Base_C.FinalOnGiftingComplete__DelegateSignature
struct UItemReceived_Base_C_FinalOnGiftingComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

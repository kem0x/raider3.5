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

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Sort Picker Action
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Sort_Picker_Action_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Mcp Relative Utc Now
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Mcp_Relative_Utc_Now_Params
{
	struct FDateTime                                   UtcNow;                                                   // (Parm, OutParm)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.GetSuccessChanceTooltipWidget
struct UBP_FortExpeditionBuildSquadWidget_C_GetSuccessChanceTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.GetSquadRatingTooltipWidget
struct UBP_FortExpeditionBuildSquadWidget_C_GetSquadRatingTooltipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Bonus Display Name and Brush
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Bonus_Display_Name_and_Brush_Params
{
	struct FGameplayTag                                Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortRarity                                        Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 OutBrush_Brush_M;                                         // (Parm, OutParm)
	struct FText                                       OutDisplayName;                                           // (Parm, OutParm)
	struct FLinearColor                                OutRarityColor;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Item In Selected Squad Slot
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Item_In_Selected_Squad_Slot_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK_SetCursorToSquadPicker
struct UBP_FortExpeditionBuildSquadWidget_C_HACK_SetCursorToSquadPicker_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Inspect Item for Squad Slot
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Inspect_Item_for_Squad_Slot_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Inspect
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Inspect_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Selected Slot (SAFE)
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Selected_Slot__SAFE__Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Purchase Slot State
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Purchase_Slot_State_Params
{
	EInputActionState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Purchase Slot
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Purchase_Slot_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Angle for Preview State
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Angle_for_Preview_State_Params
{
	EFortBuffState                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Color for Preview State
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Color_for_Preview_State_Params
{
	EFortBuffState                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Chance Buff Arrow for Preview
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Chance_Buff_Arrow_for_Preview_Params
{
	EFortBuffState                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Rating Buff Arrow for Preview
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Rating_Buff_Arrow_for_Preview_Params
{
	EFortBuffState                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Buff Arrow Visiblity From Preview State
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Buff_Arrow_Visiblity_From_Preview_State_Params
{
	EFortBuffState                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Text Style from Preview State
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Text_Style_from_Preview_State_Params
{
	EFortBuffState                                     Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Power and Rating for Preview
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Power_and_Rating_for_Preview_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           SlottedItems1;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Determine Preview State
struct UBP_FortExpeditionBuildSquadWidget_C_Determine_Preview_State_Params
{
	float                                              Preview;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortBuffState                                     State;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update For Preview
struct UBP_FortExpeditionBuildSquadWidget_C_Update_For_Preview_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Back with Squad Clear
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Back_with_Squad_Clear_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Slot Item State
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Slot_Item_State_Params
{
	EInputActionState                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Vehicle Selected
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Vehicle_Selected_Params
{
	struct FName                                       CurrentSquadId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Open Picker
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Open_Picker_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Start Expedition
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Start_Expedition_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Squad Picker Closed
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Squad_Picker_Closed_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Squad Slot Selected
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Squad_Slot_Selected_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Selected Item Committed
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Selected_Item_Committed_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Close Picker Action
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Close_Picker_Action_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Slot Item Action
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Slot_Item_Action_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Start Expedition Widget State
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Start_Expedition_Widget_State_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Expedition Expired
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Expedition_Expired_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Try to Auto Select First Vehicle
struct UBP_FortExpeditionBuildSquadWidget_C_Try_to_Auto_Select_First_Vehicle_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Selected Item
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Selected_Item_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Picker List View
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Picker_List_View_Params
{
	class UFortItemTileView*                           PickerTileView;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK_SetCursorToSquadSlotSlotted
struct UBP_FortExpeditionBuildSquadWidget_C_HACK_SetCursorToSquadSlotSlotted_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Bonus Criteria
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Bonus_Criteria_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           SlottedItems;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Expedition Power
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Expedition_Power_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Update Squad Slot Pickers
struct UBP_FortExpeditionBuildSquadWidget_C_Update_Squad_Slot_Pickers_Params
{
	int                                                SelectedSquadIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Expedition Costs
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Expedition_Costs_Params
{
	class UFortExpeditionItemDefinition*               ItemDef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Requirements
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Requirements_Params
{
	class UFortExpeditionItemDefinition*               ItemDef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Remaining Expiration Time
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Remaining_Expiration_Time_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Clear Vehicle Widgets
struct UBP_FortExpeditionBuildSquadWidget_C_Clear_Vehicle_Widgets_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Vehicle Name
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Vehicle_Name_Params
{
	struct FHomebaseSquad                              HomebaseSquad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Refresh Squad Widgets
struct UBP_FortExpeditionBuildSquadWidget_C_Refresh_Squad_Widgets_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Change Vehicle
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Change_Vehicle_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rewards
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Rewards_Params
{
	class UFortExpeditionItemDefinition*               ItemDef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rarity
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Rarity_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Duration
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Duration_Params
{
	class UFortExpeditionItemDefinition*               ItemDef;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Get Expedition Item Definition
struct UBP_FortExpeditionBuildSquadWidget_C_Get_Expedition_Item_Definition_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortExpeditionItemDefinition*               ItemDef;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Refresh Item Data
struct UBP_FortExpeditionBuildSquadWidget_C_Refresh_Item_Data_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Rating
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Rating_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Description
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Description_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Set Name
struct UBP_FortExpeditionBuildSquadWidget_C_Set_Name_Params
{
	class UFortItem*                                   Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Setup Input Action Handlers
struct UBP_FortExpeditionBuildSquadWidget_C_Setup_Input_Action_Handlers_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Handle Back
struct UBP_FortExpeditionBuildSquadWidget_C_Handle_Back_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.DialogResult_B738291040F33B805332A7B633B3ACBD
struct UBP_FortExpeditionBuildSquadWidget_C_DialogResult_B738291040F33B805332A7B633B3ACBD_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitingForLatentActionCompletion;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortDialogExternalLatentActionHandle       WaitingDialogHandle;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HandleVechicleSelected
struct UBP_FortExpeditionBuildSquadWidget_C_HandleVechicleSelected_Params
{
	struct FName                                       SquadId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_9_OnSelectionCommitted__DelegateSignature_Params
{
	class UFortItem*                                   SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Destruct
struct UBP_FortExpeditionBuildSquadWidget_C_Destruct_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnActivated
struct UBP_FortExpeditionBuildSquadWidget_C_OnActivated_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.HACK Select Item in Picker
struct UBP_FortExpeditionBuildSquadWidget_C_HACK_Select_Item_in_Picker_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnRefreshBuildSquadWidget
struct UBP_FortExpeditionBuildSquadWidget_C_OnRefreshBuildSquadWidget_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_35_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__SquadSlotItemPicker_K2Node_ComponentBoundEvent_20_OnItemSelectionEvent__DelegateSignature_Params
{
	class UFortItem*                                   SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnStartExpedition
struct UBP_FortExpeditionBuildSquadWidget_C_OnStartExpedition_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_45_OnSquadSlotOpened__DelegateSignature_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__ExpeditionSquadSlotsView_K2Node_ComponentBoundEvent_77_OnSquadSlotSelected__DelegateSignature_Params
{
	int                                                SquadSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnGamepadStateChanged
struct UBP_FortExpeditionBuildSquadWidget_C_OnGamepadStateChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnStartExpeditionCompleted
struct UBP_FortExpeditionBuildSquadWidget_C_OnStartExpeditionCompleted_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.Construct
struct UBP_FortExpeditionBuildSquadWidget_C_Construct_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.SetData
struct UBP_FortExpeditionBuildSquadWidget_C_SetData_Params
{
	class UFortExpeditionItem**                        InItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature
struct UBP_FortExpeditionBuildSquadWidget_C_BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_20_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.OnRequestClosePicker
struct UBP_FortExpeditionBuildSquadWidget_C_OnRequestClosePicker_Params
{
};

// Function BP_FortExpeditionBuildSquadWidget.BP_FortExpeditionBuildSquadWidget_C.ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget
struct UBP_FortExpeditionBuildSquadWidget_C_ExecuteUbergraph_BP_FortExpeditionBuildSquadWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

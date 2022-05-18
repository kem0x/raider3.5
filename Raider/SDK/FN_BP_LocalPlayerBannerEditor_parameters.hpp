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

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Category Navigation Visibility
struct UBP_LocalPlayerBannerEditor_C_Update_Category_Navigation_Visibility_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Color Category Index
struct UBP_LocalPlayerBannerEditor_C_Reset_Color_Category_Index_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Icon Category Index
struct UBP_LocalPlayerBannerEditor_C_Reset_Icon_Category_Index_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Color Category Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Right_Color_Category_Button_Bang_State_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Color Category Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Left_Color_Category_Button_Bang_State_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Icon Category Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Right_Icon_Category_Button_Bang_State_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Icon Category Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Left_Icon_Category_Button_Bang_State_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Color Category Index
struct UBP_LocalPlayerBannerEditor_C_Get_Prev_Color_Category_Index_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Color Category Index
struct UBP_LocalPlayerBannerEditor_C_Get_Next_Color_Category_Index_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Icon Category Index
struct UBP_LocalPlayerBannerEditor_C_Get_Prev_Icon_Category_Index_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Icon Category Index
struct UBP_LocalPlayerBannerEditor_C_Get_Next_Icon_Category_Index_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Color Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Color_Button_Bang_State_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Icon Button Bang State
struct UBP_LocalPlayerBannerEditor_C_Update_Icon_Button_Bang_State_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Bang States
struct UBP_LocalPlayerBannerEditor_C_Update_Bang_States_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.FoundsPackTextUpdate
struct UBP_LocalPlayerBannerEditor_C_FoundsPackTextUpdate_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Pickers and Views
struct UBP_LocalPlayerBannerEditor_C_Reset_Pickers_and_Views_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset for Keyboard and Mouse
struct UBP_LocalPlayerBannerEditor_C_Reset_for_Keyboard_and_Mouse_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Temp State On Item Selected
struct UBP_LocalPlayerBannerEditor_C_Update_Temp_State_On_Item_Selected_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Refresh Apply Button State
struct UBP_LocalPlayerBannerEditor_C_Refresh_Apply_Button_State_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Apply Chosen Item
struct UBP_LocalPlayerBannerEditor_C_Apply_Chosen_Item_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Picking Tile State
struct UBP_LocalPlayerBannerEditor_C_Set_Picking_Tile_State_Params
{
	bool                                               bPickingTile;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Attempt Leave Picker
struct UBP_LocalPlayerBannerEditor_C_Attempt_Leave_Picker_Params
{
	bool                                               Left;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Color
struct UBP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Color_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Icon
struct UBP_LocalPlayerBannerEditor_C_Navigate_to_Chosen_Icon_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetDeactivated
struct UBP_LocalPlayerBannerEditor_C_OnWidgetDeactivated_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Icon Tileview
struct UBP_LocalPlayerBannerEditor_C_Update_Banner_Icon_Tileview_Params
{
	struct FName                                       CurrentCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Color Tileview
struct UBP_LocalPlayerBannerEditor_C_Update_Banner_Color_Tileview_Params
{
	struct FName                                       CurrentCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Color Category Index
struct UBP_LocalPlayerBannerEditor_C_Increment_Color_Category_Index_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Icon Category Index
struct UBP_LocalPlayerBannerEditor_C_Increment_Icon_Category_Index_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Color Category Index
struct UBP_LocalPlayerBannerEditor_C_Decrement_Color_Category_Index_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Icon Category Index
struct UBP_LocalPlayerBannerEditor_C_Decrement_Icon_Category_Index_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Previous Category
struct UBP_LocalPlayerBannerEditor_C_Previous_Category_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Next Category
struct UBP_LocalPlayerBannerEditor_C_Next_Category_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Current Category
struct UBP_LocalPlayerBannerEditor_C_Set_Current_Category_Params
{
	struct FName                                       CurrentCategory;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Colorswatches
struct UBP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Colorswatches_Params
{
	struct FName                                       CategoryRowName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Icons
struct UBP_LocalPlayerBannerEditor_C_Setup_Tileview_For_Icons_Params
{
	struct FName                                       CategoryRowName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetActivated
struct UBP_LocalPlayerBannerEditor_C_OnWidgetActivated_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Construct
struct UBP_LocalPlayerBannerEditor_C_Construct_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditIconButton_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__EditIconButton_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditColorButton_K2Node_ComponentBoundEvent_319_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__EditColorButton_K2Node_ComponentBoundEvent_319_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditIconButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__EditIconButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__EditColorButton_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__EditColorButton_K2Node_ComponentBoundEvent_49_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CloseEditorButton_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__CloseEditorButton_K2Node_ComponentBoundEvent_74_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.RefreshBannerEditor
struct UBP_LocalPlayerBannerEditor_C_RefreshBannerEditor_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.HandleInputMethodChanged
struct UBP_LocalPlayerBannerEditor_C_HandleInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_363_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature_Params
{
	class UUserWidget*                                 Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BannerTileBangUpdated_Event_0_1
struct UBP_LocalPlayerBannerEditor_C_BannerTileBangUpdated_Event_0_1_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Handle Bang State Changed
struct UBP_LocalPlayerBannerEditor_C_Handle_Bang_State_Changed_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnShowPreviousCategory
struct UBP_LocalPlayerBannerEditor_C_OnShowPreviousCategory_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnShowNextCategory
struct UBP_LocalPlayerBannerEditor_C_OnShowNextCategory_Params
{
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.ExecuteUbergraph_BP_LocalPlayerBannerEditor
struct UBP_LocalPlayerBannerEditor_C_ExecuteUbergraph_BP_LocalPlayerBannerEditor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.CloseBannerEditor__DelegateSignature
struct UBP_LocalPlayerBannerEditor_C_CloseBannerEditor__DelegateSignature_Params
{
	struct FName                                       IconId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ColorId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

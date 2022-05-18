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

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Navigate to Button
struct UItemTransformSlotScreen_C_Navigate_to_Button_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.NavigateToFirstItem
struct UItemTransformSlotScreen_C_NavigateToFirstItem_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Get Transform Data
struct UItemTransformSlotScreen_C_Get_Transform_Data_Params
{
	class UFortItem*                                   SelectedKey;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortItem*>                           SacrificeItems;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                CurrentSacrificePoints;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTier;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ResetScreen
struct UItemTransformSlotScreen_C_ResetScreen_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.CloseItemPicker
struct UItemTransformSlotScreen_C_CloseItemPicker_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.SetupSlotScreen
struct UItemTransformSlotScreen_C_SetupSlotScreen_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenItemPicker
struct UItemTransformSlotScreen_C_OpenItemPicker_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OpenSlotScreen
struct UItemTransformSlotScreen_C_OpenSlotScreen_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__ItemTransformItemPicker_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature_Params
{
	class UFortItem*                                   SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.Construct
struct UItemTransformSlotScreen_C_Construct_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_2_OnTransformConfirmed__DelegateSignature_Params
{
	int                                                SacrificePoints;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature
struct UItemTransformSlotScreen_C_BndEvt__ItemTransformResultInfo_K2Node_ComponentBoundEvent_225_OnUpdateSacrificeInfo__DelegateSignature_Params
{
	bool                                               TransformActive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.HandleSlotButton_Clicked
struct UItemTransformSlotScreen_C_HandleSlotButton_Clicked_Params
{
	class UCommonButton*                               AssociatedButton;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.HandleSlotButton_DoubleClicked
struct UItemTransformSlotScreen_C_HandleSlotButton_DoubleClicked_Params
{
	class UCommonButton*                               AssociatedButton;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.ExecuteUbergraph_ItemTransformSlotScreen
struct UItemTransformSlotScreen_C_ExecuteUbergraph_ItemTransformSlotScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerOpened__DelegateSignature
struct UItemTransformSlotScreen_C_OnItemPickerOpened__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnItemPickerClosed__DelegateSignature
struct UItemTransformSlotScreen_C_OnItemPickerClosed__DelegateSignature_Params
{
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformButtonUpdated__DelegateSignature
struct UItemTransformSlotScreen_C_OnTransformButtonUpdated__DelegateSignature_Params
{
	bool                                               TransformActive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransformSlotScreen.ItemTransformSlotScreen_C.OnTransformConfirmed__DelegateSignature
struct UItemTransformSlotScreen_C_OnTransformConfirmed__DelegateSignature_Params
{
	TArray<class UFortItem*>                           ItemsToSacrifice;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SacrificePoints;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentTier;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ItemTransform.ItemTransform_C.SetAndLogSelectedKey
struct UItemTransform_C_SetAndLogSelectedKey_Params
{
	class UFortItem*                                   SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransform.ItemTransform_C.Handle SubScreen Activated
struct UItemTransform_C_Handle_SubScreen_Activated_Params
{
};

// Function ItemTransform.ItemTransform_C.HandleClosePicker
struct UItemTransform_C_HandleClosePicker_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransform.ItemTransform_C.OnItemPickerOpened
struct UItemTransform_C_OnItemPickerOpened_Params
{
};

// Function ItemTransform.ItemTransform_C.OnItemPickerClosed
struct UItemTransform_C_OnItemPickerClosed_Params
{
};

// Function ItemTransform.ItemTransform_C.UpdateTransformAction
struct UItemTransform_C_UpdateTransformAction_Params
{
	bool                                               TransformActive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransform.ItemTransform_C.Handle Slot Screen Activated
struct UItemTransform_C_Handle_Slot_Screen_Activated_Params
{
};

// Function ItemTransform.ItemTransform_C.Handle Key Screen Activated
struct UItemTransform_C_Handle_Key_Screen_Activated_Params
{
};

// Function ItemTransform.ItemTransform_C.DisableTransformAction
struct UItemTransform_C_DisableTransformAction_Params
{
};

// Function ItemTransform.ItemTransform_C.HideTransformAction
struct UItemTransform_C_HideTransformAction_Params
{
};

// Function ItemTransform.ItemTransform_C.ShowTransformAction
struct UItemTransform_C_ShowTransformAction_Params
{
};

// Function ItemTransform.ItemTransform_C.UpdateSelectKeyAction
struct UItemTransform_C_UpdateSelectKeyAction_Params
{
};

// Function ItemTransform.ItemTransform_C.DisableSelectKeyAction
struct UItemTransform_C_DisableSelectKeyAction_Params
{
};

// Function ItemTransform.ItemTransform_C.HideSelectKeyAction
struct UItemTransform_C_HideSelectKeyAction_Params
{
};

// Function ItemTransform.ItemTransform_C.ShowSelectKeyAction
struct UItemTransform_C_ShowSelectKeyAction_Params
{
};

// Function ItemTransform.ItemTransform_C.HandleSelectKeyAction
struct UItemTransform_C_HandleSelectKeyAction_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransform.ItemTransform_C.HandleTransformAction
struct UItemTransform_C_HandleTransformAction_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransform.ItemTransform_C.ResetItemTransform
struct UItemTransform_C_ResetItemTransform_Params
{
};

// Function ItemTransform.ItemTransform_C.HandleTransformFailed
struct UItemTransform_C_HandleTransformFailed_Params
{
	struct FText                                       ErrorMessage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ItemTransform.ItemTransform_C.HandleTransformSucceeded
struct UItemTransform_C_HandleTransformSucceeded_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       RewardedItems;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFortItemInstanceQuantityPair>       SacrificedItems;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemTransform.ItemTransform_C.OpenResult
struct UItemTransform_C_OpenResult_Params
{
	TArray<struct FFortItemInstanceQuantityPair>       RewardItems;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FFortItemInstanceQuantityPair>       SacrificeItems;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ItemTransform.ItemTransform_C.HandleTransformConfirm
struct UItemTransform_C_HandleTransformConfirm_Params
{
};

// Function ItemTransform.ItemTransform_C.HandleTransformCancel
struct UItemTransform_C_HandleTransformCancel_Params
{
};

// Function ItemTransform.ItemTransform_C.OpenConfirmation
struct UItemTransform_C_OpenConfirmation_Params
{
};

// Function ItemTransform.ItemTransform_C.HandleSelect
struct UItemTransform_C_HandleSelect_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransform.ItemTransform_C.HandleBack
struct UItemTransform_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransform.ItemTransform_C.SetupActionHandlers
struct UItemTransform_C_SetupActionHandlers_Params
{
};

// Function ItemTransform.ItemTransform_C.OpenSlotScreen
struct UItemTransform_C_OpenSlotScreen_Params
{
};

// Function ItemTransform.ItemTransform_C.OpenKeyScreen
struct UItemTransform_C_OpenKeyScreen_Params
{
};

// Function ItemTransform.ItemTransform_C.OpenItemTransform
struct UItemTransform_C_OpenItemTransform_Params
{
};

// Function ItemTransform.ItemTransform_C.BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature
struct UItemTransform_C_BndEvt__TransformScreenSwitcher_K2Node_ComponentBoundEvent_213_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransform.ItemTransform_C.OnActivated
struct UItemTransform_C_OnActivated_Params
{
};

// Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature
struct UItemTransform_C_BndEvt__KeyScreen_K2Node_ComponentBoundEvent_513_OnKeyConfirmed__DelegateSignature_Params
{
};

// Function ItemTransform.ItemTransform_C.BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature
struct UItemTransform_C_BndEvt__SlotScreen_K2Node_ComponentBoundEvent_598_OnTransformButtonUpdated__DelegateSignature_Params
{
	bool                                               TransformActive;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransform.ItemTransform_C.BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature
struct UItemTransform_C_BndEvt__KeyScreen_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature_Params
{
	class UFortItem*                                   Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemTransform.ItemTransform_C.Construct
struct UItemTransform_C_Construct_Params
{
};

// Function ItemTransform.ItemTransform_C.OnRequestCloseItemPicker
struct UItemTransform_C_OnRequestCloseItemPicker_Params
{
};

// Function ItemTransform.ItemTransform_C.ExecuteUbergraph_ItemTransform
struct UItemTransform_C_ExecuteUbergraph_ItemTransform_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

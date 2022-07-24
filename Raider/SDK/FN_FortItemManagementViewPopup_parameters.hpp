#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.SetupCheckboxes
struct UFortItemManagementViewPopup_C_SetupCheckboxes_Params
{
};

// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.CheckboxUpdate
struct UFortItemManagementViewPopup_C_CheckboxUpdate_Params
{
	class UImage*                                      CheckboxImage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Check;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.BndEvt__ToggleSizeButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature
struct UFortItemManagementViewPopup_C_BndEvt__ToggleSizeButton_K2Node_ComponentBoundEvent_41_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.OnDeactivated
struct UFortItemManagementViewPopup_C_OnDeactivated_Params
{
};

// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.OnActivated
struct UFortItemManagementViewPopup_C_OnActivated_Params
{
};

// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
struct UFortItemManagementViewPopup_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.BndEvt__IconCheckmarkTextButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature
struct UFortItemManagementViewPopup_C_BndEvt__IconCheckmarkTextButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.BndEvt__CollectionBookCheckmarkButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
struct UFortItemManagementViewPopup_C_BndEvt__CollectionBookCheckmarkButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortItemManagementViewPopup.FortItemManagementViewPopup_C.ExecuteUbergraph_FortItemManagementViewPopup
struct UFortItemManagementViewPopup_C_ExecuteUbergraph_FortItemManagementViewPopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

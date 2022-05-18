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

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Update Bang State
struct UBP_LocalPlayerProfileManagement_C_Update_Bang_State_Params
{
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.UpdateBannerEditorButton
struct UBP_LocalPlayerProfileManagement_C_UpdateBannerEditorButton_Params
{
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Get_LeavePartyButton_Visibility_0_1
struct UBP_LocalPlayerProfileManagement_C_Get_LeavePartyButton_Visibility_0_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Get_ViewProfileButton_Visibility_0_1
struct UBP_LocalPlayerProfileManagement_C_Get_ViewProfileButton_Visibility_0_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.UpdateBannerIconAndColor
struct UBP_LocalPlayerProfileManagement_C_UpdateBannerIconAndColor_Params
{
	struct FName                                       InBannerIconId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InBannerColorId;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OnWidgetDeactivated
struct UBP_LocalPlayerProfileManagement_C_OnWidgetDeactivated_Params
{
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OnWidgetActivated
struct UBP_LocalPlayerProfileManagement_C_OnWidgetActivated_Params
{
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.Construct
struct UBP_LocalPlayerProfileManagement_C_Construct_Params
{
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerProfileManagement_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerProfileManagement_C_BndEvt__CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_100_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerProfileManagement_C_BndEvt__LeavePartyButton_K2Node_ComponentBoundEvent_100_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature
struct UBP_LocalPlayerProfileManagement_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.ExecuteUbergraph_BP_LocalPlayerProfileManagement
struct UBP_LocalPlayerProfileManagement_C_ExecuteUbergraph_BP_LocalPlayerProfileManagement_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.CloseProfileModal__DelegateSignature
struct UBP_LocalPlayerProfileManagement_C_CloseProfileModal__DelegateSignature_Params
{
};

// Function BP_LocalPlayerProfileManagement.BP_LocalPlayerProfileManagement_C.OpenBannerEditor__DelegateSignature
struct UBP_LocalPlayerProfileManagement_C_OpenBannerEditor__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

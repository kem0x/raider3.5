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

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.EnablePowerBarChunk
struct UOutpostScreenStormShieldContent_C_EnablePowerBarChunk_Params
{
	class UImage*                                      inImage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.CenterActiveButton
struct UOutpostScreenStormShieldContent_C_CenterActiveButton_Params
{
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.HandleBack
struct UOutpostScreenStormShieldContent_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.AddInputHandlers
struct UOutpostScreenStormShieldContent_C_AddInputHandlers_Params
{
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetButtonState
struct UOutpostScreenStormShieldContent_C_SetButtonState_Params
{
	bool                                               enabled_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Get_GetHelpButton_ToolTipWidget_0_1
struct UOutpostScreenStormShieldContent_C_Get_GetHelpButton_ToolTipWidget_0_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.UpdateGetHelpButton
struct UOutpostScreenStormShieldContent_C_UpdateGetHelpButton_Params
{
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetExpandShieldText
struct UOutpostScreenStormShieldContent_C_SetExpandShieldText_Params
{
	struct FText                                       NewExpandText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_ExpandShieldText
struct UOutpostScreenStormShieldContent_C_Update_ExpandShieldText_Params
{
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.SetCoreBuilding
struct UOutpostScreenStormShieldContent_C_SetCoreBuilding_Params
{
	class AFortOutpostBuilding*                        NewCoreBuilding;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UOutpostScreenStormShield_C*                 Parent_Widget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_LeaveOutpost_ButtonEnabled
struct UOutpostScreenStormShieldContent_C_Update_LeaveOutpost_ButtonEnabled_Params
{
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Get_LeaveOutpost_Button_ToolTipWidget
struct UOutpostScreenStormShieldContent_C_Get_LeaveOutpost_Button_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.IsOwningPlayerOutpostOwner
struct UOutpostScreenStormShieldContent_C_IsOwningPlayerOutpostOwner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Update_Upgrade_ButtonEnabled
struct UOutpostScreenStormShieldContent_C_Update_Upgrade_ButtonEnabled_Params
{
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.isPlayerAlone
struct UOutpostScreenStormShieldContent_C_isPlayerAlone_Params
{
	bool                                               isAlone;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.ResrouceProgress_Wood
struct UOutpostScreenStormShieldContent_C_ResrouceProgress_Wood_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_2_3
struct UOutpostScreenStormShieldContent_C_GetPercent_2_3_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_1_2
struct UOutpostScreenStormShieldContent_C_GetPercent_1_2_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.GetPercent_0_1
struct UOutpostScreenStormShieldContent_C_GetPercent_0_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.Construct
struct UOutpostScreenStormShieldContent_C_Construct_Params
{
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.UpdateEnabledStates
struct UOutpostScreenStormShieldContent_C_UpdateEnabledStates_Params
{
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature
struct UOutpostScreenStormShieldContent_C_BndEvt__Upgrade_Button_K2Node_ComponentBoundEvent_158_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.OutpostIsDefined_Event
struct UOutpostScreenStormShieldContent_C_OutpostIsDefined_Event_Params
{
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature
struct UOutpostScreenStormShieldContent_C_BndEvt__AllowFriendsOfFriendsButton_K2Node_ComponentBoundEvent_243_CommonSelectedStateChanged__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.ExecuteUbergraph_OutpostScreenStormShieldContent
struct UOutpostScreenStormShieldContent_C_ExecuteUbergraph_OutpostScreenStormShieldContent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.OutpostIsDefined__DelegateSignature
struct UOutpostScreenStormShieldContent_C_OutpostIsDefined__DelegateSignature_Params
{
};

// Function OutpostScreenStormShieldContent.OutpostScreenStormShieldContent_C.CloseOutpostScreen__DelegateSignature
struct UOutpostScreenStormShieldContent_C_CloseOutpostScreen__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

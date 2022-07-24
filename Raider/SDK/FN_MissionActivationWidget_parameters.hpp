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

// Function MissionActivationWidget.MissionActivationWidget_C.HandleIncreaseDifficultyLockoutFinished
struct UMissionActivationWidget_C_HandleIncreaseDifficultyLockoutFinished_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.HandleMissionActivationLockoutFinished
struct UMissionActivationWidget_C_HandleMissionActivationLockoutFinished_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.HandleAnimFinished
struct UMissionActivationWidget_C_HandleAnimFinished_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.UpdateButton
struct UMissionActivationWidget_C_UpdateButton_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLockedOut;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.UpdateLockoutTimeRemaining
struct UMissionActivationWidget_C_UpdateLockoutTimeRemaining_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.StartNextState
struct UMissionActivationWidget_C_StartNextState_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.UnbindEvents
struct UMissionActivationWidget_C_UnbindEvents_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.BindEvents
struct UMissionActivationWidget_C_BindEvents_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.UpdateObjectiveReadyTime
struct UMissionActivationWidget_C_UpdateObjectiveReadyTime_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.FocusOnAvailablePanelButton
struct UMissionActivationWidget_C_FocusOnAvailablePanelButton_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.SetBluGloRequirementHint
struct UMissionActivationWidget_C_SetBluGloRequirementHint_Params
{
	int                                                BluGloRequirement;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.TogglePanelButtonInteractability
struct UMissionActivationWidget_C_TogglePanelButtonInteractability_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.Construct
struct UMissionActivationWidget_C_Construct_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UMissionActivationWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature
struct UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature
struct UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature
struct UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature
struct UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.Destruct
struct UMissionActivationWidget_C_Destruct_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.OnActivated
struct UMissionActivationWidget_C_OnActivated_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature
struct UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature
struct UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.PreConstruct
struct UMissionActivationWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.HandleOnRecepientVoted
struct UMissionActivationWidget_C_HandleOnRecepientVoted_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.OnStateUpdated
struct UMissionActivationWidget_C_OnStateUpdated_Params
{
	EFortMissionActivationWidgetState*                 ActiveState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortMissionActivationWidgetState*                 PreviousState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionActivationWidget.MissionActivationWidget_C.HandleVoteLockoutOccured
struct UMissionActivationWidget_C_HandleVoteLockoutOccured_Params
{
};

// Function MissionActivationWidget.MissionActivationWidget_C.ExecuteUbergraph_MissionActivationWidget
struct UMissionActivationWidget_C_ExecuteUbergraph_MissionActivationWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

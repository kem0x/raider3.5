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

// Function FortReplayViewSettings.FortReplayViewSettings_C.SwitchToValidTab
struct UFortReplayViewSettings_C_SwitchToValidTab_Params
{
};

// Function FortReplayViewSettings.FortReplayViewSettings_C.OnCameraTypeChanged
struct UFortReplayViewSettings_C_OnCameraTypeChanged_Params
{
	class AFortPlayerControllerSpectating*             PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESpectatorCameraType                               CameraType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayViewSettings.FortReplayViewSettings_C.Construct
struct UFortReplayViewSettings_C_Construct_Params
{
};

// Function FortReplayViewSettings.FortReplayViewSettings_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UFortReplayViewSettings_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortReplayViewSettings.FortReplayViewSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UFortReplayViewSettings_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FortReplayViewSettings.FortReplayViewSettings_C.OnActivated
struct UFortReplayViewSettings_C_OnActivated_Params
{
};

// Function FortReplayViewSettings.FortReplayViewSettings_C.OnDeactivated
struct UFortReplayViewSettings_C_OnDeactivated_Params
{
};

// Function FortReplayViewSettings.FortReplayViewSettings_C.ExecuteUbergraph_FortReplayViewSettings
struct UFortReplayViewSettings_C_ExecuteUbergraph_FortReplayViewSettings_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

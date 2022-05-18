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

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.InitFocalLengthOptions
struct UFortReplayLensSettingsTab_C_InitFocalLengthOptions_Params
{
	float                                              CurrentFocalLength;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetFocusDistanceWidget
struct UFortReplayLensSettingsTab_C_SetFocusDistanceWidget_Params
{
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetFocusVisibility
struct UFortReplayLensSettingsTab_C_SetFocusVisibility_Params
{
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetExposureVisibility
struct UFortReplayLensSettingsTab_C_SetExposureVisibility_Params
{
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetWidgetValues
struct UFortReplayLensSettingsTab_C_SetWidgetValues_Params
{
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.OnActivated
struct UFortReplayLensSettingsTab_C_OnActivated_Params
{
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__AutoExposure_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__AutoExposure_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__AutoFocus_K2Node_ComponentBoundEvent_6_Selection Changed__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__AutoFocus_K2Node_ComponentBoundEvent_6_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__Exposure_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__Exposure_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__Aperture_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__Aperture_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocalLength_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__FocalLength_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocusDistance_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__FocusDistance_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.OnCameraTypeChanged
struct UFortReplayLensSettingsTab_C_OnCameraTypeChanged_Params
{
	class AFortPlayerControllerSpectating**            FortPlayerControllerSpectating;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESpectatorCameraType*                              CameraType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.ResetToDefault
struct UFortReplayLensSettingsTab_C_ResetToDefault_Params
{
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.CenterOnTab
struct UFortReplayLensSettingsTab_C_CenterOnTab_Params
{
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_61_Selection Changed__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_61_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_40_Selection Changed__DelegateSignature
struct UFortReplayLensSettingsTab_C_BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_40_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.PreConstruct
struct UFortReplayLensSettingsTab_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.InitializeWidgets
struct UFortReplayLensSettingsTab_C_InitializeWidgets_Params
{
};

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.ExecuteUbergraph_FortReplayLensSettingsTab
struct UFortReplayLensSettingsTab_C_ExecuteUbergraph_FortReplayLensSettingsTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

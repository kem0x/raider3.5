// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.InitFocalLengthOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurrentFocalLength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::InitFocalLengthOptions(float CurrentFocalLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.InitFocalLengthOptions");

	UFortReplayLensSettingsTab_C_InitFocalLengthOptions_Params params;
	params.CurrentFocalLength = CurrentFocalLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetFocusDistanceWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFortReplayLensSettingsTab_C::SetFocusDistanceWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetFocusDistanceWidget");

	UFortReplayLensSettingsTab_C_SetFocusDistanceWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetFocusVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UFortReplayLensSettingsTab_C::SetFocusVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetFocusVisibility");

	UFortReplayLensSettingsTab_C_SetFocusVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetExposureVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UFortReplayLensSettingsTab_C::SetExposureVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetExposureVisibility");

	UFortReplayLensSettingsTab_C_SetExposureVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetWidgetValues
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UFortReplayLensSettingsTab_C::SetWidgetValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.SetWidgetValues");

	UFortReplayLensSettingsTab_C_SetWidgetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UFortReplayLensSettingsTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.OnActivated");

	UFortReplayLensSettingsTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__AutoExposure_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::BndEvt__AutoExposure_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__AutoExposure_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature");

	UFortReplayLensSettingsTab_C_BndEvt__AutoExposure_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__AutoFocus_K2Node_ComponentBoundEvent_6_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::BndEvt__AutoFocus_K2Node_ComponentBoundEvent_6_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__AutoFocus_K2Node_ComponentBoundEvent_6_Selection Changed__DelegateSignature");

	UFortReplayLensSettingsTab_C_BndEvt__AutoFocus_K2Node_ComponentBoundEvent_6_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__Exposure_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::BndEvt__Exposure_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__Exposure_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature");

	UFortReplayLensSettingsTab_C_BndEvt__Exposure_K2Node_ComponentBoundEvent_1_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__Aperture_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::BndEvt__Aperture_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__Aperture_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature");

	UFortReplayLensSettingsTab_C_BndEvt__Aperture_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocalLength_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::BndEvt__FocalLength_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocalLength_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature");

	UFortReplayLensSettingsTab_C_BndEvt__FocalLength_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocusDistance_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::BndEvt__FocusDistance_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocusDistance_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature");

	UFortReplayLensSettingsTab_C_BndEvt__FocusDistance_K2Node_ComponentBoundEvent_4_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.OnCameraTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating** FortPlayerControllerSpectating (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESpectatorCameraType*          CameraType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::OnCameraTypeChanged(class AFortPlayerControllerSpectating** FortPlayerControllerSpectating, ESpectatorCameraType* CameraType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.OnCameraTypeChanged");

	UFortReplayLensSettingsTab_C_OnCameraTypeChanged_Params params;
	params.FortPlayerControllerSpectating = FortPlayerControllerSpectating;
	params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.ResetToDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFortReplayLensSettingsTab_C::ResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.ResetToDefault");

	UFortReplayLensSettingsTab_C_ResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.CenterOnTab
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFortReplayLensSettingsTab_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.CenterOnTab");

	UFortReplayLensSettingsTab_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_61_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_61_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_61_Selection Changed__DelegateSignature");

	UFortReplayLensSettingsTab_C_BndEvt__ApertureSelector_K2Node_ComponentBoundEvent_61_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_40_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_40_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_40_Selection Changed__DelegateSignature");

	UFortReplayLensSettingsTab_C_BndEvt__FocalLengthSelector_K2Node_ComponentBoundEvent_40_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.PreConstruct");

	UFortReplayLensSettingsTab_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.InitializeWidgets
// (Event, Protected, BlueprintEvent)

void UFortReplayLensSettingsTab_C::InitializeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.InitializeWidgets");

	UFortReplayLensSettingsTab_C_InitializeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.ExecuteUbergraph_FortReplayLensSettingsTab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayLensSettingsTab_C::ExecuteUbergraph_FortReplayLensSettingsTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayLensSettingsTab.FortReplayLensSettingsTab_C.ExecuteUbergraph_FortReplayLensSettingsTab");

	UFortReplayLensSettingsTab_C_ExecuteUbergraph_FortReplayLensSettingsTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

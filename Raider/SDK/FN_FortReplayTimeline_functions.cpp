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

// Function FortReplayTimeline.FortReplayTimeline_C.OnHUDVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EHudVisibilityState            VisibilityState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTimeline_C::OnHUDVisibilityChanged(EHudVisibilityState VisibilityState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.OnHUDVisibilityChanged");

	UFortReplayTimeline_C_OnHUDVisibilityChanged_Params params;
	params.VisibilityState = VisibilityState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTimeline.FortReplayTimeline_C.OnPressCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHandled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFortReplayTimeline_C::OnPressCancel(bool* bHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.OnPressCancel");

	UFortReplayTimeline_C_OnPressCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHandled != nullptr)
		*bHandled = params.bHandled;
}


// Function FortReplayTimeline.FortReplayTimeline_C.OnPressConfirm
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHandled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFortReplayTimeline_C::OnPressConfirm(bool* bHandled)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.OnPressConfirm");

	UFortReplayTimeline_C_OnPressConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHandled != nullptr)
		*bHandled = params.bHandled;
}


// Function FortReplayTimeline.FortReplayTimeline_C.OnTimelineInputFocusChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bHasInputFocus                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTimeline_C::OnTimelineInputFocusChanged(bool bHasInputFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.OnTimelineInputFocusChanged");

	UFortReplayTimeline_C_OnTimelineInputFocusChanged_Params params;
	params.bHasInputFocus = bHasInputFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTimeline.FortReplayTimeline_C.GetProgressBarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UFortReplayTimeline_C::GetProgressBarWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.GetProgressBarWidget");

	UFortReplayTimeline_C_GetProgressBarWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FortReplayTimeline.FortReplayTimeline_C.SetReplayContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortReplayContext*      InReplayContext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTimeline_C::SetReplayContext(class UFortReplayContext* InReplayContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.SetReplayContext");

	UFortReplayTimeline_C_SetReplayContext_Params params;
	params.InReplayContext = InReplayContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTimeline.FortReplayTimeline_C.UpdateFillBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InPercent                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTimeline_C::UpdateFillBar(float InPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.UpdateFillBar");

	UFortReplayTimeline_C_UpdateFillBar_Params params;
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTimeline.FortReplayTimeline_C.InitializeBar
// (Public, BlueprintCallable, BlueprintEvent)

void UFortReplayTimeline_C::InitializeBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.InitializeBar");

	UFortReplayTimeline_C_InitializeBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTimeline.FortReplayTimeline_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTimeline_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.PreConstruct");

	UFortReplayTimeline_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTimeline.FortReplayTimeline_C.CurrentTimeChangedFromNative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeNow                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTimeline_C::CurrentTimeChangedFromNative(float TimeNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.CurrentTimeChangedFromNative");

	UFortReplayTimeline_C_CurrentTimeChangedFromNative_Params params;
	params.TimeNow = TimeNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTimeline.FortReplayTimeline_C.BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_95_OnMouseCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UFortReplayTimeline_C::BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_95_OnMouseCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_95_OnMouseCaptureEndEvent__DelegateSignature");

	UFortReplayTimeline_C_BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_95_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTimeline.FortReplayTimeline_C.BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_110_OnControllerCaptureEndEvent__DelegateSignature
// (BlueprintEvent)

void UFortReplayTimeline_C::BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_110_OnControllerCaptureEndEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_110_OnControllerCaptureEndEvent__DelegateSignature");

	UFortReplayTimeline_C_BndEvt__SliderGamepadSlider_K2Node_ComponentBoundEvent_110_OnControllerCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTimeline.FortReplayTimeline_C.ExecuteUbergraph_FortReplayTimeline
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTimeline_C::ExecuteUbergraph_FortReplayTimeline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTimeline.FortReplayTimeline_C.ExecuteUbergraph_FortReplayTimeline");

	UFortReplayTimeline_C_ExecuteUbergraph_FortReplayTimeline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

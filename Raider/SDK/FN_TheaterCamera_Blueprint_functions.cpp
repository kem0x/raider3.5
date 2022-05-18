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

// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetSuspendInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SuspendInput                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATheaterCamera_Blueprint_C::SetSuspendInput(bool SuspendInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetSuspendInput");

	ATheaterCamera_Blueprint_C_SetSuspendInput_Params params;
	params.SuspendInput = SuspendInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.IsInputSuspended
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATheaterCamera_Blueprint_C::IsInputSuspended()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.IsInputSuspended");

	ATheaterCamera_Blueprint_C_IsInputSuspended_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.NewFunction_0_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D ATheaterCamera_Blueprint_C::NewFunction_0_1(class AActor* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.NewFunction_0_1");

	ATheaterCamera_Blueprint_C_NewFunction_0_1_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PanCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaX                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaY                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATheaterCamera_Blueprint_C::PanCamera(float DeltaX, float DeltaY)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PanCamera");

	ATheaterCamera_Blueprint_C_PanCamera_Params params;
	params.DeltaX = DeltaX;
	params.DeltaY = DeltaY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.HandleTheaterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TheaterId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ATheaterCamera_Blueprint_C::HandleTheaterSelected(const struct FString& TheaterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.HandleTheaterSelected");

	ATheaterCamera_Blueprint_C_HandleTheaterSelected_Params params;
	params.TheaterId = TheaterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ZoomCameraStep
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Forward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATheaterCamera_Blueprint_C::ZoomCameraStep(bool Forward)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ZoomCameraStep");

	ATheaterCamera_Blueprint_C_ZoomCameraStep_Params params;
	params.Forward = Forward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATheaterCamera_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.UserConstructionScript");

	ATheaterCamera_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__FinishedFunc
// (BlueprintEvent)

void ATheaterCamera_Blueprint_C::FocusTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__FinishedFunc");

	ATheaterCamera_Blueprint_C_FocusTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__UpdateFunc
// (BlueprintEvent)

void ATheaterCamera_Blueprint_C::FocusTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.FocusTimeline__UpdateFunc");

	ATheaterCamera_Blueprint_C_FocusTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__FinishedFunc
// (BlueprintEvent)

void ATheaterCamera_Blueprint_C::DebugZoomTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__FinishedFunc");

	ATheaterCamera_Blueprint_C_DebugZoomTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__UpdateFunc
// (BlueprintEvent)

void ATheaterCamera_Blueprint_C::DebugZoomTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DebugZoomTL__UpdateFunc");

	ATheaterCamera_Blueprint_C_DebugZoomTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__FinishedFunc
// (BlueprintEvent)

void ATheaterCamera_Blueprint_C::InitializeFX_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__FinishedFunc");

	ATheaterCamera_Blueprint_C_InitializeFX_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__UpdateFunc
// (BlueprintEvent)

void ATheaterCamera_Blueprint_C::InitializeFX_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InitializeFX-TL__UpdateFunc");

	ATheaterCamera_Blueprint_C_InitializeFX_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__FinishedFunc
// (BlueprintEvent)

void ATheaterCamera_Blueprint_C::DEBUGFOVA__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__FinishedFunc");

	ATheaterCamera_Blueprint_C_DEBUGFOVA__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__UpdateFunc
// (BlueprintEvent)

void ATheaterCamera_Blueprint_C::DEBUGFOVA__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.DEBUGFOVA__UpdateFunc");

	ATheaterCamera_Blueprint_C_DEBUGFOVA__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ATheaterCamera_Blueprint_C::InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3_4");

	ATheaterCamera_Blueprint_C_InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_3_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ATheaterCamera_Blueprint_C::InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_3");

	ATheaterCamera_Blueprint_C_InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_2_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ATheaterCamera_Blueprint_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1_2");

	ATheaterCamera_Blueprint_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ATheaterCamera_Blueprint_C::InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0_1");

	ATheaterCamera_Blueprint_C_InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_0_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnActivated
// (Event, Public, BlueprintEvent)

void ATheaterCamera_Blueprint_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnActivated");

	ATheaterCamera_Blueprint_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDeactivated
// (Event, Public, BlueprintEvent)

void ATheaterCamera_Blueprint_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDeactivated");

	ATheaterCamera_Blueprint_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetTileFocus
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortTheaterMapTile**    TargetTile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATheaterCamera_Blueprint_C::SetTileFocus(class AFortTheaterMapTile** TargetTile)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.SetTileFocus");

	ATheaterCamera_Blueprint_C_SetTileFocus_Params params;
	params.TargetTile = TargetTile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATheaterCamera_Blueprint_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ReceiveTick");

	ATheaterCamera_Blueprint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragBegin
// (Event, Public, BlueprintEvent)

void ATheaterCamera_Blueprint_C::OnDragBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragBegin");

	ATheaterCamera_Blueprint_C_OnDragBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragEnd
// (Event, Public, BlueprintEvent)

void ATheaterCamera_Blueprint_C::OnDragEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.OnDragEnd");

	ATheaterCamera_Blueprint_C_OnDragEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.StopFocusTimeline
// (BlueprintCallable, BlueprintEvent)

void ATheaterCamera_Blueprint_C::StopFocusTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.StopFocusTimeline");

	ATheaterCamera_Blueprint_C_StopFocusTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ForceTileFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HexWorldLoc                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATheaterCamera_Blueprint_C::ForceTileFocus(const struct FVector& HexWorldLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ForceTileFocus");

	ATheaterCamera_Blueprint_C_ForceTileFocus_Params params;
	params.HexWorldLoc = HexWorldLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PingFromHex
// (BlueprintCallable, BlueprintEvent)

void ATheaterCamera_Blueprint_C::PingFromHex()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PingFromHex");

	ATheaterCamera_Blueprint_C_PingFromHex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.RefreshCloudMask
// (BlueprintCallable, BlueprintEvent)

void ATheaterCamera_Blueprint_C::RefreshCloudMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.RefreshCloudMask");

	ATheaterCamera_Blueprint_C_RefreshCloudMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.MaskFinished
// (BlueprintCallable, BlueprintEvent)

void ATheaterCamera_Blueprint_C::MaskFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.MaskFinished");

	ATheaterCamera_Blueprint_C_MaskFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PinnedPing
// (BlueprintCallable, BlueprintEvent)

void ATheaterCamera_Blueprint_C::PinnedPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.PinnedPing");

	ATheaterCamera_Blueprint_C_PinnedPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ExecuteUbergraph_TheaterCamera_Blueprint
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATheaterCamera_Blueprint_C::ExecuteUbergraph_TheaterCamera_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TheaterCamera_Blueprint.TheaterCamera_Blueprint_C.ExecuteUbergraph_TheaterCamera_Blueprint");

	ATheaterCamera_Blueprint_C_ExecuteUbergraph_TheaterCamera_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

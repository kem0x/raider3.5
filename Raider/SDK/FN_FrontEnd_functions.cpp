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

// Function Frontend.FrontEnd_C.UpdateVaultCameraZoom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                InCameraType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_C::UpdateVaultCameraZoom(EFrontEndCamera InCameraType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.UpdateVaultCameraZoom");

	AFrontEnd_C_UpdateVaultCameraZoom_Params params;
	params.InCameraType = InCameraType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.ProcessTouchInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AFrontEnd_C::ProcessTouchInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.ProcessTouchInput");

	AFrontEnd_C_ProcessTouchInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AFrontEnd_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_4");

	AFrontEnd_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AFrontEnd_C::InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_3");

	AFrontEnd_C_InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.InpTchEvt_Moved
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AFrontEnd_C::InpTchEvt_Moved(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.InpTchEvt_Moved");

	AFrontEnd_C_InpTchEvt_Moved_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.InpTchEvt_Released
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AFrontEnd_C::InpTchEvt_Released(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.InpTchEvt_Released");

	AFrontEnd_C_InpTchEvt_Released_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.InpTchEvt_Pressed
// (BlueprintEvent)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AFrontEnd_C::InpTchEvt_Pressed(TEnumAsByte<ETouchIndex> FingerIndex, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.InpTchEvt_Pressed");

	AFrontEnd_C_InpTchEvt_Pressed_Params params;
	params.FingerIndex = FingerIndex;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AFrontEnd_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_2");

	AFrontEnd_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AFrontEnd_C::InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_1");

	AFrontEnd_C_InpActEvt_RightMouseButton_K2Node_InputKeyEvent_0_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_4_5
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_C::InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_4_5(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_4_5");

	AFrontEnd_C_InpAxisKeyEvt_Gamepad_RightX_K2Node_InputAxisKeyEvent_4_5_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.ResetRotation
// (BlueprintCallable, BlueprintEvent)

void AFrontEnd_C::ResetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.ResetRotation");

	AFrontEnd_C_ResetRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.StoreInitialRotation
// (BlueprintCallable, BlueprintEvent)

void AFrontEnd_C::StoreInitialRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.StoreInitialRotation");

	AFrontEnd_C_StoreInitialRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.ReceiveTick");

	AFrontEnd_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.OnMatchStarted
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)

void AFrontEnd_C::OnMatchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.OnMatchStarted");

	AFrontEnd_C_OnMatchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.EnableTutorial
// (BlueprintCallable, BlueprintEvent)

void AFrontEnd_C::EnableTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.EnableTutorial");

	AFrontEnd_C_EnableTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontEnd_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.ReceiveBeginPlay");

	AFrontEnd_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.UnlockCameraTargetMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_C::UnlockCameraTargetMovement(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.UnlockCameraTargetMovement");

	AFrontEnd_C_UnlockCameraTargetMovement_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.UnlockItemMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_C::UnlockItemMovement(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.UnlockItemMovement");

	AFrontEnd_C_UnlockItemMovement_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.BindFrontendEvents
// (BlueprintCallable, BlueprintEvent)

void AFrontEnd_C::BindFrontendEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.BindFrontendEvents");

	AFrontEnd_C_BindFrontendEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFrontEnd_C::ExecuteUbergraph_FrontEnd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Frontend.FrontEnd_C.ExecuteUbergraph_FrontEnd");

	AFrontEnd_C_ExecuteUbergraph_FrontEnd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

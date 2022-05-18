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

// Function FortReplayViewSettings.FortReplayViewSettings_C.SwitchToValidTab
// (Public, BlueprintCallable, BlueprintEvent)

void UFortReplayViewSettings_C::SwitchToValidTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayViewSettings.FortReplayViewSettings_C.SwitchToValidTab");

	UFortReplayViewSettings_C_SwitchToValidTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayViewSettings.FortReplayViewSettings_C.OnCameraTypeChanged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESpectatorCameraType           CameraType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayViewSettings_C::OnCameraTypeChanged(class AFortPlayerControllerSpectating* PlayerController, ESpectatorCameraType CameraType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayViewSettings.FortReplayViewSettings_C.OnCameraTypeChanged");

	UFortReplayViewSettings_C_OnCameraTypeChanged_Params params;
	params.PlayerController = PlayerController;
	params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayViewSettings.FortReplayViewSettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortReplayViewSettings_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayViewSettings.FortReplayViewSettings_C.Construct");

	UFortReplayViewSettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayViewSettings.FortReplayViewSettings_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayViewSettings_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayViewSettings.FortReplayViewSettings_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UFortReplayViewSettings_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayViewSettings.FortReplayViewSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayViewSettings_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayViewSettings.FortReplayViewSettings_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UFortReplayViewSettings_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayViewSettings.FortReplayViewSettings_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UFortReplayViewSettings_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayViewSettings.FortReplayViewSettings_C.OnActivated");

	UFortReplayViewSettings_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayViewSettings.FortReplayViewSettings_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UFortReplayViewSettings_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayViewSettings.FortReplayViewSettings_C.OnDeactivated");

	UFortReplayViewSettings_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayViewSettings.FortReplayViewSettings_C.ExecuteUbergraph_FortReplayViewSettings
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayViewSettings_C::ExecuteUbergraph_FortReplayViewSettings(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayViewSettings.FortReplayViewSettings_C.ExecuteUbergraph_FortReplayViewSettings");

	UFortReplayViewSettings_C_ExecuteUbergraph_FortReplayViewSettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

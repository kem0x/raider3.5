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

// Function FortReplayTransport.FortReplayTransport_C.ResetFocusToPlayPauseIfNeeded
// (Public, BlueprintCallable, BlueprintEvent)

void UFortReplayTransport_C::ResetFocusToPlayPauseIfNeeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.ResetFocusToPlayPauseIfNeeded");

	UFortReplayTransport_C_ResetFocusToPlayPauseIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.SetButtonsAllowedFocus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFocusAllowed                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           focusAllowed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFortReplayTransport_C::SetButtonsAllowedFocus(bool bFocusAllowed, bool* focusAllowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.SetButtonsAllowedFocus");

	UFortReplayTransport_C_SetButtonsAllowedFocus_Params params;
	params.bFocusAllowed = bFocusAllowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (focusAllowed != nullptr)
		*focusAllowed = params.focusAllowed;
}


// Function FortReplayTransport.FortReplayTransport_C.FollowedPlayerChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerState*        NewFollowedPlayer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTransport_C::FollowedPlayerChanged(class AFortPlayerControllerSpectating* PlayerController, class AFortPlayerState* NewFollowedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.FollowedPlayerChanged");

	UFortReplayTransport_C_FollowedPlayerChanged_Params params;
	params.PlayerController = PlayerController;
	params.NewFollowedPlayer = NewFollowedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.CameraTypeChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESpectatorCameraType           CameraType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTransport_C::CameraTypeChanged(class AFortPlayerControllerSpectating* PlayerController, ESpectatorCameraType CameraType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.CameraTypeChanged");

	UFortReplayTransport_C_CameraTypeChanged_Params params;
	params.PlayerController = PlayerController;
	params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.SetupHUDEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UFortReplayTransport_C::SetupHUDEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.SetupHUDEvents");

	UFortReplayTransport_C_SetupHUDEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.Focus Menu
// (Private, BlueprintCallable, BlueprintEvent)

void UFortReplayTransport_C::Focus_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.Focus Menu");

	UFortReplayTransport_C_Focus_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.Unfocus Menu
// (Private, BlueprintCallable, BlueprintEvent)

void UFortReplayTransport_C::Unfocus_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.Unfocus Menu");

	UFortReplayTransport_C_Unfocus_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BindingsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UFortReplayTransport_C::BindingsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BindingsChanged");

	UFortReplayTransport_C_BindingsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.Format Playback Multiplier
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Multiplier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FormattedText                  (Parm, OutParm, ZeroConstructor)

void UFortReplayTransport_C::Format_Playback_Multiplier(float Multiplier, struct FString* FormattedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.Format Playback Multiplier");

	UFortReplayTransport_C_Format_Playback_Multiplier_Params params;
	params.Multiplier = Multiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FormattedText != nullptr)
		*FormattedText = params.FormattedText;
}


// Function FortReplayTransport.FortReplayTransport_C.SetReplayContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortReplayContext*      InReplayContext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTransport_C::SetReplayContext(class UFortReplayContext* InReplayContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.SetReplayContext");

	UFortReplayTransport_C_SetReplayContext_Params params;
	params.InReplayContext = InReplayContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__Previous_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__Previous_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__Previous_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__Previous_K2Node_ComponentBoundEvent_42_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_118_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_118_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_118_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_118_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_258_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_258_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_258_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_258_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_0_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_0_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_0_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__IconTextButtonReplay_0_K2Node_ComponentBoundEvent_302_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_1_K2Node_ComponentBoundEvent_380_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_1_K2Node_ComponentBoundEvent_380_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_1_K2Node_ComponentBoundEvent_380_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__IconTextButtonReplay_1_K2Node_ComponentBoundEvent_380_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_2_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_2_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_2_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__IconTextButtonReplay_2_K2Node_ComponentBoundEvent_543_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_3_K2Node_ComponentBoundEvent_574_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_3_K2Node_ComponentBoundEvent_574_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_3_K2Node_ComponentBoundEvent_574_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__IconTextButtonReplay_3_K2Node_ComponentBoundEvent_574_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__IconTextButtonReplay_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.PlaybackMultiplierChangedFromNative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMultiplier                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTransport_C::PlaybackMultiplierChangedFromNative(float NewMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.PlaybackMultiplierChangedFromNative");

	UFortReplayTransport_C_PlaybackMultiplierChangedFromNative_Params params;
	params.NewMultiplier = NewMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__PreviousPlayerButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__PreviousPlayerButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__PreviousPlayerButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__PreviousPlayerButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__NextPlayerButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__NextPlayerButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__NextPlayerButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__NextPlayerButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__CurrentCamera_K2Node_ComponentBoundEvent_283_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__CurrentCamera_K2Node_ComponentBoundEvent_283_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__CurrentCamera_K2Node_ComponentBoundEvent_283_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__CurrentCamera_K2Node_ComponentBoundEvent_283_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UFortReplayTransport_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.OnActivated");

	UFortReplayTransport_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UFortReplayTransport_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.OnDeactivated");

	UFortReplayTransport_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.PauseStateChangedFromNative
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bNewPauseState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTransport_C::PauseStateChangedFromNative(bool bNewPauseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.PauseStateChangedFromNative");

	UFortReplayTransport_C_PauseStateChangedFromNative_Params params;
	params.bNewPauseState = bNewPauseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.BndEvt__TimelineFocusMode_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortReplayTransport_C::BndEvt__TimelineFocusMode_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.BndEvt__TimelineFocusMode_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature");

	UFortReplayTransport_C_BndEvt__TimelineFocusMode_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortReplayTransport_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.Construct");

	UFortReplayTransport_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayTransport.FortReplayTransport_C.ExecuteUbergraph_FortReplayTransport
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayTransport_C::ExecuteUbergraph_FortReplayTransport(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayTransport.FortReplayTransport_C.ExecuteUbergraph_FortReplayTransport");

	UFortReplayTransport_C_ExecuteUbergraph_FortReplayTransport_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

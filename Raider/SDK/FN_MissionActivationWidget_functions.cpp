// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionActivationWidget.MissionActivationWidget_C.HandleIncreaseDifficultyLockoutFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleIncreaseDifficultyLockoutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.HandleIncreaseDifficultyLockoutFinished");

	UMissionActivationWidget_C_HandleIncreaseDifficultyLockoutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleMissionActivationLockoutFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleMissionActivationLockoutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.HandleMissionActivationLockoutFinished");

	UMissionActivationWidget_C_HandleMissionActivationLockoutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleAnimFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.HandleAnimFinished");

	UMissionActivationWidget_C_HandleAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLockedOut                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::UpdateButton(class UCommonButton* Button, bool bEnabled, bool bLockedOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.UpdateButton");

	UMissionActivationWidget_C_UpdateButton_Params params;
	params.Button = Button;
	params.bEnabled = bEnabled;
	params.bLockedOut = bLockedOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdateLockoutTimeRemaining
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::UpdateLockoutTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.UpdateLockoutTimeRemaining");

	UMissionActivationWidget_C_UpdateLockoutTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.StartNextState
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::StartNextState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.StartNextState");

	UMissionActivationWidget_C_StartNextState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.UnbindEvents");

	UMissionActivationWidget_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BindEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::BindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BindEvents");

	UMissionActivationWidget_C_BindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.UpdateObjectiveReadyTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::UpdateObjectiveReadyTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.UpdateObjectiveReadyTime");

	UMissionActivationWidget_C_UpdateObjectiveReadyTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.FocusOnAvailablePanelButton
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::FocusOnAvailablePanelButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.FocusOnAvailablePanelButton");

	UMissionActivationWidget_C_FocusOnAvailablePanelButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.SetBluGloRequirementHint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BluGloRequirement              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::SetBluGloRequirementHint(int BluGloRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.SetBluGloRequirementHint");

	UMissionActivationWidget_C_SetBluGloRequirementHint_Params params;
	params.BluGloRequirement = BluGloRequirement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.TogglePanelButtonInteractability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::TogglePanelButtonInteractability(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.TogglePanelButtonInteractability");

	UMissionActivationWidget_C_TogglePanelButtonInteractability_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionActivationWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.Construct");

	UMissionActivationWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionActivationWidget_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UMissionActivationWidget_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature");

	UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature");

	UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature");

	UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature");

	UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionActivationWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.Destruct");

	UMissionActivationWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UMissionActivationWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.OnActivated");

	UMissionActivationWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionActivationWidget_C::BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature");

	UMissionActivationWidget_C_BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMissionActivationWidget_C::BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature");

	UMissionActivationWidget_C_BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.PreConstruct");

	UMissionActivationWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleOnRecepientVoted
// (BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleOnRecepientVoted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.HandleOnRecepientVoted");

	UMissionActivationWidget_C_HandleOnRecepientVoted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.OnStateUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortMissionActivationWidgetState* ActiveState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortMissionActivationWidgetState* PreviousState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::OnStateUpdated(EFortMissionActivationWidgetState* ActiveState, EFortMissionActivationWidgetState* PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.OnStateUpdated");

	UMissionActivationWidget_C_OnStateUpdated_Params params;
	params.ActiveState = ActiveState;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.HandleVoteLockoutOccured
// (BlueprintCallable, BlueprintEvent)

void UMissionActivationWidget_C::HandleVoteLockoutOccured()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.HandleVoteLockoutOccured");

	UMissionActivationWidget_C_HandleVoteLockoutOccured_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionActivationWidget.MissionActivationWidget_C.ExecuteUbergraph_MissionActivationWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionActivationWidget_C::ExecuteUbergraph_MissionActivationWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionActivationWidget.MissionActivationWidget_C.ExecuteUbergraph_MissionActivationWidget");

	UMissionActivationWidget_C_ExecuteUbergraph_MissionActivationWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

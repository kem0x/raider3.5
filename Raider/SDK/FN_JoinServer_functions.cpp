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

// Function JoinServer.JoinServer_C.HandleLobbyConnectingToGame
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::HandleLobbyConnectingToGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleLobbyConnectingToGame");

	UJoinServer_C_HandleLobbyConnectingToGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowAbandoningProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowAbandoningProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowAbandoningProgress");

	UJoinServer_C_ShowAbandoningProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRetryRejoinWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Failure                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           AllowRetry                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinServer_C::ShowRetryRejoinWindow(const struct FText& Failure, bool AllowRetry)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowRetryRejoinWindow");

	UJoinServer_C_ShowRetryRejoinWindow_Params params;
	params.Failure = Failure;
	params.AllowRetry = AllowRetry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRetryRejoinSession
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowRetryRejoinSession()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowRetryRejoinSession");

	UJoinServer_C_ShowRetryRejoinSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRejoiningProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowRejoiningProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowRejoiningProgress");

	UJoinServer_C_ShowRejoiningProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HideRejoinWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AbandonSession                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinServer_C::HideRejoinWindow(bool AbandonSession)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HideRejoinWindow");

	UJoinServer_C_HideRejoinWindow_Params params;
	params.AbandonSession = AbandonSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowRejoinWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowRejoinWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowRejoinWindow");

	UJoinServer_C_ShowRejoinWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleGetMainMenuContent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UJoinServer_C::HandleGetMainMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleGetMainMenuContent");

	UJoinServer_C_HandleGetMainMenuContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JoinServer.JoinServer_C.ShowTutorialCanceled
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowTutorialCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowTutorialCanceled");

	UJoinServer_C_ShowTutorialCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.GetMatchmakingError
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EMatchmakingCompleteResult     MatchMakingError               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ErrorText                      (Parm, OutParm)

void UJoinServer_C::GetMatchmakingError(EMatchmakingCompleteResult MatchMakingError, struct FText* ErrorText)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.GetMatchmakingError");

	UJoinServer_C_GetMatchmakingError_Params params;
	params.MatchMakingError = MatchMakingError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorText != nullptr)
		*ErrorText = params.ErrorText;
}


// Function JoinServer.JoinServer_C.HandleLobbyTimeUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinServer_C::HandleLobbyTimeUpdated(int TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleLobbyTimeUpdated");

	UJoinServer_C_HandleLobbyTimeUpdated_Params params;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.SkipTutorial
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::SkipTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.SkipTutorial");

	UJoinServer_C_SkipTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.StartTutorialMatchmakingFlow
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::StartTutorialMatchmakingFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.StartTutorialMatchmakingFlow");

	UJoinServer_C_StartTutorialMatchmakingFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleEnterState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIState                   PreviousState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinServer_C::HandleEnterState(EFortUIState PreviousState)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleEnterState");

	UJoinServer_C_HandleEnterState_Params params;
	params.PreviousState = PreviousState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::HandleLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleLobbyDisconnected");

	UJoinServer_C_HandleLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleMatchmakingStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingState> OldState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMatchmakingState> NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinServer_C::HandleMatchmakingStateChange(TEnumAsByte<EMatchmakingState> OldState, TEnumAsByte<EMatchmakingState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleMatchmakingStateChange");

	UJoinServer_C_HandleMatchmakingStateChange_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleMatchmakingComplete
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMatchmakingCompleteResult     Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinServer_C::HandleMatchmakingComplete(EMatchmakingCompleteResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleMatchmakingComplete");

	UJoinServer_C_HandleMatchmakingComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UJoinServer_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.Initialize");

	UJoinServer_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinServer_C::DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF");

	UJoinServer_C_DialogResult_B65B7C6342A70AAA7E4C689EE8A624BF_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnFailure_B419884742513722D11D8AB4D90DE5E2
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::OnFailure_B419884742513722D11D8AB4D90DE5E2()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnFailure_B419884742513722D11D8AB4D90DE5E2");

	UJoinServer_C_OnFailure_B419884742513722D11D8AB4D90DE5E2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnSuccess_B419884742513722D11D8AB4D90DE5E2
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::OnSuccess_B419884742513722D11D8AB4D90DE5E2()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnSuccess_B419884742513722D11D8AB4D90DE5E2");

	UJoinServer_C_OnSuccess_B419884742513722D11D8AB4D90DE5E2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnFailure_C91A02504569664A4B1E259E5F57A79D
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::OnFailure_C91A02504569664A4B1E259E5F57A79D()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnFailure_C91A02504569664A4B1E259E5F57A79D");

	UJoinServer_C_OnFailure_C91A02504569664A4B1E259E5F57A79D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnSuccess_C91A02504569664A4B1E259E5F57A79D
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::OnSuccess_C91A02504569664A4B1E259E5F57A79D()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnSuccess_C91A02504569664A4B1E259E5F57A79D");

	UJoinServer_C_OnSuccess_C91A02504569664A4B1E259E5F57A79D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.RequestTutorialRetry
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::RequestTutorialRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.RequestTutorialRetry");

	UJoinServer_C_RequestTutorialRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ShowSkipTutorial
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::ShowSkipTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ShowSkipTutorial");

	UJoinServer_C_ShowSkipTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleClientEvent_RejoinStart
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UJoinServer_C::HandleClientEvent_RejoinStart(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleClientEvent_RejoinStart");

	UJoinServer_C_HandleClientEvent_RejoinStart_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleRequestRejoinRetry
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::HandleRequestRejoinRetry()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleRequestRejoinRetry");

	UJoinServer_C_HandleRequestRejoinRetry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleRequestAbandon
// (BlueprintCallable, BlueprintEvent)

void UJoinServer_C::HandleRequestAbandon()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleRequestAbandon");

	UJoinServer_C_HandleRequestAbandon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.HandleClientEvent_OnboardingStartMatchmaking
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UJoinServer_C::HandleClientEvent_OnboardingStartMatchmaking(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.HandleClientEvent_OnboardingStartMatchmaking");

	UJoinServer_C_HandleClientEvent_OnboardingStartMatchmaking_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJoinServer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.Construct");

	UJoinServer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinServer_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.OnEnterState");

	UJoinServer_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinServer_C::ExecuteUbergraph_JoinServer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer");

	UJoinServer_C_ExecuteUbergraph_JoinServer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

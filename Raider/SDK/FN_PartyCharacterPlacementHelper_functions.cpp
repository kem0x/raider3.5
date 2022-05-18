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

// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionAccept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnPartySuggestionAccept(int PlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionAccept");

	APartyCharacterPlacementHelper_C_OnPartySuggestionAccept_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortPartySuggestion    FortPartySuggestion            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APartyCharacterPlacementHelper_C::OnPartySuggestionChanged(int SlotIndex, struct FFortPartySuggestion* FortPartySuggestion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionChanged");

	APartyCharacterPlacementHelper_C_OnPartySuggestionChanged_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPartySuggestion != nullptr)
		*FortPartySuggestion = params.FortPartySuggestion;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnPartySuggestionRemoved(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionRemoved");

	APartyCharacterPlacementHelper_C_OnPartySuggestionRemoved_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionUpdated
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortPartySuggestion    FortPartySuggestion            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APartyCharacterPlacementHelper_C::OnPartySuggestionUpdated(int SlotIndex, struct FFortPartySuggestion* FortPartySuggestion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionUpdated");

	APartyCharacterPlacementHelper_C_OnPartySuggestionUpdated_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPartySuggestion != nullptr)
		*FortPartySuggestion = params.FortPartySuggestion;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionAdded
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortPartySuggestion    FortPartySuggestion            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APartyCharacterPlacementHelper_C::OnPartySuggestionAdded(int SlotIndex, struct FFortPartySuggestion* FortPartySuggestion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionAdded");

	APartyCharacterPlacementHelper_C_OnPartySuggestionAdded_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FortPartySuggestion != nullptr)
		*FortPartySuggestion = params.FortPartySuggestion;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Refresh Lights
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     Team_Info                      (BlueprintVisible, BlueprintReadOnly, Parm)

void APartyCharacterPlacementHelper_C::Refresh_Lights(const struct FFortTeamMemberInfo& Team_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Refresh Lights");

	APartyCharacterPlacementHelper_C_Refresh_Lights_Params params;
	params.Team_Info = Team_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartyDataChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     MemberInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APartyCharacterPlacementHelper_C::OnPartyDataChanged(struct FFortTeamMemberInfo* MemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartyDataChanged");

	APartyCharacterPlacementHelper_C_OnPartyDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberInfo != nullptr)
		*MemberInfo = params.MemberInfo;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.CompletedQuestPrerequisites
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCompleted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::CompletedQuestPrerequisites(bool* bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.CompletedQuestPrerequisites");

	APartyCharacterPlacementHelper_C_CompletedQuestPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCompleted != nullptr)
		*bCompleted = params.bCompleted;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.IsInLobby
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInLobby                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::IsInLobby(bool* IsInLobby)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.IsInLobby");

	APartyCharacterPlacementHelper_C_IsInLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsInLobby != nullptr)
		*IsInLobby = params.IsInLobby;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.PlayLobbyAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PartyMemberIndex               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::PlayLobbyAnimation(int PartyMemberIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.PlayLobbyAnimation");

	APartyCharacterPlacementHelper_C_PlayLobbyAnimation_Params params;
	params.PartyMemberIndex = PartyMemberIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::OnLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyDisconnected");

	APartyCharacterPlacementHelper_C_OnLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.RefreshWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::RefreshWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.RefreshWidgets");

	APartyCharacterPlacementHelper_C_RefreshWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::InitializeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeWidgets");

	APartyCharacterPlacementHelper_C_InitializeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerUnhovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnhovered");

	APartyCharacterPlacementHelper_C_OnLobbyPlayerUnhovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (BlueprintVisible, BlueprintReadOnly, Parm)

void APartyCharacterPlacementHelper_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberStateChanged");

	APartyCharacterPlacementHelper_C_OnTeamMemberStateChanged_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TeamMemberRemovedInt           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnTeamMemberRemoved(int TeamMemberRemovedInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberRemoved");

	APartyCharacterPlacementHelper_C_OnTeamMemberRemoved_Params params;
	params.TeamMemberRemovedInt = TeamMemberRemovedInt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (BlueprintVisible, BlueprintReadOnly, Parm)

void APartyCharacterPlacementHelper_C::OnTeamMemberAdded(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberAdded");

	APartyCharacterPlacementHelper_C_OnTeamMemberAdded_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnFrontEndCameraChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                NewCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                OldCamera                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnFrontEndCameraChanged");

	APartyCharacterPlacementHelper_C_OnFrontEndCameraChanged_Params params;
	params.NewCamera = NewCamera;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyStarted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::OnLobbyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyStarted");

	APartyCharacterPlacementHelper_C_OnLobbyStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializePadUI
// (Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::InitializePadUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializePadUI");

	APartyCharacterPlacementHelper_C_InitializePadUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Initialize");

	APartyCharacterPlacementHelper_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeContextEvents");

	APartyCharacterPlacementHelper_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnselected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerUnselected(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnselected");

	APartyCharacterPlacementHelper_C_OnLobbyPlayerUnselected_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerSelected(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerSelected");

	APartyCharacterPlacementHelper_C_OnLobbyPlayerSelected_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::OnLobbyPlayerHovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerHovered");

	APartyCharacterPlacementHelper_C_OnLobbyPlayerHovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.UserConstructionScript");

	APartyCharacterPlacementHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APartyCharacterPlacementHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ReceiveBeginPlay");

	APartyCharacterPlacementHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabClosed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APartyCharacterPlacementHelper_C::HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabClosed");

	APartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabClosed_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabSelected
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void APartyCharacterPlacementHelper_C::HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabSelected");

	APartyCharacterPlacementHelper_C_HandleClientEvent_StoreTabSelected_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnHotfixApplied
// (BlueprintCallable, BlueprintEvent)

void APartyCharacterPlacementHelper_C::OnHotfixApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnHotfixApplied");

	APartyCharacterPlacementHelper_C_OnHotfixApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ExecuteUbergraph_PartyCharacterPlacementHelper
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::ExecuteUbergraph_PartyCharacterPlacementHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ExecuteUbergraph_PartyCharacterPlacementHelper");

	APartyCharacterPlacementHelper_C_ExecuteUbergraph_PartyCharacterPlacementHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Debug_OnFriendLFGRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyCharacterPlacementHelper_C::Debug_OnFriendLFGRequest__DelegateSignature(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Debug_OnFriendLFGRequest__DelegateSignature");

	APartyCharacterPlacementHelper_C_Debug_OnFriendLFGRequest__DelegateSignature_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

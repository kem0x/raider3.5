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

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     ChangedTeamMemberInfo          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaLobbyPlayerPanelDetails_C::OnTeamMemberStateChanged(const struct FFortTeamMemberInfo& ChangedTeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnTeamMemberStateChanged");

	UAthenaLobbyPlayerPanelDetails_C_OnTeamMemberStateChanged_Params params;
	params.ChangedTeamMemberInfo = ChangedTeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBattlePass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::RefreshBattlePass()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBattlePass");

	UAthenaLobbyPlayerPanelDetails_C_RefreshBattlePass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBanner
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::RefreshBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBanner");

	UAthenaLobbyPlayerPanelDetails_C_RefreshBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.SetTeamMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaLobbyPlayerPanelDetails_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.SetTeamMemberInfo");

	UAthenaLobbyPlayerPanelDetails_C_SetTeamMemberInfo_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.InitializeContextEvents");

	UAthenaLobbyPlayerPanelDetails_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnActiveFriendsCountUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ActiveFriendsCount             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobbyPlayerPanelDetails_C::OnActiveFriendsCountUpdated(int ActiveFriendsCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnActiveFriendsCountUpdated");

	UAthenaLobbyPlayerPanelDetails_C_OnActiveFriendsCountUpdated_Params params;
	params.ActiveFriendsCount = ActiveFriendsCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnPartyInvitesCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InvitesCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobbyPlayerPanelDetails_C::OnPartyInvitesCountChanged(int InvitesCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnPartyInvitesCountChanged");

	UAthenaLobbyPlayerPanelDetails_C_OnPartyInvitesCountChanged_Params params;
	params.InvitesCount = InvitesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Initialize");

	UAthenaLobbyPlayerPanelDetails_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.IsInvitationPending
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsInvitationPending           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobbyPlayerPanelDetails_C::IsInvitationPending(bool* bIsInvitationPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.IsInvitationPending");

	UAthenaLobbyPlayerPanelDetails_C_IsInvitationPending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsInvitationPending != nullptr)
		*bIsInvitationPending = params.bIsInvitationPending;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPendingInvite
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::RefreshPendingInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPendingInvite");

	UAthenaLobbyPlayerPanelDetails_C_RefreshPendingInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPlayerName
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::RefreshPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPlayerName");

	UAthenaLobbyPlayerPanelDetails_C_RefreshPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobbyPlayerPanelDetails_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Refresh");

	UAthenaLobbyPlayerPanelDetails_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobbyPlayerPanelDetails_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.PreConstruct");

	UAthenaLobbyPlayerPanelDetails_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.ExecuteUbergraph_AthenaLobbyPlayerPanelDetails
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobbyPlayerPanelDetails_C::ExecuteUbergraph_AthenaLobbyPlayerPanelDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.ExecuteUbergraph_AthenaLobbyPlayerPanelDetails");

	UAthenaLobbyPlayerPanelDetails_C_ExecuteUbergraph_AthenaLobbyPlayerPanelDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

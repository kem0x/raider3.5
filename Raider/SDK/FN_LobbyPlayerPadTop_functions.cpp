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

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshChatDisabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadTop_C::RefreshChatDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshChatDisabled");

	ULobbyPlayerPadTop_C_RefreshChatDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaReadyTypeChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        MemberId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// EAthenaPartyMemberReadyType    ReadyType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadTop_C::OnAthenaReadyTypeChanged(EAthenaPartyMemberReadyType ReadyType, struct FUniqueNetIdRepl* MemberId)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaReadyTypeChanged");

	ULobbyPlayerPadTop_C_OnAthenaReadyTypeChanged_Params params;
	params.ReadyType = ReadyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberId != nullptr)
		*MemberId = params.MemberId;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaTimeSpentInMatchChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        MemberId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   Minutes                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULobbyPlayerPadTop_C::OnAthenaTimeSpentInMatchChanged(struct FUniqueNetIdRepl* MemberId, struct FText* Minutes, struct FText* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaTimeSpentInMatchChanged");

	ULobbyPlayerPadTop_C_OnAthenaTimeSpentInMatchChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberId != nullptr)
		*MemberId = params.MemberId;
	if (Minutes != nullptr)
		*Minutes = params.Minutes;
	if (Seconds != nullptr)
		*Seconds = params.Seconds;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaNumAliveChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        MemberId                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            NumAlive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadTop_C::OnAthenaNumAliveChanged(int NumAlive, struct FUniqueNetIdRepl* MemberId)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaNumAliveChanged");

	ULobbyPlayerPadTop_C_OnAthenaNumAliveChanged_Params params;
	params.NumAlive = NumAlive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberId != nullptr)
		*MemberId = params.MemberId;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadTop_C::UpdateMicIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.UpdateMicIcon");

	ULobbyPlayerPadTop_C_UpdateMicIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerStoppedTalking
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadTop_C::HandlePlayerStoppedTalking()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerStoppedTalking");

	ULobbyPlayerPadTop_C_HandlePlayerStoppedTalking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerMutingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadTop_C::HandlePlayerMutingChanged(const struct FUniqueNetIdRepl& UniqueId, bool IsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerMutingChanged");

	ULobbyPlayerPadTop_C_HandlePlayerMutingChanged_Params params;
	params.UniqueId = UniqueId;
	params.IsTalking = IsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerTalkingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadTop_C::HandlePlayerTalkingChanged(const struct FUniqueNetIdRepl& UniqueId, bool IsTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.HandlePlayerTalkingChanged");

	ULobbyPlayerPadTop_C_HandlePlayerTalkingChanged_Params params;
	params.UniqueId = UniqueId;
	params.IsTalking = IsTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshAthenaReadyState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        MemberId                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ULobbyPlayerPadTop_C::RefreshAthenaReadyState(const struct FUniqueNetIdRepl& MemberId)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshAthenaReadyState");

	ULobbyPlayerPadTop_C_RefreshAthenaReadyState_Params params;
	params.MemberId = MemberId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadTop_C::OnLobbyPlayerUnhovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerUnhovered");

	ULobbyPlayerPadTop_C_OnLobbyPlayerUnhovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadTop_C::Initialize(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Initialize");

	ULobbyPlayerPadTop_C_Initialize_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadTop_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.InitializeContextEvents");

	ULobbyPlayerPadTop_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadTop_C::OnLobbyPlayerHovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerHovered");

	ULobbyPlayerPadTop_C_OnLobbyPlayerHovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.SetTeamMemberInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ULobbyPlayerPadTop_C::SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.SetTeamMemberInfo");

	ULobbyPlayerPadTop_C_SetTeamMemberInfo_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadTop_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Refresh");

	ULobbyPlayerPadTop_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshPlayerName
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadTop_C::RefreshPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshPlayerName");

	ULobbyPlayerPadTop_C_RefreshPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadTop_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.PreConstruct");

	ULobbyPlayerPadTop_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobbyPlayerPadTop_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Construct");

	ULobbyPlayerPadTop_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyStarted
// (BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadTop_C::OnLobbyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyStarted");

	ULobbyPlayerPadTop_C_OnLobbyStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnUpdateLobbyPlayerPadTop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl        PlayerNetId                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bIsReady                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadTop_C::OnUpdateLobbyPlayerPadTop(const struct FUniqueNetIdRepl& PlayerNetId, bool bIsReady)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnUpdateLobbyPlayerPadTop");

	ULobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop_Params params;
	params.PlayerNetId = PlayerNetId;
	params.bIsReady = bIsReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyDisconnected
// (BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadTop_C::OnLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyDisconnected");

	ULobbyPlayerPadTop_C_OnLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.ExecuteUbergraph_LobbyPlayerPadTop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadTop_C::ExecuteUbergraph_LobbyPlayerPadTop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.ExecuteUbergraph_LobbyPlayerPadTop");

	ULobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

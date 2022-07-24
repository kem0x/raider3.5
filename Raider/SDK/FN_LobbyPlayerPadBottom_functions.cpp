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

// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.UpdateHotfixableBonusEventTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadBottom_C::UpdateHotfixableBonusEventTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.UpdateHotfixableBonusEventTitle");

	ULobbyPlayerPadBottom_C_UpdateHotfixableBonusEventTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.GetBonusXPValue
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULobbyPlayerPadBottom_C::GetBonusXPValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.GetBonusXPValue");

	ULobbyPlayerPadBottom_C_GetBonusXPValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.UpdateIsFriendAndLocal
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadBottom_C::UpdateIsFriendAndLocal()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.UpdateIsFriendAndLocal");

	ULobbyPlayerPadBottom_C_UpdateIsFriendAndLocal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.GetBattlePassInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            BattlePassSelfXpBoost          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            BattlePassFriendXpBoost        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasBattlePass                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadBottom_C::GetBattlePassInfo(int* BattlePassSelfXpBoost, int* BattlePassFriendXpBoost, bool* HasBattlePass)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.GetBattlePassInfo");

	ULobbyPlayerPadBottom_C_GetBattlePassInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BattlePassSelfXpBoost != nullptr)
		*BattlePassSelfXpBoost = params.BattlePassSelfXpBoost;
	if (BattlePassFriendXpBoost != nullptr)
		*BattlePassFriendXpBoost = params.BattlePassFriendXpBoost;
	if (HasBattlePass != nullptr)
		*HasBattlePass = params.HasBattlePass;
}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULobbyPlayerPadBottom_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Refresh");

	ULobbyPlayerPadBottom_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Set Team Member Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     New_Team_Member_Info           (BlueprintVisible, BlueprintReadOnly, Parm)

void ULobbyPlayerPadBottom_C::Set_Team_Member_Info(const struct FFortTeamMemberInfo& New_Team_Member_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Set Team Member Info");

	ULobbyPlayerPadBottom_C_Set_Team_Member_Info_Params params;
	params.New_Team_Member_Info = New_Team_Member_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobbyPlayerPadBottom_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Construct");

	ULobbyPlayerPadBottom_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULobbyPlayerPadBottom_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Destruct");

	ULobbyPlayerPadBottom_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.ExecuteUbergraph_LobbyPlayerPadBottom
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULobbyPlayerPadBottom_C::ExecuteUbergraph_LobbyPlayerPadBottom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.ExecuteUbergraph_LobbyPlayerPadBottom");

	ULobbyPlayerPadBottom_C_ExecuteUbergraph_LobbyPlayerPadBottom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

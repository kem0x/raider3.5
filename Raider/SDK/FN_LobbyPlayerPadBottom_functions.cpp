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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

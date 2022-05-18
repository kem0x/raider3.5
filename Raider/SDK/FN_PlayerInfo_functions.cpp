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

// Function PlayerInfo.PlayerInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.Construct");

	UPlayerInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfo.PlayerInfo_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo*    NewInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerInfo_C::OnPlayerInfoChanged(struct FFortTeamMemberInfo* NewInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.OnPlayerInfoChanged");

	UPlayerInfo_C_OnPlayerInfoChanged_Params params;
	params.NewInfo = NewInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerInfo_C::ExecuteUbergraph_PlayerInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerInfo.PlayerInfo_C.ExecuteUbergraph_PlayerInfo");

	UPlayerInfo_C_ExecuteUbergraph_PlayerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

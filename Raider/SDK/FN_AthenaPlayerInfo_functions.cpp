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

// Function AthenaPlayerInfo.AthenaPlayerInfo_C.UpdateLocalPlayerInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     Player_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayerInfo_C::UpdateLocalPlayerInfo(struct FFortTeamMemberInfo* Player_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerInfo.AthenaPlayerInfo_C.UpdateLocalPlayerInfo");

	UAthenaPlayerInfo_C_UpdateLocalPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Info != nullptr)
		*Player_Info = params.Player_Info;
}


// Function AthenaPlayerInfo.AthenaPlayerInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPlayerInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerInfo.AthenaPlayerInfo_C.Construct");

	UAthenaPlayerInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerInfo.AthenaPlayerInfo_C.HandlePlayerStateChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     PlayerInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayerInfo_C::HandlePlayerStateChanged(const struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerInfo.AthenaPlayerInfo_C.HandlePlayerStateChanged");

	UAthenaPlayerInfo_C_HandlePlayerStateChanged_Params params;
	params.PlayerInfo = PlayerInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerInfo.AthenaPlayerInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaPlayerInfo_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerInfo.AthenaPlayerInfo_C.Destruct");

	UAthenaPlayerInfo_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaPlayerInfo.AthenaPlayerInfo_C.ExecuteUbergraph_AthenaPlayerInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaPlayerInfo_C::ExecuteUbergraph_AthenaPlayerInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaPlayerInfo.AthenaPlayerInfo_C.ExecuteUbergraph_AthenaPlayerInfo");

	UAthenaPlayerInfo_C_ExecuteUbergraph_AthenaPlayerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

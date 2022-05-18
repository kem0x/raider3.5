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

// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.DBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bDBNO                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberIndicator_C::DBNOStateChanged(bool* bDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.DBNOStateChanged");

	UAthenaTeamMemberIndicator_C_DBNOStateChanged_Params params;
	params.bDBNO = bDBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.TalkingStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bTalking                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberIndicator_C::TalkingStateChanged(bool* bTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.TalkingStateChanged");

	UAthenaTeamMemberIndicator_C_TalkingStateChanged_Params params;
	params.bTalking = bTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.BeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bReviving                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberIndicator_C::BeingRevivedStateChanged(bool* bReviving)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.BeingRevivedStateChanged");

	UAthenaTeamMemberIndicator_C_BeingRevivedStateChanged_Params params;
	params.bReviving = bReviving;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.PlayerNameChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString*                PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UAthenaTeamMemberIndicator_C::PlayerNameChanged(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.PlayerNameChanged");

	UAthenaTeamMemberIndicator_C_PlayerNameChanged_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaTeamMemberIndicator_C::ExecuteUbergraph_AthenaTeamMemberIndicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaTeamMemberIndicator.AthenaTeamMemberIndicator_C.ExecuteUbergraph_AthenaTeamMemberIndicator");

	UAthenaTeamMemberIndicator_C_ExecuteUbergraph_AthenaTeamMemberIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

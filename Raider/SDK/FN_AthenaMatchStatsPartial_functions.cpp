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

// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnTeamStatsAvailable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatsPartial_C::OnTeamStatsAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnTeamStatsAvailable");

	UAthenaMatchStatsPartial_C_OnTeamStatsAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnStatsAvailable
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatsPartial_C::OnStatsAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnStatsAvailable");

	UAthenaMatchStatsPartial_C_OnStatsAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnRewardsAvailable
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatsPartial_C::OnRewardsAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnRewardsAvailable");

	UAthenaMatchStatsPartial_C_OnRewardsAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.SetMatchReport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerMatchReport* Report                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchStatsPartial_C::SetMatchReport(class UAthenaPlayerMatchReport* Report)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.SetMatchReport");

	UAthenaMatchStatsPartial_C_SetMatchReport_Params params;
	params.Report = Report;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.Play Xp Rewards
// (BlueprintCallable, BlueprintEvent)

void UAthenaMatchStatsPartial_C::Play_Xp_Rewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.Play Xp Rewards");

	UAthenaMatchStatsPartial_C_Play_Xp_Rewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.ExecuteUbergraph_AthenaMatchStatsPartial
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaMatchStatsPartial_C::ExecuteUbergraph_AthenaMatchStatsPartial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.ExecuteUbergraph_AthenaMatchStatsPartial");

	UAthenaMatchStatsPartial_C_ExecuteUbergraph_AthenaMatchStatsPartial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Update Contribution LERP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LERP_Factor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerZoneTeamScoreContributionWidget_C::Update_Contribution_LERP(float LERP_Factor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Update Contribution LERP");

	UPlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP_Params params;
	params.LERP_Factor = LERP_Factor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerZoneTeamScoreContributionWidget_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Initialize");

	UPlayerZoneTeamScoreContributionWidget_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerZoneTeamScoreContributionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Construct");

	UPlayerZoneTeamScoreContributionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerZoneTeamScoreContributionWidget_C::ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget");

	UPlayerZoneTeamScoreContributionWidget_C_ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

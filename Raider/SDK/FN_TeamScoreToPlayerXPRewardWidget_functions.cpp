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

// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIXpInfo           XPInfo                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UTeamScoreToPlayerXPRewardWidget_C::Initialize(const struct FFortUIXpInfo& XPInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Initialize");

	UTeamScoreToPlayerXPRewardWidget_C_Initialize_Params params;
	params.XPInfo = XPInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Update XP LERP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          LERP_Factor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamScoreToPlayerXPRewardWidget_C::Update_XP_LERP(float LERP_Factor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Update XP LERP");

	UTeamScoreToPlayerXPRewardWidget_C_Update_XP_LERP_Params params;
	params.LERP_Factor = LERP_Factor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.OnLevelChanged
// (BlueprintCallable, BlueprintEvent)

void UTeamScoreToPlayerXPRewardWidget_C::OnLevelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.OnLevelChanged");

	UTeamScoreToPlayerXPRewardWidget_C_OnLevelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamScoreToPlayerXPRewardWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.Construct");

	UTeamScoreToPlayerXPRewardWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamScoreToPlayerXPRewardWidget_C::ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamScoreToPlayerXPRewardWidget.TeamScoreToPlayerXPRewardWidget_C.ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget");

	UTeamScoreToPlayerXPRewardWidget_C_ExecuteUbergraph_TeamScoreToPlayerXPRewardWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

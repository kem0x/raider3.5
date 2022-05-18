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

// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.UpdateStyling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelPaidRewardsWidget_C::UpdateStyling()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.UpdateStyling");

	UAthenaSeasonLevelPaidRewardsWidget_C_UpdateStyling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnSetup
// (Event, Public, BlueprintEvent)

void UAthenaSeasonLevelPaidRewardsWidget_C::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnSetup");

	UAthenaSeasonLevelPaidRewardsWidget_C_OnSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnLockedStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          FreeUnlocked                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PaidUnlocked                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelPaidRewardsWidget_C::OnLockedStatusChanged(bool* FreeUnlocked, bool* PaidUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnLockedStatusChanged");

	UAthenaSeasonLevelPaidRewardsWidget_C_OnLockedStatusChanged_Params params;
	params.FreeUnlocked = FreeUnlocked;
	params.PaidUnlocked = PaidUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnNavigateTo
// (Event, Public, BlueprintEvent)

void UAthenaSeasonLevelPaidRewardsWidget_C::OnNavigateTo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.OnNavigateTo");

	UAthenaSeasonLevelPaidRewardsWidget_C_OnNavigateTo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.PlayIntro
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelPaidRewardsWidget_C::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.PlayIntro");

	UAthenaSeasonLevelPaidRewardsWidget_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelPaidRewardsWidget_C::ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelPaidRewardsWidget.AthenaSeasonLevelPaidRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget");

	UAthenaSeasonLevelPaidRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelPaidRewardsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

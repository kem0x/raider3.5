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

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.UpdateStyling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelFreeRewardsWidget_C::UpdateStyling()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.UpdateStyling");

	UAthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.OnSetup
// (Event, Public, BlueprintEvent)

void UAthenaSeasonLevelFreeRewardsWidget_C::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.OnSetup");

	UAthenaSeasonLevelFreeRewardsWidget_C_OnSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.OnLockedStatusChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          FreeUnlocked                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          PaidUnlocked                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelFreeRewardsWidget_C::OnLockedStatusChanged(bool* FreeUnlocked, bool* PaidUnlocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.OnLockedStatusChanged");

	UAthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged_Params params;
	params.FreeUnlocked = FreeUnlocked;
	params.PaidUnlocked = PaidUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.PlayIntro
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UAthenaSeasonLevelFreeRewardsWidget_C::PlayIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.PlayIntro");

	UAthenaSeasonLevelFreeRewardsWidget_C_PlayIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonLevelFreeRewardsWidget_C::ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget");

	UAthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

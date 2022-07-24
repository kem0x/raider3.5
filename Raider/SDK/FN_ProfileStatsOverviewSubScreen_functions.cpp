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

// Function ProfileStatsOverviewSubScreen.ProfileStatsOverviewSubScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProfileStatsOverviewSubScreen_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsOverviewSubScreen.ProfileStatsOverviewSubScreen_C.HandleBack");

	UProfileStatsOverviewSubScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ProfileStatsOverviewSubScreen.ProfileStatsOverviewSubScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProfileStatsOverviewSubScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsOverviewSubScreen.ProfileStatsOverviewSubScreen_C.Construct");

	UProfileStatsOverviewSubScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfileStatsOverviewSubScreen.ProfileStatsOverviewSubScreen_C.ExecuteUbergraph_ProfileStatsOverviewSubScreen
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProfileStatsOverviewSubScreen_C::ExecuteUbergraph_ProfileStatsOverviewSubScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsOverviewSubScreen.ProfileStatsOverviewSubScreen_C.ExecuteUbergraph_ProfileStatsOverviewSubScreen");

	UProfileStatsOverviewSubScreen_C_ExecuteUbergraph_ProfileStatsOverviewSubScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

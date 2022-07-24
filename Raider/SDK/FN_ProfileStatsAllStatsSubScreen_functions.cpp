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

// Function ProfileStatsAllStatsSubScreen.ProfileStatsAllStatsSubScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passthrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UProfileStatsAllStatsSubScreen_C::HandleBack(bool* Passthrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsAllStatsSubScreen.ProfileStatsAllStatsSubScreen_C.HandleBack");

	UProfileStatsAllStatsSubScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passthrough != nullptr)
		*Passthrough = params.Passthrough;
}


// Function ProfileStatsAllStatsSubScreen.ProfileStatsAllStatsSubScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProfileStatsAllStatsSubScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsAllStatsSubScreen.ProfileStatsAllStatsSubScreen_C.Construct");

	UProfileStatsAllStatsSubScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProfileStatsAllStatsSubScreen.ProfileStatsAllStatsSubScreen_C.ExecuteUbergraph_ProfileStatsAllStatsSubScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UProfileStatsAllStatsSubScreen_C::ExecuteUbergraph_ProfileStatsAllStatsSubScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProfileStatsAllStatsSubScreen.ProfileStatsAllStatsSubScreen_C.ExecuteUbergraph_ProfileStatsAllStatsSubScreen");

	UProfileStatsAllStatsSubScreen_C_ExecuteUbergraph_ProfileStatsAllStatsSubScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

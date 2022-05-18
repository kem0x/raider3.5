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

// Function MissionOverviewObjective.MissionOverviewObjective_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionOverviewObjective_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionOverviewObjective.MissionOverviewObjective_C.Construct");

	UMissionOverviewObjective_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionOverviewObjective.MissionOverviewObjective_C.ExecuteUbergraph_MissionOverviewObjective
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionOverviewObjective_C::ExecuteUbergraph_MissionOverviewObjective(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionOverviewObjective.MissionOverviewObjective_C.ExecuteUbergraph_MissionOverviewObjective");

	UMissionOverviewObjective_C_ExecuteUbergraph_MissionOverviewObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

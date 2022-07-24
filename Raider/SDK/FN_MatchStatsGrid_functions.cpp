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

// Function MatchStatsGrid.MatchStatsGrid_C.SetStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMatchStatView*    AthenaMatchStats               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMatchStatsGrid_C::SetStats(class UAthenaMatchStatView* AthenaMatchStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function MatchStatsGrid.MatchStatsGrid_C.SetStats");

	UMatchStatsGrid_C_SetStats_Params params;
	params.AthenaMatchStats = AthenaMatchStats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

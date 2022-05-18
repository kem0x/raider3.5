#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MatchStatsGrid.MatchStatsGrid_C.SetStats
struct UMatchStatsGrid_C_SetStats_Params
{
	struct FAthenaMatchStats                           AthenaMatchStats;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MatchStatsGrid.MatchStatsGrid_C.SetStat (Integer)
struct UMatchStatsGrid_C_SetStat__Integer__Params
{
	class UCommonNumericTextBlock*                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MatchStatsGrid.MatchStatsGrid_C.SetStat (Float)
struct UMatchStatsGrid_C_SetStat__Float__Params
{
	class UCommonNumericTextBlock*                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

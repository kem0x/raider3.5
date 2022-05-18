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

// Function AthenaStatsRow.AthenaStatsRow_C.SetStatValueAsText
struct UAthenaStatsRow_C_SetStatValueAsText_Params
{
	struct FText                                       StatValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaStatsRow.AthenaStatsRow_C.PreConstruct
struct UAthenaStatsRow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaStatsRow.AthenaStatsRow_C.ExecuteUbergraph_AthenaStatsRow
struct UAthenaStatsRow_C_ExecuteUbergraph_AthenaStatsRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

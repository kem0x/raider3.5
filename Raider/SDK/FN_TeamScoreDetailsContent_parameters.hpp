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

// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.TrimUnusedRows
struct UTeamScoreDetailsContent_C_TrimUnusedRows_Params
{
};

// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.SetRowData
struct UTeamScoreDetailsContent_C_SetRowData_Params
{
	int                                                RowIdx;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.Construct
struct UTeamScoreDetailsContent_C_Construct_Params
{
};

// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.OnScoreReportChanged
struct UTeamScoreDetailsContent_C_OnScoreReportChanged_Params
{
};

// Function TeamScoreDetailsContent.TeamScoreDetailsContent_C.ExecuteUbergraph_TeamScoreDetailsContent
struct UTeamScoreDetailsContent_C_ExecuteUbergraph_TeamScoreDetailsContent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

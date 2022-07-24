#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.UpdatePlacement
struct UAthenaTeamScoreWidget_C_UpdatePlacement_Params
{
	int                                                Place;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.UpdateScore
struct UAthenaTeamScoreWidget_C_UpdateScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.OnScoreChanged
struct UAthenaTeamScoreWidget_C_OnScoreChanged_Params
{
	int*                                               Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.OnPlacementChanged
struct UAthenaTeamScoreWidget_C_OnPlacementChanged_Params
{
	int*                                               Placement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.Construct
struct UAthenaTeamScoreWidget_C_Construct_Params
{
};

// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.PreConstruct
struct UAthenaTeamScoreWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaTeamScoreWidget.AthenaTeamScoreWidget_C.ExecuteUbergraph_AthenaTeamScoreWidget
struct UAthenaTeamScoreWidget_C_ExecuteUbergraph_AthenaTeamScoreWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

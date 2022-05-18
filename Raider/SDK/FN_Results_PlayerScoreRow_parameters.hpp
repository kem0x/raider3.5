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

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeHomeBasePower
struct UResults_PlayerScoreRow_C_InitializeHomeBasePower_Params
{
	struct FUniqueNetIdRepl                            PlayerID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializePlayerName
struct UResults_PlayerScoreRow_C_InitializePlayerName_Params
{
	class UFortUIScoreReport*                          ScoreReport;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreReportReferece;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeScores
struct UResults_PlayerScoreRow_C_InitializeScores_Params
{
	class UFortUIScoreReport*                          InScoreReport;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InScoreReportIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.InitializeBackground
struct UResults_PlayerScoreRow_C_InitializeBackground_Params
{
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Initialize
struct UResults_PlayerScoreRow_C_Initialize_Params
{
	class UFortUIScoreReport*                          ScoreReport;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreReportIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.Manual Pre Construct
struct UResults_PlayerScoreRow_C_Manual_Pre_Construct_Params
{
	bool                                               bIsDesignTime;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.PreConstruct
struct UResults_PlayerScoreRow_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_PlayerScoreRow.Results_PlayerScoreRow_C.ExecuteUbergraph_Results_PlayerScoreRow
struct UResults_PlayerScoreRow_C_ExecuteUbergraph_Results_PlayerScoreRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

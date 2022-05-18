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

// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.UpdateBackground
struct UResults_TeamSubtotalScore_C_UpdateBackground_Params
{
};

// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.SetScore
struct UResults_TeamSubtotalScore_C_SetScore_Params
{
	int                                                Score;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.PreConstruct
struct UResults_TeamSubtotalScore_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.Construct
struct UResults_TeamSubtotalScore_C_Construct_Params
{
};

// Function Results_TeamSubtotalScore.Results_TeamSubtotalScore_C.ExecuteUbergraph_Results_TeamSubtotalScore
struct UResults_TeamSubtotalScore_C_ExecuteUbergraph_Results_TeamSubtotalScore_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

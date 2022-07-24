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

// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetTotalScore
struct UScoreBadgeProviderMission_C_GetTotalScore_Params
{
	EStatCategory                                      ScoreCategory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreBadgeProviderMission.ScoreBadgeProviderMission_C.GetScoreBadgeInfos
struct UScoreBadgeProviderMission_C_GetScoreBadgeInfos_Params
{
	EStatCategory                                      ScoreCategory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FCollectionMissionBadgeDisplayInfo>  BadgeInfos;                                               // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

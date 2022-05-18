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

// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnTeamStatsAvailable
struct UAthenaMatchStatsPartial_C_OnTeamStatsAvailable_Params
{
};

// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnStatsAvailable
struct UAthenaMatchStatsPartial_C_OnStatsAvailable_Params
{
};

// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.OnRewardsAvailable
struct UAthenaMatchStatsPartial_C_OnRewardsAvailable_Params
{
};

// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.SetMatchReport
struct UAthenaMatchStatsPartial_C_SetMatchReport_Params
{
	class UAthenaPlayerMatchReport*                    Report;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.Play Xp Rewards
struct UAthenaMatchStatsPartial_C_Play_Xp_Rewards_Params
{
};

// Function AthenaMatchStatsPartial.AthenaMatchStatsPartial_C.ExecuteUbergraph_AthenaMatchStatsPartial
struct UAthenaMatchStatsPartial_C_ExecuteUbergraph_AthenaMatchStatsPartial_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

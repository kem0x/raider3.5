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

// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.GetRewardToShow
struct UAthenaChallengeTreeEntry_C_GetRewardToShow_Params
{
	class UFortItem*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateReward
struct UAthenaChallengeTreeEntry_C_UpdateReward_Params
{
};

// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateBundleData
struct UAthenaChallengeTreeEntry_C_UpdateBundleData_Params
{
	class UFortChallengeBundleInfo*                    BundleInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateBundleStyle
struct UAthenaChallengeTreeEntry_C_UpdateBundleStyle_Params
{
	class UFortChallengeBundleInfo*                    BundleInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.UpdateHeaderCategoryStyle
struct UAthenaChallengeTreeEntry_C_UpdateHeaderCategoryStyle_Params
{
	class UFortChallengeBundleCategoryInfo*            CategoryInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.SetupAsChallengeBundleSchedule
struct UAthenaChallengeTreeEntry_C_SetupAsChallengeBundleSchedule_Params
{
	class UFortChallengeBundleCategoryInfo**           Schedule;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.SetupAsChallengeBundle
struct UAthenaChallengeTreeEntry_C_SetupAsChallengeBundle_Params
{
	class UFortChallengeBundleInfo**                   Bundle;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.ExpansionChanged
struct UAthenaChallengeTreeEntry_C_ExpansionChanged_Params
{
	bool*                                              bExpanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.OnHovered
struct UAthenaChallengeTreeEntry_C_OnHovered_Params
{
};

// Function AthenaChallengeTreeEntry.AthenaChallengeTreeEntry_C.ExecuteUbergraph_AthenaChallengeTreeEntry
struct UAthenaChallengeTreeEntry_C_ExecuteUbergraph_AthenaChallengeTreeEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

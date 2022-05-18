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

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetState
struct UAthenaSeasonReward_C_SetState_Params
{
	bool                                               Claimed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LevelAchieved;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.Setup
struct UAthenaSeasonReward_C_Setup_Params
{
	class UFortItem*                                   ItemToRepresent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Claimed;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               LevelAchieved;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.OnHovered
struct UAthenaSeasonReward_C_OnHovered_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.PlayIntro
struct UAthenaSeasonReward_C_PlayIntro_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewItem
struct UAthenaSeasonReward_C_ViewItem_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.OnClicked
struct UAthenaSeasonReward_C_OnClicked_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.ExecuteUbergraph_AthenaSeasonReward
struct UAthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

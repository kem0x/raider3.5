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

// Function AthenaSeasonReward.AthenaSeasonReward_C.ViewInVault
struct UAthenaSeasonReward_C_ViewInVault_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetSecondaryItem
struct UAthenaSeasonReward_C_SetSecondaryItem_Params
{
	class UFortItem*                                   SecondaryItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.EnableRarityFlare
struct UAthenaSeasonReward_C_EnableRarityFlare_Params
{
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetViewOnHover
struct UAthenaSeasonReward_C_SetViewOnHover_Params
{
	bool                                               ShouldViewOnHover;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

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
	EFortItemCardSize                                  ItemCardSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnHovered
struct UAthenaSeasonReward_C_BP_OnHovered_Params
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

// Function AthenaSeasonReward.AthenaSeasonReward_C.BP_OnClicked
struct UAthenaSeasonReward_C_BP_OnClicked_Params
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

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

// Function XpBarXpText.XpBarXpText_C.Get Skill Points For Next Level
struct UXpBarXpText_C_Get_Skill_Points_For_Next_Level_Params
{
	int                                                Next_Level_Skill_Points;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function XpBarXpText.XpBarXpText_C.Update Xp Text
struct UXpBarXpText_C_Update_Xp_Text_Params
{
	struct FFortPublicAccountInfo                      Account_Info;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function XpBarXpText.XpBarXpText_C.Construct
struct UXpBarXpText_C_Construct_Params
{
};

// Function XpBarXpText.XpBarXpText_C.HandleAccountUpdate
struct UXpBarXpText_C_HandleAccountUpdate_Params
{
	struct FFortPublicAccountInfo                      NewInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function XpBarXpText.XpBarXpText_C.ExecuteUbergraph_XpBarXpText
struct UXpBarXpText_C_ExecuteUbergraph_XpBarXpText_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Play Anim Intro
struct UResults_TeleportPadPlayerTop_C_Play_Anim_Intro_Params
{
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Initialize
struct UResults_TeleportPadPlayerTop_C_Initialize_Params
{
	struct FUniqueNetIdRepl                            UniqueNetId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UFortUIScoreReport*                          ScoreReport;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ScoreReportIndex;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.IntroName
struct UResults_TeleportPadPlayerTop_C_IntroName_Params
{
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.PreConstruct
struct UResults_TeleportPadPlayerTop_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.Intro
struct UResults_TeleportPadPlayerTop_C_Intro_Params
{
};

// Function Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C.ExecuteUbergraph_Results_TeleportPadPlayerTop
struct UResults_TeleportPadPlayerTop_C_ExecuteUbergraph_Results_TeleportPadPlayerTop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

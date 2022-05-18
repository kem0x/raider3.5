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

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.PlayIntroAnimation
struct UMissionDetailsModifierRow_C_PlayIntroAnimation_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Init
struct UMissionDetailsModifierRow_C_Init_Params
{
	struct FText                                       ModifierName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ModifierDescription;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  ModifierIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TextStyle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Show_Description;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseSmallIcon;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.Construct
struct UMissionDetailsModifierRow_C_Construct_Params
{
};

// Function MissionDetailsModifierRow.MissionDetailsModifierRow_C.ExecuteUbergraph_MissionDetailsModifierRow
struct UMissionDetailsModifierRow_C_ExecuteUbergraph_MissionDetailsModifierRow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

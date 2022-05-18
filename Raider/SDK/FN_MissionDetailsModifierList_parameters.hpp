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

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.CreateDebugModifiers
struct UMissionDetailsModifierList_C_CreateDebugModifiers_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> Modifiers;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function MissionDetailsModifierList.MissionDetailsModifierList_C.PopulateModifiers
struct UMissionDetailsModifierList_C_PopulateModifiers_Params
{
	bool                                               UseTrunctatedList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NameTextStyle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DescriptionTextStyle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Show_Descriptions;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UFortGameplayModifierItemDefinition*> ModifierItems;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               UseSmallIcons;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

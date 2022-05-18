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

// Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestText
struct UQuestInfo_Widget_C_SetQuestText_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestIcon
struct UQuestInfo_Widget_C_SetQuestIcon_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateRewards
struct UQuestInfo_Widget_C_PopulateRewards_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateObjectives
struct UQuestInfo_Widget_C_PopulateObjectives_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.Reset
struct UQuestInfo_Widget_C_Reset_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.InitDesignView
struct UQuestInfo_Widget_C_InitDesignView_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateFromQuest
struct UQuestInfo_Widget_C_PopulateFromQuest_Params
{
	class UFortQuestItem*                              InQuest;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.Construct
struct UQuestInfo_Widget_C_Construct_Params
{
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.PreConstruct
struct UQuestInfo_Widget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestInfo_Widget.QuestInfo_Widget_C.ExecuteUbergraph_QuestInfo_Widget
struct UQuestInfo_Widget_C_ExecuteUbergraph_QuestInfo_Widget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function QuestTreeEntry.QuestTreeEntry_C.Get Streaming Attached Quest Name
struct UQuestTreeEntry_C_Get_Streaming_Attached_Quest_Name_Params
{
	struct FText                                       ModifiedName;                                             // (Parm, OutParm)
};

// Function QuestTreeEntry.QuestTreeEntry_C.Is Streaming Quest
struct UQuestTreeEntry_C_Is_Streaming_Quest_Params
{
	bool                                               bStreamingQuest;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestTreeEntry.QuestTreeEntry_C.Set Quest Category Display Name
struct UQuestTreeEntry_C_Set_Quest_Category_Display_Name_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.Set Quest Display Name
struct UQuestTreeEntry_C_Set_Quest_Display_Name_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.Get Quest Item Def
struct UQuestTreeEntry_C_Get_Quest_Item_Def_Params
{
	class UFortQuestItemDefinition*                    AsFort_Quest_Item_Definition;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestTreeEntry.QuestTreeEntry_C.Quest Category Have Unseen Quests
struct UQuestTreeEntry_C_Quest_Category_Have_Unseen_Quests_Params
{
	bool                                               HasUnseen;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Category Bang State
struct UQuestTreeEntry_C_Update_Quest_Category_Bang_State_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Item Seen
struct UQuestTreeEntry_C_Update_Quest_Item_Seen_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.Update Quest Item Bang State
struct UQuestTreeEntry_C_Update_Quest_Item_Bang_State_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.SetCompletionPercentage
struct UQuestTreeEntry_C_SetCompletionPercentage_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.Unpin
struct UQuestTreeEntry_C_Unpin_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.SetPinnedState
struct UQuestTreeEntry_C_SetPinnedState_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.SetupAsCategory
struct UQuestTreeEntry_C_SetupAsCategory_Params
{
	class UFortQuestCategory**                         Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestTreeEntry.QuestTreeEntry_C.SetupAsQuest
struct UQuestTreeEntry_C_SetupAsQuest_Params
{
	class UFortQuestItem**                             Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestTreeEntry.QuestTreeEntry_C.ExpansionChanged
struct UQuestTreeEntry_C_ExpansionChanged_Params
{
	bool*                                              bExpanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestTreeEntry.QuestTreeEntry_C.OnSelected
struct UQuestTreeEntry_C_OnSelected_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.OnQuestsUpdated
struct UQuestTreeEntry_C_OnQuestsUpdated_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.OnHovered
struct UQuestTreeEntry_C_OnHovered_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.OnQuestSeen_Event_0_1
struct UQuestTreeEntry_C_OnQuestSeen_Event_0_1_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestTreeEntry.QuestTreeEntry_C.Destruct
struct UQuestTreeEntry_C_Destruct_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.OnDeselected
struct UQuestTreeEntry_C_OnDeselected_Params
{
};

// Function QuestTreeEntry.QuestTreeEntry_C.ExecuteUbergraph_QuestTreeEntry
struct UQuestTreeEntry_C_ExecuteUbergraph_QuestTreeEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

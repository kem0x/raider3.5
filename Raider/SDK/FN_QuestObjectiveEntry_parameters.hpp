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

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.UpdateLerp
struct UQuestObjectiveEntry_C_UpdateLerp_Params
{
};

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.LerpProgress
struct UQuestObjectiveEntry_C_LerpProgress_Params
{
};

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.AppearAnimationFinished
struct UQuestObjectiveEntry_C_AppearAnimationFinished_Params
{
};

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.UpdateProgress
struct UQuestObjectiveEntry_C_UpdateProgress_Params
{
};

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.SetData
struct UQuestObjectiveEntry_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.StartDisplayingObjective
struct UQuestObjectiveEntry_C_StartDisplayingObjective_Params
{
};

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.ObjectiveInfoSet
struct UQuestObjectiveEntry_C_ObjectiveInfoSet_Params
{
	class UFortQuestObjectiveInfo**                    ObjectiveInfo;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAnnouncement;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestObjectiveEntry.QuestObjectiveEntry_C.ExecuteUbergraph_QuestObjectiveEntry
struct UQuestObjectiveEntry_C_ExecuteUbergraph_QuestObjectiveEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

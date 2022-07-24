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

// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.QuestFillCurveFinished
struct UAthenaQuestObjectiveEntry_C_QuestFillCurveFinished_Params
{
};

// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.UpdateProgressQuest
struct UAthenaQuestObjectiveEntry_C_UpdateProgressQuest_Params
{
};

// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.CompleteObjectiveAnimationFinished
struct UAthenaQuestObjectiveEntry_C_CompleteObjectiveAnimationFinished_Params
{
};

// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.FinishedDisplayTimer
struct UAthenaQuestObjectiveEntry_C_FinishedDisplayTimer_Params
{
};

// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.ObjectiveFillCurveFinished
struct UAthenaQuestObjectiveEntry_C_ObjectiveFillCurveFinished_Params
{
};

// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.SetProgressText
struct UAthenaQuestObjectiveEntry_C_SetProgressText_Params
{
	int                                                Current_Value;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Total_Value;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.UpdateProgressObjective
struct UAthenaQuestObjectiveEntry_C_UpdateProgressObjective_Params
{
};

// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.StartDisplayingObjective
struct UAthenaQuestObjectiveEntry_C_StartDisplayingObjective_Params
{
};

// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.ObjectiveInfoSet
struct UAthenaQuestObjectiveEntry_C_ObjectiveInfoSet_Params
{
	class UFortQuestObjectiveInfo**                    ObjectiveInfo;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsAnnouncement;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaQuestObjectiveEntry.AthenaQuestObjectiveEntry_C.ExecuteUbergraph_AthenaQuestObjectiveEntry
struct UAthenaQuestObjectiveEntry_C_ExecuteUbergraph_AthenaQuestObjectiveEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

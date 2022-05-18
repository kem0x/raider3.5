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

// Function QuestSpinner.QuestSpinner_C.IncrementPoolIndex
struct UQuestSpinner_C_IncrementPoolIndex_Params
{
	int                                                NewValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function QuestSpinner.QuestSpinner_C.OnSpinDelayTimerComplete
struct UQuestSpinner_C_OnSpinDelayTimerComplete_Params
{
};

// Function QuestSpinner.QuestSpinner_C.BeginSpinDelayTimer
struct UQuestSpinner_C_BeginSpinDelayTimer_Params
{
};

// Function QuestSpinner.QuestSpinner_C.SetQuests
struct UQuestSpinner_C_SetQuests_Params
{
	TArray<class UFortQuestItem*>                      Quests;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              SpinPeriod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestSpinner.QuestSpinner_C.OnSpinComplete
struct UQuestSpinner_C_OnSpinComplete_Params
{
};

// Function QuestSpinner.QuestSpinner_C.ExecuteUbergraph_QuestSpinner
struct UQuestSpinner_C_ExecuteUbergraph_QuestSpinner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

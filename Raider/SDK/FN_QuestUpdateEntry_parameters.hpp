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

// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestIntroBP
struct UQuestUpdateEntry_C_StartQuestIntroBP_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.SetupAsAnnouncement
struct UQuestUpdateEntry_C_SetupAsAnnouncement_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.QuestItemSet
struct UQuestUpdateEntry_C_QuestItemSet_Params
{
	class UFortQuestItem**                             QuestItemToCheck;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestOutro
struct UQuestUpdateEntry_C_StartQuestOutro_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestIntro
struct UQuestUpdateEntry_C_StartQuestIntro_Params
{
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry
struct UQuestUpdateEntry_C_ExecuteUbergraph_QuestUpdateEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished_0__DelegateSignature
struct UQuestUpdateEntry_C_AllQuestUpdatesFinished_0__DelegateSignature_Params
{
	class UQuestUpdateEntry_C*                         UpdateWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

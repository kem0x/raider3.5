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

// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateAnnouncementUpdate
struct UQuestUpdatesLog_C_CreateAnnouncementUpdate_Params
{
	class UFortQuestObjectiveInfo**                    QuestItemToCheck;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestUpdatesLog.QuestUpdatesLog_C.ExecuteUbergraph_QuestUpdatesLog
struct UQuestUpdatesLog_C_ExecuteUbergraph_QuestUpdatesLog_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

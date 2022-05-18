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

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData
struct UAnnouncement_QuestUpdate_C_UpdateWidgetData_Params
{
	class AFortClientAnnouncement**                    Announcement;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AllUpdatesFinished
struct UAnnouncement_QuestUpdate_C_AllUpdatesFinished_Params
{
	class UQuestUpdateEntry_C*                         UpdateWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate
struct UAnnouncement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData
struct UAnnouncement_QuestUpdate_C_UpdateWidgetData_Params
{
	class AFortClientAnnouncement**                    Announcement;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AnnouncementStopped
struct UAnnouncement_QuestUpdate_C_AnnouncementStopped_Params
{
	class AFortClientAnnouncement**                    Announcement;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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

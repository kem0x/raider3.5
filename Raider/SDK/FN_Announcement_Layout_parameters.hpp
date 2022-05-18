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

// Function Announcement_Layout.Announcement_Layout_C.CreateAnnouncementWidget
struct UAnnouncement_Layout_C_CreateAnnouncementWidget_Params
{
	class UClass*                                      NewWidgetClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceCreateUI;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortAnnouncementWidget*                     NewWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Announcement_Layout.Announcement_Layout_C.SwapAnnouncementUIContent
struct UAnnouncement_Layout_C_SwapAnnouncementUIContent_Params
{
	class AFortClientAnnouncement*                     NewAnnouncement;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Layout.Announcement_Layout_C.Construct
struct UAnnouncement_Layout_C_Construct_Params
{
};

// Function Announcement_Layout.Announcement_Layout_C.OnStartNewAnnouncement
struct UAnnouncement_Layout_C_OnStartNewAnnouncement_Params
{
	class AFortClientAnnouncement*                     NewAnnouncement;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announcement_Layout.Announcement_Layout_C.Destruct
struct UAnnouncement_Layout_C_Destruct_Params
{
};

// Function Announcement_Layout.Announcement_Layout_C.ExecuteUbergraph_Announcement_Layout
struct UAnnouncement_Layout_C_ExecuteUbergraph_Announcement_Layout_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement** Announcement                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_QuestUpdate_C::UpdateWidgetData(class AFortClientAnnouncement** Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData");

	UAnnouncement_QuestUpdate_C_UpdateWidgetData_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AnnouncementStopped
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement** Announcement                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_QuestUpdate_C::AnnouncementStopped(class AFortClientAnnouncement** Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AnnouncementStopped");

	UAnnouncement_QuestUpdate_C_AnnouncementStopped_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_QuestUpdate_C::ExecuteUbergraph_Announcement_QuestUpdate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate");

	UAnnouncement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

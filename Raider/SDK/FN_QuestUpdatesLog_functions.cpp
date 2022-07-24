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

// Function QuestUpdatesLog.QuestUpdatesLog_C.CreateAnnouncementUpdate
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortQuestObjectiveInfo** QuestItemToCheck               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestUpdatesLog_C::CreateAnnouncementUpdate(class UFortQuestObjectiveInfo** QuestItemToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.CreateAnnouncementUpdate");

	UQuestUpdatesLog_C_CreateAnnouncementUpdate_Params params;
	params.QuestItemToCheck = QuestItemToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdatesLog.QuestUpdatesLog_C.ExecuteUbergraph_QuestUpdatesLog
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestUpdatesLog_C::ExecuteUbergraph_QuestUpdatesLog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdatesLog.QuestUpdatesLog_C.ExecuteUbergraph_QuestUpdatesLog");

	UQuestUpdatesLog_C_ExecuteUbergraph_QuestUpdatesLog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestIntroBP
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::StartQuestIntroBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestIntroBP");

	UQuestUpdateEntry_C_StartQuestIntroBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.SetupAsAnnouncement
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UQuestUpdateEntry_C::SetupAsAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.SetupAsAnnouncement");

	UQuestUpdateEntry_C_SetupAsAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.QuestItemSet
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortQuestItem**         QuestItemToCheck               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::QuestItemSet(class UFortQuestItem** QuestItemToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.QuestItemSet");

	UQuestUpdateEntry_C_QuestItemSet_Params params;
	params.QuestItemToCheck = QuestItemToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestOutro
// (Event, Public, BlueprintEvent)

void UQuestUpdateEntry_C::StartQuestOutro()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestOutro");

	UQuestUpdateEntry_C_StartQuestOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestIntro
// (Event, Public, BlueprintEvent)

void UQuestUpdateEntry_C::StartQuestIntro()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestIntro");

	UQuestUpdateEntry_C_StartQuestIntro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestUpdateEntry_C::ExecuteUbergraph_QuestUpdateEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry");

	UQuestUpdateEntry_C_ExecuteUbergraph_QuestUpdateEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*     UpdateWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestUpdateEntry_C::AllQuestUpdatesFinished_0__DelegateSignature(class UQuestUpdateEntry_C* UpdateWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished_0__DelegateSignature");

	UQuestUpdateEntry_C_AllQuestUpdatesFinished_0__DelegateSignature_Params params;
	params.UpdateWidget = UpdateWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

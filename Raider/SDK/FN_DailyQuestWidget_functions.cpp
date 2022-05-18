// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DailyQuestWidget.DailyQuestWidget_C.Entrance Anim
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestWidget_C::Entrance_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestWidget.DailyQuestWidget_C.Entrance Anim");

	UDailyQuestWidget_C_Entrance_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestWidget.DailyQuestWidget_C.Collect Anim
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestWidget_C::Collect_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestWidget.DailyQuestWidget_C.Collect Anim");

	UDailyQuestWidget_C_Collect_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestWidget.DailyQuestWidget_C.Completed State
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestWidget_C::Completed_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestWidget.DailyQuestWidget_C.Completed State");

	UDailyQuestWidget_C_Completed_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestWidget.DailyQuestWidget_C.UpdateProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestWidget_C::UpdateProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestWidget.DailyQuestWidget_C.UpdateProgress");

	UDailyQuestWidget_C_UpdateProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestWidget.DailyQuestWidget_C.SetQuestItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestWidget_C::SetQuestItem(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestWidget.DailyQuestWidget_C.SetQuestItem");

	UDailyQuestWidget_C_SetQuestItem_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

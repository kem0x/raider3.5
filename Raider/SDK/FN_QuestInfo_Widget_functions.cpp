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

// Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestInfo_Widget_C::SetQuestText()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestText");

	UQuestInfo_Widget_C_SetQuestText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestInfo_Widget_C::SetQuestIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_Widget.QuestInfo_Widget_C.SetQuestIcon");

	UQuestInfo_Widget_C_SetQuestIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestInfo_Widget_C::PopulateRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateRewards");

	UQuestInfo_Widget_C_PopulateRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateObjectives
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestInfo_Widget_C::PopulateObjectives()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateObjectives");

	UQuestInfo_Widget_C_PopulateObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestInfo_Widget_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_Widget.QuestInfo_Widget_C.Reset");

	UQuestInfo_Widget_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.InitDesignView
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestInfo_Widget_C::InitDesignView()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_Widget.QuestInfo_Widget_C.InitDesignView");

	UQuestInfo_Widget_C_InitDesignView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateFromQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          InQuest                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UQuestInfo_Widget_C::PopulateFromQuest(class UFortQuestItem** InQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_Widget.QuestInfo_Widget_C.PopulateFromQuest");

	UQuestInfo_Widget_C_PopulateFromQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InQuest != nullptr)
		*InQuest = params.InQuest;
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestInfo_Widget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_Widget.QuestInfo_Widget_C.Construct");

	UQuestInfo_Widget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestInfo_Widget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_Widget.QuestInfo_Widget_C.PreConstruct");

	UQuestInfo_Widget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestInfo_Widget.QuestInfo_Widget_C.ExecuteUbergraph_QuestInfo_Widget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestInfo_Widget_C::ExecuteUbergraph_QuestInfo_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestInfo_Widget.QuestInfo_Widget_C.ExecuteUbergraph_QuestInfo_Widget");

	UQuestInfo_Widget_C_ExecuteUbergraph_QuestInfo_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

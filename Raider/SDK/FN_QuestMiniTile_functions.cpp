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

// Function QuestMiniTile.QuestMiniTile_C.HandleSizeOverrides
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestMiniTile_C::HandleSizeOverrides()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.HandleSizeOverrides");

	UQuestMiniTile_C_HandleSizeOverrides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.SetStateAndFindIncompleteQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QuestFound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile_C::SetStateAndFindIncompleteQuest(bool* QuestFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.SetStateAndFindIncompleteQuest");

	UQuestMiniTile_C_SetStateAndFindIncompleteQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestFound != nullptr)
		*QuestFound = params.QuestFound;
}


// Function QuestMiniTile.QuestMiniTile_C.PlayTileAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestMiniTile_C::PlayTileAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.PlayTileAnimation");

	UQuestMiniTile_C_PlayTileAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.ToggleCurrentQuestTileTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile_C::ToggleCurrentQuestTileTimer(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.ToggleCurrentQuestTileTimer");

	UQuestMiniTile_C_ToggleCurrentQuestTileTimer_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.SetState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          InCurrentQuest                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           QuestFound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile_C::SetState(class UFortQuestItem* InCurrentQuest, bool* QuestFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.SetState");

	UQuestMiniTile_C_SetState_Params params;
	params.InCurrentQuest = InCurrentQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestFound != nullptr)
		*QuestFound = params.QuestFound;
}


// Function QuestMiniTile.QuestMiniTile_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestMiniTile_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.Init");

	UQuestMiniTile_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.PreConstruct");

	UQuestMiniTile_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestMiniTile_C::BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature");

	UQuestMiniTile_C_BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestMiniTile_C::BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature");

	UQuestMiniTile_C_BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_126_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestMiniTile_C::BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UQuestMiniTile_C_BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_4_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile_C::BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_4_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_4_CommonSelectedStateChanged__DelegateSignature");

	UQuestMiniTile_C_BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_4_CommonSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestMiniTile_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.Construct");

	UQuestMiniTile_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.ExecuteUbergraph_QuestMiniTile
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile_C::ExecuteUbergraph_QuestMiniTile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.ExecuteUbergraph_QuestMiniTile");

	UQuestMiniTile_C_ExecuteUbergraph_QuestMiniTile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.HandleQuestTileUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* QuestItemDef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile_C::HandleQuestTileUnhovered__DelegateSignature(class UFortQuestItemDefinition* QuestItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.HandleQuestTileUnhovered__DelegateSignature");

	UQuestMiniTile_C_HandleQuestTileUnhovered__DelegateSignature_Params params;
	params.QuestItemDef = QuestItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile.QuestMiniTile_C.HandleQuestTileHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* QuestItemDef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile_C::HandleQuestTileHovered__DelegateSignature(class UFortQuestItemDefinition* QuestItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile.QuestMiniTile_C.HandleQuestTileHovered__DelegateSignature");

	UQuestMiniTile_C_HandleQuestTileHovered__DelegateSignature_Params params;
	params.QuestItemDef = QuestItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

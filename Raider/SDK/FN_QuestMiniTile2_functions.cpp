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

// Function QuestMiniTile2.QuestMiniTile2_C.UpdateQuestData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestMiniTile2_C::UpdateQuestData()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.UpdateQuestData");

	UQuestMiniTile2_C_UpdateQuestData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile2.QuestMiniTile2_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestMiniTile2_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.Init");

	UQuestMiniTile2_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile2.QuestMiniTile2_C.HandleSizeOverrides
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestMiniTile2_C::HandleSizeOverrides()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.HandleSizeOverrides");

	UQuestMiniTile2_C_HandleSizeOverrides_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile2.QuestMiniTile2_C.SetStateAndFindIncompleteQuest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           QuestFound                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile2_C::SetStateAndFindIncompleteQuest(bool* QuestFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.SetStateAndFindIncompleteQuest");

	UQuestMiniTile2_C_SetStateAndFindIncompleteQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestFound != nullptr)
		*QuestFound = params.QuestFound;
}


// Function QuestMiniTile2.QuestMiniTile2_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestMiniTile2_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.Update");

	UQuestMiniTile2_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile2.QuestMiniTile2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.PreConstruct");

	UQuestMiniTile2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile2.QuestMiniTile2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestMiniTile2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.Construct");

	UQuestMiniTile2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile2.QuestMiniTile2_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UQuestMiniTile2_C::BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature");

	UQuestMiniTile2_C_BndEvt__ButtonQuest_K2Node_ComponentBoundEvent_113_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile2.QuestMiniTile2_C.HandleQuestDataChangedBP
// (Event, Public, BlueprintEvent)

void UQuestMiniTile2_C::HandleQuestDataChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.HandleQuestDataChangedBP");

	UQuestMiniTile2_C_HandleQuestDataChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile2.QuestMiniTile2_C.BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile2_C::BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature");

	UQuestMiniTile2_C_BndEvt__QuestButton_K2Node_ComponentBoundEvent_12_CommonSelectedStateChanged__DelegateSignature_Params params;
	params.Button = Button;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile2.QuestMiniTile2_C.ExecuteUbergraph_QuestMiniTile2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile2_C::ExecuteUbergraph_QuestMiniTile2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.ExecuteUbergraph_QuestMiniTile2");

	UQuestMiniTile2_C_ExecuteUbergraph_QuestMiniTile2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile2.QuestMiniTile2_C.HandleQuestTileUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* QuestItemDef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile2_C::HandleQuestTileUnhovered__DelegateSignature(class UFortQuestItemDefinition* QuestItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.HandleQuestTileUnhovered__DelegateSignature");

	UQuestMiniTile2_C_HandleQuestTileUnhovered__DelegateSignature_Params params;
	params.QuestItemDef = QuestItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMiniTile2.QuestMiniTile2_C.HandleQuestTileHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItemDefinition* QuestItemDef                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMiniTile2_C::HandleQuestTileHovered__DelegateSignature(class UFortQuestItemDefinition* QuestItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMiniTile2.QuestMiniTile2_C.HandleQuestTileHovered__DelegateSignature");

	UQuestMiniTile2_C_HandleQuestTileHovered__DelegateSignature_Params params;
	params.QuestItemDef = QuestItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

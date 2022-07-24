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

// Function QuestMapLayoutNode.QuestMapLayoutNode_C.SetQuestTileProps
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestMapLayoutNode_C::SetQuestTileProps()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMapLayoutNode.QuestMapLayoutNode_C.SetQuestTileProps");

	UQuestMapLayoutNode_C_SetQuestTileProps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMapLayoutNode.QuestMapLayoutNode_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMapLayoutNode_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMapLayoutNode.QuestMapLayoutNode_C.PreConstruct");

	UQuestMapLayoutNode_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMapLayoutNode.QuestMapLayoutNode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestMapLayoutNode_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMapLayoutNode.QuestMapLayoutNode_C.Construct");

	UQuestMapLayoutNode_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestMapLayoutNode.QuestMapLayoutNode_C.ExecuteUbergraph_QuestMapLayoutNode
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestMapLayoutNode_C::ExecuteUbergraph_QuestMapLayoutNode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestMapLayoutNode.QuestMapLayoutNode_C.ExecuteUbergraph_QuestMapLayoutNode");

	UQuestMapLayoutNode_C_ExecuteUbergraph_QuestMapLayoutNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

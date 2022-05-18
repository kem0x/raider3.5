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

// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_Gen_Quest_Conversation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.UserConstructionScript");

	AAnnounce_Gen_Quest_Conversation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.OnConversationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence* FinishingSentence              (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           FinishingSentenceSentenceIndex (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_Gen_Quest_Conversation_C::OnConversationFinished(struct FFortConversationSentence* FinishingSentence, int* FinishingSentenceSentenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.OnConversationFinished");

	AAnnounce_Gen_Quest_Conversation_C_OnConversationFinished_Params params;
	params.FinishingSentence = FinishingSentence;
	params.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_Gen_Quest_Conversation_C::ExecuteUbergraph_Announce_Gen_Quest_Conversation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_Gen_Quest_Conversation.Announce_Gen_Quest_Conversation_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation");

	AAnnounce_Gen_Quest_Conversation_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

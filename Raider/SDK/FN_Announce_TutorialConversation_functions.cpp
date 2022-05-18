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

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStop_UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SentenceIdx                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_TutorialConversation_C::HandleSentenceStop_UI(int SentenceIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStop_UI");

	AAnnounce_TutorialConversation_C_HandleSentenceStop_UI_Params params;
	params.SentenceIdx = SentenceIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStart_UI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SentenceIdx                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_TutorialConversation_C::HandleSentenceStart_UI(int SentenceIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStart_UI");

	AAnnounce_TutorialConversation_C_HandleSentenceStart_UI_Params params;
	params.SentenceIdx = SentenceIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.InitAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_TutorialConversation_C::InitAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.InitAnnouncement");

	AAnnounce_TutorialConversation_C_InitAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_TutorialConversation_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.UserConstructionScript");

	AAnnounce_TutorialConversation_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_TutorialConversation_C::OnClientAnnouncementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStart");

	AAnnounce_TutorialConversation_C_OnClientAnnouncementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence* Sentence                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int*                           SentenceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_TutorialConversation_C::OnSentenceStarted(struct FFortConversationSentence* Sentence, int* SentenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceStarted");

	AAnnounce_TutorialConversation_C_OnSentenceStarted_Params params;
	params.Sentence = Sentence;
	params.SentenceIndex = SentenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnConversationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence* FinishingSentence              (BlueprintVisible, BlueprintReadOnly, Parm)
// int*                           FinishingSentenceSentenceIndex (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_TutorialConversation_C::OnConversationFinished(struct FFortConversationSentence* FinishingSentence, int* FinishingSentenceSentenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnConversationFinished");

	AAnnounce_TutorialConversation_C_OnConversationFinished_Params params;
	params.FinishingSentence = FinishingSentence;
	params.FinishingSentenceSentenceIndex = FinishingSentenceSentenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceFinished
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortConversationSentence* Sentence                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int*                           SentenceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_TutorialConversation_C::OnSentenceFinished(struct FFortConversationSentence* Sentence, int* SentenceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceFinished");

	AAnnounce_TutorialConversation_C_OnSentenceFinished_Params params;
	params.Sentence = Sentence;
	params.SentenceIndex = SentenceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStop
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_TutorialConversation_C::OnClientAnnouncementStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStop");

	AAnnounce_TutorialConversation_C_OnClientAnnouncementStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_TutorialConversation.Announce_TutorialConversation_C.ExecuteUbergraph_Announce_TutorialConversation
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_TutorialConversation_C::ExecuteUbergraph_Announce_TutorialConversation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_TutorialConversation.Announce_TutorialConversation_C.ExecuteUbergraph_Announce_TutorialConversation");

	AAnnounce_TutorialConversation_C_ExecuteUbergraph_Announce_TutorialConversation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

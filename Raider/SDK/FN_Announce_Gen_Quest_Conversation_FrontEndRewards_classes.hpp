#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C
// 0x0028 (0x0410 - 0x03E8)
class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C : public AFortClientAnnouncement_Conversation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnNewSentence;                                            // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCurrentConversationFinished;                            // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C");
		return ptr;
	}


	void StopCurrentConversation();
	void PlayCurrentConversation();
	void UserConstructionScript();
	void OnConversationFinished(struct FFortConversationSentence* FinishingSentence, int* FinishingSentenceSentenceIndex);
	void OnSentenceStarted(struct FFortConversationSentence* Sentence, int* SentenceIndex);
	void ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards(int EntryPoint);
	void OnCurrentConversationFinished__DelegateSignature();
	void OnNewSentence__DelegateSignature(const struct FFortConversationSentence& Sentence);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// WidgetBlueprintGeneratedClass FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C
// 0x0028 (0x0260 - 0x0238)
class UFrontEndRewards_Conversation_VO_C : public UFortRewardConversationWidget
{
public:
	struct FDataTableRowHandle                         ReplayAction;                                             // 0x0238(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortConversation*                           Conversation;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortQuestItem*                              QuestItemRef;                                             // 0x0250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* ConversationActor;                                        // 0x0258(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C");
		return ptr;
	}


	void CreateConversationActor(class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C** NewAnnoucement);
	void PlayConversation(class UFortQuestItem* QuestItem);
	void HandleConversationFinished();
	void HandleNewSentence(const struct FFortConversationSentence& Sentence);
	void StopConversation();
	void HandleReplayAction(bool* Committed);
	void PopulateFromConversation(class UFortConversation* Conversation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.CreateConversationActor
struct UFrontEndRewards_Conversation_VO_C_CreateConversationActor_Params
{
	class AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C* NewAnnoucement;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PlayConversation
struct UFrontEndRewards_Conversation_VO_C_PlayConversation_Params
{
	class UFortQuestItem*                              QuestItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleConversationFinished
struct UFrontEndRewards_Conversation_VO_C_HandleConversationFinished_Params
{
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleNewSentence
struct UFrontEndRewards_Conversation_VO_C_HandleNewSentence_Params
{
	struct FFortConversationSentence                   Sentence;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.StopConversation
struct UFrontEndRewards_Conversation_VO_C_StopConversation_Params
{
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.HandleReplayAction
struct UFrontEndRewards_Conversation_VO_C_HandleReplayAction_Params
{
	bool                                               Committed;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function FrontEndRewards_Conversation_VO.FrontEndRewards_Conversation_VO_C.PopulateFromConversation
struct UFrontEndRewards_Conversation_VO_C_PopulateFromConversation_Params
{
	class UFortConversation*                           Conversation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

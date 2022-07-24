#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.StopCurrentConversation
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_StopCurrentConversation_Params
{
};

// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.PlayCurrentConversation
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_PlayCurrentConversation_Params
{
};

// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.UserConstructionScript
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_UserConstructionScript_Params
{
};

// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnConversationFinished
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnConversationFinished_Params
{
	struct FFortConversationSentence*                  FinishingSentence;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               FinishingSentenceSentenceIndex;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnSentenceStarted
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnSentenceStarted_Params
{
	struct FFortConversationSentence*                  Sentence;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               SentenceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_ExecuteUbergraph_Announce_Gen_Quest_Conversation_FrontEndRewards_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnCurrentConversationFinished__DelegateSignature
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnCurrentConversationFinished__DelegateSignature_Params
{
};

// Function Announce_Gen_Quest_Conversation_FrontEndRewards.Announce_Gen_Quest_Conversation_FrontEndRewards_C.OnNewSentence__DelegateSignature
struct AAnnounce_Gen_Quest_Conversation_FrontEndRewards_C_OnNewSentence__DelegateSignature_Params
{
	struct FFortConversationSentence                   Sentence;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

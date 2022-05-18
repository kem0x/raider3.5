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

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStop_UI
struct AAnnounce_TutorialConversation_C_HandleSentenceStop_UI_Params
{
	int                                                SentenceIdx;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.HandleSentenceStart_UI
struct AAnnounce_TutorialConversation_C_HandleSentenceStart_UI_Params
{
	int                                                SentenceIdx;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.InitAnnouncement
struct AAnnounce_TutorialConversation_C_InitAnnouncement_Params
{
};

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.UserConstructionScript
struct AAnnounce_TutorialConversation_C_UserConstructionScript_Params
{
};

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStart
struct AAnnounce_TutorialConversation_C_OnClientAnnouncementStart_Params
{
};

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceStarted
struct AAnnounce_TutorialConversation_C_OnSentenceStarted_Params
{
	struct FFortConversationSentence*                  Sentence;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               SentenceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnConversationFinished
struct AAnnounce_TutorialConversation_C_OnConversationFinished_Params
{
	struct FFortConversationSentence*                  FinishingSentence;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
	int*                                               FinishingSentenceSentenceIndex;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnSentenceFinished
struct AAnnounce_TutorialConversation_C_OnSentenceFinished_Params
{
	struct FFortConversationSentence*                  Sentence;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               SentenceIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.OnClientAnnouncementStop
struct AAnnounce_TutorialConversation_C_OnClientAnnouncementStop_Params
{
};

// Function Announce_TutorialConversation.Announce_TutorialConversation_C.ExecuteUbergraph_Announce_TutorialConversation
struct AAnnounce_TutorialConversation_C_ExecuteUbergraph_Announce_TutorialConversation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function JournalQuestDetails.JournalQuestDetails_C.Get Streaming Attached Quest Name
struct UJournalQuestDetails_C_Get_Streaming_Attached_Quest_Name_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function JournalQuestDetails.JournalQuestDetails_C.Is Streaming Quest
struct UJournalQuestDetails_C_Is_Streaming_Quest_Params
{
	bool                                               bStreamingQuest;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.Get Quest Item Def
struct UJournalQuestDetails_C_Get_Quest_Item_Def_Params
{
	class UFortQuestItemDefinition*                    AsFort_Quest_Item_Definition;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.Set Quest Display Name
struct UJournalQuestDetails_C_Set_Quest_Display_Name_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function JournalQuestDetails.JournalQuestDetails_C.IsQuestAudioPlaying
struct UJournalQuestDetails_C_IsQuestAudioPlaying_Params
{
	bool                                               IsQuestAudioPlaying;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.StartConversation
struct UJournalQuestDetails_C_StartConversation_Params
{
	class UFortConversation*                           Conversation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortQuestItem*                              QuestItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutro_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.StopConversation
struct UJournalQuestDetails_C_StopConversation_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.AbandonQuest
struct UJournalQuestDetails_C_AbandonQuest_Params
{
	class UFortQuestItem*                              QuestToAbandon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               questAbandoned_;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePanelInfo
struct UJournalQuestDetails_C_UpdatePanelInfo_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePlayButtonState
struct UJournalQuestDetails_C_UpdatePlayButtonState_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.UpdateButtonStates
struct UJournalQuestDetails_C_UpdateButtonStates_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnEndSpokenDialog
struct UJournalQuestDetails_C_HandleOnEndSpokenDialog_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnBeginSpokenDialog
struct UJournalQuestDetails_C_HandleOnBeginSpokenDialog_Params
{
	class UTexture2D*                                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Subtitle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	EFortAnnouncementDisplayPreference                 DisplayPreference;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.Setup
struct UJournalQuestDetails_C_Setup_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.Construct
struct UJournalQuestDetails_C_Construct_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.HandleCurrentQuestChangedBP
struct UJournalQuestDetails_C_HandleCurrentQuestChangedBP_Params
{
};

// Function JournalQuestDetails.JournalQuestDetails_C.ExecuteUbergraph_JournalQuestDetails
struct UJournalQuestDetails_C_ExecuteUbergraph_JournalQuestDetails_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JournalQuestDetails.JournalQuestDetails_C.OnSpokenDialogEnded__DelegateSignature
struct UJournalQuestDetails_C_OnSpokenDialogEnded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

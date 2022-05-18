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

// Function JournalQuestDetails.JournalQuestDetails_C.Get Streaming Attached Quest Name
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UJournalQuestDetails_C::Get_Streaming_Attached_Quest_Name()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Get Streaming Attached Quest Name");

	UJournalQuestDetails_C_Get_Streaming_Attached_Quest_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Is Streaming Quest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bStreamingQuest                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UJournalQuestDetails_C::Is_Streaming_Quest(bool* bStreamingQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Is Streaming Quest");

	UJournalQuestDetails_C_Is_Streaming_Quest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bStreamingQuest != nullptr)
		*bStreamingQuest = params.bStreamingQuest;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Get Quest Item Def
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortQuestItemDefinition* AsFort_Quest_Item_Definition   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UJournalQuestDetails_C::Get_Quest_Item_Def(class UFortQuestItemDefinition** AsFort_Quest_Item_Definition)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Get Quest Item Def");

	UJournalQuestDetails_C_Get_Quest_Item_Def_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsFort_Quest_Item_Definition != nullptr)
		*AsFort_Quest_Item_Definition = params.AsFort_Quest_Item_Definition;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Set Quest Display Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UJournalQuestDetails_C::Set_Quest_Display_Name(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Set Quest Display Name");

	UJournalQuestDetails_C_Set_Quest_Display_Name_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.IsQuestAudioPlaying
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsQuestAudioPlaying            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UJournalQuestDetails_C::IsQuestAudioPlaying(bool* IsQuestAudioPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.IsQuestAudioPlaying");

	UJournalQuestDetails_C_IsQuestAudioPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsQuestAudioPlaying != nullptr)
		*IsQuestAudioPlaying = params.IsQuestAudioPlaying;
}


// Function JournalQuestDetails.JournalQuestDetails_C.StartConversation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortConversation*       Conversation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortQuestItem*          QuestItem                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsOutro_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJournalQuestDetails_C::StartConversation(class UFortConversation* Conversation, class UFortQuestItem* QuestItem, bool IsOutro_)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.StartConversation");

	UJournalQuestDetails_C_StartConversation_Params params;
	params.Conversation = Conversation;
	params.QuestItem = QuestItem;
	params.IsOutro_ = IsOutro_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.StopConversation
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::StopConversation()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.StopConversation");

	UJournalQuestDetails_C_StopConversation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.AbandonQuest
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          QuestToAbandon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           questAbandoned_                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UJournalQuestDetails_C::AbandonQuest(class UFortQuestItem* QuestToAbandon, bool* questAbandoned_)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.AbandonQuest");

	UJournalQuestDetails_C_AbandonQuest_Params params;
	params.QuestToAbandon = QuestToAbandon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (questAbandoned_ != nullptr)
		*questAbandoned_ = params.questAbandoned_;
}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePanelInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::UpdatePanelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.UpdatePanelInfo");

	UJournalQuestDetails_C_UpdatePanelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdatePlayButtonState
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::UpdatePlayButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.UpdatePlayButtonState");

	UJournalQuestDetails_C_UpdatePlayButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.UpdateButtonStates
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::UpdateButtonStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.UpdateButtonStates");

	UJournalQuestDetails_C_UpdateButtonStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnEndSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::HandleOnEndSpokenDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.HandleOnEndSpokenDialog");

	UJournalQuestDetails_C_HandleOnEndSpokenDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleOnBeginSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EFortAnnouncementDisplayPreference DisplayPreference              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJournalQuestDetails_C::HandleOnBeginSpokenDialog(class UTexture2D* Image, const struct FText& Title, const struct FText& Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.HandleOnBeginSpokenDialog");

	UJournalQuestDetails_C_HandleOnBeginSpokenDialog_Params params;
	params.Image = Image;
	params.Title = Title;
	params.Subtitle = Subtitle;
	params.DisplayPreference = DisplayPreference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Setup");

	UJournalQuestDetails_C_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJournalQuestDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.Construct");

	UJournalQuestDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.HandleCurrentQuestChangedBP
// (Event, Protected, BlueprintEvent)

void UJournalQuestDetails_C::HandleCurrentQuestChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.HandleCurrentQuestChangedBP");

	UJournalQuestDetails_C_HandleCurrentQuestChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.ExecuteUbergraph_JournalQuestDetails
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJournalQuestDetails_C::ExecuteUbergraph_JournalQuestDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.ExecuteUbergraph_JournalQuestDetails");

	UJournalQuestDetails_C_ExecuteUbergraph_JournalQuestDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestDetails.JournalQuestDetails_C.OnSpokenDialogEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UJournalQuestDetails_C::OnSpokenDialogEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestDetails.JournalQuestDetails_C.OnSpokenDialogEnded__DelegateSignature");

	UJournalQuestDetails_C_OnSpokenDialogEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

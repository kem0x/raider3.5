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

// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePanelInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UJournalQuestRewardDetails_C::UpdatePanelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePanelInfo");

	UJournalQuestRewardDetails_C_UpdatePanelInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePlayButtonState
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestRewardDetails_C::UpdatePlayButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdatePlayButtonState");

	UJournalQuestRewardDetails_C_UpdatePlayButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdateButtonStates
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestRewardDetails_C::UpdateButtonStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.UpdateButtonStates");

	UJournalQuestRewardDetails_C_UpdateButtonStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnEndSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestRewardDetails_C::HandleOnEndSpokenDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnEndSpokenDialog");

	UJournalQuestRewardDetails_C_HandleOnEndSpokenDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnBeginSpokenDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EFortAnnouncementDisplayPreference DisplayPreference              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJournalQuestRewardDetails_C::HandleOnBeginSpokenDialog(class UTexture2D* Image, const struct FText& Title, const struct FText& Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleOnBeginSpokenDialog");

	UJournalQuestRewardDetails_C_HandleOnBeginSpokenDialog_Params params;
	params.Image = Image;
	params.Title = Title;
	params.Subtitle = Subtitle;
	params.DisplayPreference = DisplayPreference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UJournalQuestRewardDetails_C::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Setup");

	UJournalQuestRewardDetails_C_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UJournalQuestRewardDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.Construct");

	UJournalQuestRewardDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleCurrentQuestChangedBP
// (Event, Protected, BlueprintEvent)

void UJournalQuestRewardDetails_C::HandleCurrentQuestChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.HandleCurrentQuestChangedBP");

	UJournalQuestRewardDetails_C_HandleCurrentQuestChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.ExecuteUbergraph_JournalQuestRewardDetails
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJournalQuestRewardDetails_C::ExecuteUbergraph_JournalQuestRewardDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JournalQuestRewardDetails.JournalQuestRewardDetails_C.ExecuteUbergraph_JournalQuestRewardDetails");

	UJournalQuestRewardDetails_C_ExecuteUbergraph_JournalQuestRewardDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

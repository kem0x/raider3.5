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

// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestTalkingHeadWidget_C::UpdateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.UpdateVisibility");

	UQuestTalkingHeadWidget_C_UpdateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleShouldBlockSubtitlePortraitChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldBlockSubtitlePortrait    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestTalkingHeadWidget_C::HandleShouldBlockSubtitlePortraitChanged(bool ShouldBlockSubtitlePortrait)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleShouldBlockSubtitlePortraitChanged");

	UQuestTalkingHeadWidget_C_HandleShouldBlockSubtitlePortraitChanged_Params params;
	params.ShouldBlockSubtitlePortrait = ShouldBlockSubtitlePortrait;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestTalkingHeadWidget_C::HandleTalkingHeadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadEnd");

	UQuestTalkingHeadWidget_C_HandleTalkingHeadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EFortAnnouncementDisplayPreference DisplayPreference              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestTalkingHeadWidget_C::HandleTalkingHeadBegin(class UTexture2D* Image, const struct FText& Title, const struct FText& Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.HandleTalkingHeadBegin");

	UQuestTalkingHeadWidget_C_HandleTalkingHeadBegin_Params params;
	params.Image = Image;
	params.Title = Title;
	params.Subtitle = Subtitle;
	params.DisplayPreference = DisplayPreference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestTalkingHeadWidget_C::SetTalkingHeadSubtitle(const struct FText& Subtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadSubtitle");

	UQuestTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params params;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestTalkingHeadWidget_C::SetTalkingHeadName(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadName");

	UQuestTalkingHeadWidget_C_SetTalkingHeadName_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestTalkingHeadWidget_C::SetTalkingHeadImage(class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.SetTalkingHeadImage");

	UQuestTalkingHeadWidget_C_SetTalkingHeadImage_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestTalkingHeadWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.Construct");

	UQuestTalkingHeadWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.ExecuteUbergraph_QuestTalkingHeadWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestTalkingHeadWidget_C::ExecuteUbergraph_QuestTalkingHeadWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestTalkingHeadWidget.QuestTalkingHeadWidget_C.ExecuteUbergraph_QuestTalkingHeadWidget");

	UQuestTalkingHeadWidget_C_ExecuteUbergraph_QuestTalkingHeadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

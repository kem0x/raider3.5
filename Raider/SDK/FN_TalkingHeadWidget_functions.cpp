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

// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UTalkingHeadWidget_C::HandleTalkingHeadEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadEnd");

	UTalkingHeadWidget_C_HandleTalkingHeadEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm)
// EFortAnnouncementDisplayPreference DisplayPreference              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkingHeadWidget_C::HandleTalkingHeadBegin(class UTexture2D* Image, const struct FText& Title, const struct FText& Subtitle, EFortAnnouncementDisplayPreference DisplayPreference)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.HandleTalkingHeadBegin");

	UTalkingHeadWidget_C_HandleTalkingHeadBegin_Params params;
	params.Image = Image;
	params.Title = Title;
	params.Subtitle = Subtitle;
	params.DisplayPreference = DisplayPreference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Subtitle                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UTalkingHeadWidget_C::SetTalkingHeadSubtitle(const struct FText& Subtitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadSubtitle");

	UTalkingHeadWidget_C_SetTalkingHeadSubtitle_Params params;
	params.Subtitle = Subtitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTalkingHeadWidget_C::SetTalkingHeadName(const struct FText& Title)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadName");

	UTalkingHeadWidget_C_SetTalkingHeadName_Params params;
	params.Title = Title;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkingHeadWidget_C::SetTalkingHeadImage(class UTexture2D* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.SetTalkingHeadImage");

	UTalkingHeadWidget_C_SetTalkingHeadImage_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTalkingHeadWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.Construct");

	UTalkingHeadWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTalkingHeadWidget_C::ExecuteUbergraph_TalkingHeadWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TalkingHeadWidget.TalkingHeadWidget_C.ExecuteUbergraph_TalkingHeadWidget");

	UTalkingHeadWidget_C_ExecuteUbergraph_TalkingHeadWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

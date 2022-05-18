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

// Function Announcement_Tutorial.Announcement_Tutorial_C.ContinueTutorial
// (Public, BlueprintCallable, BlueprintEvent)

void UAnnouncement_Tutorial_C::ContinueTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.ContinueTutorial");

	UAnnouncement_Tutorial_C_ContinueTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.CheckContinueTutorial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortClientAnnouncementData_Tutorial TutorialData                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAnnouncement_Tutorial_C::CheckContinueTutorial(const struct FFortClientAnnouncementData_Tutorial& TutorialData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.CheckContinueTutorial");

	UAnnouncement_Tutorial_C_CheckContinueTutorial_Params params;
	params.TutorialData = TutorialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.GetLightboxVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortClientAnnouncementData_Tutorial FortClientAnnouncementData_Tutorial (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UAnnouncement_Tutorial_C::GetLightboxVisibility(const struct FFortClientAnnouncementData_Tutorial& FortClientAnnouncementData_Tutorial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.GetLightboxVisibility");

	UAnnouncement_Tutorial_C_GetLightboxVisibility_Params params;
	params.FortClientAnnouncementData_Tutorial = FortClientAnnouncementData_Tutorial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.RefreshTextLines
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAnnouncement_Tutorial_C::RefreshTextLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.RefreshTextLines");

	UAnnouncement_Tutorial_C_RefreshTextLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.UpdateTutorialData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortClientAnnouncementData_Tutorial TutorialData                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UAnnouncement_Tutorial_C::UpdateTutorialData(const struct FFortClientAnnouncementData_Tutorial& TutorialData)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.UpdateTutorialData");

	UAnnouncement_Tutorial_C_UpdateTutorialData_Params params;
	params.TutorialData = TutorialData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.AddTextLine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Transparent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Tutorial_C::AddTextLine(const struct FText& Text, bool Transparent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.AddTextLine");

	UAnnouncement_Tutorial_C_AddTextLine_Params params;
	params.Text = Text;
	params.Transparent = Transparent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleUpdateTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortClientAnnouncementData_Tutorial TutorialData                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Tutorial_C::HandleUpdateTutorial(const struct FFortClientAnnouncementData_Tutorial& TutorialData, bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.HandleUpdateTutorial");

	UAnnouncement_Tutorial_C_HandleUpdateTutorial_Params params;
	params.TutorialData = TutorialData;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAnnouncement_Tutorial_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.Construct");

	UAnnouncement_Tutorial_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingShowUI
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAnnouncement_Tutorial_C::HandleClientEvent_OnboardingShowUI(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingShowUI");

	UAnnouncement_Tutorial_C_HandleClientEvent_OnboardingShowUI_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingHideUI
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAnnouncement_Tutorial_C::HandleClientEvent_OnboardingHideUI(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.HandleClientEvent_OnboardingHideUI");

	UAnnouncement_Tutorial_C_HandleClientEvent_OnboardingHideUI_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.ResetTutorialAnnoucementWidget
// (BlueprintCallable, BlueprintEvent)

void UAnnouncement_Tutorial_C::ResetTutorialAnnoucementWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.ResetTutorialAnnoucementWidget");

	UAnnouncement_Tutorial_C_ResetTutorialAnnoucementWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announcement_Tutorial.Announcement_Tutorial_C.ExecuteUbergraph_Announcement_Tutorial
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnnouncement_Tutorial_C::ExecuteUbergraph_Announcement_Tutorial(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announcement_Tutorial.Announcement_Tutorial_C.ExecuteUbergraph_Announcement_Tutorial");

	UAnnouncement_Tutorial_C_ExecuteUbergraph_Announcement_Tutorial_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

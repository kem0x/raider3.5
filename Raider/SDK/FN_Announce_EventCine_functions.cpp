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

// Function Announce_EventCine.Announce_EventCine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_EventCine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.UserConstructionScript");

	AAnnounce_EventCine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.OnStateEntered_2FC6E2894145586A1A4AF69426273130
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_EventCine_C::OnStateEntered_2FC6E2894145586A1A4AF69426273130()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.OnStateEntered_2FC6E2894145586A1A4AF69426273130");

	AAnnounce_EventCine_C_OnStateEntered_2FC6E2894145586A1A4AF69426273130_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_EventCine_C::OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC");

	AAnnounce_EventCine_C_OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_EventCine_C::OnClientAnnouncementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStart");

	AAnnounce_EventCine_C_OnClientAnnouncementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_EventCine_C::OnClientAnnouncementStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop");

	AAnnounce_EventCine_C_OnClientAnnouncementStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AAnnounce_EventCine_C::OnPlayerSkippedCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene");

	AAnnounce_EventCine_C_OnPlayerSkippedCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAnnounce_EventCine_C::HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying");

	AAnnounce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.HandleAllowSkip
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_EventCine_C::HandleAllowSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.HandleAllowSkip");

	AAnnounce_EventCine_C_HandleAllowSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_EventCine_C::ExecuteUbergraph_Announce_EventCine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine");

	AAnnounce_EventCine_C_ExecuteUbergraph_Announce_EventCine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

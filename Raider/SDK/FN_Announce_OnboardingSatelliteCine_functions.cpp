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

// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.UserConstructionScript");

	AAnnounce_OnboardingSatelliteCine_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnStateEntered_9B2A7CB14D8998F7D97BBB902DE431B7
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnStateEntered_9B2A7CB14D8998F7D97BBB902DE431B7()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnStateEntered_9B2A7CB14D8998F7D97BBB902DE431B7");

	AAnnounce_OnboardingSatelliteCine_C_OnStateEntered_9B2A7CB14D8998F7D97BBB902DE431B7_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnStateEntered_9AA291E3426E3967D1365A9851D878CE
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnStateEntered_9AA291E3426E3967D1365A9851D878CE()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnStateEntered_9AA291E3426E3967D1365A9851D878CE");

	AAnnounce_OnboardingSatelliteCine_C_OnStateEntered_9AA291E3426E3967D1365A9851D878CE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnClientAnnouncementStart
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnClientAnnouncementStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnClientAnnouncementStart");

	AAnnounce_OnboardingSatelliteCine_C_OnClientAnnouncementStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnClientAnnouncementStop
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnClientAnnouncementStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnClientAnnouncementStop");

	AAnnounce_OnboardingSatelliteCine_C_OnClientAnnouncementStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnPlayerSkippedCutscene
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::OnPlayerSkippedCutscene()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.OnPlayerSkippedCutscene");

	AAnnounce_OnboardingSatelliteCine_C_OnPlayerSkippedCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleClientEvent_CinematicFinishedPlaying
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAnnounce_OnboardingSatelliteCine_C::HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleClientEvent_CinematicFinishedPlaying");

	AAnnounce_OnboardingSatelliteCine_C_HandleClientEvent_CinematicFinishedPlaying_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleAllowSkip
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_OnboardingSatelliteCine_C::HandleAllowSkip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.HandleAllowSkip");

	AAnnounce_OnboardingSatelliteCine_C_HandleAllowSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.ExecuteUbergraph_Announce_OnboardingSatelliteCine
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_OnboardingSatelliteCine_C::ExecuteUbergraph_Announce_OnboardingSatelliteCine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Announce_OnboardingSatelliteCine.Announce_OnboardingSatelliteCine_C.ExecuteUbergraph_Announce_OnboardingSatelliteCine");

	AAnnounce_OnboardingSatelliteCine_C_ExecuteUbergraph_Announce_OnboardingSatelliteCine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

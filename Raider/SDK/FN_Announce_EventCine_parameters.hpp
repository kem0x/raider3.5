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

// Function Announce_EventCine.Announce_EventCine_C.UserConstructionScript
struct AAnnounce_EventCine_C_UserConstructionScript_Params
{
};

// Function Announce_EventCine.Announce_EventCine_C.OnStateEntered_2FC6E2894145586A1A4AF69426273130
struct AAnnounce_EventCine_C_OnStateEntered_2FC6E2894145586A1A4AF69426273130_Params
{
};

// Function Announce_EventCine.Announce_EventCine_C.OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC
struct AAnnounce_EventCine_C_OnStateEntered_132DA3B4468BA1009280CFB4D4C2D0AC_Params
{
};

// Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStart
struct AAnnounce_EventCine_C_OnClientAnnouncementStart_Params
{
};

// Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop
struct AAnnounce_EventCine_C_OnClientAnnouncementStop_Params
{
};

// Function Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene
struct AAnnounce_EventCine_C_OnPlayerSkippedCutscene_Params
{
};

// Function Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying
struct AAnnounce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Announce_EventCine.Announce_EventCine_C.HandleAllowSkip
struct AAnnounce_EventCine_C_HandleAllowSkip_Params
{
};

// Function Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine
struct AAnnounce_EventCine_C_ExecuteUbergraph_Announce_EventCine_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

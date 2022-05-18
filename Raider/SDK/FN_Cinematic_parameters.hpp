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

// Function Cinematic.Cinematic_C.GetAudioTrackIndex
struct UCinematic_C_GetAudioTrackIndex_Params
{
	int                                                AudioTrack;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Cinematic.Cinematic_C.StopAndClearSubtitles
struct UCinematic_C_StopAndClearSubtitles_Params
{
};

// Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary
struct UCinematic_C_ClearOldSubtitlesIfNecessary_Params
{
	bool                                               NewSubtitlesExist;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortMediaSubtitlesPlayer*                   NewSubtitles;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cinematic.Cinematic_C.SetMoviePlaying
struct UCinematic_C_SetMoviePlaying_Params
{
	bool                                               MoviePlaying;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cinematic.Cinematic_C.ClearMovieWidget
struct UCinematic_C_ClearMovieWidget_Params
{
	class UFortMovieWidget*                            MovieWidgetToClear;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function Cinematic.Cinematic_C.ClearMovieSlot
struct UCinematic_C_ClearMovieSlot_Params
{
	class UPanelWidget*                                MovieSlotToClear;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function Cinematic.Cinematic_C.PopContentWidgetInternal
struct UCinematic_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Cinematic.Cinematic_C.SkipMovie
struct UCinematic_C_SkipMovie_Params
{
};

// Function Cinematic.Cinematic_C.ClearMovie
struct UCinematic_C_ClearMovie_Params
{
};

// Function Cinematic.Cinematic_C.ShowMovie
struct UCinematic_C_ShowMovie_Params
{
	class UMediaSource*                                MediaSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UNamedSlot*                                  MovieSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	class UMovieWidget_C*                              MovieWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function Cinematic.Cinematic_C.Construct
struct UCinematic_C_Construct_Params
{
};

// Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic
struct UCinematic_C_HandleClientEvent_QueueCinematic_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Cinematic.Cinematic_C.Destruct
struct UCinematic_C_Destruct_Params
{
};

// Function Cinematic.Cinematic_C.HandleEndReached
struct UCinematic_C_HandleEndReached_Params
{
};

// Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic
struct UCinematic_C_HandleClientEvent_SkipCinematic_Params
{
	class UObject*                                     EventSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortClientEvent                            ClientEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Cinematic.Cinematic_C.PushContentWidgetInternal
struct UCinematic_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Cinematic.Cinematic_C.OnEnterState
struct UCinematic_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cinematic.Cinematic_C.OnExitState
struct UCinematic_C_OnExitState_Params
{
	EFortUIState*                                      NextUIState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cinematic.Cinematic_C.OnMediaEvent
struct UCinematic_C_OnMediaEvent_Params
{
};

// Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic
struct UCinematic_C_ExecuteUbergraph_Cinematic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

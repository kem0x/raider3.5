#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.HasMediaPlayer
struct UActivatableMovieWidget_C_HasMediaPlayer_Params
{
	bool                                               HasMediaPlayer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMouseButtonDown
struct UActivatableMovieWidget_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnTouchStarted
struct UActivatableMovieWidget_C_OnTouchStarted_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              InTouchEvent;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnKeyDown
struct UActivatableMovieWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.BindDelegates
struct UActivatableMovieWidget_C_BindDelegates_Params
{
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.PlayMovie
struct UActivatableMovieWidget_C_PlayMovie_Params
{
	class UFileMediaSource*                            MediaSource;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortMediaSubtitlesPlayer*                   SubtitlePlayer;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.GetAudioTrackIndex
struct UActivatableMovieWidget_C_GetAudioTrackIndex_Params
{
	int                                                AudioTrack;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnEndReached
struct UActivatableMovieWidget_C_OnEndReached_Params
{
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaClosed
struct UActivatableMovieWidget_C_OnMediaClosed_Params
{
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaReadyToPlay
struct UActivatableMovieWidget_C_OnMediaReadyToPlay_Params
{
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaOpenFailed
struct UActivatableMovieWidget_C_OnMediaOpenFailed_Params
{
	struct FString                                     Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaFailedToOpen
struct UActivatableMovieWidget_C_OnMediaFailedToOpen_Params
{
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
struct UActivatableMovieWidget_C_BndEvt__SkipButton_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.ExecuteUbergraph_ActivatableMovieWidget
struct UActivatableMovieWidget_C_ExecuteUbergraph_ActivatableMovieWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.MovieFinished__DelegateSignature
struct UActivatableMovieWidget_C_MovieFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

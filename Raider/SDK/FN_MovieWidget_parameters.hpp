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

// Function MovieWidget.MovieWidget_C.SetDelayedContentValues
struct UMovieWidget_C_SetDelayedContentValues_Params
{
};

// Function MovieWidget.MovieWidget_C.Play
struct UMovieWidget_C_Play_Params
{
	bool                                               ShouldRewind;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieWidget.MovieWidget_C.StopPlaying
struct UMovieWidget_C_StopPlaying_Params
{
};

// Function MovieWidget.MovieWidget_C.Init
struct UMovieWidget_C_Init_Params
{
	class UMediaSource*                                InMediaSource;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InMediaSoundWave;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieWidget.MovieWidget_C.Destruct
struct UMovieWidget_C_Destruct_Params
{
};

// Function MovieWidget.MovieWidget_C.MediaDimensionsUpdated
struct UMovieWidget_C_MediaDimensionsUpdated_Params
{
	float*                                             NewWidth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             NewHeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieWidget.MovieWidget_C.OnMediaLoaded
struct UMovieWidget_C_OnMediaLoaded_Params
{
};

// Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget
struct UMovieWidget_C_ExecuteUbergraph_MovieWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MovieWidget.MovieWidget_C.OnMediaFailedToOpen__DelegateSignature
struct UMovieWidget_C_OnMediaFailedToOpen__DelegateSignature_Params
{
};

// Function MovieWidget.MovieWidget_C.OnMediaReadyToPlay__DelegateSignature
struct UMovieWidget_C_OnMediaReadyToPlay__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

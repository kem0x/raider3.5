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

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop
struct UFortMediaSubtitlesPlayer_Stop_Params
{
};

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles
struct UFortMediaSubtitlesPlayer_SetSubtitles_Params
{
	class UOverlays*                                   Subtitles;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play
struct UFortMediaSubtitlesPlayer_Play_Params
{
};

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer
struct UFortMediaSubtitlesPlayer_BindToMediaPlayer_Params
{
	class UMediaPlayer*                                InMediaPlayer;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles
struct USubtitleDisplay_HasSubtitles_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

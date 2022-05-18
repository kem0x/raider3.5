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

// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop
// (Final, Native, Public, BlueprintCallable)

void UFortMediaSubtitlesPlayer::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop");

	UFortMediaSubtitlesPlayer_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UOverlays*               Subtitles                      (Parm, ZeroConstructor, IsPlainOldData)

void UFortMediaSubtitlesPlayer::SetSubtitles(class UOverlays* Subtitles)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles");

	UFortMediaSubtitlesPlayer_SetSubtitles_Params params;
	params.Subtitles = Subtitles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play
// (Final, Native, Public, BlueprintCallable)

void UFortMediaSubtitlesPlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play");

	UFortMediaSubtitlesPlayer_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*            InMediaPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UFortMediaSubtitlesPlayer::BindToMediaPlayer(class UMediaPlayer* InMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer");

	UFortMediaSubtitlesPlayer_BindToMediaPlayer_Params params;
	params.InMediaPlayer = InMediaPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USubtitleDisplay::HasSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles");

	USubtitleDisplay_HasSubtitles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

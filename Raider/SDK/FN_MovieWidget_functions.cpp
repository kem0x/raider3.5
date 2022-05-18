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

// Function MovieWidget.MovieWidget_C.SetDelayedContentValues
// (Public, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::SetDelayedContentValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.SetDelayedContentValues");

	UMovieWidget_C_SetDelayedContentValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldRewind                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovieWidget_C::Play(bool ShouldRewind)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.Play");

	UMovieWidget_C_Play_Params params;
	params.ShouldRewind = ShouldRewind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.StopPlaying
// (Public, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::StopPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.StopPlaying");

	UMovieWidget_C_StopPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*            InMediaSource                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InMediaSoundWave               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovieWidget_C::Init(class UMediaSource* InMediaSource, class UObject* InMediaSoundWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.Init");

	UMovieWidget_C_Init_Params params;
	params.InMediaSource = InMediaSource;
	params.InMediaSoundWave = InMediaSoundWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMovieWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.Destruct");

	UMovieWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.MediaDimensionsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         NewWidth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovieWidget_C::MediaDimensionsUpdated(float* NewWidth, float* NewHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.MediaDimensionsUpdated");

	UMovieWidget_C_MediaDimensionsUpdated_Params params;
	params.NewWidth = NewWidth;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.OnMediaLoaded
// (BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::OnMediaLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.OnMediaLoaded");

	UMovieWidget_C_OnMediaLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMovieWidget_C::ExecuteUbergraph_MovieWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.ExecuteUbergraph_MovieWidget");

	UMovieWidget_C_ExecuteUbergraph_MovieWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MovieWidget.MovieWidget_C.OnMediaReadyToPlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMovieWidget_C::OnMediaReadyToPlay__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieWidget.MovieWidget_C.OnMediaReadyToPlay__DelegateSignature");

	UMovieWidget_C_OnMediaReadyToPlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

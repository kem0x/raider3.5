// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ActivatableMovieWidget.ActivatableMovieWidget_C.HasMediaPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasMediaPlayer                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActivatableMovieWidget_C::HasMediaPlayer(bool* HasMediaPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.HasMediaPlayer");

	UActivatableMovieWidget_C_HasMediaPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasMediaPlayer != nullptr)
		*HasMediaPlayer = params.HasMediaPlayer;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UActivatableMovieWidget_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMouseButtonDown");

	UActivatableMovieWidget_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          InTouchEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UActivatableMovieWidget_C::OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnTouchStarted");

	UActivatableMovieWidget_C_OnTouchStarted_Params params;
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UActivatableMovieWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnKeyDown");

	UActivatableMovieWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UActivatableMovieWidget_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.BindDelegates");

	UActivatableMovieWidget_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.PlayMovie
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFileMediaSource*        MediaSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortMediaSubtitlesPlayer* SubtitlePlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActivatableMovieWidget_C::PlayMovie(class UFileMediaSource* MediaSource, class UFortMediaSubtitlesPlayer* SubtitlePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.PlayMovie");

	UActivatableMovieWidget_C_PlayMovie_Params params;
	params.MediaSource = MediaSource;
	params.SubtitlePlayer = SubtitlePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.GetAudioTrackIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AudioTrack                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UActivatableMovieWidget_C::GetAudioTrackIndex(int* AudioTrack)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.GetAudioTrackIndex");

	UActivatableMovieWidget_C_GetAudioTrackIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AudioTrack != nullptr)
		*AudioTrack = params.AudioTrack;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnEndReached
// (BlueprintCallable, BlueprintEvent)

void UActivatableMovieWidget_C::OnEndReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnEndReached");

	UActivatableMovieWidget_C_OnEndReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaClosed
// (BlueprintCallable, BlueprintEvent)

void UActivatableMovieWidget_C::OnMediaClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaClosed");

	UActivatableMovieWidget_C_OnMediaClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaReadyToPlay
// (BlueprintCallable, BlueprintEvent)

void UActivatableMovieWidget_C::OnMediaReadyToPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaReadyToPlay");

	UActivatableMovieWidget_C_OnMediaReadyToPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaOpenFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UActivatableMovieWidget_C::OnMediaOpenFailed(const struct FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaOpenFailed");

	UActivatableMovieWidget_C_OnMediaOpenFailed_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaFailedToOpen
// (BlueprintCallable, BlueprintEvent)

void UActivatableMovieWidget_C::OnMediaFailedToOpen()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.OnMediaFailedToOpen");

	UActivatableMovieWidget_C_OnMediaFailedToOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UActivatableMovieWidget_C::BndEvt__SkipButton_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature");

	UActivatableMovieWidget_C_BndEvt__SkipButton_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.ExecuteUbergraph_ActivatableMovieWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActivatableMovieWidget_C::ExecuteUbergraph_ActivatableMovieWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.ExecuteUbergraph_ActivatableMovieWidget");

	UActivatableMovieWidget_C_ExecuteUbergraph_ActivatableMovieWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivatableMovieWidget.ActivatableMovieWidget_C.MovieFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UActivatableMovieWidget_C::MovieFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivatableMovieWidget.ActivatableMovieWidget_C.MovieFinished__DelegateSignature");

	UActivatableMovieWidget_C_MovieFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function MusicManager.MusicManager_C.ResetMusicBools
// (Protected, BlueprintCallable, BlueprintEvent)

void AMusicManager_C::ResetMusicBools()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ResetMusicBools");

	AMusicManager_C_ResetMusicBools_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMusicManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.UserConstructionScript");

	AMusicManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__FinishedFunc
// (BlueprintEvent)

void AMusicManager_C::Gameplay_Music_Fader__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Gameplay Music Fader__FinishedFunc");

	AMusicManager_C_Gameplay_Music_Fader__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__UpdateFunc
// (BlueprintEvent)

void AMusicManager_C::Gameplay_Music_Fader__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Gameplay Music Fader__UpdateFunc");

	AMusicManager_C_Gameplay_Music_Fader__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortDayPhase>*    CurrentDayPhase                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortDayPhase>*    PreviousDayPhase               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAtCreation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::OnDayPhaseChanged(TEnumAsByte<EFortDayPhase>* CurrentDayPhase, TEnumAsByte<EFortDayPhase>* PreviousDayPhase, bool* bAtCreation)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.OnDayPhaseChanged");

	AMusicManager_C_OnDayPhaseChanged_Params params;
	params.CurrentDayPhase = CurrentDayPhase;
	params.PreviousDayPhase = PreviousDayPhase;
	params.bAtCreation = bAtCreation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.OnUpdateMusic
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::OnUpdateMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.OnUpdateMusic");

	AMusicManager_C_OnUpdateMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.PlayAmbientMusic
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::PlayAmbientMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.PlayAmbientMusic");

	AMusicManager_C_PlayAmbientMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMusicManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ReceiveBeginPlay");

	AMusicManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.On Music Tick
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::On_Music_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.On Music Tick");

	AMusicManager_C_On_Music_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.PlayStinger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicAsset**        NewMusicAsset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::PlayStinger(class UFortMusicAsset** NewMusicAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.PlayStinger");

	AMusicManager_C_PlayStinger_Params params;
	params.NewMusicAsset = NewMusicAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Music Fade In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::Music_Fade_In(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Music Fade In");

	AMusicManager_C_Music_Fade_In_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.Music Fade Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::Music_Fade_Out(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.Music Fade Out");

	AMusicManager_C_Music_Fade_Out_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.On Stinger Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicVoice*         Voice                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::On_Stinger_Completed(class UFortMusicVoice* Voice)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.On Stinger Completed");

	AMusicManager_C_On_Stinger_Completed_Params params;
	params.Voice = Voice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMusicManager_C::ExecuteUbergraph_MusicManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager");

	AMusicManager_C_ExecuteUbergraph_MusicManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

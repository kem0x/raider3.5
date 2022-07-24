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

// Function AthenaScorePopup.AthenaScorePopup_C.ResetSoundPitch
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaScorePopup_C::ResetSoundPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScorePopup.AthenaScorePopup_C.ResetSoundPitch");

	UAthenaScorePopup_C_ResetSoundPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScorePopup.AthenaScorePopup_C.IncrementSoundPitch
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaScorePopup_C::IncrementSoundPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScorePopup.AthenaScorePopup_C.IncrementSoundPitch");

	UAthenaScorePopup_C_IncrementSoundPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScorePopup.AthenaScorePopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaScorePopup_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScorePopup.AthenaScorePopup_C.Construct");

	UAthenaScorePopup_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScorePopup.AthenaScorePopup_C.OnNewScoreEarned
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           NewScoreValue                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  NewScoreTypeText               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int*                           BigScoreThreshold              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaScorePopup_C::OnNewScoreEarned(int* NewScoreValue, struct FText* NewScoreTypeText, int* BigScoreThreshold)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScorePopup.AthenaScorePopup_C.OnNewScoreEarned");

	UAthenaScorePopup_C_OnNewScoreEarned_Params params;
	params.NewScoreValue = NewScoreValue;
	params.NewScoreTypeText = NewScoreTypeText;
	params.BigScoreThreshold = BigScoreThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScorePopup.AthenaScorePopup_C.Timeout
// (BlueprintCallable, BlueprintEvent)

void UAthenaScorePopup_C::Timeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScorePopup.AthenaScorePopup_C.Timeout");

	UAthenaScorePopup_C_Timeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScorePopup.AthenaScorePopup_C.ScoreComplete
// (BlueprintCallable, BlueprintEvent)

void UAthenaScorePopup_C::ScoreComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScorePopup.AthenaScorePopup_C.ScoreComplete");

	UAthenaScorePopup_C_ScoreComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScorePopup.AthenaScorePopup_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaScorePopup_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScorePopup.AthenaScorePopup_C.PreConstruct");

	UAthenaScorePopup_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaScorePopup.AthenaScorePopup_C.ExecuteUbergraph_AthenaScorePopup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaScorePopup_C::ExecuteUbergraph_AthenaScorePopup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaScorePopup.AthenaScorePopup_C.ExecuteUbergraph_AthenaScorePopup");

	UAthenaScorePopup_C_ExecuteUbergraph_AthenaScorePopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

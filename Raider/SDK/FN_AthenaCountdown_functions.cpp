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

// Function AthenaCountdown.AthenaCountdown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaCountdown_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCountdown.AthenaCountdown_C.Construct");

	UAthenaCountdown_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCountdown.AthenaCountdown_C.OnCountdownUpdate
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  CountdownUpdateText            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaCountdown_C::OnCountdownUpdate(int* TimeRemaining, struct FText* CountdownUpdateText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCountdown.AthenaCountdown_C.OnCountdownUpdate");

	UAthenaCountdown_C_OnCountdownUpdate_Params params;
	params.TimeRemaining = TimeRemaining;
	params.CountdownUpdateText = CountdownUpdateText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCountdown.AthenaCountdown_C.OnCountdownFinished
// (Event, Protected, BlueprintEvent)

void UAthenaCountdown_C::OnCountdownFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCountdown.AthenaCountdown_C.OnCountdownFinished");

	UAthenaCountdown_C_OnCountdownFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCountdown.AthenaCountdown_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCountdown_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCountdown.AthenaCountdown_C.Tick");

	UAthenaCountdown_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCountdown.AthenaCountdown_C.Set Countdown Loop Audio Enabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCountdown_C::Set_Countdown_Loop_Audio_Enabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCountdown.AthenaCountdown_C.Set Countdown Loop Audio Enabled");

	UAthenaCountdown_C_Set_Countdown_Loop_Audio_Enabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCountdown.AthenaCountdown_C.InitializeCountdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaCountdown_C::InitializeCountdown(int TimeRemaining, const struct FText& DisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCountdown.AthenaCountdown_C.InitializeCountdown");

	UAthenaCountdown_C_InitializeCountdown_Params params;
	params.TimeRemaining = TimeRemaining;
	params.DisplayText = DisplayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCountdown.AthenaCountdown_C.OnDisplayWarningMessage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  FirstLineText                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText*                  SecondLineText                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaCountdown_C::OnDisplayWarningMessage(struct FText* FirstLineText, struct FText* SecondLineText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCountdown.AthenaCountdown_C.OnDisplayWarningMessage");

	UAthenaCountdown_C_OnDisplayWarningMessage_Params params;
	params.FirstLineText = FirstLineText;
	params.SecondLineText = SecondLineText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaCountdown.AthenaCountdown_C.ExecuteUbergraph_AthenaCountdown
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaCountdown_C::ExecuteUbergraph_AthenaCountdown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaCountdown.AthenaCountdown_C.ExecuteUbergraph_AthenaCountdown");

	UAthenaCountdown_C_ExecuteUbergraph_AthenaCountdown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

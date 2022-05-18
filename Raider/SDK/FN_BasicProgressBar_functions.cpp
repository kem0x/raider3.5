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

// Function BasicProgressBar.BasicProgressBar_C.SetSecondaryBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicProgressBar_C::SetSecondaryBar(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicProgressBar.BasicProgressBar_C.SetSecondaryBar");

	UBasicProgressBar_C_SetSecondaryBar_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicProgressBar.BasicProgressBar_C.DecrementPrimaryByPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewHealthPercentage            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicProgressBar_C::DecrementPrimaryByPercentage(float NewHealthPercentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicProgressBar.BasicProgressBar_C.DecrementPrimaryByPercentage");

	UBasicProgressBar_C_DecrementPrimaryByPercentage_Params params;
	params.NewHealthPercentage = NewHealthPercentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicProgressBar.BasicProgressBar_C.SetPrimaryBarValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicProgressBar_C::SetPrimaryBarValue(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicProgressBar.BasicProgressBar_C.SetPrimaryBarValue");

	UBasicProgressBar_C_SetPrimaryBarValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicProgressBar.BasicProgressBar_C.UpdateHealthBar
// (Public, BlueprintCallable, BlueprintEvent)

void UBasicProgressBar_C::UpdateHealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicProgressBar.BasicProgressBar_C.UpdateHealthBar");

	UBasicProgressBar_C_UpdateHealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicProgressBar.BasicProgressBar_C.Toggle Timer for Secondary Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimerDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           LoopTimer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicProgressBar_C::Toggle_Timer_for_Secondary_Bar(bool IsEnabled, float TimerDuration, bool LoopTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicProgressBar.BasicProgressBar_C.Toggle Timer for Secondary Bar");

	UBasicProgressBar_C_Toggle_Timer_for_Secondary_Bar_Params params;
	params.IsEnabled = IsEnabled;
	params.TimerDuration = TimerDuration;
	params.LoopTimer = LoopTimer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicProgressBar.BasicProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBasicProgressBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicProgressBar.BasicProgressBar_C.Construct");

	UBasicProgressBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicProgressBar.BasicProgressBar_C.ExecuteUbergraph_BasicProgressBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicProgressBar_C::ExecuteUbergraph_BasicProgressBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicProgressBar.BasicProgressBar_C.ExecuteUbergraph_BasicProgressBar");

	UBasicProgressBar_C_ExecuteUbergraph_BasicProgressBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

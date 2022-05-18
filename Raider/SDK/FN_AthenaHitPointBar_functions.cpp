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

// Function AthenaHitPointBar.AthenaHitPointBar_C.SetSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           useLargeSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::SetSize(bool useLargeSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.SetSize");

	UAthenaHitPointBar_C_SetSize_Params params;
	params.useLargeSize = useLargeSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateDBNOState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsDBNO                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::UpdateDBNOState(bool bIsDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateDBNOState");

	UAthenaHitPointBar_C_UpdateDBNOState_Params params;
	params.bIsDBNO = bIsDBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateHealthType
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHitPointBar_C::UpdateHealthType()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateHealthType");

	UAthenaHitPointBar_C_UpdateHealthType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Delta Bar
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHitPointBar_C::Update_Delta_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Update Delta Bar");

	UAthenaHitPointBar_C_Update_Delta_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Initialize Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaHitPointBar_C::Initialize_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Initialize Bar");

	UAthenaHitPointBar_C_Initialize_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Fill Bar
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaHitPointBar_C::Update_Fill_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.Update Fill Bar");

	UAthenaHitPointBar_C_Update_Fill_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaHitPointBar_C::UpdateCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValue");

	UAthenaHitPointBar_C_UpdateCurrentValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateMaxValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaHitPointBar_C::UpdateMaxValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateMaxValue");

	UAthenaHitPointBar_C_UpdateMaxValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.PreConstruct");

	UAthenaHitPointBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.OnMaxValueChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::OnMaxValueChanged(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.OnMaxValueChanged");

	UAthenaHitPointBar_C_OnMaxValueChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.OnValueChangedWithReason
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortHitPointModificationReason* Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::OnValueChangedWithReason(float* Value, EFortHitPointModificationReason* Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.OnValueChangedWithReason");

	UAthenaHitPointBar_C_OnValueChangedWithReason_Params params;
	params.Value = Value;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.OnDBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          IsDBNO                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::OnDBNOStateChanged(bool* IsDBNO)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.OnDBNOStateChanged");

	UAthenaHitPointBar_C_OnDBNOStateChanged_Params params;
	params.IsDBNO = IsDBNO;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.OnDeltaChanged
// (Event, Protected, BlueprintEvent)

void UAthenaHitPointBar_C::OnDeltaChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.OnDeltaChanged");

	UAthenaHitPointBar_C_OnDeltaChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaHitPointBar.AthenaHitPointBar_C.ExecuteUbergraph_AthenaHitPointBar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaHitPointBar_C::ExecuteUbergraph_AthenaHitPointBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaHitPointBar.AthenaHitPointBar_C.ExecuteUbergraph_AthenaHitPointBar");

	UAthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

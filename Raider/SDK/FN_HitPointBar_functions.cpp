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

// Function HitPointBar.HitPointBar_C.SetInitialValues
// (Public, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::SetInitialValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.SetInitialValues");

	UHitPointBar_C_SetInitialValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.UpdateVolatileForUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::UpdateVolatileForUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.UpdateVolatileForUpdate");

	UHitPointBar_C_UpdateVolatileForUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.Update");

	UHitPointBar_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.Update Delta Bar
// (Public, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::Update_Delta_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.Update Delta Bar");

	UHitPointBar_C_Update_Delta_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.Initialize Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::Initialize_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.Initialize Bar");

	UHitPointBar_C_Initialize_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.UpdateCurrentValueWithoutReason
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitPointBar_C::UpdateCurrentValueWithoutReason(float Current)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.UpdateCurrentValueWithoutReason");

	UHitPointBar_C_UpdateCurrentValueWithoutReason_Params params;
	params.Current = Current;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.Update Fill Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHitPointBar_C::Update_Fill_Bar()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.Update Fill Bar");

	UHitPointBar_C_Update_Fill_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.UpdateCurrentValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortHitPointModificationReason Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitPointBar_C::UpdateCurrentValue(float Current, EFortHitPointModificationReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.UpdateCurrentValue");

	UHitPointBar_C_UpdateCurrentValue_Params params;
	params.Current = Current;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.UpdateMaxValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitPointBar_C::UpdateMaxValue(float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.UpdateMaxValue");

	UHitPointBar_C_UpdateMaxValue_Params params;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitPointBar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.PreConstruct");

	UHitPointBar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitPointBar_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.Tick");

	UHitPointBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitPointBar.HitPointBar_C.ExecuteUbergraph_HitPointBar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitPointBar_C::ExecuteUbergraph_HitPointBar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitPointBar.HitPointBar_C.ExecuteUbergraph_HitPointBar");

	UHitPointBar_C_ExecuteUbergraph_HitPointBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

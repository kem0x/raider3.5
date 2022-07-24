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

// Function PhoneInfo.PhoneInfo_C.ClockTimerUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPhoneInfo_C::ClockTimerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhoneInfo.PhoneInfo_C.ClockTimerUpdate");

	UPhoneInfo_C_ClockTimerUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhoneInfo.PhoneInfo_C.BatteryTimerUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UPhoneInfo_C::BatteryTimerUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhoneInfo.PhoneInfo_C.BatteryTimerUpdate");

	UPhoneInfo_C_BatteryTimerUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhoneInfo.PhoneInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPhoneInfo_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PhoneInfo.PhoneInfo_C.Construct");

	UPhoneInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhoneInfo.PhoneInfo_C.On Low Perf Mode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInLowPerformanceMode          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPhoneInfo_C::On_Low_Perf_Mode(bool bInLowPerformanceMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhoneInfo.PhoneInfo_C.On Low Perf Mode");

	UPhoneInfo_C_On_Low_Perf_Mode_Params params;
	params.bInLowPerformanceMode = bInLowPerformanceMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PhoneInfo.PhoneInfo_C.ExecuteUbergraph_PhoneInfo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPhoneInfo_C::ExecuteUbergraph_PhoneInfo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PhoneInfo.PhoneInfo_C.ExecuteUbergraph_PhoneInfo");

	UPhoneInfo_C_ExecuteUbergraph_PhoneInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

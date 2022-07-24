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

// Function TimeManagement.TimeSynchronizationManagerHelpers.IsSynchronizing
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimeSynchronizationManagerHelpers::STATIC_IsSynchronizing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeSynchronizationManagerHelpers.IsSynchronizing");

	UTimeSynchronizationManagerHelpers_IsSynchronizing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeSynchronizationManagerHelpers.IsSynchronized
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimeSynchronizationManagerHelpers::STATIC_IsSynchronized()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeSynchronizationManagerHelpers.IsSynchronized");

	UTimeSynchronizationManagerHelpers_IsSynchronized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeSynchronizationManagerHelpers.GetCurrentTimecode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTimecode               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTimecode UTimeSynchronizationManagerHelpers::STATIC_GetCurrentTimecode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeSynchronizationManagerHelpers.GetCurrentTimecode");

	UTimeSynchronizationManagerHelpers_GetCurrentTimecode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          TimeInSeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FFrameRate              FrameRate                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FFrameTime              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FFrameTime UTimeManagementBlueprintLibrary::STATIC_Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate");

	UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params params;
	params.TimeInSeconds = TimeInSeconds;
	params.FrameRate = FrameRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FQualifiedFrameTime     InFrameTime                    (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTimeManagementBlueprintLibrary::STATIC_Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds");

	UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params params;
	params.InFrameTime = InFrameTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFrameRate              InFrameRate                    (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTimeManagementBlueprintLibrary::STATIC_Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds");

	UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params params;
	params.InFrameRate = InFrameRate;

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

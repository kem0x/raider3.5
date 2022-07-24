#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TimeManagement.TimeSynchronizationManagerHelpers.IsSynchronizing
struct UTimeSynchronizationManagerHelpers_IsSynchronizing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeManagement.TimeSynchronizationManagerHelpers.IsSynchronized
struct UTimeSynchronizationManagerHelpers_IsSynchronized_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeManagement.TimeSynchronizationManagerHelpers.GetCurrentTimecode
struct UTimeSynchronizationManagerHelpers_GetCurrentTimecode_Params
{
	struct FTimecode                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate
struct UTimeManagementBlueprintLibrary_Multiply_SecondsFrameRate_Params
{
	float                                              TimeInSeconds;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFrameRate                                  FrameRate;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FFrameTime                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds
struct UTimeManagementBlueprintLibrary_Conv_QualifiedFrameTimeToSeconds_Params
{
	struct FQualifiedFrameTime                         InFrameTime;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds
struct UTimeManagementBlueprintLibrary_Conv_FrameRateToSeconds_Params
{
	struct FFrameRate                                  InFrameRate;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

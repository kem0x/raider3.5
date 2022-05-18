#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
struct ULinearTimecodeComponent_SetDropTimecodeFrameNumber_Params
{
	struct FDropTimecode                               Timecode;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                FrameNumber;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDropTimecode                               OutTimecode;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
struct ULinearTimecodeComponent_GetDropTimeCodeFrameNumber_Params
{
	struct FDropTimecode                               Timecode;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	int                                                FrameNumber;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
struct ULinearTimecodeComponent_GetDropFrameNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
struct UDropTimecodeToStringConversion_Conv_DropTimecodeToString_Params
{
	struct FDropTimecode                               InTimecode;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

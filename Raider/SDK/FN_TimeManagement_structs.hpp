#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	NonDropFrameTimecode           = 0,
	DropFrameTimecode              = 1,
	Seconds                        = 2,
	Frames                         = 3,
	MAX_Count                      = 4,
	EFrameNumberDisplayFormats_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TimeManagement.FrameRate
// 0x0008
struct FFrameRate
{
	int                                                Numerator;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Denominator;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TimeManagement.Timecode
// 0x0014
struct FTimecode
{
	int                                                Hours;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Seconds;                                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Frames;                                                   // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDropFrameFormat;                                         // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct TimeManagement.FrameNumber
// 0x0004
struct FFrameNumber
{
	int                                                Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TimeManagement.FrameTime
// 0x0008
struct FFrameTime
{
	struct FFrameNumber                                FrameNumber;                                              // 0x0000(0x0004) (BlueprintVisible)
	float                                              SubFrame;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct TimeManagement.QualifiedFrameTime
// 0x0010
struct FQualifiedFrameTime
{
	struct FFrameTime                                  Time;                                                     // 0x0000(0x0008) (BlueprintVisible)
	struct FFrameRate                                  Rate;                                                     // 0x0008(0x0008) (BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

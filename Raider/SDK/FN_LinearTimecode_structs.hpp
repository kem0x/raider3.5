#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LinearTimecode.DropTimecode
// 0x0028
struct FDropTimecode
{
	int                                                Hours;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Minutes;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Seconds;                                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Frame;                                                    // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Drop;                                                     // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrameRate;                                                // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Clock;                                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Color;                                                    // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Forward;                                                  // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NewFrame;                                                 // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

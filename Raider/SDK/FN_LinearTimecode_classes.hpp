#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LinearTimecode.LinearTimecodeComponent
// 0x0070 (0x0300 - 0x0290)
class ULinearTimecodeComponent : public USceneComponent
{
public:
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDropTimecode                               DropTimecode;                                             // 0x0298(0x0028) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTimecodeChange;                                         // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x02D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LinearTimecode.LinearTimecodeComponent");
		return ptr;
	}


	void STATIC_SetDropTimecodeFrameNumber(const struct FDropTimecode& Timecode, int FrameNumber, struct FDropTimecode* OutTimecode);
	void STATIC_GetDropTimeCodeFrameNumber(const struct FDropTimecode& Timecode, int* FrameNumber);
	int GetDropFrameNumber();
};


// Class LinearTimecode.DropTimecodeToStringConversion
// 0x0000 (0x0028 - 0x0028)
class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LinearTimecode.DropTimecodeToStringConversion");
		return ptr;
	}


	struct FString STATIC_Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

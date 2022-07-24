#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LinearTimecode.LinearTimecodeComponent
// 0x0070 (0x02B0 - 0x0240)
class ULinearTimecodeComponent : public USceneComponent
{
public:
	struct FDropTimecode                               DropTimecode;                                             // 0x0240(0x0028) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnTimecodeChange;                                         // 0x0268(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0278(0x0038) MISSED OFFSET

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

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

// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0008 (0x0030 - 0x0028)
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	struct FFrameRate                                  FixedFrameRate;                                           // 0x0028(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}

};


// Class TimeManagement.TimeSynchronizationManagerHelpers
// 0x0000 (0x0028 - 0x0028)
class UTimeSynchronizationManagerHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationManagerHelpers");
		return ptr;
	}


	bool STATIC_IsSynchronizing();
	bool STATIC_IsSynchronized();
	struct FTimecode STATIC_GetCurrentTimecode();
};


// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}


	struct FFrameTime STATIC_Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate);
	float STATIC_Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);
	float STATIC_Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);
};


// Class TimeManagement.TimeSynchronizationSource
// 0x0010 (0x0038 - 0x0028)
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                               bUseForSynchronization;                                   // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                NumberOfExtraBufferedFrame;                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeDelay;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

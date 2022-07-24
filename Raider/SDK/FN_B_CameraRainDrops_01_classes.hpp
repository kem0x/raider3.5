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

// BlueprintGeneratedClass B_CameraRainDrops_01.B_CameraRainDrops_01_C
// 0x0018 (0x03F8 - 0x03E0)
class AB_CameraRainDrops_01_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	float                                              Alpha_Alpha_06897833405CC2B231B02C93C4E725A3;             // 0x03E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Alpha__Direction_06897833405CC2B231B02C93C4E725A3;        // 0x03EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Alpha;                                                    // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_CameraRainDrops_01.B_CameraRainDrops_01_C");
		return ptr;
	}


	void UserConstructionScript();
	void Alpha__FinishedFunc();
	void Alpha__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_CameraRainDrops_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass BP_HoverDronePawn.BP_HoverDronePawn_C
// 0x004C (0x04B4 - 0x0468)
class ABP_HoverDronePawn_C : public AHoverDronePawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0468(0x0008) (Transient, DuplicateTransient)
	bool                                               WindAudioEnabled;                                         // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	class UAudioComponent*                             AltitudeWindAudioComp;                                    // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              WindAudioAltMin;                                          // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindAudioAltMax;                                          // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindAudioVolMin;                                          // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindAudioVolMax;                                          // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundWindMovementLoop;                                    // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoundWindAltitudeLoop;                                    // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentAltitudeWindVolume;                                // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Speed;                                                    // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             MovementWindAudioComp;                                    // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              CurrentMovementWindVolume;                                // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoverDronePawn.BP_HoverDronePawn_C");
		return ptr;
	}


	void GetWindVolumeFromAltitude(float Altitude, float* Volume);
	void SetWindAudioEnabled(bool Enabled);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ReceivePossessed(class AController** NewController);
	void ReceiveUnpossessed(class AController** OldController);
	void Update_Wind_Audio();
	void ExecuteUbergraph_BP_HoverDronePawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

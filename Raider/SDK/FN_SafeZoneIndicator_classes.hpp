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

// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
// 0x0090 (0x0580 - 0x04F0)
class ASafeZoneIndicator_C : public AFortSafeZoneIndicator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (Transient, DuplicateTransient)
	float                                              StormFadeTimeline_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C;// 0x04F8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    StormFadeTimeline__Direction_6FB75EFB416FB419D85F8797DEDD058C;// 0x04FC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04FD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          StormFadeTimeline;                                        // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeSafeZoneVisuals_LERP_E671C79642CD40ABC82D55BF6EBA9626;// 0x0508(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeSafeZoneVisuals__Direction_E671C79642CD40ABC82D55BF6EBA9626;// 0x050C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x050D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeSafeZoneVisuals;                                      // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ShieldBoundaryAudio;                                      // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  ShieldBoundaryLoopSound;                                  // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocalPlayerOutside;                                      // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	float                                              AudioCrossfade;                                           // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioPitchMod;                                            // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	class USoundBase*                                  HoldingLoopSound;                                         // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             HoldingAudio;                                             // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AAthena_GameState_C*                         GameState;                                                // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              HoldingStartTime;                                         // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0554(0x0004) MISSED OFFSET
	class USoundBase*                                  HoldingLoopTickSound;                                     // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             HoldingTickAudio;                                         // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SafeZoneMID;                                              // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioLowPassValue;                                        // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AudioStormFade;                                           // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HugeMovementFade;                                         // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextSafeZoneSweepSpeed;                                   // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C");
		return ptr;
	}


	void GetAthenaGameState(class AAthena_GameState_C** AthenaGS);
	void UpdateAudioComponentLocations();
	void HandleInsideOutsideMix();
	void InitClosestPointAudio();
	void UserConstructionScript();
	void FadeSafeZoneVisuals__FinishedFunc();
	void FadeSafeZoneVisuals__UpdateFunc();
	void StormFadeTimeline__FinishedFunc();
	void StormFadeTimeline__UpdateFunc();
	void OnSafeZoneStateChange(EFortSafeZoneState* NewState, bool* bInitial);
	void Apply_Lowpass_to_Audio();
	void ResetSafeZoneScale();
	void ReceiveTick(float* DeltaSeconds);
	void stormy(float NewParam);
	void ReceiveDestroyed();
	void OnBeginStartingStateEffectsEvent();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SafeZoneIndicator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

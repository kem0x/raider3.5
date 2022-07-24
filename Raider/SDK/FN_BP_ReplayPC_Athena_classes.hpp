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

// BlueprintGeneratedClass BP_ReplayPC_Athena.BP_ReplayPC_Athena_C
// 0x00A8 (0x1E18 - 0x1D70)
class ABP_ReplayPC_Athena_C : public AFortReplaySpectatorAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1D70(0x0008) (Transient, DuplicateTransient)
	TMap<float, class USoundMix*>                      PlaybackRateMap;                                          // 0x1D78(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CurrentPlayRate;                                          // 0x1DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFast;                                                  // 0x1DCC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1DCD(0x0003) MISSED OFFSET
	class UAudioComponent*                             SpeedupLoop;                                              // 0x1DD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             SlowdownLoop;                                             // 0x1DD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsHudVisible;                                            // 0x1DE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1DE1(0x0007) MISSED OFFSET
	class UAudioComponent*                             ZoomOutLoop;                                              // 0x1DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ZoomInLoop;                                               // 0x1DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsSkydivingAudioEnabled;                                 // 0x1DF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTargetParachuting;                                     // 0x1DF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTargetSkydiving;                                       // 0x1DFA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x1DFB(0x0005) MISSED OFFSET
	class UAudioComponent*                             SkydivingAudioLoop;                                       // 0x1E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bIsPaused;                                                // 0x1E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x1E09(0x0007) MISSED OFFSET
	class USoundBase*                                  CurrentSkydivingSound;                                    // 0x1E10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ReplayPC_Athena.BP_ReplayPC_Athena_C");
		return ptr;
	}


	void IsGameplayCamera(bool* IsGameplayCamera);
	void SetSkydivingAudioEnabled(bool Enabled);
	class USoundBase* GetSkydivingSound();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnNotifyNewPlaybackMultiplier(float* NewMultiplier);
	void _Speedup_Loops(float Playback_Multiplier);
	void OnReplayHudVisibilityChanged(EHudVisibilityState IsVisible);
	void OnZoomOutEnd();
	void OnZoomOutBegin();
	void OnZoomInEnd();
	void OnZoomInBegin();
	void On_Pause_State_Changed(bool bPaused);
	void Handle_Parachute_Audio_State();
	void Looping_Audio_Update();
	void ExecuteUbergraph_BP_ReplayPC_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

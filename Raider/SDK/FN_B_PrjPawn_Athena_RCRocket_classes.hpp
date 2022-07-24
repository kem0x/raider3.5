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

// BlueprintGeneratedClass B_PrjPawn_Athena_RCRocket.B_PrjPawn_Athena_RCRocket_C
// 0x0151 (0x2311 - 0x21C0)
class AB_PrjPawn_Athena_RCRocket_C : public AFortRemoteControlledPawnAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x21C0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Jet_Launch;                                               // 0x21C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               RideBox;                                                  // 0x21D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               HitBox;                                                   // 0x21D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPoseableMeshComponent*                      PoseableMissileMesh;                                      // 0x21E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BlinkingLight;                                            // 0x21E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LoadMissile;                                              // 0x21F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Jet;                                                      // 0x21F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MissileInAirBankingAudio;                                 // 0x2200(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             MissileInAirAudio;                                        // 0x2208(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ScaleUpRocket_ScaleRocket_AE4726BD4835EF8E9D886681DC468461;// 0x2210(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ScaleUpRocket__Direction_AE4726BD4835EF8E9D886681DC468461;// 0x221C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x221D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ScaleUpRocket;                                            // 0x2220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDetached;                                                // 0x2228(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTransformed;                                             // 0x2229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x222A(0x0006) MISSED OFFSET
	class USoundBase*                                  ExplosionSound;                                           // 0x2230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ExplosionPS;                                              // 0x2238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TransformationPS;                                         // 0x2240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TransformationSound;                                      // 0x2248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tick_Delta;                                               // 0x2250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentVector;                                            // 0x2254(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousVector;                                           // 0x2260(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LevelOutRotation;                                         // 0x226C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn_Rate;                                                // 0x2270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BankingAudioVolume;                                       // 0x2274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BankingAudioPitch;                                        // 0x2278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAudioModulator;                                       // 0x227C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAudioModulatorMax;                                    // 0x2280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x2284(0x0004) MISSED OFFSET
	struct FName                                       LeftWing;                                                 // 0x2288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightWing;                                                // 0x2290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TopWing;                                                  // 0x2298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BottomWing;                                               // 0x22A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AB_RCRocket_Launcher_Athena_C*               MissileLauncher;                                          // 0x22A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                SwapToIdleAnim;                                           // 0x22B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ControllerAnim;                                           // 0x22B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x22C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DelayBeforeMeshSwap;                                      // 0x22C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxFuelAmount;                                            // 0x22C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x22CC(0x0004) MISSED OFFSET
	struct FTimerHandle                                FuelTimer;                                                // 0x22D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  MissileInAirSound;                                        // 0x22D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  MissileLowFuelSound;                                      // 0x22E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             Missile_LowFuelWarning;                                   // 0x22E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ControllerRocketFX;                                       // 0x22F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ScreenSoundComponent;                                     // 0x22F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              DelayToggleRC_Vis;                                        // 0x2300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2304(0x0004) MISSED OFFSET
	class UParticleSystem*                             HologramRocket;                                           // 0x2308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasPlayedFuelWarningSound;                               // 0x2310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_PrjPawn_Athena_RCRocket.B_PrjPawn_Athena_RCRocket_C");
		return ptr;
	}


	void FuelLevelVisuals();
	void OnRep_bDetached();
	void UserConstructionScript();
	void ScaleUpRocket__FinishedFunc();
	void ScaleUpRocket__UpdateFunc();
	void OnNotifyEnd_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnNotifyBegin_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnInterrupted_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnBlendOut_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnCompleted_1C6565004725732561E54185F8C600B6(const struct FName& NotifyName);
	void OnNotifyEnd_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnNotifyBegin_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnInterrupted_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnBlendOut_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void OnCompleted_FCA2D54B4941303C809ADFA4DDC7D622(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void ReceiveUnpossessed(class AController** OldController);
	void OnTriggeredHealthThreshold(float* PreviousTriggeredHealthThreshold, float* CurrentTriggeredHealthThreshold);
	void ReceiveTick(float* DeltaSeconds);
	void OnDoKill();
	void Multicast_HandleOnKill();
	void SetPreviousVector();
	void LevelOutMissile();
	void Handle_Movement_Audio();
	void ResetWeapon();
	void StartFuelTimer();
	void OnClientSetupRemoteControlPawn();
	void ExecuteUbergraph_B_PrjPawn_Athena_RCRocket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass GCN_Hoverboard_Running.GCN_Hoverboard_Running_C
// 0x00C0 (0x0500 - 0x0440)
class AGCN_Hoverboard_Running_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	struct FLinearColor                                Spawnin_Color_9CDC88F8422A5E3495C4D286D1223B9D;           // 0x0448(0x0010) (IsPlainOldData)
	float                                              Spawnin_Dissolve_9CDC88F8422A5E3495C4D286D1223B9D;        // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Spawnin__Direction_9CDC88F8422A5E3495C4D286D1223B9D;      // 0x045C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x045D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Spawnin;                                                  // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerPawn_Generic_C*                       OwningPlayer;                                             // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SND_HoverboardLoopAsset;                                  // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             SND_HoverboardLoop;                                       // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bJumpActive;                                              // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              CurrentSpeed;                                             // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NextSpeed;                                                // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta;                                                    // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SND_HoverboardSound_JumpAsset;                            // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SND_HoverboardSound_AccelerateAsset;                      // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             SND_HoverboardSound_Accelerate;                           // 0x04A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TickRate;                                                 // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET
	class UAudioComponent*                             SND_HoverboardStart;                                      // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  SND_HoverboardSound_StartAsset;                           // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_HoverboardComponent;                                   // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    IdleFX;                                                   // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BoostFX;                                                  // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    LSmokeTrail;                                              // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RSmokeTrail;                                              // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              NoiseRadius;                                              // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class AActor*                                      Target;                                                   // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                SetupTimerHandle;                                         // 0x04F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Hoverboard_Running.GCN_Hoverboard_Running_C");
		return ptr;
	}


	float GetPlayerLeanValuePercent();
	void GetHoverboardSkeletal(class USkeletalMeshComponent** SK_HoverboardComponent);
	void ClearSounds();
	bool OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	bool PlayerIsAccelerating();
	bool PlayerIsDecelerating();
	bool IsPlayerJumping(const struct FVector& InVec);
	void UserConstructionScript();
	void Spawnin__FinishedFunc();
	void Spawnin__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void K2_OnReset();
	void OnJump();
	void Idle();
	void Moving();
	void OnSpawnedIn();
	void OnDespawned();
	void ResetSpawnIn();
	void BindSetup();
	void Setup();
	void ExecuteUbergraph_GCN_Hoverboard_Running(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

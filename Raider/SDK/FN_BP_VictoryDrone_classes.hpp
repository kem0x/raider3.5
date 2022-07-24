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

// BlueprintGeneratedClass BP_VictoryDrone.BP_VictoryDrone_C
// 0x0059 (0x03E1 - 0x0388)
class ABP_VictoryDrone_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SpawnEffect;                                              // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    SpawnOutAnimEndedDispatcher;                              // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              AnimPlayRate;                                             // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    StaticMeshMID;                                            // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TeleportIn;                                               // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAthena;                                                 // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03CA(0x0006) MISSED OFFSET
	class AFortPawn*                                   TargetPlayer;                                             // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UParticleSystemComponent*                    CharacterAttached;                                        // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               InLobby;                                                  // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VictoryDrone.BP_VictoryDrone_C");
		return ptr;
	}


	void NotifyTeleportFinishedTriggered();
	void PlaySpawnAnim();
	void InitDrone();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSpawnOutAnimEnded(class UAnimMontage* Montage, bool bInterrupted);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_VictoryDrone(int EntryPoint);
	void SpawnOutAnimEndedDispatcher__DelegateSignature(class ABP_VictoryDrone_C* Drone);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

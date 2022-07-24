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

// BlueprintGeneratedClass GCN_Athena_LowGravity.GCN_Athena_LowGravity_C
// 0x004C (0x046C - 0x0420)
class AGCN_Athena_LowGravity_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MyTargetCached;                                           // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              InterpDelta;                                              // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetDelta;                                              // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    LowGravityPSComponent;                                    // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                ExpireTellDelayTimer;                                     // 0x0448(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Duration;                                                 // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationTellDuration;                                   // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartTime;                                                // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationSoundPeriod;                                    // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                ExpirationSoundTimer;                                     // 0x0460(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MaxDrawDistance;                                          // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Athena_LowGravity.GCN_Athena_LowGravity_C");
		return ptr;
	}


	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void Activated(class AActor* PlayerPawn);
	bool WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void ReceiveBeginPlay();
	void ExpireTell();
	void ClearExpireTell();
	void PlayExpirationSound();
	void ExecuteUbergraph_GCN_Athena_LowGravity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

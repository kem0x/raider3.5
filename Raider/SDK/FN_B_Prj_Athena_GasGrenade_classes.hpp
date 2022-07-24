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

// BlueprintGeneratedClass B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C
// 0x0204 (0x08CC - 0x06C8)
class AB_Prj_Athena_GasGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcessComponent;                                     // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            PostProcessParentShape;                                   // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SmokeVolumeMesh;                                          // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_GasGrenade_InnerSmoke;                                  // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AudioReleaseSmoke;                                        // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           OverlapCapsule;                                           // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    SmokeTrail_Particle;                                      // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             GrenadeFuse_AudioComponent;                               // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Distance;                                          // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeSmokeTL_Float_2626207A4A43AC642A80FF89AC59D028;       // 0x0728(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeSmokeTL__Direction_2626207A4A43AC642A80FF89AC59D028;  // 0x072C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x072D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeSmokeTL;                                              // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DoT_TickRate;                                             // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GasDuration;                                              // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GasGrenadeLifespan;                                       // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GasDelayBeforeFadeIn;                                     // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GasFadeOutTime;                                           // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GasFadeInTime;                                            // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SmokeVolumeMeshMID;                                       // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GasGrenadeRadius;                                         // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	class UAudioComponent*                             Audio_ReleaseSmoke;                                       // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              CurrentTargetArray;                                       // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              PreviousTargetArray;                                      // 0x0780(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayEffectQuery                        NewVar_1;                                                 // 0x0790(0x0138) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              SyncedDelay;                                              // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_GasGrenade.B_Prj_Athena_GasGrenade_C");
		return ptr;
	}


	void UserConstructionScript();
	void FadeSmokeTL__FinishedFunc();
	void FadeSmokeTL__UpdateFunc();
	void OnStop(struct FHitResult* Hit);
	void Stop_Rotation();
	void DamageTick();
	void FadeIn();
	void FadeOut();
	void SyncedTimer();
	void ExecuteUbergraph_B_Prj_Athena_GasGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

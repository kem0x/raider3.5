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

// BlueprintGeneratedClass B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C
// 0x01A0 (0x0868 - 0x06C8)
class AB_Prj_Ranged_GrenadeLauncher_Athena_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             InAirLoop;                                                // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_GL_Ribbon_SmokeTrail;                                   // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             RibbonTrail_PS;                                           // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RibbonTrail_PSC;                                          // 0x06F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              TrailLifetime;                                            // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      WaterPhysMat;                                             // 0x06FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06FD(0x0003) MISSED OFFSET
	class UParticleSystem*                             Bounce_WaterSplash_PS;                                    // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WaterSplash_PSC;                                          // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Bounce_Generic_PSC;                                       // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Bounce_Generic_PS;                                        // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Explosion_PS;                                             // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Explosion_PSC;                                            // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     StopLocation;                                             // 0x0730(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x073C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectsToTraceAgainst;                                    // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRotator                                    StopRotX;                                                 // 0x0750(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x075C(0x0004) MISSED OFFSET
	class USoundBase*                                  Grenade_Explosion_Sound;                                  // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Explosion_Flesh_Damage_PS;                                // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Explosion_Water_PS;                                       // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    Explosion_Water_PSC;                                      // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      SpawnBounceFXHitActor;                                    // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FHitResult                                  OnBounceHitResult;                                        // 0x0788(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FuseTimerSpawn;                                           // 0x0810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FuseTimerAfterBounce;                                     // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    WaterLandDelayRipplePSC;                                  // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             WaterLandDelayPS;                                         // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    GrenadeInWaterLocation;                                   // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Grenade_Explosion_Water_Sound;                            // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      StopSurfaceType;                                          // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0839(0x0003) MISSED OFFSET
	struct FRotator                                    StopRotZ;                                                 // 0x083C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackNear;                               // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackFar;                                // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Grenade_Bounce_Water_Sound;                               // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Grenade_Bounce_Sound;                                     // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Ranged_GrenadeLauncher_Athena.B_Prj_Ranged_GrenadeLauncher_Athena_C");
		return ptr;
	}


	void SpawnBounceFX(struct FHitResult* Hit, class AActor** HitActor, TEnumAsByte<EPhysicalSurface>* SurfaceType, struct FRotator* HitResultRotation);
	void UserConstructionScript();
	void OnStop(struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void FuseTimerMax();
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void OnBounce(struct FHitResult* Hit);
	void DelayBeforeExplode_();
	void ExecuteUbergraph_B_Prj_Ranged_GrenadeLauncher_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

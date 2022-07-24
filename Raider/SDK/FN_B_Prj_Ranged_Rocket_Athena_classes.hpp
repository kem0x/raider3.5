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

// BlueprintGeneratedClass B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C
// 0x0140 (0x0808 - 0x06C8)
class AB_Prj_Ranged_Rocket_Athena_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        CollisionMesh;                                            // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PP_Explode;                                               // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Rocket_AudioComponent;                                    // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PPFader_PPFade_6840155342A20C80B8C71EB25DE77BD9;          // 0x06F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PPFader__Direction_6840155342A20C80B8C71EB25DE77BD9;      // 0x06F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PPFader;                                                  // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Ribbon_Trail_PSC;                                         // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Water_Explosion_PSC;                                      // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Ribbon_Trail_PS;                                          // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Water_Explosion_PS;                                       // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Explosion_Generic_PS;                                     // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Explosion_Generic_PSC;                                    // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Rocket_Projectile_Explosion_Sound;                        // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StopLocation;                                             // 0x0738(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectsToTraceAgainst;                                    // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             Explosion_Flesh_Damage_PS;                                // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StopRotZ;                                                 // 0x0760(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TrailLifetime;                                            // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Explosion_Flesh_Damage_PSC;                               // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Rocket_Projectile_Explosion_Water_Sound;                  // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Rocket_Projectile_InAir_Sound;                            // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RocketTrailPS;                                            // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Tick_Delta;                                               // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RocketSpinRate;                                           // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Explosion_Impact_Offset;                                  // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RocketSpin;                                               // 0x079C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RocketScale;                                              // 0x07A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               TimerMaxReached_;                                         // 0x07B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07B5(0x0003) MISSED OFFSET
	class UMaterialInterface*                          Ground_Decal;                                             // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Ground_Decal_MID;                                         // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Decal_Size_Max;                                           // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Decal_Size_Min;                                           // 0x07CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DecalLocation;                                            // 0x07D0(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	class UParticleSystem*                             Rocket_Trail_Template;                                    // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x07E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x07E9(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Explosion_PS;                                             // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackNear;                               // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackFar;                                // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void PPFader__FinishedFunc();
	void PPFader__UpdateFunc();
	void OnBounce(struct FHitResult* Hit);
	void OnStop(struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void FuseTimerMax();
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

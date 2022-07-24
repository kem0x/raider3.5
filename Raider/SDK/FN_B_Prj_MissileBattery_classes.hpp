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

// BlueprintGeneratedClass B_Prj_MissileBattery.B_Prj_MissileBattery_C
// 0x0138 (0x0800 - 0x06C8)
class AB_Prj_MissileBattery_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       PP_Explode;                                               // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Rocket_AudioComponent;                                    // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PPFader_PPFade_230D51034B656FFF34397B96A717C41C;          // 0x06E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PPFader__Direction_230D51034B656FFF34397B96A717C41C;      // 0x06EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PPFader;                                                  // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Ribbon_Trail_PSC;                                         // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Water_Explosion_PSC;                                      // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Ribbon_Trail_PS;                                          // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Water_Explosion_PS;                                       // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Explosion_Generic_PS;                                     // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Explosion_Generic_PSC;                                    // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Rocket_Projectile_Explosion_Sound;                        // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StopLocation;                                             // 0x0730(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x073C(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              ObjectsToTraceAgainst;                                    // 0x0740(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             Explosion_Flesh_Damage_PS;                                // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StopRotZ;                                                 // 0x0758(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TrailLifetime;                                            // 0x0764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Explosion_Flesh_Damage_PSC;                               // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Rocket_Projectile_Explosion_Water_Sound;                  // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Rocket_Projectile_InAir_Sound;                            // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    RocketTrailPS;                                            // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              Tick_Delta;                                               // 0x0788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RocketSpinRate;                                           // 0x078C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Explosion_Impact_Offset;                                  // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RocketSpin;                                               // 0x0794(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RocketScale;                                              // 0x07A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               TimerMaxReached_;                                         // 0x07AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	class UMaterialInterface*                          Ground_Decal;                                             // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Ground_Decal_MID;                                         // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Decal_Size_Max;                                           // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Decal_Size_Min;                                           // 0x07C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DecalLocation;                                            // 0x07C8(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07D4(0x0004) MISSED OFFSET
	class UParticleSystem*                             Rocket_Trail_Template;                                    // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    Explosion_PS;                                             // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackNear;                               // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackFar;                                // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_MissileBattery.B_Prj_MissileBattery_C");
		return ptr;
	}


	void UserConstructionScript();
	void PPFader__FinishedFunc();
	void PPFader__UpdateFunc();
	void OnStop(struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void FuseTimerMax();
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void OnBounce(struct FHitResult* Hit);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveDestroyed();
	void ExecuteUbergraph_B_Prj_MissileBattery(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

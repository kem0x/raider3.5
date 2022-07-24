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

// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
// 0x0250 (0x0918 - 0x06C8)
class AB_Prj_Commando_FragGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (Transient, DuplicateTransient)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Fuse_Particle;                                            // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             GrenadeFuse_AudioComponent;                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Distance;                                          // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             P_Explosion;                                              // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_DistantSound;                                         // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0710(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfBouncesTillExplode;                               // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentNumberOfBounces;                                   // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	class USoundBase*                                  Cue_GrenadeFuseSound;                                     // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BouncePawnAgainstPawnGravityScale;                        // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x072C(0x0004) MISSED OFFSET
	class UForceFeedbackEffect*                        ExplosionForceFeedbackNear;                               // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        ExplosionForceFeedbackFar;                                // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxClusterGrenades;                                       // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0744(0x0004) MISSED OFFSET
	struct FGameplayTag                                EC_ClusterExplosion;                                      // 0x0748(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bHasCluster;                                              // 0x0750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	class UClass*                                      Prj_Cluster;                                              // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            ClusterContainerSpec;                                     // 0x0760(0x0080) (Edit, BlueprintVisible)
	bool                                               bHasKeepOut;                                              // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	struct FFortGameplayEffectContainerSpec            KeepOutContainerSpec;                                     // 0x07E8(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AOE_KeepOut;                                              // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasClusterTactical;                                      // 0x0870(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0871(0x0007) MISSED OFFSET
	struct FFortGameplayEffectContainerSpec            Cluster_Tactical_Container_Spec;                          // 0x0878(0x0080) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       TC_ActorTagsThatShouldExplodeOnOverlap;                   // 0x08F8(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C");
		return ptr;
	}


	void SpawnKeepOut();
	void SpawnClusters();
	float CalcGrenadeSpeed(float Angle);
	void OnRep_StoredHit();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult* Hit);
	void Stop_Rotation();
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void OnBounce(struct FHitResult* Hit);
	void On_Destroy_Grenade(class AActor* DestroyedActor);
	void Bind_Destroy_Grenade();
	void Force_On_Exploded_Effects();
	void Unbind_Destroy_Grenade();
	void TriggerDoExplsoion();
	void ReceiveDestroyed();
	void CheckKeepOutAndCluster();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

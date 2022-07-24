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

// BlueprintGeneratedClass B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C
// 0x0115 (0x07DD - 0x06C8)
class AB_Prj_AirStrike_Bomb_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Trail_Effect;                                             // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             supply_drop_incoming_Cue;                                 // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x06E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ParticleGuide_Size;                                       // 0x06E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Material_MID;                                             // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_Explosion;                                              // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // 0x0708(0x000C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	class USoundBase*                                  Cue_DistantSound;                                         // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0728(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	int                                                NumberOfBouncesTillExplode;                               // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentNumberOfBounces;                                   // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	class USoundBase*                                  Cue_GrenadeFuseSound;                                     // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BombStartLocation;                                        // 0x0740(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x074C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    ImpactReticle_Effect;                                     // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             P_ImpactReticle;                                          // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  BombStartTransform;                                       // 0x0760(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Ground_Decal_Color;                                       // 0x0798(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UDecalComponent*                             GridDecal;                                                // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FLinearColor                                Team_Color;                                               // 0x07B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FriendOrFoe;                                              // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x07C4(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        Grid_Static_Mesh_Decal;                                   // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      CameraShake;                                              // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Particle_Speed;                                           // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Exploded;                                                 // 0x07DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C");
		return ptr;
	}


	void StopProjectile(const struct FHitResult& HitResult);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void OnStoppedOnServer();
	void ExecuteUbergraph_B_Prj_AirStrike_Bomb(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

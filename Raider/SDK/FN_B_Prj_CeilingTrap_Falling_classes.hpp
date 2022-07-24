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

// BlueprintGeneratedClass B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C
// 0x0068 (0x0738 - 0x06D0)
class AB_Prj_CeilingTrap_Falling_C : public AFortProjectileFallingTrap
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06D0(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x06D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UStaticMesh*>                         MeshTypes;                                                // 0x06E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bActive;                                                  // 0x06F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x06F1(0x0003) MISSED OFFSET
	struct FVector                                     PrevBounceLocation;                                       // 0x06F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBounceDistanceSquared;                                 // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevBounceTime;                                           // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBounceTime;                                            // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocitySquared;                                       // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExploded;                                                // 0x0710(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_ActorTagsThatShouldTriggerDamageOnHit;                 // 0x0718(0x0020) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C");
		return ptr;
	}


	void OnRep_bExploded();
	struct FVector RandomDirection(const struct FVector& InVec);
	void UserConstructionScript();
	void OnBounce(struct FHitResult* Hit);
	void Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BindOverlap();
	void ReceiveBeginPlay();
	void CheckTireDestruction(const struct FVector& CurrentVelocity);
	void DestroyTire();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ExecuteUbergraph_B_Prj_CeilingTrap_Falling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

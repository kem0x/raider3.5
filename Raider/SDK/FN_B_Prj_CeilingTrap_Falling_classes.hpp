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

// BlueprintGeneratedClass B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C
// 0x0041 (0x0861 - 0x0820)
class AB_Prj_CeilingTrap_Falling_C : public AFortProjectileFallingTrap
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0820(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0828(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UStaticMesh*>                         MeshTypes;                                                // 0x0830(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bActive;                                                  // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0841(0x0003) MISSED OFFSET
	struct FVector                                     PrevBounceLocation;                                       // 0x0844(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBounceDistanceSquared;                                 // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PrevBounceTime;                                           // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBounceTime;                                            // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocitySquared;                                       // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bExploded;                                                // 0x0860(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
	void ExecuteUbergraph_B_Prj_CeilingTrap_Falling(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass B_Prj_Bullet_Athena_AR.B_Prj_Bullet_Athena_AR_C
// 0x0010 (0x0920 - 0x0910)
class AB_Prj_Bullet_Athena_AR_C : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_Trail;                                                  // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Bullet_Athena_AR.B_Prj_Bullet_Athena_AR_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnTouched(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FHitResult* HitResult, bool* bIsOverlap);
	void ExecuteUbergraph_B_Prj_Bullet_Athena_AR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

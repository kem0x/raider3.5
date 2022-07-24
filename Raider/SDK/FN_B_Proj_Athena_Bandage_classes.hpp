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

// BlueprintGeneratedClass B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C
// 0x0010 (0x06D8 - 0x06C8)
class AB_Proj_Athena_Bandage_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06C8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        MedBandage;                                               // 0x06D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Proj_Athena_Bandage.B_Proj_Athena_Bandage_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void OnStop(struct FHitResult* Hit);
	void OnBounce(struct FHitResult* Hit);
	void ExecuteUbergraph_B_Proj_Athena_Bandage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
// 0x00D8 (0x1A78 - 0x19A0)
class APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x19A0(0x0008) (Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>                  Default_Weapon_Materials;                                 // 0x19A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnBackpackMaterials;                                    // 0x19B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnHatMaterials;                                         // 0x19C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnHeadMaterials;                                        // 0x19D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnBodyMaterials;                                        // 0x19E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnCharmMaterials;                                       // 0x19F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnFaceMaterials;                                        // 0x1A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnLegsMaterials;                                        // 0x1A18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  PawnTorsoMaterials;                                       // 0x1A28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                       PlayerPostProcessFX;                                      // 0x1A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              SkeletalMeshes;                                           // 0x1A40(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            PawnMaterials_ALL;                                        // 0x1A50(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                WaterCounter;                                             // 0x1A60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1A64(0x0004) MISSED OFFSET
	class AActor*                                      CurrentWaterMeshActor;                                    // 0x1A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInWater;                                                // 0x1A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1A71(0x0003) MISSED OFFSET
	float                                              Time_when_you_ll_be_able_to_splash_again;                 // 0x1A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void Entered_Water_Volume();
	void Player_Creates_a_Splash(const struct FTransform& NewTransform);
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

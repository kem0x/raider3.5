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

// BlueprintGeneratedClass BP_SurvivorAnchor.BP_SurvivorAnchor_C
// 0x009C (0x0E9C - 0x0E00)
class ABP_SurvivorAnchor_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E00(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SurvivorAnchorBoxMesh;                                    // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             SurvivorPawnSpawnRotationArrow;                           // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         SurvivorPawnSpawnIcon;                                    // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         SurvivorAnchorIcon;                                       // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               SurvivorAnchorBox;                                        // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0E30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ESurvivorAnchorHeightEnum>             SurvivorAnchorHeightInBuildingTiles;                      // 0x0E31(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivorAnchorWidthEnum>              SurvivorAnchorWidthInBuildingTiles;                       // 0x0E32(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivorAnchorMaxZMove>               SurvivorAnchorMaxZMoveInTiles;                            // 0x0E33(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnchorBoxCenter;                                          // 0x0E34(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     AnchorBoxBounds;                                          // 0x0E40(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0E4C(0x0004) MISSED OFFSET
	class ASurvivor_C*                                 SurvivorAnchorPawn;                                       // 0x0E50(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     SurvivorPawnLocation;                                     // 0x0E58(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SurvivorPawnRotationWidget;                               // 0x0E64(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    SurvivorPawnRotation;                                     // 0x0E70(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0E7C(0x0004) MISSED OFFSET
	class UClass*                                      SurvivorAnchorPawnClassToSpawn;                           // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFortWeaponItemDefinition*                   SurvivorWeaponDataOverride;                               // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortTeam>                             SurvivorTeamOverride;                                     // 0x0E90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortressAIType                                    SurvivorAITypeOverride;                                   // 0x0E91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SpawnASurvivor;                                           // 0x0E92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0E93(0x0001) MISSED OFFSET
	float                                              AnchorEQSGridSize;                                        // 0x0E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnchorEQSGridSpaceBetween;                                // 0x0E98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SurvivorAnchor.BP_SurvivorAnchor_C");
		return ptr;
	}


	struct FVector GetTetheredBoxBoundsCenter();
	float GetTetheredBoxBoundsEQSGridSize();
	float GetTetheredBoxBoundsEQSSpaceBetween();
	float GetTetheredBoxBoundsHeight();
	float GetTetheredBoxBoundsWidth();
	void IsActorInsideOfAnchorBounds(class AActor** Actor, bool* InBounds);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ShowAnchorBounds();
	void ExecuteUbergraph_BP_SurvivorAnchor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

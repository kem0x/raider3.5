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

// BlueprintGeneratedClass BP_Athena_Event_Components.BP_Athena_Event_Components_C
// 0x0140 (0x0458 - 0x0318)
class ABP_Athena_Event_Components_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Ambient_SkyboxLoop_Cue;                                   // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Rainbow;                                                  // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Athena_Event_Comet;                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CometMovementTest_NewTrack_0_7D4A6AB748589EBEEA4C0FA6F3912457;// 0x0340(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CometMovementTest__Direction_7D4A6AB748589EBEEA4C0FA6F3912457;// 0x0344(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CometMovementTest;                                        // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  CometStartTransform;                                      // 0x0350(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  CometMidTransform;                                        // 0x0380(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  CometEndTransform;                                        // 0x03B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CometPosition;                                            // 0x03E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowRainbow;                                              // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x03E5(0x000B) MISSED OFFSET
	struct FTransform                                  RainbowWorldTransform;                                    // 0x03F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               EnableRiverTint;                                          // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	struct FLinearColor                                RiverTintStPatrick_s;                                     // 0x0424(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0434(0x0004) MISSED OFFSET
	class UCurveFloat*                                 CometScaleCurve;                                          // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             ShootingStarSpawns;                                       // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               PreviewShootingStars;                                     // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	int                                                SpawnLocation;                                            // 0x0454(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Athena_Event_Components.BP_Athena_Event_Components_C");
		return ptr;
	}


	void RandomizeSpawnLocation();
	void OnRep_CometPosition();
	void SetupRiverTint(bool EnableTint, const struct FLinearColor& TintColor);
	void SetupComet();
	void UserConstructionScript();
	void CometMovementTest__FinishedFunc();
	void CometMovementTest__UpdateFunc();
	void ReceiveBeginPlay();
	void UpdateComet();
	void SpawnShootingStars();
	void SpawnMeteor();
	void ExecuteUbergraph_BP_Athena_Event_Components(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

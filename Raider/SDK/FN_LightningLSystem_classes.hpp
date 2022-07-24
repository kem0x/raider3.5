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

// BlueprintGeneratedClass LightningLSystem.LightningLsystem_C
// 0x0060 (0x03E0 - 0x0380)
class ALightningLsystem_C : public AFortLightningActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Sm_LightningStrikes_C_01;                                 // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Base;                                                     // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sm_LightningStrikes_B_01;                                 // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sm_LightningStrikes_A_01;                                 // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BoltMesh;                                                 // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     Start_Location;                                           // 0x03B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     End_Location;                                             // 0x03BC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               isDebugMode;                                              // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	float                                              BoltLifetimeMin;                                          // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoltLifetimeMax;                                          // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BoltLifetime;                                             // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BoltMID;                                                  // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightningLSystem.LightningLsystem_C");
		return ptr;
	}


	void GetRandomMesh();
	void CleanupMesh();
	void UserConstructionScript();
	void OnLightingCleanup();
	void SetupLightning(const struct FVector& Start_Location, const struct FVector& End_Location);
	void DebugStrike();
	void OnLightingInitialized();
	void EndLightning();
	void ExecuteUbergraph_LightningLsystem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

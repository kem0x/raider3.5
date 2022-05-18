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

// BlueprintGeneratedClass DuplicateResOutMesh.DuplicateResOutMesh_C
// 0x014C (0x0464 - 0x0318)
class ADuplicateResOutMesh_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1;// 0x0328(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1;// 0x032C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1;// 0x0330(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1;// 0x0334(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CharacterSpawnInTimeline;                                 // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Skeletal_Mesh_Duplicate;                                  // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Gun_True;                                                 // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	float                                              BoundsRadius;                                             // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NewVar_0_1;                                               // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	TArray<class UMaterialInstanceDynamic*>            MIDArray;                                                 // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     World_location_for_the_dissolve_location;                 // 0x0368(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Current_MID;                                              // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Head_Space;                                               // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Leg_Space;                                                // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPointLightComponent*                        Spawn_Light;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              light_intensity;                                          // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Number_of_Base_skeletal_mesh_materials;                   // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FirstPassComplete;                                        // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              ExternalSkeletalMeshComponent;                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FTransform                                  Box_Local_Transform;                                      // 0x03B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Timeline_Play_Length;                                     // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeleportOut_;                                             // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03E5(0x0003) MISSED OFFSET
	class AActor*                                      ExternalActor;                                            // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              InternalSkeletalMeshComponents;                           // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                CurrentMeshMidIndex;                                      // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      External_Base_Mesh_Component;                             // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            ExternalMidArray;                                         // 0x0410(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USkeletalMeshComponent*                      ExternalRootMeshComponent;                                // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInterface*>                  ListOfMaterialsExemptFromReparenting;                     // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               MaterialParentIsValid;                                    // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0439(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CurrentParentMaterial;                                    // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          CurrentMaterial;                                          // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Original_MIDs;                                            // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Increment_End;                                            // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DuplicateResOutMesh.DuplicateResOutMesh_C");
		return ptr;
	}


	void Store_Original_Material_for_Teleport_In();
	void External_Mesh_Masked_Setup(TArray<class USkeletalMeshComponent*>* External_Mesh_Component_Array, TArray<class UMaterialInstanceDynamic*>* Corrected_Mid_Array);
	void ProcessSpawnInTimeline(float ZHeight, float LightIntensity);
	void Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array();
	void Make_and_slave_internal_meshes();
	void Spawn__Light();
	void Find_Bounds();
	void initializeExternalSkeletalMeshArray();
	void UserConstructionScript();
	void CharacterSpawnInTimeline__FinishedFunc();
	void CharacterSpawnInTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void UpdateExternalParameters(TArray<class UMaterialInstanceDynamic*> MID_Array, TArray<class USkeletalMeshComponent*> External_Mesh_Component_Array);
	void ExecuteUbergraph_DuplicateResOutMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

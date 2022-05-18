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

// AnimBlueprintGeneratedClass SK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP.SK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP_C
// 0x0140 (0x0570 - 0x0430)
class USK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5083D90C43960F48AF1D5A9E3F495267;      // 0x0438(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_E52A56D34130C53F8AFB01A1BDD8E3B6;// 0x0480(0x00E8)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP.SK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_E52A56D34130C53F8AFB01A1BDD8E3B6();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_Glider_Rocker_Punk_Parts_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

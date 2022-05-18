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

// AnimBlueprintGeneratedClass SK_Glider_Googley_Parts_AnimBP.SK_Glider_Googley_Parts_AnimBP_C
// 0x0D29 (0x1159 - 0x0430)
class USK_Glider_Googley_Parts_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4AAF732D4F37CA3F8DCE94B33002EBE7;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_20F0BA694D35D3FD9E2BDBB9357DA733;// 0x0480(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_C74F96C74EF4CA217AEFE7BB5A9B2D39;// 0x04C8(0x00E8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BDA7084443718201EC023284E8C9918F;// 0x05B0(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05F8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_F32958DA456544FF8E7090BF0B10ABED; // 0x0600(0x0490)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_130377F1445AC9726373FDA9ABC50D1F;// 0x0A90(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_83986EED479DA633015302A4184AF563;// 0x0DF0(0x0360)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x1150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               DynamicsAlpha;                                            // 0x1158(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Glider_Googley_Parts_AnimBP.SK_Glider_Googley_Parts_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Glider_Googley_Parts_AnimBP_AnimGraphNode_RigidBody_F32958DA456544FF8E7090BF0B10ABED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Glider_Googley_Parts_AnimBP_AnimGraphNode_CopyPoseFromMesh_C74F96C74EF4CA217AEFE7BB5A9B2D39();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_Glider_Googley_Parts_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

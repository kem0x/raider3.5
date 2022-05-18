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

// AnimBlueprintGeneratedClass SK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP.SK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP_C
// 0x05E9 (0x0A19 - 0x0430)
class USK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0C7222DC402E6F6DCF9CECADA46BDCB0;// 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_5FEADAAA46DB1D7CC07196A7148CD986;// 0x0480(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_7EB2535345273FBF24F0468E7A9B41E1; // 0x04D0(0x0490)
	struct FAnimNode_Root                              AnimGraphNode_Root_2134E0EE418DF3E620352FBD78CF280F;      // 0x0960(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_4199BCF14033B4775482A38F2F868B50;  // 0x09A8(0x0068)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               DynamicsOK;                                               // 0x0A18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP.SK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP_AnimGraphNode_RigidBody_7EB2535345273FBF24F0468E7A9B41E1();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_F_BackPack_BR039_BackPack_BR039_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

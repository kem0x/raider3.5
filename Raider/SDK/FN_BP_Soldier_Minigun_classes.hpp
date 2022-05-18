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

// AnimBlueprintGeneratedClass BP_Soldier_Minigun.BP_Soldier_Minigun_C
// 0x0388 (0x0708 - 0x0380)
class UBP_Soldier_Minigun_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_5BEDD1AF46E640F37CCC9FAA8DF7F6DC;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_15839C374918416DF8289BAE7466DE11;      // 0x03D0(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7;// 0x0440(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2E6915294401BD03648F4689C8817592;// 0x0578(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_580B6AC241C93B1B43A2A4ACEF5528AD;// 0x05C0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_43BD42EB42C5FE9A4147628D6467C8A7;// 0x0608(0x0070)
	struct FAnimNode_RotateRootBone                    AnimGraphNode_RotateRootBone_23F81C024704537420FC1492A49C0F7B;// 0x0678(0x0088)
	float                                              MinigunRotation;                                          // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMinigunRotSpeed;                                       // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Soldier_Minigun.BP_Soldier_Minigun_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Soldier_Minigun_AnimGraphNode_ModifyBone_CDE861E049ED25F9468E1596307CE0F7();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BP_Soldier_Minigun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

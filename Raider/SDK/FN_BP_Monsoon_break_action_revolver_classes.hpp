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

// AnimBlueprintGeneratedClass BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C
// 0x0388 (0x0708 - 0x0380)
class UBP_Monsoon_break_action_revolver_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_1C94E973477A7924582C2F89148D196E;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C6BABD70470FD56C94485AA983ACA6E4;      // 0x03D0(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7A058AEC4412E3968E57A0A3398BBE3C;      // 0x0440(0x0070)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C;// 0x04B0(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BBFF24BD43C68101DE739FA9816C4A51;// 0x05E8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1C47C87540AD10FBF51A9B94919030B2;// 0x0630(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7192AB5641A3839311E70187F0C48E5F;// 0x0678(0x0088)
	float                                              MaxMinigunRotSpeed;                                       // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinigunRotation;                                          // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Monsoon_break_action_revolver_AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BP_Monsoon_break_action_revolver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

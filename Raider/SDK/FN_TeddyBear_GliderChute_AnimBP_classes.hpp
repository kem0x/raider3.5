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

// AnimBlueprintGeneratedClass TeddyBear_GliderChute_AnimBP.TeddyBear_GliderChute_AnimBP_C
// 0x06C4 (0x0A44 - 0x0380)
class UTeddyBear_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7B9AB6174CBF26DCFE8C85B4699432FF;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C0AEB3F64E8B4C932B0DDDBEBCD5C7D6;      // 0x03D0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2BAC07B641AB7C2328B5EE88BFCEEFEA;// 0x0440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D05B993342F5390C7313AD9D0D74582B;// 0x04C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_348F4FFD4315B58B782EF5842C63FA31;// 0x0540(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_062A292B4AA69A68FA1F1FB0F23938A7;// 0x05C0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C843D954470688C6682499E445E913C;// 0x0640(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_90D829684F53C5C1DF19C6B84109020A;// 0x06C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B61792C5413AAA333931119E94040F61;// 0x0710(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_18A861B44C61E1EFE22D70B93E8D009A;// 0x0798(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8957D07F4189CEB7EEA42EBBAEABA5B7;// 0x07E0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_81F1F9E547DEDAECE5F9958F98A5E99C;// 0x0908(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_68A674AE4D6D6FC437A3D28D8A1B5733;// 0x0950(0x00E0)
	bool                                               IsParachuteOpen;                                          // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A31(0x0003) MISSED OFFSET
	float                                              AimPitch;                                                 // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeployAnimRate;                                           // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkydiveYaw;                                               // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UseDynamicsAlpha;                                         // 0x0A40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TeddyBear_GliderChute_AnimBP.TeddyBear_GliderChute_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_TeddyBear_GliderChute_AnimBP_AnimGraphNode_TransitionResult_348F4FFD4315B58B782EF5842C63FA31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TeddyBear_GliderChute_AnimBP_AnimGraphNode_TransitionResult_062A292B4AA69A68FA1F1FB0F23938A7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TeddyBear_GliderChute_AnimBP_AnimGraphNode_TransitionResult_D05B993342F5390C7313AD9D0D74582B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TeddyBear_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_8957D07F4189CEB7EEA42EBBAEABA5B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TeddyBear_GliderChute_AnimBP_AnimGraphNode_TransitionResult_2BAC07B641AB7C2328B5EE88BFCEEFEA();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_dynamicsOff();
	void AnimNotify_dynamicsOn();
	void ExecuteUbergraph_TeddyBear_GliderChute_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

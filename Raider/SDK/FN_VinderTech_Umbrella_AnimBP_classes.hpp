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

// AnimBlueprintGeneratedClass VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C
// 0x0618 (0x0998 - 0x0380)
class UVinderTech_Umbrella_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_47C162A34E75B5D855F1039C8811E06C;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_55B0C7EB4409F55E838D3CA7B7457964;      // 0x03D0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9592CEBA49F2B067A15FFFBB6AB5105E;// 0x0440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F81EA3C344FA6DFC7A5EA1B792B511A5;// 0x04C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3753F99B490EFDA0C68FF0B8819E664F;// 0x0540(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A7F7CBD4C68973F2BBDFCBF93433107;// 0x05C0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8F6CE6514B2B120BE5A47CA93BF6B64F;// 0x0640(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0FA712374C2DD4AE7BAB068F07EF1E2A;// 0x06C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB121E7E466BDC2AEC2334AABA7B7973;// 0x0710(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_12B937664A6236CA6C6F30B310D7D872;// 0x0798(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CAD550DB43A0B090364489A1ED4F53F6;// 0x07E0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_90756A2C41FA0E67C991218B04CCA9C1;// 0x0868(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AD38D8EC41D7A5D47CC14C9AC67E6D6E;// 0x08B0(0x00E0)
	bool                                               IsParachuteOpen;                                          // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0991(0x0003) MISSED OFFSET
	float                                              DeployAnimRate;                                           // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass VinderTech_Umbrella_AnimBP.VinderTech_Umbrella_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_3753F99B490EFDA0C68FF0B8819E664F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_1A7F7CBD4C68973F2BBDFCBF93433107();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_F81EA3C344FA6DFC7A5EA1B792B511A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_Umbrella_AnimBP_AnimGraphNode_TransitionResult_9592CEBA49F2B067A15FFFBB6AB5105E();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_VinderTech_Umbrella_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

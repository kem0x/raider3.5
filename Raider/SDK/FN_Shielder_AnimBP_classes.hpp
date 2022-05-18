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

// AnimBlueprintGeneratedClass Shielder_AnimBP.Shielder_AnimBP_C
// 0x068A (0x0A0A - 0x0380)
class UShielder_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_7DE4D53242B2AD51D3E9A28151C05EA5;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1AF6CEA241B4EFABDE6DE1B3E79BC5DF;      // 0x03D0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4B6E921C410F994AEBB3669AA7671278;// 0x0440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1A9D209E4F439331743621BA64CF3C22;// 0x04C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8F7BAB22494C6652853C2DB4B78E5EB1;// 0x0540(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3B6FD4AE49B229B269BF85A506CA51C4;// 0x05C0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_71667AB441930B4A5CBACC983713B3FD;// 0x0640(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C8B4D5C6407141DFC802F39076F63A71;// 0x06C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_55A39E584D0D03C5C0ACD1B80017E348;// 0x0710(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E88305EF4EC8C13449A03DA51BE219BF;// 0x0798(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE306AB24FBA7EF1EEE74D848B32AE08;// 0x07E0(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F76894F5439CEE20D16AB89210FA35F3;// 0x0868(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7A492D5E4B91AF2B6783A98C61BC5C7C;// 0x08B0(0x00E0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_548804C544150F086A2D7CB13B4443D1;      // 0x0990(0x0070)
	float                                              Speed;                                                    // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UpwardVelocity;                                           // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EFortMovementStyle>                    MovementStyle;                                            // 0x0A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Orphaned;                                                 // 0x0A09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Shielder_AnimBP.Shielder_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_8F7BAB22494C6652853C2DB4B78E5EB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_3B6FD4AE49B229B269BF85A506CA51C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_1A9D209E4F439331743621BA64CF3C22();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Shielder_AnimBP_AnimGraphNode_TransitionResult_4B6E921C410F994AEBB3669AA7671278();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Shielder_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

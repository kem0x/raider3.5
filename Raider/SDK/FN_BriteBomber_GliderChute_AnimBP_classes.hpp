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

// AnimBlueprintGeneratedClass BriteBomber_GliderChute_AnimBP.BriteBomber_GliderChute_AnimBP_C
// 0x06C0 (0x0A40 - 0x0380)
class UBriteBomber_GliderChute_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C985F71D4D9DBE0A46F5DABE43EC328F;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3F0E76FD44D22BCE2EB3D6AE84FE6F1E;      // 0x03D0(0x0070)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DBB24C314EDD3301D89D58849E8F9240;// 0x0440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2AB838344513C45252EB0C81DDE67084;// 0x04C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_67E3ED4843DA37DD210A63B32C13F845;// 0x0540(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5740D2DB4345D1C76FDE51A999B4AC82;// 0x05C0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4A7ABD5E4AB0A3FBAE8378976BCDBCDB;// 0x0640(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_DA7515DB481389CF529FC9864A295FFB;// 0x06C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F383368E438B46219C04F3A54EB292DA;// 0x0710(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A2F94C7A4AA85A7ACFD1BF9CFE5E8555;// 0x0798(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_60D985E04445E86C1BD168B73582AA91;// 0x07E0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_78C77B594BE6885A47EF4B9E164456FD;// 0x0908(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_099BE1D2437433DD40728A82B33788EB;// 0x0950(0x00E0)
	bool                                               IsParachuteOpen;                                          // 0x0A30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0A31(0x0003) MISSED OFFSET
	float                                              AimPitch;                                                 // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeployAnimRate;                                           // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkydiveYaw;                                               // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BriteBomber_GliderChute_AnimBP.BriteBomber_GliderChute_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_67E3ED4843DA37DD210A63B32C13F845();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_5740D2DB4345D1C76FDE51A999B4AC82();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_2AB838344513C45252EB0C81DDE67084();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_60D985E04445E86C1BD168B73582AA91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BriteBomber_GliderChute_AnimBP_AnimGraphNode_TransitionResult_DBB24C314EDD3301D89D58849E8F9240();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BriteBomber_GliderChute_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

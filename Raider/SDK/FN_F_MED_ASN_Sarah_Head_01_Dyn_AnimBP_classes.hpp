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

// AnimBlueprintGeneratedClass F_MED_ASN_Sarah_Head_01_Dyn_AnimBP.F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C
// 0x1EA0 (0x22D0 - 0x0430)
class UF_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A6B99C8F4B37EB03398E9784B61D9A84;      // 0x0438(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_11EE75BA4212C0BA7E4433A2F831709B;  // 0x0480(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6059132943A94085D7DB42A190944254;// 0x04E8(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_481AA23048151C1142B4FEA7B672D98C;// 0x0530(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_889E489B484508CF5B4E8C8C92D95850;// 0x0890(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1D2FF04F42301E94CED886B09D5222E4;// 0x0BF0(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_AA90EC2F4B16D50A8CC651993D07644D;// 0x0F50(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9C8C53574377B9E2F2C8F7BDA1774024;// 0x12B0(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A1E492974E28A46C149E518D77A3177A;// 0x1610(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_B092FD404C962701E78F25BFBA6AFC6D;// 0x1970(0x0360)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_CF1B18784A9208AA4E1A3993FAB66A6D;// 0x1CD0(0x0360)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_0393C8B64989906F9131049B07D55029;// 0x2030(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6FE47C9344B38B1FE1A3C2888ABD30CB;// 0x2078(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7D3BC2C24AC778FD1C75099EF9AE8ED0;// 0x2148(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6344A0CE4120E00A884A729F96F7B7B9;// 0x2198(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5C123E0948F953AF6F0AA694FBF9F54F;// 0x2278(0x0050)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x22C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass F_MED_ASN_Sarah_Head_01_Dyn_AnimBP.F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Dyn_AnimBP_AnimGraphNode_BlendListByBool_6FE47C9344B38B1FE1A3C2888ABD30CB();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_ASN_Sarah_Head_01_Dyn_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

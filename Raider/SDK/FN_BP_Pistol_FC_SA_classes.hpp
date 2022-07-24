#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_Pistol_FC_SA.BP_Pistol_FC_SA_C
// 0x00F8 (0x0458 - 0x0360)
class UBP_Pistol_FC_SA_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_59F2F7924C02FD42668752B6AD5C5D7D;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3C404E374989FC3E37A4538744D810DA;      // 0x03B0(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_16F5A0174D756BCD3A56E2A54C593E88;// 0x0420(0x0038)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Pistol_FC_SA.BP_Pistol_FC_SA_C");
		return ptr;
	}


	void ExecuteUbergraph_BP_Pistol_FC_SA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

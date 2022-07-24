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

// AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C
// 0x0170 (0x04D0 - 0x0360)
class UPistol_Revolver_SideAction_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4B9C316E43FA08653813BBBCA2D3C1CC;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7B68B15D437D89F24C3E878507F22BD7;      // 0x03B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13AC6DBF4FB71657F72EF3BFDFE4EBE8;// 0x0420(0x00B0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

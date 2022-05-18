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

// AnimBlueprintGeneratedClass Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C
// 0x0148 (0x04C8 - 0x0380)
class UPistol_Revolver_SideAction_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_4B9C316E43FA08653813BBBCA2D3C1CC;      // 0x0388(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7B68B15D437D89F24C3E878507F22BD7;      // 0x03D0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13AC6DBF4FB71657F72EF3BFDFE4EBE8;// 0x0440(0x0088)

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

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

// AnimBlueprintGeneratedClass Valor_Pickaxe_dyn_AnimBP.Valor_Pickaxe_dyn_AnimBP_C
// 0x06E0 (0x0AF0 - 0x0410)
class UValor_Pickaxe_dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_9318A6E24BC2379998187E968336A477;  // 0x0418(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_CCFDCC0F4CAA6571C11FAB8073E002E9;      // 0x0480(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_91034D24435D027602524289648AE6D6;// 0x04C8(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_24C791F6468FB05C35F89481BCA0BA5B;// 0x0510(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0558(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_0B995CB840C0EDC3623542A37764C52A; // 0x0560(0x0590)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Valor_Pickaxe_dyn_AnimBP.Valor_Pickaxe_dyn_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

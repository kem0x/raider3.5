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

// AnimBlueprintGeneratedClass SK_Pickaxe_Venus_Skeleton_AnimBlueprint.SK_Pickaxe_Venus_Skeleton_AnimBlueprint_C
// 0x06D8 (0x0A38 - 0x0360)
class USK_Pickaxe_Venus_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_22F5FA204C600A8D205D0B977A294F5E;// 0x0368(0x0048)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_140B8DC24F91C5D775C41CACF3149880; // 0x03B0(0x0590)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_A8CFF5DF4725E0DC5A086F930C4A9D06;  // 0x0940(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_8D7B246D4BD42A56FC81309782497549;      // 0x09A8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A241468D4D3A8364419FA3ACAC69F4ED;// 0x09F0(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Pickaxe_Venus_Skeleton_AnimBlueprint.SK_Pickaxe_Venus_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Pickaxe_Venus_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

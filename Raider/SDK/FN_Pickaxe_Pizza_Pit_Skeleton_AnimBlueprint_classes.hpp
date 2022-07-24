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

// AnimBlueprintGeneratedClass Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C
// 0x06E8 (0x0AF8 - 0x0410)
class UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_070E9EDA451C23C20742F1A3CEA36E92;  // 0x0418(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_151ADE244279A7A42130649830A169AC;// 0x0480(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F8CB432B4692B3C54E96EAB243541C63;// 0x04C8(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_EC80E3A14FFEF078D3064A8578FD21FF;      // 0x0510(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0558(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_A4C70D374ADF4261AD134E800DC2E8CD; // 0x0560(0x0590)
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

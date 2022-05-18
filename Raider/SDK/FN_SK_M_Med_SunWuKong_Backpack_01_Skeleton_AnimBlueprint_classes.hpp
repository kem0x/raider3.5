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

// AnimBlueprintGeneratedClass SK_M_Med_SunWuKong_Backpack_01_Skeleton_AnimBlueprint.SK_M_Med_SunWuKong_Backpack_01_Skeleton_AnimBlueprint_C
// 0x05E8 (0x0A18 - 0x0430)
class USK_M_Med_SunWuKong_Backpack_01_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_62BD37EC4E5CABC741FEE8B3BB73CDCC;      // 0x0438(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_691F9DC940621DB119B3C99CA80EDEBA;// 0x0480(0x0048)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_DEA5467B45D51F35EFE6A780E3EE4150;  // 0x04C8(0x0068)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_B3984D184747B75414EEB6A34CEBBFCE; // 0x0530(0x0490)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7F7CDA7C4A9E0F31AE0C4190B6FF444E;// 0x09C0(0x0048)
	bool                                               DynamicsOK;                                               // 0x0A08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A09(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_M_Med_SunWuKong_Backpack_01_Skeleton_AnimBlueprint.SK_M_Med_SunWuKong_Backpack_01_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_SK_M_Med_SunWuKong_Backpack_01_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

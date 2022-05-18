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

// AnimBlueprintGeneratedClass SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint.SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C
// 0x00C8 (0x04F8 - 0x0430)
class USK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_11ECBCA04AA5B86C5E1BDAAE305E070B;  // 0x0438(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_8741F1BA4B6616338774218EE8A1133E;      // 0x04A0(0x0048)
	bool                                               DynamicsOK;                                               // 0x04E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      MeshToCopy;                                               // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint.SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_Backpack_Male_Commando_11_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

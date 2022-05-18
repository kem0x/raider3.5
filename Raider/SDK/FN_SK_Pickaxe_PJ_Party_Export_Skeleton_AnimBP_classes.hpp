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

// AnimBlueprintGeneratedClass SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C
// 0x0720 (0x0B50 - 0x0430)
class USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_25E7BF754A4B2C7227E146B4F8D02C1E;// 0x0438(0x00E0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_421E159244147BBC5C47379496FAAE1B;  // 0x0518(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_BE2E74B94CD2DD95BE92B49C366772FE;      // 0x0580(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x05C8(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_B1651F4E4924623A6B8B318AC07C0DF7; // 0x05D0(0x0490)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_54B34EA74B4B1DC6180C4B95B3C98BF1;// 0x0A60(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5CFA29144CD30475BDE5BA8D494A980F;// 0x0AA8(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6E69A0AC4A6E1F2D04F1A9A8EC65B6F2;// 0x0AF8(0x0048)
	struct FVector                                     ExtVel;                                                   // 0x0B40(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceScale;                                               // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

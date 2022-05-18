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

// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
// 0x0628 (0x0A28 - 0x0400)
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_985813CD40257121C24510B1EFA3045F;// 0x0408(0x0158)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_88B6F311437F6802F9D4E885AEBB612D;// 0x0560(0x0158)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_62132DD84DE9792F6948379FF19FE9B0;// 0x06B8(0x0158)
	struct FAnimNode_SpringBone                        AnimGraphNode_SpringBone_D9C2507C414C01F7CECC0291267407DC;// 0x0810(0x0158)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_209BCB204FB8EDDD0FE0ECAF3A14490E;// 0x0968(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_EAD8434D41BA827A02AADFB11592B5F7;      // 0x09B0(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_12EF14484EC26A755A1F178B81B266BF;// 0x09F8(0x0030)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C");
		return ptr;
	}


	void ExecuteUbergraph_Blueprint_Paper_VIM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

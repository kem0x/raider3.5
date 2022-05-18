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

// BlueprintGeneratedClass SkillTreeBPLibrary.SkillTreeBPLibrary_C
// 0x0000 (0x0028 - 0x0028)
class USkillTreeBPLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SkillTreeBPLibrary.SkillTreeBPLibrary_C");
		return ptr;
	}


	void STATIC_GetSkillTreeNodeIconSizeByMagnitude(EFortHomebaseNodeMagnitude Node_Magnitude, class UObject* __WorldContext, TEnumAsByte<EFortBrushSize>* Icon_Size);
	void STATIC_GetSkillTreeNodeShapeByDisplayType(EFortHomebaseNodeDisplayType Display_Type, class UObject* __WorldContext, bool* IsSquare, bool* IsExitNode);
	void STATIC_GetSkillTreeNodeSizeByMagnitude(EFortHomebaseNodeMagnitude Node_Magnitude, EFortHomebaseNodeDisplayType Display_Type, class UObject* World_Context, class UObject* __WorldContext, float* Size);
	void STATIC_UpdateSkillTreeNodeMaterial_DynamicData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNodeState& NodeState, class UObject* __WorldContext);
	void STATIC_GetSkillTreeNodeCostTint(const struct FHomebaseNode& HomebaseNode, class UObject* __WorldContext, struct FLinearColor* NodeTintColour);
	void STATIC_UpdateSkillTreeNodeMaterial_StaticData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNode& NodeData, const struct FFortSkillTreeNodeDisplayData& DisplayData, class UCommonButton* Button, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

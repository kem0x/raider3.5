#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeIconSizeByMagnitude
struct USkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude_Params
{
	EFortHomebaseNodeMagnitude                         Node_Magnitude;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortBrushSize>                        Icon_Size;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeShapeByDisplayType
struct USkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType_Params
{
	EFortHomebaseNodeDisplayType                       Display_Type;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsSquare;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsExitNode;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeSizeByMagnitude
struct USkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude_Params
{
	EFortHomebaseNodeMagnitude                         Node_Magnitude;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortHomebaseNodeDisplayType                       Display_Type;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     World_Context;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_DynamicData
struct USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData_Params
{
	class UObject*                                     World_Context;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHomebaseNodeState                          NodeState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeCostTint
struct USkillTreeBPLibrary_C_GetSkillTreeNodeCostTint_Params
{
	struct FHomebaseNode                               HomebaseNode;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                NodeTintColour;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_StaticData
struct USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData_Params
{
	class UObject*                                     World_Context;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHomebaseNode                               NodeData;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FFortSkillTreeNodeDisplayData               DisplayData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

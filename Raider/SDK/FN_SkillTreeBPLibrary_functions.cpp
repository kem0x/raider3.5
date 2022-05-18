// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeIconSizeByMagnitude
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortHomebaseNodeMagnitude     Node_Magnitude                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortBrushSize>    Icon_Size                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_GetSkillTreeNodeIconSizeByMagnitude(EFortHomebaseNodeMagnitude Node_Magnitude, class UObject* __WorldContext, TEnumAsByte<EFortBrushSize>* Icon_Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeIconSizeByMagnitude");

	USkillTreeBPLibrary_C_GetSkillTreeNodeIconSizeByMagnitude_Params params;
	params.Node_Magnitude = Node_Magnitude;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon_Size != nullptr)
		*Icon_Size = params.Icon_Size;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeShapeByDisplayType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortHomebaseNodeDisplayType   Display_Type                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSquare                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsExitNode                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_GetSkillTreeNodeShapeByDisplayType(EFortHomebaseNodeDisplayType Display_Type, class UObject* __WorldContext, bool* IsSquare, bool* IsExitNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeShapeByDisplayType");

	USkillTreeBPLibrary_C_GetSkillTreeNodeShapeByDisplayType_Params params;
	params.Display_Type = Display_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSquare != nullptr)
		*IsSquare = params.IsSquare;
	if (IsExitNode != nullptr)
		*IsExitNode = params.IsExitNode;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeSizeByMagnitude
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EFortHomebaseNodeMagnitude     Node_Magnitude                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortHomebaseNodeDisplayType   Display_Type                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 World_Context                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Size                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_GetSkillTreeNodeSizeByMagnitude(EFortHomebaseNodeMagnitude Node_Magnitude, EFortHomebaseNodeDisplayType Display_Type, class UObject* World_Context, class UObject* __WorldContext, float* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeSizeByMagnitude");

	USkillTreeBPLibrary_C_GetSkillTreeNodeSizeByMagnitude_Params params;
	params.Node_Magnitude = Node_Magnitude;
	params.Display_Type = Display_Type;
	params.World_Context = World_Context;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_DynamicData
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 World_Context                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHomebaseNodeState      NodeState                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_UpdateSkillTreeNodeMaterial_DynamicData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNodeState& NodeState, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_DynamicData");

	USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_DynamicData_Params params;
	params.World_Context = World_Context;
	params.Material = Material;
	params.NodeState = NodeState;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeCostTint
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FHomebaseNode           HomebaseNode                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            NodeTintColour                 (Parm, OutParm, IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_GetSkillTreeNodeCostTint(const struct FHomebaseNode& HomebaseNode, class UObject* __WorldContext, struct FLinearColor* NodeTintColour)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.GetSkillTreeNodeCostTint");

	USkillTreeBPLibrary_C_GetSkillTreeNodeCostTint_Params params;
	params.HomebaseNode = HomebaseNode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NodeTintColour != nullptr)
		*NodeTintColour = params.NodeTintColour;
}


// Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_StaticData
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 World_Context                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHomebaseNode           NodeData                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FFortSkillTreeNodeDisplayData DisplayData                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkillTreeBPLibrary_C::STATIC_UpdateSkillTreeNodeMaterial_StaticData(class UObject* World_Context, class UMaterialInstanceDynamic* Material, const struct FHomebaseNode& NodeData, const struct FFortSkillTreeNodeDisplayData& DisplayData, class UCommonButton* Button, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function SkillTreeBPLibrary.SkillTreeBPLibrary_C.UpdateSkillTreeNodeMaterial_StaticData");

	USkillTreeBPLibrary_C_UpdateSkillTreeNodeMaterial_StaticData_Params params;
	params.World_Context = World_Context;
	params.Material = Material;
	params.NodeData = NodeData;
	params.DisplayData = DisplayData;
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

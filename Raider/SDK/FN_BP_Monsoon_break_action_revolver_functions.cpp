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

// Function BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Monsoon_break_action_revolver_AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C
// (BlueprintEvent)

void UBP_Monsoon_break_action_revolver_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Monsoon_break_action_revolver_AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Monsoon_break_action_revolver_AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C");

	UBP_Monsoon_break_action_revolver_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BP_Monsoon_break_action_revolver_AnimGraphNode_ModifyBone_F54846DF4EA40510A42104985A5E8C6C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Monsoon_break_action_revolver_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C.BlueprintUpdateAnimation");

	UBP_Monsoon_break_action_revolver_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C.ExecuteUbergraph_BP_Monsoon_break_action_revolver
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Monsoon_break_action_revolver_C::ExecuteUbergraph_BP_Monsoon_break_action_revolver(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Monsoon_break_action_revolver.BP_Monsoon_break_action_revolver_C.ExecuteUbergraph_BP_Monsoon_break_action_revolver");

	UBP_Monsoon_break_action_revolver_C_ExecuteUbergraph_BP_Monsoon_break_action_revolver_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

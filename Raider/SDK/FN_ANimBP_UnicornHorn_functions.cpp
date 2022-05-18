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

// Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E
// (BlueprintEvent)

void UANimBP_UnicornHorn_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E()
{
	static auto fn = UObject::FindObject<UFunction>("Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E");

	UANimBP_UnicornHorn_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANimBP_UnicornHorn_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.BlueprintUpdateAnimation");

	UANimBP_UnicornHorn_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.ExecuteUbergraph_ANimBP_UnicornHorn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UANimBP_UnicornHorn_C::ExecuteUbergraph_ANimBP_UnicornHorn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.ExecuteUbergraph_ANimBP_UnicornHorn");

	UANimBP_UnicornHorn_C_ExecuteUbergraph_ANimBP_UnicornHorn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

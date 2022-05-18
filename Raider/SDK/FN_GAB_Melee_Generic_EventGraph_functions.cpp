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

// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Completed_8C20D6D3411A3D7E54D6049F69DF10BE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_Melee_Generic_EventGraph_C::Completed_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Completed_8C20D6D3411A3D7E54D6049F69DF10BE");

	UGAB_Melee_Generic_EventGraph_C_Completed_8C20D6D3411A3D7E54D6049F69DF10BE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_Melee_Generic_EventGraph_C::Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE");

	UGAB_Melee_Generic_EventGraph_C_Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Triggered_8C20D6D3411A3D7E54D6049F69DF10BE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_Melee_Generic_EventGraph_C::Triggered_8C20D6D3411A3D7E54D6049F69DF10BE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Triggered_8C20D6D3411A3D7E54D6049F69DF10BE");

	UGAB_Melee_Generic_EventGraph_C_Triggered_8C20D6D3411A3D7E54D6049F69DF10BE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_Melee_Generic_EventGraph_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.K2_ActivateAbility");

	UGAB_Melee_Generic_EventGraph_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.ExecuteUbergraph_GAB_Melee_Generic_EventGraph
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Melee_Generic_EventGraph_C::ExecuteUbergraph_GAB_Melee_Generic_EventGraph(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.ExecuteUbergraph_GAB_Melee_Generic_EventGraph");

	UGAB_Melee_Generic_EventGraph_C_ExecuteUbergraph_GAB_Melee_Generic_EventGraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

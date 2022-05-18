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

// Function GCN_UG_Vortex.GCN_UG_Vortex_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_UG_Vortex_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_UG_Vortex.GCN_UG_Vortex_C.UserConstructionScript");

	AGCN_UG_Vortex_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_UG_Vortex.GCN_UG_Vortex_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AGCN_UG_Vortex_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_UG_Vortex.GCN_UG_Vortex_C.Timeline_0__FinishedFunc");

	AGCN_UG_Vortex_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_UG_Vortex.GCN_UG_Vortex_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AGCN_UG_Vortex_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_UG_Vortex.GCN_UG_Vortex_C.Timeline_0__UpdateFunc");

	AGCN_UG_Vortex_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_UG_Vortex.GCN_UG_Vortex_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCN_UG_Vortex_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_UG_Vortex.GCN_UG_Vortex_C.K2_HandleGameplayCue");

	AGCN_UG_Vortex_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_UG_Vortex.GCN_UG_Vortex_C.ExecuteUbergraph_GCN_UG_Vortex
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_UG_Vortex_C::ExecuteUbergraph_GCN_UG_Vortex(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_UG_Vortex.GCN_UG_Vortex_C.ExecuteUbergraph_GCN_UG_Vortex");

	AGCN_UG_Vortex_C_ExecuteUbergraph_GCN_UG_Vortex_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

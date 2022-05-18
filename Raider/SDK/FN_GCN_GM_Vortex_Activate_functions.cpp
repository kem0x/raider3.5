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

// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.OnExecute
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_GM_Vortex_Activate_C::OnExecute(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.OnExecute");

	AGCN_GM_Vortex_Activate_C_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_GM_Vortex_Activate_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.UserConstructionScript");

	AGCN_GM_Vortex_Activate_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AGCN_GM_Vortex_Activate_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.Timeline_0__FinishedFunc");

	AGCN_GM_Vortex_Activate_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AGCN_GM_Vortex_Activate_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.Timeline_0__UpdateFunc");

	AGCN_GM_Vortex_Activate_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCN_GM_Vortex_Activate_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.K2_HandleGameplayCue");

	AGCN_GM_Vortex_Activate_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.ExecuteUbergraph_GCN_GM_Vortex_Activate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_GM_Vortex_Activate_C::ExecuteUbergraph_GCN_GM_Vortex_Activate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.ExecuteUbergraph_GCN_GM_Vortex_Activate");

	AGCN_GM_Vortex_Activate_C_ExecuteUbergraph_GCN_GM_Vortex_Activate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

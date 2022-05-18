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

// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_HuskDigger_TunnelMove_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.UserConstructionScript");

	AGCN_HuskDigger_TunnelMove_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCN_HuskDigger_TunnelMove_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.K2_HandleGameplayCue");

	AGCN_HuskDigger_TunnelMove_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.Trail
// (BlueprintCallable, BlueprintEvent)

void AGCN_HuskDigger_TunnelMove_C::Trail()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.Trail");

	AGCN_HuskDigger_TunnelMove_C_Trail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.ExecuteUbergraph_GCN_HuskDigger_TunnelMove
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_HuskDigger_TunnelMove_C::ExecuteUbergraph_GCN_HuskDigger_TunnelMove(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.ExecuteUbergraph_GCN_HuskDigger_TunnelMove");

	AGCN_HuskDigger_TunnelMove_C_ExecuteUbergraph_GCN_HuskDigger_TunnelMove_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

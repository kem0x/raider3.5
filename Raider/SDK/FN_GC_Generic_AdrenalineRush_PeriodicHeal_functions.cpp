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

// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.HealthCheck
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Check_Return                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::HealthCheck(bool* Check_Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.HealthCheck");

	AGC_Generic_AdrenalineRush_PeriodicHeal_C_HealthCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Check_Return != nullptr)
		*Check_Return = params.Check_Return;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.UserConstructionScript");

	AGC_Generic_AdrenalineRush_PeriodicHeal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.Health_Sweep__FinishedFunc
// (BlueprintEvent)

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::Health_Sweep__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.Health_Sweep__FinishedFunc");

	AGC_Generic_AdrenalineRush_PeriodicHeal_C_Health_Sweep__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.Health_Sweep__UpdateFunc
// (BlueprintEvent)

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::Health_Sweep__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.Health_Sweep__UpdateFunc");

	AGC_Generic_AdrenalineRush_PeriodicHeal_C_Health_Sweep__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.K2_HandleGameplayCue");

	AGC_Generic_AdrenalineRush_PeriodicHeal_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Generic_AdrenalineRush_PeriodicHeal_C::ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal");

	AGC_Generic_AdrenalineRush_PeriodicHeal_C_ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

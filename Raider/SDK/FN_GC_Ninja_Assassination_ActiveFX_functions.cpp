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

// Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.OnWhileActiveParticleSystemActivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent** WhileActiveParticleSysComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_Ninja_Assassination_ActiveFX_C::OnWhileActiveParticleSystemActivate(class UParticleSystemComponent** WhileActiveParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.OnWhileActiveParticleSystemActivate");

	AGC_Ninja_Assassination_ActiveFX_C_OnWhileActiveParticleSystemActivate_Params params;
	params.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.WhileActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGC_Ninja_Assassination_ActiveFX_C::WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.WhileActive");

	AGC_Ninja_Assassination_ActiveFX_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGC_Ninja_Assassination_ActiveFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.UserConstructionScript");

	AGC_Ninja_Assassination_ActiveFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGC_Ninja_Assassination_ActiveFX_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.K2_HandleGameplayCue");

	AGC_Ninja_Assassination_ActiveFX_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.ExecuteUbergraph_GC_Ninja_Assassination_ActiveFX
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGC_Ninja_Assassination_ActiveFX_C::ExecuteUbergraph_GC_Ninja_Assassination_ActiveFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.ExecuteUbergraph_GC_Ninja_Assassination_ActiveFX");

	AGC_Ninja_Assassination_ActiveFX_C_ExecuteUbergraph_GC_Ninja_Assassination_ActiveFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

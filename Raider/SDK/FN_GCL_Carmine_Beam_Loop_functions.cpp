// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_Carmine_Beam_Loop_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnRemove");

	AGCL_Carmine_Beam_Loop_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnWhileActiveParticleSystemDeactivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent** WhileActiveParticleSysComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_Carmine_Beam_Loop_C::OnWhileActiveParticleSystemDeactivate(class UParticleSystemComponent** WhileActiveParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnWhileActiveParticleSystemDeactivate");

	AGCL_Carmine_Beam_Loop_C_OnWhileActiveParticleSystemDeactivate_Params params;
	params.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.WhileActive
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_Carmine_Beam_Loop_C::WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.WhileActive");

	AGCL_Carmine_Beam_Loop_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnStopParticleSystemSpawned
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent** SpawnedParticleSysComponent    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_Carmine_Beam_Loop_C::OnStopParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnStopParticleSystemSpawned");

	AGCL_Carmine_Beam_Loop_C_OnStopParticleSystemSpawned_Params params;
	params.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnWhileActiveParticleSystemActivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent** WhileActiveParticleSysComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_Carmine_Beam_Loop_C::OnWhileActiveParticleSystemActivate(class UParticleSystemComponent** WhileActiveParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.OnWhileActiveParticleSystemActivate");

	AGCL_Carmine_Beam_Loop_C_OnWhileActiveParticleSystemActivate_Params params;
	params.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_Carmine_Beam_Loop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.UserConstructionScript");

	AGCL_Carmine_Beam_Loop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCL_Carmine_Beam_Loop_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.ReceiveBeginPlay");

	AGCL_Carmine_Beam_Loop_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Carmine_Beam_Loop_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.ReceiveEndPlay");

	AGCL_Carmine_Beam_Loop_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_Carmine_Beam_Loop_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.K2_HandleGameplayCue");

	AGCL_Carmine_Beam_Loop_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.ExecuteUbergraph_GCL_Carmine_Beam_Loop
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Carmine_Beam_Loop_C::ExecuteUbergraph_GCL_Carmine_Beam_Loop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Beam_Loop.GCL_Carmine_Beam_Loop_C.ExecuteUbergraph_GCL_Carmine_Beam_Loop");

	AGCL_Carmine_Beam_Loop_C_ExecuteUbergraph_GCL_Carmine_Beam_Loop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

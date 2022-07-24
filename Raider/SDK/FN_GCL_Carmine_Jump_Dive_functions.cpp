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

// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCL_Carmine_Jump_Dive_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.OnRemove");

	AGCL_Carmine_Jump_Dive_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.OnStopParticleSystemSpawned
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent** SpawnedParticleSysComponent    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_Carmine_Jump_Dive_C::OnStopParticleSystemSpawned(class UParticleSystemComponent** SpawnedParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.OnStopParticleSystemSpawned");

	AGCL_Carmine_Jump_Dive_C_OnStopParticleSystemSpawned_Params params;
	params.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.OnWhileActiveParticleSystemActivate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent** WhileActiveParticleSysComponent (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_Carmine_Jump_Dive_C::OnWhileActiveParticleSystemActivate(class UParticleSystemComponent** WhileActiveParticleSysComponent, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.OnWhileActiveParticleSystemActivate");

	AGCL_Carmine_Jump_Dive_C_OnWhileActiveParticleSystemActivate_Params params;
	params.WhileActiveParticleSysComponent = WhileActiveParticleSysComponent;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_Carmine_Jump_Dive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.UserConstructionScript");

	AGCL_Carmine_Jump_Dive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.DiveTrailUpdate__FinishedFunc
// (BlueprintEvent)

void AGCL_Carmine_Jump_Dive_C::DiveTrailUpdate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.DiveTrailUpdate__FinishedFunc");

	AGCL_Carmine_Jump_Dive_C_DiveTrailUpdate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.DiveTrailUpdate__UpdateFunc
// (BlueprintEvent)

void AGCL_Carmine_Jump_Dive_C::DiveTrailUpdate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.DiveTrailUpdate__UpdateFunc");

	AGCL_Carmine_Jump_Dive_C_DiveTrailUpdate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCL_Carmine_Jump_Dive_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.ReceiveBeginPlay");

	AGCL_Carmine_Jump_Dive_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Carmine_Jump_Dive_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.ReceiveEndPlay");

	AGCL_Carmine_Jump_Dive_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_Carmine_Jump_Dive_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.K2_HandleGameplayCue");

	AGCL_Carmine_Jump_Dive_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.ExecuteUbergraph_GCL_Carmine_Jump_Dive
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Carmine_Jump_Dive_C::ExecuteUbergraph_GCL_Carmine_Jump_Dive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Jump_Dive.GCL_Carmine_Jump_Dive_C.ExecuteUbergraph_GCL_Carmine_Jump_Dive");

	AGCL_Carmine_Jump_Dive_C_ExecuteUbergraph_GCL_Carmine_Jump_Dive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

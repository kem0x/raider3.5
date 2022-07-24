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

// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCL_Carmine_Aura_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.UserConstructionScript");

	AGCL_Carmine_Aura_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCL_Carmine_Aura_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.ReceiveBeginPlay");

	AGCL_Carmine_Aura_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Carmine_Aura_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.ReceiveEndPlay");

	AGCL_Carmine_Aura_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCL_Carmine_Aura_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.K2_HandleGameplayCue");

	AGCL_Carmine_Aura_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.JimLanded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AGCL_Carmine_Aura_C::JimLanded(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.JimLanded");

	AGCL_Carmine_Aura_C_JimLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.ExecuteUbergraph_GCL_Carmine_Aura
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCL_Carmine_Aura_C::ExecuteUbergraph_GCL_Carmine_Aura(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCL_Carmine_Aura.GCL_Carmine_Aura_C.ExecuteUbergraph_GCL_Carmine_Aura");

	AGCL_Carmine_Aura_C_ExecuteUbergraph_GCL_Carmine_Aura_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

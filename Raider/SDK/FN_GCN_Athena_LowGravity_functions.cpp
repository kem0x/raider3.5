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

// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Athena_LowGravity_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.OnRemove");

	AGCN_Athena_LowGravity_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.Activated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerPawn                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_LowGravity_C::Activated(class AActor* PlayerPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.Activated");

	AGCN_Athena_LowGravity_C_Activated_Params params;
	params.PlayerPawn = PlayerPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.WhileActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Athena_LowGravity_C::WhileActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.WhileActive");

	AGCN_Athena_LowGravity_C_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Athena_LowGravity_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.UserConstructionScript");

	AGCN_Athena_LowGravity_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_LowGravity_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveTick");

	AGCN_Athena_LowGravity_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGCN_Athena_LowGravity_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.K2_HandleGameplayCue");

	AGCN_Athena_LowGravity_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGCN_Athena_LowGravity_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveBeginPlay");

	AGCN_Athena_LowGravity_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_LowGravity_C::ExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExpireTell");

	AGCN_Athena_LowGravity_C_ExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ClearExpireTell
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_LowGravity_C::ClearExpireTell()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ClearExpireTell");

	AGCN_Athena_LowGravity_C_ClearExpireTell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.PlayExpirationSound
// (BlueprintCallable, BlueprintEvent)

void AGCN_Athena_LowGravity_C::PlayExpirationSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.PlayExpirationSound");

	AGCN_Athena_LowGravity_C_PlayExpirationSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExecuteUbergraph_GCN_Athena_LowGravity
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Athena_LowGravity_C::ExecuteUbergraph_GCN_Athena_LowGravity(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExecuteUbergraph_GCN_Athena_LowGravity");

	AGCN_Athena_LowGravity_C_ExecuteUbergraph_GCN_Athena_LowGravity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

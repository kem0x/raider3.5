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

// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.GetPlayerLeanValuePercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGCN_Hoverboard_Running_C::GetPlayerLeanValuePercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.GetPlayerLeanValuePercent");

	AGCN_Hoverboard_Running_C_GetPlayerLeanValuePercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.GetHoverboardSkeletal
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  SK_HoverboardComponent         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AGCN_Hoverboard_Running_C::GetHoverboardSkeletal(class USkeletalMeshComponent** SK_HoverboardComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.GetHoverboardSkeletal");

	AGCN_Hoverboard_Running_C_GetHoverboardSkeletal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SK_HoverboardComponent != nullptr)
		*SK_HoverboardComponent = params.SK_HoverboardComponent;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ClearSounds
// (Public, BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Running_C::ClearSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ClearSounds");

	AGCN_Hoverboard_Running_C_ClearSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnActive
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Hoverboard_Running_C::OnActive(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnActive");

	AGCN_Hoverboard_Running_C_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnRemove
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Hoverboard_Running_C::OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnRemove");

	AGCN_Hoverboard_Running_C_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.PlayerIsAccelerating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Hoverboard_Running_C::PlayerIsAccelerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.PlayerIsAccelerating");

	AGCN_Hoverboard_Running_C_PlayerIsAccelerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.PlayerIsDecelerating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Hoverboard_Running_C::PlayerIsDecelerating()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.PlayerIsDecelerating");

	AGCN_Hoverboard_Running_C_PlayerIsDecelerating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.IsPlayerJumping
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InVec                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGCN_Hoverboard_Running_C::IsPlayerJumping(const struct FVector& InVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.IsPlayerJumping");

	AGCN_Hoverboard_Running_C_IsPlayerJumping_Params params;
	params.InVec = InVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Running_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.UserConstructionScript");

	AGCN_Hoverboard_Running_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Spawnin__FinishedFunc
// (BlueprintEvent)

void AGCN_Hoverboard_Running_C::Spawnin__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Spawnin__FinishedFunc");

	AGCN_Hoverboard_Running_C_Spawnin__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Spawnin__UpdateFunc
// (BlueprintEvent)

void AGCN_Hoverboard_Running_C::Spawnin__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Spawnin__UpdateFunc");

	AGCN_Hoverboard_Running_C_Spawnin__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Hoverboard_Running_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ReceiveTick");

	AGCN_Hoverboard_Running_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.K2_OnReset
// (Event, Public, BlueprintEvent)

void AGCN_Hoverboard_Running_C::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.K2_OnReset");

	AGCN_Hoverboard_Running_C_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnJump
// (BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Running_C::OnJump()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnJump");

	AGCN_Hoverboard_Running_C_OnJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Idle
// (BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Running_C::Idle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Idle");

	AGCN_Hoverboard_Running_C_Idle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Moving
// (BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Running_C::Moving()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Moving");

	AGCN_Hoverboard_Running_C_Moving_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnSpawnedIn
// (BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Running_C::OnSpawnedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnSpawnedIn");

	AGCN_Hoverboard_Running_C_OnSpawnedIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnDespawned
// (BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Running_C::OnDespawned()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnDespawned");

	AGCN_Hoverboard_Running_C_OnDespawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ResetSpawnIn
// (BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Running_C::ResetSpawnIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ResetSpawnIn");

	AGCN_Hoverboard_Running_C_ResetSpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.BindSetup
// (BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Running_C::BindSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.BindSetup");

	AGCN_Hoverboard_Running_C_BindSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Setup
// (BlueprintCallable, BlueprintEvent)

void AGCN_Hoverboard_Running_C::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Setup");

	AGCN_Hoverboard_Running_C_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ExecuteUbergraph_GCN_Hoverboard_Running
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGCN_Hoverboard_Running_C::ExecuteUbergraph_GCN_Hoverboard_Running(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ExecuteUbergraph_GCN_Hoverboard_Running");

	AGCN_Hoverboard_Running_C_ExecuteUbergraph_GCN_Hoverboard_Running_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

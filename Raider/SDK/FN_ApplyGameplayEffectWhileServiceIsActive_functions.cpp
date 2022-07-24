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

// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UApplyGameplayEffectWhileServiceIsActive_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveActivation");

	UApplyGameplayEffectWhileServiceIsActive_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UApplyGameplayEffectWhileServiceIsActive_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveDeactivation");

	UApplyGameplayEffectWhileServiceIsActive_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UApplyGameplayEffectWhileServiceIsActive_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ReceiveTick");

	UApplyGameplayEffectWhileServiceIsActive_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UApplyGameplayEffectWhileServiceIsActive_C::ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ApplyGameplayEffectWhileServiceIsActive.ApplyGameplayEffectWhileServiceIsActive_C.ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive");

	UApplyGameplayEffectWhileServiceIsActive_C_ExecuteUbergraph_ApplyGameplayEffectWhileServiceIsActive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

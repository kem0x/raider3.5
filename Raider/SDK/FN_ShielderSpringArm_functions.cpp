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

// Function ShielderSpringArm.ShielderSpringArm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShielderSpringArm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.UserConstructionScript");

	AShielderSpringArm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderSpringArm_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.ReceiveTick");

	AShielderSpringArm_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderSpringArm.ShielderSpringArm_C.HitFlashFX
// (BlueprintCallable, BlueprintEvent)

void AShielderSpringArm_C::HitFlashFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.HitFlashFX");

	AShielderSpringArm_C_HitFlashFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderSpringArm.ShielderSpringArm_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AShielderSpringArm_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.ReceiveDestroyed");

	AShielderSpringArm_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderSpringArm.ShielderSpringArm_C.Beam_Removal
// (BlueprintCallable, BlueprintEvent)

void AShielderSpringArm_C::Beam_Removal()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.Beam_Removal");

	AShielderSpringArm_C_Beam_Removal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderSpringArm.ShielderSpringArm_C.Beam_Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderSpringArm_C::Beam_Spawn(class AActor* Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.Beam_Spawn");

	AShielderSpringArm_C_Beam_Spawn_Params params;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShielderSpringArm.ShielderSpringArm_C.ExecuteUbergraph_ShielderSpringArm
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AShielderSpringArm_C::ExecuteUbergraph_ShielderSpringArm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShielderSpringArm.ShielderSpringArm_C.ExecuteUbergraph_ShielderSpringArm");

	AShielderSpringArm_C_ExecuteUbergraph_ShielderSpringArm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

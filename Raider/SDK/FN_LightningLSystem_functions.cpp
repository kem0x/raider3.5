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

// Function LightningLSystem.LightningLsystem_C.GetRandomMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ALightningLsystem_C::GetRandomMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningLSystem.LightningLsystem_C.GetRandomMesh");

	ALightningLsystem_C_GetRandomMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.CleanupMesh
// (Public, BlueprintCallable, BlueprintEvent)

void ALightningLsystem_C::CleanupMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningLSystem.LightningLsystem_C.CleanupMesh");

	ALightningLsystem_C_CleanupMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALightningLsystem_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningLSystem.LightningLsystem_C.UserConstructionScript");

	ALightningLsystem_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.OnLightingCleanup
// (Event, Public, BlueprintEvent)

void ALightningLsystem_C::OnLightingCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningLSystem.LightningLsystem_C.OnLightingCleanup");

	ALightningLsystem_C_OnLightingCleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.SetupLightning
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Start_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 End_Location                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ALightningLsystem_C::SetupLightning(const struct FVector& Start_Location, const struct FVector& End_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningLSystem.LightningLsystem_C.SetupLightning");

	ALightningLsystem_C_SetupLightning_Params params;
	params.Start_Location = Start_Location;
	params.End_Location = End_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.DebugStrike
// (BlueprintCallable, BlueprintEvent)

void ALightningLsystem_C::DebugStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningLSystem.LightningLsystem_C.DebugStrike");

	ALightningLsystem_C_DebugStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.OnLightingInitialized
// (Event, Public, BlueprintEvent)

void ALightningLsystem_C::OnLightingInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningLSystem.LightningLsystem_C.OnLightingInitialized");

	ALightningLsystem_C_OnLightingInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.EndLightning
// (BlueprintCallable, BlueprintEvent)

void ALightningLsystem_C::EndLightning()
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningLSystem.LightningLsystem_C.EndLightning");

	ALightningLsystem_C_EndLightning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightningLSystem.LightningLsystem_C.ExecuteUbergraph_LightningLsystem
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ALightningLsystem_C::ExecuteUbergraph_LightningLsystem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightningLSystem.LightningLsystem_C.ExecuteUbergraph_LightningLsystem");

	ALightningLsystem_C_ExecuteUbergraph_LightningLsystem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

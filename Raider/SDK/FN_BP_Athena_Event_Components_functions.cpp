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

// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.RandomizeSpawnLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Athena_Event_Components_C::RandomizeSpawnLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.RandomizeSpawnLocation");

	ABP_Athena_Event_Components_C_RandomizeSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.OnRep_CometPosition
// (BlueprintCallable, BlueprintEvent)

void ABP_Athena_Event_Components_C::OnRep_CometPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.OnRep_CometPosition");

	ABP_Athena_Event_Components_C_OnRep_CometPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SetupRiverTint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           EnableTint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            TintColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Athena_Event_Components_C::SetupRiverTint(bool EnableTint, const struct FLinearColor& TintColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SetupRiverTint");

	ABP_Athena_Event_Components_C_SetupRiverTint_Params params;
	params.EnableTint = EnableTint;
	params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SetupComet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Athena_Event_Components_C::SetupComet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SetupComet");

	ABP_Athena_Event_Components_C_SetupComet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Athena_Event_Components_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.UserConstructionScript");

	ABP_Athena_Event_Components_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.CometMovementTest__FinishedFunc
// (BlueprintEvent)

void ABP_Athena_Event_Components_C::CometMovementTest__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.CometMovementTest__FinishedFunc");

	ABP_Athena_Event_Components_C_CometMovementTest__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.CometMovementTest__UpdateFunc
// (BlueprintEvent)

void ABP_Athena_Event_Components_C::CometMovementTest__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.CometMovementTest__UpdateFunc");

	ABP_Athena_Event_Components_C_CometMovementTest__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Athena_Event_Components_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.ReceiveBeginPlay");

	ABP_Athena_Event_Components_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.UpdateComet
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Athena_Event_Components_C::UpdateComet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.UpdateComet");

	ABP_Athena_Event_Components_C_UpdateComet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SpawnShootingStars
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Athena_Event_Components_C::SpawnShootingStars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SpawnShootingStars");

	ABP_Athena_Event_Components_C_SpawnShootingStars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SpawnMeteor
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_Athena_Event_Components_C::SpawnMeteor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.SpawnMeteor");

	ABP_Athena_Event_Components_C_SpawnMeteor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.ExecuteUbergraph_BP_Athena_Event_Components
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Athena_Event_Components_C::ExecuteUbergraph_BP_Athena_Event_Components(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Athena_Event_Components.BP_Athena_Event_Components_C.ExecuteUbergraph_BP_Athena_Event_Components");

	ABP_Athena_Event_Components_C_ExecuteUbergraph_BP_Athena_Event_Components_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

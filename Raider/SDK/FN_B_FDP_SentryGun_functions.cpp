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

// Function B_FDP_SentryGun.B_FDP_SentryGun_C.SetupMIDForMeshComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_FDP_SentryGun_C::SetupMIDForMeshComponent(class UStaticMeshComponent* MeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_FDP_SentryGun.B_FDP_SentryGun_C.SetupMIDForMeshComponent");

	AB_FDP_SentryGun_C_SetupMIDForMeshComponent_Params params;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_FDP_SentryGun.B_FDP_SentryGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_FDP_SentryGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_FDP_SentryGun.B_FDP_SentryGun_C.UserConstructionScript");

	AB_FDP_SentryGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_FDP_SentryGun.B_FDP_SentryGun_C.OnInitializeDecoPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// class ABuildingActor**         NewBuildingActor               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortDecoItemDefinition** NewDecoItemDefinition          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_FDP_SentryGun_C::OnInitializeDecoPreview(class ABuildingActor** NewBuildingActor, class UFortDecoItemDefinition** NewDecoItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_FDP_SentryGun.B_FDP_SentryGun_C.OnInitializeDecoPreview");

	AB_FDP_SentryGun_C_OnInitializeDecoPreview_Params params;
	params.NewBuildingActor = NewBuildingActor;
	params.NewDecoItemDefinition = NewDecoItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_FDP_SentryGun.B_FDP_SentryGun_C.ExecuteUbergraph_B_FDP_SentryGun
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_FDP_SentryGun_C::ExecuteUbergraph_B_FDP_SentryGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_FDP_SentryGun.B_FDP_SentryGun_C.ExecuteUbergraph_B_FDP_SentryGun");

	AB_FDP_SentryGun_C_ExecuteUbergraph_B_FDP_SentryGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

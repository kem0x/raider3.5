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

// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.KillOldStaticMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_SpacePistol_Laser_C::KillOldStaticMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.KillOldStaticMesh");

	AB_Prj_SpacePistol_Laser_C_KillOldStaticMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.CalculateBeamDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_SpacePistol_Laser_C::CalculateBeamDistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.CalculateBeamDistance");

	AB_Prj_SpacePistol_Laser_C_CalculateBeamDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_SpacePistol_Laser_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.UserConstructionScript");

	AB_Prj_SpacePistol_Laser_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_SpacePistol_Laser_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ReceiveActorBeginOverlap");

	AB_Prj_SpacePistol_Laser_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.SpawnRibbonTrail
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_SpacePistol_Laser_C::SpawnRibbonTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.SpawnRibbonTrail");

	AB_Prj_SpacePistol_Laser_C_SpawnRibbonTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_SpacePistol_Laser_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ReceiveTick");

	AB_Prj_SpacePistol_Laser_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_SpacePistol_Laser_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.OnExploded");

	AB_Prj_SpacePistol_Laser_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_SpacePistol_Laser_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ReceiveBeginPlay");

	AB_Prj_SpacePistol_Laser_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_SpacePistol_Laser_C::OnBounce(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.OnBounce");

	AB_Prj_SpacePistol_Laser_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.SpawnHitParticles
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_Prj_SpacePistol_Laser_C::SpawnHitParticles(const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.SpawnHitParticles");

	AB_Prj_SpacePistol_Laser_C_SpawnHitParticles_Params params;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_SpacePistol_Laser_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Prj_SpacePistol_Laser_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ExecuteUbergraph_B_Prj_SpacePistol_Laser
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_SpacePistol_Laser_C::ExecuteUbergraph_B_Prj_SpacePistol_Laser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_SpacePistol_Laser.B_Prj_SpacePistol_Laser_C.ExecuteUbergraph_B_Prj_SpacePistol_Laser");

	AB_Prj_SpacePistol_Laser_C_ExecuteUbergraph_B_Prj_SpacePistol_Laser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

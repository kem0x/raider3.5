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

// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Prj_Athena_StickyGrenade_C::HandleHits(class UObject* Object, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHits");

	AB_Prj_Athena_StickyGrenade_C_HandleHits_Params params;
	params.Object = Object;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHitSupplyDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Prj_Athena_StickyGrenade_C::HandleHitSupplyDrop(class UObject* Object, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHitSupplyDrop");

	AB_Prj_Athena_StickyGrenade_C_HandleHitSupplyDrop_Params params;
	params.Object = Object;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHitVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Prj_Athena_StickyGrenade_C::HandleHitVehicle(class UObject* Object, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHitVehicle");

	AB_Prj_Athena_StickyGrenade_C_HandleHitVehicle_Params params;
	params.Object = Object;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHitBuildingWall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Component                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AB_Prj_Athena_StickyGrenade_C::HandleHitBuildingWall(class UObject* Object, class UPrimitiveComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.HandleHitBuildingWall");

	AB_Prj_Athena_StickyGrenade_C_HandleHitBuildingWall_Params params;
	params.Object = Object;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.PlayStickSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor*                  HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_StickyGrenade_C::PlayStickSound(const struct FVector& Location, class AActor* HitActor, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.PlayStickSound");

	AB_Prj_Athena_StickyGrenade_C_PlayStickSound_Params params;
	params.Location = Location;
	params.HitActor = HitActor;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_StickyGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.UserConstructionScript");

	AB_Prj_Athena_StickyGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.WobbleOnStick__FinishedFunc
// (BlueprintEvent)

void AB_Prj_Athena_StickyGrenade_C::WobbleOnStick__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.WobbleOnStick__FinishedFunc");

	AB_Prj_Athena_StickyGrenade_C_WobbleOnStick__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.WobbleOnStick__UpdateFunc
// (BlueprintEvent)

void AB_Prj_Athena_StickyGrenade_C::WobbleOnStick__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.WobbleOnStick__UpdateFunc");

	AB_Prj_Athena_StickyGrenade_C_WobbleOnStick__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Athena_StickyGrenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.ReceiveBeginPlay");

	AB_Prj_Athena_StickyGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_StickyGrenade_C::OnStop(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnStop");

	AB_Prj_Athena_StickyGrenade_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Stop_Rotation
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_StickyGrenade_C::Stop_Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Stop_Rotation");

	AB_Prj_Athena_StickyGrenade_C_Stop_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_Athena_StickyGrenade_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnExploded");

	AB_Prj_Athena_StickyGrenade_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Event_BuildingActorDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UPrimitiveComponent*     FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_Prj_Athena_StickyGrenade_C::Event_BuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Event_BuildingActorDied");

	AB_Prj_Athena_StickyGrenade_C_Event_BuildingActorDied_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnTouched
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bIsOverlap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_StickyGrenade_C::OnTouched(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FHitResult* HitResult, bool* bIsOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnTouched");

	AB_Prj_Athena_StickyGrenade_C_OnTouched_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitResult = HitResult;
	params.bIsOverlap = bIsOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnAttachedToDied
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UPrimitiveComponent**    FHitComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_Prj_Athena_StickyGrenade_C::OnAttachedToDied(class AActor** DamagedActor, float* Damage, class AController** InstigatedBy, class AActor** DamageCauser, struct FVector* HitLocation, class UPrimitiveComponent** FHitComponent, struct FName* BoneName, struct FVector* Momentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.OnAttachedToDied");

	AB_Prj_Athena_StickyGrenade_C_OnAttachedToDied_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitLocation = HitLocation;
	params.FHitComponent = FHitComponent;
	params.BoneName = BoneName;
	params.Momentum = Momentum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Event_TriggerExplosion
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_StickyGrenade_C::Event_TriggerExplosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.Event_TriggerExplosion");

	AB_Prj_Athena_StickyGrenade_C_Event_TriggerExplosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_StickyGrenade_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Prj_Athena_StickyGrenade_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.ExecuteUbergraph_B_Prj_Athena_StickyGrenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_StickyGrenade_C::ExecuteUbergraph_B_Prj_Athena_StickyGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_StickyGrenade.B_Prj_Athena_StickyGrenade_C.ExecuteUbergraph_B_Prj_Athena_StickyGrenade");

	AB_Prj_Athena_StickyGrenade_C_ExecuteUbergraph_B_Prj_Athena_StickyGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnKeepOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::SpawnKeepOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnKeepOut");

	AB_Prj_Commando_FragGrenade_C_SpawnKeepOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnClusters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::SpawnClusters()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnClusters");

	AB_Prj_Commando_FragGrenade_C_SpawnClusters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CalcGrenadeSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AB_Prj_Commando_FragGrenade_C::CalcGrenadeSpeed(float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CalcGrenadeSpeed");

	AB_Prj_Commando_FragGrenade_C_CalcGrenadeSpeed_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnRep_StoredHit
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::OnRep_StoredHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnRep_StoredHit");

	AB_Prj_Commando_FragGrenade_C_OnRep_StoredHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.UserConstructionScript");

	AB_Prj_Commando_FragGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveBeginPlay");

	AB_Prj_Commando_FragGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Commando_FragGrenade_C::OnStop(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnStop");

	AB_Prj_Commando_FragGrenade_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Stop_Rotation
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::Stop_Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Stop_Rotation");

	AB_Prj_Commando_FragGrenade_C_Stop_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_Commando_FragGrenade_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnExploded");

	AB_Prj_Commando_FragGrenade_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Commando_FragGrenade_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveAnyDamage");

	AB_Prj_Commando_FragGrenade_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Commando_FragGrenade_C::OnBounce(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnBounce");

	AB_Prj_Commando_FragGrenade_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Commando_FragGrenade_C::BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	AB_Prj_Commando_FragGrenade_C_BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.On Destroy Grenade
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Commando_FragGrenade_C::On_Destroy_Grenade(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.On Destroy Grenade");

	AB_Prj_Commando_FragGrenade_C_On_Destroy_Grenade_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Bind Destroy Grenade
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::Bind_Destroy_Grenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Bind Destroy Grenade");

	AB_Prj_Commando_FragGrenade_C_Bind_Destroy_Grenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Force On Exploded Effects
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::Force_On_Exploded_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Force On Exploded Effects");

	AB_Prj_Commando_FragGrenade_C_Force_On_Exploded_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Unbind Destroy Grenade
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::Unbind_Destroy_Grenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Unbind Destroy Grenade");

	AB_Prj_Commando_FragGrenade_C_Unbind_Destroy_Grenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.TriggerDoExplsoion
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::TriggerDoExplsoion()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.TriggerDoExplsoion");

	AB_Prj_Commando_FragGrenade_C_TriggerDoExplsoion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveDestroyed");

	AB_Prj_Commando_FragGrenade_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CheckKeepOutAndCluster
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Commando_FragGrenade_C::CheckKeepOutAndCluster()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CheckKeepOutAndCluster");

	AB_Prj_Commando_FragGrenade_C_CheckKeepOutAndCluster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Commando_FragGrenade_C::ExecuteUbergraph_B_Prj_Commando_FragGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade");

	AB_Prj_Commando_FragGrenade_C_ExecuteUbergraph_B_Prj_Commando_FragGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ImpactOnHit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AProjectileHuskLobber_C::ImpactOnHit(const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.ImpactOnHit");

	AProjectileHuskLobber_C_ImpactOnHit_Params params;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskLobber.ProjectileHuskLobber_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectileHuskLobber_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.UserConstructionScript");

	AProjectileHuskLobber_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileHuskLobber_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.ReceiveHit");

	AProjectileHuskLobber_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ProjectileShot_Event
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AProjectileHuskLobber_C::ProjectileShot_Event(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.ProjectileShot_Event");

	AProjectileHuskLobber_C_ProjectileShot_Event_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskLobber.ProjectileHuskLobber_C.OnShot
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectileHuskLobber_C::OnShot(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.OnShot");

	AProjectileHuskLobber_C_OnShot_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ExecuteUbergraph_ProjectileHuskLobber
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectileHuskLobber_C::ExecuteUbergraph_ProjectileHuskLobber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.ExecuteUbergraph_ProjectileHuskLobber");

	AProjectileHuskLobber_C_ExecuteUbergraph_ProjectileHuskLobber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjectileHuskLobber.ProjectileHuskLobber_C.ProjectileShot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AProjectileHuskLobber_C::ProjectileShot__DelegateSignature(const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjectileHuskLobber.ProjectileHuskLobber_C.ProjectileShot__DelegateSignature");

	AProjectileHuskLobber_C_ProjectileShot__DelegateSignature_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

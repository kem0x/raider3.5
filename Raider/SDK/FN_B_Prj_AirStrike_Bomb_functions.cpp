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

// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.StopProjectile
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_AirStrike_Bomb_C::StopProjectile(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.StopProjectile");

	AB_Prj_AirStrike_Bomb_C_StopProjectile_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_AirStrike_Bomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.UserConstructionScript");

	AB_Prj_AirStrike_Bomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_AirStrike_Bomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ReceiveBeginPlay");

	AB_Prj_AirStrike_Bomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_AirStrike_Bomb_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ReceiveAnyDamage");

	AB_Prj_AirStrike_Bomb_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ReceiveHit
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

void AB_Prj_AirStrike_Bomb_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ReceiveHit");

	AB_Prj_AirStrike_Bomb_C_ReceiveHit_Params params;
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


// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_AirStrike_Bomb_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.OnExploded");

	AB_Prj_AirStrike_Bomb_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.OnStoppedOnServer
// (Event, Public, BlueprintEvent)

void AB_Prj_AirStrike_Bomb_C::OnStoppedOnServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.OnStoppedOnServer");

	AB_Prj_AirStrike_Bomb_C_OnStoppedOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ExecuteUbergraph_B_Prj_AirStrike_Bomb
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_AirStrike_Bomb_C::ExecuteUbergraph_B_Prj_AirStrike_Bomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_AirStrike_Bomb.B_Prj_AirStrike_Bomb_C.ExecuteUbergraph_B_Prj_AirStrike_Bomb");

	AB_Prj_AirStrike_Bomb_C_ExecuteUbergraph_B_Prj_AirStrike_Bomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

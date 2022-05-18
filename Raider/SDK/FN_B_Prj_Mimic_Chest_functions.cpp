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

// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.SpawnBottleRocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortGameplayEffectContainerSpec EffectContainerSpec            (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_Prj_Mimic_Chest_C::SpawnBottleRocket(const struct FFortGameplayEffectContainerSpec& EffectContainerSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.SpawnBottleRocket");

	AB_Prj_Mimic_Chest_C_SpawnBottleRocket_Params params;
	params.EffectContainerSpec = EffectContainerSpec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.OnRep_MuzzleFlashCounter
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Mimic_Chest_C::OnRep_MuzzleFlashCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.OnRep_MuzzleFlashCounter");

	AB_Prj_Mimic_Chest_C_OnRep_MuzzleFlashCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.TriggerMuzzleFlashFX
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Mimic_Chest_C::TriggerMuzzleFlashFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.TriggerMuzzleFlashFX");

	AB_Prj_Mimic_Chest_C_TriggerMuzzleFlashFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Mimic_Chest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.UserConstructionScript");

	AB_Prj_Mimic_Chest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.FlashShield
// (Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Mimic_Chest_C::FlashShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.FlashShield");

	AB_Prj_Mimic_Chest_C_FlashShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Mimic_Chest_C::OnStop(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.OnStop");

	AB_Prj_Mimic_Chest_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Mimic_Chest_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveAnyDamage");

	AB_Prj_Mimic_Chest_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Mimic_Chest_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveBeginPlay");

	AB_Prj_Mimic_Chest_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Mimic_Chest_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveEndPlay");

	AB_Prj_Mimic_Chest_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveHit
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

void AB_Prj_Mimic_Chest_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ReceiveHit");

	AB_Prj_Mimic_Chest_C_ReceiveHit_Params params;
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


// Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ExecuteUbergraph_B_Prj_Mimic_Chest
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Mimic_Chest_C::ExecuteUbergraph_B_Prj_Mimic_Chest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Mimic_Chest.B_Prj_Mimic_Chest_C.ExecuteUbergraph_B_Prj_Mimic_Chest");

	AB_Prj_Mimic_Chest_C_ExecuteUbergraph_B_Prj_Mimic_Chest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

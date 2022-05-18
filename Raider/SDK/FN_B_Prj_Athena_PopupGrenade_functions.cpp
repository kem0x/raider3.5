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

// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.GetGridActors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 WorldLocation                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// TArray<class ABuildingSMActor*> GridActors1                    (Parm, OutParm, ZeroConstructor)

void AB_Prj_Athena_PopupGrenade_C::GetGridActors(const struct FVector& WorldLocation, TArray<class ABuildingSMActor*>* GridActors1)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.GetGridActors");

	AB_Prj_Athena_PopupGrenade_C_GetGridActors_Params params;
	params.WorldLocation = WorldLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GridActors1 != nullptr)
		*GridActors1 = params.GridActors1;
}


// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.CreateBase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 A                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_Prj_Athena_PopupGrenade_C::CreateBase(const struct FVector& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.CreateBase");

	AB_Prj_Athena_PopupGrenade_C_CreateBase_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.SetBaseDestination
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_PopupGrenade_C::SetBaseDestination(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.SetBaseDestination");

	AB_Prj_Athena_PopupGrenade_C_SetBaseDestination_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Athena_PopupGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.UserConstructionScript");

	AB_Prj_Athena_PopupGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Athena_PopupGrenade_C::OnStop(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.OnStop");

	AB_Prj_Athena_PopupGrenade_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_Athena_PopupGrenade_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.OnExploded");

	AB_Prj_Athena_PopupGrenade_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.ReceiveHit
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

void AB_Prj_Athena_PopupGrenade_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.ReceiveHit");

	AB_Prj_Athena_PopupGrenade_C_ReceiveHit_Params params;
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


// Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.ExecuteUbergraph_B_Prj_Athena_PopupGrenade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Athena_PopupGrenade_C::ExecuteUbergraph_B_Prj_Athena_PopupGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Athena_PopupGrenade.B_Prj_Athena_PopupGrenade_C.ExecuteUbergraph_B_Prj_Athena_PopupGrenade");

	AB_Prj_Athena_PopupGrenade_C_ExecuteUbergraph_B_Prj_Athena_PopupGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

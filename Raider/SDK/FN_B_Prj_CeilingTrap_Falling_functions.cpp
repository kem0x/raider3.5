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

// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.OnRep_bExploded
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AB_Prj_CeilingTrap_Falling_C::OnRep_bExploded()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.OnRep_bExploded");

	AB_Prj_CeilingTrap_Falling_C_OnRep_bExploded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.RandomDirection
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 InVec                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AB_Prj_CeilingTrap_Falling_C::RandomDirection(const struct FVector& InVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.RandomDirection");

	AB_Prj_CeilingTrap_Falling_C_RandomDirection_Params params;
	params.InVec = InVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_CeilingTrap_Falling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.UserConstructionScript");

	AB_Prj_CeilingTrap_Falling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_CeilingTrap_Falling_C::OnBounce(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.OnBounce");

	AB_Prj_CeilingTrap_Falling_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.Overlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_CeilingTrap_Falling_C::Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.Overlap");

	AB_Prj_CeilingTrap_Falling_C_Overlap_Params params;
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


// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.BindOverlap
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_CeilingTrap_Falling_C::BindOverlap()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.BindOverlap");

	AB_Prj_CeilingTrap_Falling_C_BindOverlap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_CeilingTrap_Falling_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.ReceiveBeginPlay");

	AB_Prj_CeilingTrap_Falling_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.CheckTireDestruction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 CurrentVelocity                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AB_Prj_CeilingTrap_Falling_C::CheckTireDestruction(const struct FVector& CurrentVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.CheckTireDestruction");

	AB_Prj_CeilingTrap_Falling_C_CheckTireDestruction_Params params;
	params.CurrentVelocity = CurrentVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.DestroyTire
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_CeilingTrap_Falling_C::DestroyTire()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.DestroyTire");

	AB_Prj_CeilingTrap_Falling_C_DestroyTire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.ExecuteUbergraph_B_Prj_CeilingTrap_Falling
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_CeilingTrap_Falling_C::ExecuteUbergraph_B_Prj_CeilingTrap_Falling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.ExecuteUbergraph_B_Prj_CeilingTrap_Falling");

	AB_Prj_CeilingTrap_Falling_C_ExecuteUbergraph_B_Prj_CeilingTrap_Falling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

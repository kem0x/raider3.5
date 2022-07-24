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

// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_MissileBattery_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.UserConstructionScript");

	AB_Prj_MissileBattery_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.PPFader__FinishedFunc
// (BlueprintEvent)

void AB_Prj_MissileBattery_C::PPFader__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.PPFader__FinishedFunc");

	AB_Prj_MissileBattery_C_PPFader__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.PPFader__UpdateFunc
// (BlueprintEvent)

void AB_Prj_MissileBattery_C::PPFader__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.PPFader__UpdateFunc");

	AB_Prj_MissileBattery_C_PPFader__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_MissileBattery_C::OnStop(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.OnStop");

	AB_Prj_MissileBattery_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_MissileBattery_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ReceiveBeginPlay");

	AB_Prj_MissileBattery_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.FuseTimerMax
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_MissileBattery_C::FuseTimerMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.FuseTimerMax");

	AB_Prj_MissileBattery_C_FuseTimerMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.OnExploded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>*         HitActors                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>*     HitResults                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AB_Prj_MissileBattery_C::OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.OnExploded");

	AB_Prj_MissileBattery_C_OnExploded_Params params;
	params.HitActors = HitActors;
	params.HitResults = HitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.OnBounce
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_MissileBattery_C::OnBounce(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.OnBounce");

	AB_Prj_MissileBattery_C_OnBounce_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_MissileBattery_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ReceiveTick");

	AB_Prj_MissileBattery_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AB_Prj_MissileBattery_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ReceiveDestroyed");

	AB_Prj_MissileBattery_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ExecuteUbergraph_B_Prj_MissileBattery
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_MissileBattery_C::ExecuteUbergraph_B_Prj_MissileBattery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_MissileBattery.B_Prj_MissileBattery_C.ExecuteUbergraph_B_Prj_MissileBattery");

	AB_Prj_MissileBattery_C_ExecuteUbergraph_B_Prj_MissileBattery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

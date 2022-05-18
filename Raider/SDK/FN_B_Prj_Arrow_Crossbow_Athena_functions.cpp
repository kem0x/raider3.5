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

// Function B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Arrow_Crossbow_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.UserConstructionScript");

	AB_Prj_Arrow_Crossbow_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.OnTouched
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bIsOverlap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Arrow_Crossbow_Athena_C::OnTouched(class AActor** OtherActor, class UPrimitiveComponent** OtherComp, struct FHitResult* HitResult, bool* bIsOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.OnTouched");

	AB_Prj_Arrow_Crossbow_Athena_C_OnTouched_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.HitResult = HitResult;
	params.bIsOverlap = bIsOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.ExecuteUbergraph_B_Prj_Arrow_Crossbow_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Arrow_Crossbow_Athena_C::ExecuteUbergraph_B_Prj_Arrow_Crossbow_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.ExecuteUbergraph_B_Prj_Arrow_Crossbow_Athena");

	AB_Prj_Arrow_Crossbow_Athena_C_ExecuteUbergraph_B_Prj_Arrow_Crossbow_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

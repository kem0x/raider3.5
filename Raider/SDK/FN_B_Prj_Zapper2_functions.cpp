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

// Function B_Prj_Zapper2.B_Prj_Zapper2_C.OnRep_Impact Location
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Zapper2_C::OnRep_Impact_Location()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Zapper2.B_Prj_Zapper2_C.OnRep_Impact Location");

	AB_Prj_Zapper2_C_OnRep_Impact_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Zapper2.B_Prj_Zapper2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Zapper2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Zapper2.B_Prj_Zapper2_C.UserConstructionScript");

	AB_Prj_Zapper2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Zapper2.B_Prj_Zapper2_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Zapper2_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Zapper2.B_Prj_Zapper2_C.ReceiveAnyDamage");

	AB_Prj_Zapper2_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Zapper2.B_Prj_Zapper2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Zapper2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Zapper2.B_Prj_Zapper2_C.ReceiveBeginPlay");

	AB_Prj_Zapper2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Zapper2.B_Prj_Zapper2_C.OnStop
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AB_Prj_Zapper2_C::OnStop(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Zapper2.B_Prj_Zapper2_C.OnStop");

	AB_Prj_Zapper2_C_OnStop_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Prj_Zapper2.B_Prj_Zapper2_C.ExecuteUbergraph_B_Prj_Zapper2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Prj_Zapper2_C::ExecuteUbergraph_B_Prj_Zapper2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Prj_Zapper2.B_Prj_Zapper2_C.ExecuteUbergraph_B_Prj_Zapper2");

	AB_Prj_Zapper2_C_ExecuteUbergraph_B_Prj_Zapper2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

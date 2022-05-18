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

// Function B_DualPistol_Athena.B_DualPistol_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_DualPistol_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DualPistol_Athena.B_DualPistol_Athena_C.UserConstructionScript");

	AB_DualPistol_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_DualPistol_Athena.B_DualPistol_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_DualPistol_Athena_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DualPistol_Athena.B_DualPistol_Athena_C.ReceiveBeginPlay");

	AB_DualPistol_Athena_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_DualPistol_Athena.B_DualPistol_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bNewIsTargeting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_DualPistol_Athena_C::OnSetTargeting(bool* bNewIsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DualPistol_Athena.B_DualPistol_Athena_C.OnSetTargeting");

	AB_DualPistol_Athena_C_OnSetTargeting_Params params;
	params.bNewIsTargeting = bNewIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_DualPistol_Athena.B_DualPistol_Athena_C.ExecuteUbergraph_B_DualPistol_Athena
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_DualPistol_Athena_C::ExecuteUbergraph_B_DualPistol_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DualPistol_Athena.B_DualPistol_Athena_C.ExecuteUbergraph_B_DualPistol_Athena");

	AB_DualPistol_Athena_C_ExecuteUbergraph_B_DualPistol_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

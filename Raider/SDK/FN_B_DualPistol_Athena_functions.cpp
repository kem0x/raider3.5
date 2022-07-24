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


// Function B_DualPistol_Athena.B_DualPistol_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_DualPistol_Athena_C::OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_DualPistol_Athena.B_DualPistol_Athena_C.OnPlayWeaponFireFX");

	AB_DualPistol_Athena_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

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

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

// Function B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Shotgun_Break_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C.UserConstructionScript");

	AB_Shotgun_Break_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Shotgun_Break_Athena_C::OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C.OnPlayWeaponFireFX");

	AB_Shotgun_Break_Athena_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C.ExecuteUbergraph_B_Shotgun_Break_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Shotgun_Break_Athena_C::ExecuteUbergraph_B_Shotgun_Break_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Shotgun_Break_Athena.B_Shotgun_Break_Athena_C.ExecuteUbergraph_B_Shotgun_Break_Athena");

	AB_Shotgun_Break_Athena_C_ExecuteUbergraph_B_Shotgun_Break_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_RocketLauncher_Generic_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.UserConstructionScript");

	AB_RocketLauncher_Generic_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Persistent_Fire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_RocketLauncher_Generic_Athena_C::Muzzle_Flash_FX(bool* Persistent_Fire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.Muzzle Flash FX");

	AB_RocketLauncher_Generic_Athena_C_Muzzle_Flash_FX_Params params;
	params.Persistent_Fire = Persistent_Fire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.ExecuteUbergraph_B_RocketLauncher_Generic_Athena
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_RocketLauncher_Generic_Athena_C::ExecuteUbergraph_B_RocketLauncher_Generic_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.ExecuteUbergraph_B_RocketLauncher_Generic_Athena");

	AB_RocketLauncher_Generic_Athena_C_ExecuteUbergraph_B_RocketLauncher_Generic_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.UserConstructionScript");

	AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bPersistentFire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSecondaryFire                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C::OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.OnPlayWeaponFireFX");

	AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C_OnPlayWeaponFireFX_Params params;
	params.bPersistentFire = bPersistentFire;
	params.bSecondaryFire = bSecondaryFire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.ReceiveBeginPlay");

	AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_DarkEagle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C::ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_DarkEagle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_DarkEagle");

	AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_DarkEagle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

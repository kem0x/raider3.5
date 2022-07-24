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

// Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopWeaponStatRowEntry_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.Update");

	UTopWeaponStatRowEntry_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void UTopWeaponStatRowEntry_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.OnStatChanged");

	UTopWeaponStatRowEntry_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.ExecuteUbergraph_TopWeaponStatRowEntry
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopWeaponStatRowEntry_C::ExecuteUbergraph_TopWeaponStatRowEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopWeaponStatRowEntry.TopWeaponStatRowEntry_C.ExecuteUbergraph_TopWeaponStatRowEntry");

	UTopWeaponStatRowEntry_C_ExecuteUbergraph_TopWeaponStatRowEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function TopWeaponStatRow.TopWeaponStatRow_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTopWeaponStatRow_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopWeaponStatRow.TopWeaponStatRow_C.Update");

	UTopWeaponStatRow_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopWeaponStatRow.TopWeaponStatRow_C.OnStatChanged
// (Event, Protected, BlueprintEvent)

void UTopWeaponStatRow_C::OnStatChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function TopWeaponStatRow.TopWeaponStatRow_C.OnStatChanged");

	UTopWeaponStatRow_C_OnStatChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TopWeaponStatRow.TopWeaponStatRow_C.ExecuteUbergraph_TopWeaponStatRow
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTopWeaponStatRow_C::ExecuteUbergraph_TopWeaponStatRow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TopWeaponStatRow.TopWeaponStatRow_C.ExecuteUbergraph_TopWeaponStatRow");

	UTopWeaponStatRow_C_ExecuteUbergraph_TopWeaponStatRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

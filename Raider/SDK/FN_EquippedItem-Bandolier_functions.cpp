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

// Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCapacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Capacity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortAmmoItemDefinition* AmmoData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEquippedItem_Bandolier_C::UpdateCapacity(int Capacity, class UFortAmmoItemDefinition* AmmoData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCapacity");

	UEquippedItem_Bandolier_C_UpdateCapacity_Params params;
	params.Capacity = Capacity;
	params.AmmoData = AmmoData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCurrent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortAmmoItemDefinition* AmmoData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEquippedItem_Bandolier_C::UpdateCurrent(int Current, class UFortAmmoItemDefinition* AmmoData)
{
	static auto fn = UObject::FindObject<UFunction>("Function EquippedItem-Bandolier.EquippedItem-Bandolier_C.UpdateCurrent");

	UEquippedItem_Bandolier_C_UpdateCurrent_Params params;
	params.Current = Current;
	params.AmmoData = AmmoData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

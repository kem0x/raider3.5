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

// Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_AthenaInVehicle_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.K2_OnEndAbility");

	UGA_AthenaInVehicle_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_AthenaInVehicle_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.K2_ActivateAbility");

	UGA_AthenaInVehicle_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.ExecuteUbergraph_GA_AthenaInVehicle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_AthenaInVehicle_C::ExecuteUbergraph_GA_AthenaInVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.ExecuteUbergraph_GA_AthenaInVehicle");

	UGA_AthenaInVehicle_C_ExecuteUbergraph_GA_AthenaInVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

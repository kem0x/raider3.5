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

// Function GA_AthenaExitVehicle.GA_AthenaExitVehicle_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_AthenaExitVehicle_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AthenaExitVehicle.GA_AthenaExitVehicle_C.K2_ActivateAbility");

	UGA_AthenaExitVehicle_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AthenaExitVehicle.GA_AthenaExitVehicle_C.ExecuteUbergraph_GA_AthenaExitVehicle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_AthenaExitVehicle_C::ExecuteUbergraph_GA_AthenaExitVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AthenaExitVehicle.GA_AthenaExitVehicle_C.ExecuteUbergraph_GA_AthenaExitVehicle");

	UGA_AthenaExitVehicle_C_ExecuteUbergraph_GA_AthenaExitVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

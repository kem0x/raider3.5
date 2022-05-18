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

// Function GA_AthenaEnterVehicle.GA_AthenaEnterVehicle_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_AthenaEnterVehicle_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AthenaEnterVehicle.GA_AthenaEnterVehicle_C.K2_ActivateAbility");

	UGA_AthenaEnterVehicle_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_AthenaEnterVehicle.GA_AthenaEnterVehicle_C.ExecuteUbergraph_GA_AthenaEnterVehicle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_AthenaEnterVehicle_C::ExecuteUbergraph_GA_AthenaEnterVehicle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_AthenaEnterVehicle.GA_AthenaEnterVehicle_C.ExecuteUbergraph_GA_AthenaEnterVehicle");

	UGA_AthenaEnterVehicle_C_ExecuteUbergraph_GA_AthenaEnterVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

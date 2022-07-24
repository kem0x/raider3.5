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

// Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_MissileBattery_Homing_Placement_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.UserConstructionScript");

	AB_MissileBattery_Homing_Placement_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_MissileBattery_Homing_Placement_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.ReceiveBeginPlay");

	AB_MissileBattery_Homing_Placement_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.ExecuteUbergraph_B_MissileBattery_Homing_Placement
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_MissileBattery_Homing_Placement_C::ExecuteUbergraph_B_MissileBattery_Homing_Placement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C.ExecuteUbergraph_B_MissileBattery_Homing_Placement");

	AB_MissileBattery_Homing_Placement_C_ExecuteUbergraph_B_MissileBattery_Homing_Placement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

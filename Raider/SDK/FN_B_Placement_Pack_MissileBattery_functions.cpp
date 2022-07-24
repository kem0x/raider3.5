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

// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Placement_Pack_MissileBattery_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.UserConstructionScript");

	AB_Placement_Pack_MissileBattery_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Placement_Pack_MissileBattery_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.ReceiveBeginPlay");

	AB_Placement_Pack_MissileBattery_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.ExecuteUbergraph_B_Placement_Pack_MissileBattery
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Placement_Pack_MissileBattery_C::ExecuteUbergraph_B_Placement_Pack_MissileBattery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Placement_Pack_MissileBattery.B_Placement_Pack_MissileBattery_C.ExecuteUbergraph_B_Placement_Pack_MissileBattery");

	AB_Placement_Pack_MissileBattery_C_ExecuteUbergraph_B_Placement_Pack_MissileBattery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

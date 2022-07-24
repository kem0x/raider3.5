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

// Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MedicPack_HealNozzle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.UserConstructionScript");

	ABP_MedicPack_HealNozzle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MedicPack_HealNozzle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.ReceiveBeginPlay");

	ABP_MedicPack_HealNozzle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.ExecuteUbergraph_BP_MedicPack_HealNozzle
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MedicPack_HealNozzle_C::ExecuteUbergraph_BP_MedicPack_HealNozzle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MedicPack_HealNozzle.BP_MedicPack_HealNozzle_C.ExecuteUbergraph_BP_MedicPack_HealNozzle");

	ABP_MedicPack_HealNozzle_C_ExecuteUbergraph_BP_MedicPack_HealNozzle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

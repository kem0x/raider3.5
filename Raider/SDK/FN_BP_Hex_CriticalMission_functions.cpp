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

// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hex_CriticalMission_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.UserConstructionScript");

	ABP_Hex_CriticalMission_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.Rotate__FinishedFunc
// (BlueprintEvent)

void ABP_Hex_CriticalMission_C::Rotate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.Rotate__FinishedFunc");

	ABP_Hex_CriticalMission_C_Rotate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.Rotate__UpdateFunc
// (BlueprintEvent)

void ABP_Hex_CriticalMission_C::Rotate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.Rotate__UpdateFunc");

	ABP_Hex_CriticalMission_C_Rotate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.DeactivateCriticalMission
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_CriticalMission_C::DeactivateCriticalMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.DeactivateCriticalMission");

	ABP_Hex_CriticalMission_C_DeactivateCriticalMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.ActivateCriticalMission
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_CriticalMission_C::ActivateCriticalMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.ActivateCriticalMission");

	ABP_Hex_CriticalMission_C_ActivateCriticalMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.ExecuteUbergraph_BP_Hex_CriticalMission
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Hex_CriticalMission_C::ExecuteUbergraph_BP_Hex_CriticalMission(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.ExecuteUbergraph_BP_Hex_CriticalMission");

	ABP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_ProjectileTrajectory_AthenaRed.BP_ProjectileTrajectory_AthenaRed_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ProjectileTrajectory_AthenaRed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_AthenaRed.BP_ProjectileTrajectory_AthenaRed_C.UserConstructionScript");

	ABP_ProjectileTrajectory_AthenaRed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_AthenaRed.BP_ProjectileTrajectory_AthenaRed_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ProjectileTrajectory_AthenaRed_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_AthenaRed.BP_ProjectileTrajectory_AthenaRed_C.ReceiveBeginPlay");

	ABP_ProjectileTrajectory_AthenaRed_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ProjectileTrajectory_AthenaRed.BP_ProjectileTrajectory_AthenaRed_C.ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ProjectileTrajectory_AthenaRed_C::ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileTrajectory_AthenaRed.BP_ProjectileTrajectory_AthenaRed_C.ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed");

	ABP_ProjectileTrajectory_AthenaRed_C_ExecuteUbergraph_BP_ProjectileTrajectory_AthenaRed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

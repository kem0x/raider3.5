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

// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Glider_Rusty_Raider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.UserConstructionScript");

	AB_Glider_Rusty_Raider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Glider_Rusty_Raider_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.ReceiveBeginPlay");

	AB_Glider_Rusty_Raider_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.OnParachuteTrailUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         MovementLengthSquared          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForwardDot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RightDot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RotationalMovementAcceleration (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Glider_Rusty_Raider_C::OnParachuteTrailUpdated(float* MovementLengthSquared, float* ForwardDot, float* RightDot, float* RotationalMovementAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.OnParachuteTrailUpdated");

	AB_Glider_Rusty_Raider_C_OnParachuteTrailUpdated_Params params;
	params.MovementLengthSquared = MovementLengthSquared;
	params.ForwardDot = ForwardDot;
	params.RightDot = RightDot;
	params.RotationalMovementAcceleration = RotationalMovementAcceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.ExecuteUbergraph_B_Glider_Rusty_Raider
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Glider_Rusty_Raider_C::ExecuteUbergraph_B_Glider_Rusty_Raider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Rusty_Raider.B_Glider_Rusty_Raider_C.ExecuteUbergraph_B_Glider_Rusty_Raider");

	AB_Glider_Rusty_Raider_C_ExecuteUbergraph_B_Glider_Rusty_Raider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

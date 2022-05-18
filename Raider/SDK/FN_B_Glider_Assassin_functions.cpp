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

// Function B_Glider_Assassin.B_Glider_Assassin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Glider_Assassin_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Assassin.B_Glider_Assassin_C.UserConstructionScript");

	AB_Glider_Assassin_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Assassin.B_Glider_Assassin_C.TailLightSequence__FinishedFunc
// (BlueprintEvent)

void AB_Glider_Assassin_C::TailLightSequence__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Assassin.B_Glider_Assassin_C.TailLightSequence__FinishedFunc");

	AB_Glider_Assassin_C_TailLightSequence__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Assassin.B_Glider_Assassin_C.TailLightSequence__UpdateFunc
// (BlueprintEvent)

void AB_Glider_Assassin_C::TailLightSequence__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Assassin.B_Glider_Assassin_C.TailLightSequence__UpdateFunc");

	AB_Glider_Assassin_C_TailLightSequence__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Assassin.B_Glider_Assassin_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0_1
// (BlueprintEvent)
// Parameters:
// float                          AxisValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Glider_Assassin_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0_1(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Assassin.B_Glider_Assassin_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0_1");

	AB_Glider_Assassin_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_0_1_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Assassin.B_Glider_Assassin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Glider_Assassin_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Assassin.B_Glider_Assassin_C.ReceiveBeginPlay");

	AB_Glider_Assassin_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Assassin.B_Glider_Assassin_C.OnParachuteTrailUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         MovementLengthSquared          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForwardDot                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RightDot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RotationalMovementAcceleration (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Glider_Assassin_C::OnParachuteTrailUpdated(float* MovementLengthSquared, float* ForwardDot, float* RightDot, float* RotationalMovementAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Assassin.B_Glider_Assassin_C.OnParachuteTrailUpdated");

	AB_Glider_Assassin_C_OnParachuteTrailUpdated_Params params;
	params.MovementLengthSquared = MovementLengthSquared;
	params.ForwardDot = ForwardDot;
	params.RightDot = RightDot;
	params.RotationalMovementAcceleration = RotationalMovementAcceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Glider_Assassin.B_Glider_Assassin_C.ExecuteUbergraph_B_Glider_Assassin
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Glider_Assassin_C::ExecuteUbergraph_B_Glider_Assassin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Glider_Assassin.B_Glider_Assassin_C.ExecuteUbergraph_B_Glider_Assassin");

	AB_Glider_Assassin_C_ExecuteUbergraph_B_Glider_Assassin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

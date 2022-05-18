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

// Function B_Pistol_Gatling.B_Pistol_Gatling_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Pistol_Gatling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_Gatling.B_Pistol_Gatling_C.UserConstructionScript");

	AB_Pistol_Gatling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_Gatling.B_Pistol_Gatling_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AB_Pistol_Gatling_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_Gatling.B_Pistol_Gatling_C.Timeline_0__FinishedFunc");

	AB_Pistol_Gatling_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_Gatling.B_Pistol_Gatling_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AB_Pistol_Gatling_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_Gatling.B_Pistol_Gatling_C.Timeline_0__UpdateFunc");

	AB_Pistol_Gatling_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_Gatling.B_Pistol_Gatling_C.OnChargeDown
// (Event, Protected, BlueprintEvent)

void AB_Pistol_Gatling_C::OnChargeDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_Gatling.B_Pistol_Gatling_C.OnChargeDown");

	AB_Pistol_Gatling_C_OnChargeDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_Gatling.B_Pistol_Gatling_C.OnChargeUp
// (Event, Protected, BlueprintEvent)

void AB_Pistol_Gatling_C::OnChargeUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_Gatling.B_Pistol_Gatling_C.OnChargeUp");

	AB_Pistol_Gatling_C_OnChargeUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_Gatling.B_Pistol_Gatling_C.OnEndCharge
// (Event, Protected, BlueprintEvent)

void AB_Pistol_Gatling_C::OnEndCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_Gatling.B_Pistol_Gatling_C.OnEndCharge");

	AB_Pistol_Gatling_C_OnEndCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_Gatling.B_Pistol_Gatling_C.OnStartCharge
// (Event, Protected, BlueprintEvent)

void AB_Pistol_Gatling_C::OnStartCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_Gatling.B_Pistol_Gatling_C.OnStartCharge");

	AB_Pistol_Gatling_C_OnStartCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_Gatling.B_Pistol_Gatling_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pistol_Gatling_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_Gatling.B_Pistol_Gatling_C.ReceiveTick");

	AB_Pistol_Gatling_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_Gatling.B_Pistol_Gatling_C.Reset_SpinDown_Sound
// (BlueprintCallable, BlueprintEvent)

void AB_Pistol_Gatling_C::Reset_SpinDown_Sound()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_Gatling.B_Pistol_Gatling_C.Reset_SpinDown_Sound");

	AB_Pistol_Gatling_C_Reset_SpinDown_Sound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Pistol_Gatling.B_Pistol_Gatling_C.ExecuteUbergraph_B_Pistol_Gatling
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Pistol_Gatling_C::ExecuteUbergraph_B_Pistol_Gatling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Pistol_Gatling.B_Pistol_Gatling_C.ExecuteUbergraph_B_Pistol_Gatling");

	AB_Pistol_Gatling_C_ExecuteUbergraph_B_Pistol_Gatling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

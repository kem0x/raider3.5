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

// Function B_Assault_M4A1_Athena.B_Assault_M4A1_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Assault_M4A1_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Assault_M4A1_Athena.B_Assault_M4A1_Athena_C.UserConstructionScript");

	AB_Assault_M4A1_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Assault_M4A1_Athena.B_Assault_M4A1_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bNewIsTargeting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Assault_M4A1_Athena_C::OnSetTargeting(bool* bNewIsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Assault_M4A1_Athena.B_Assault_M4A1_Athena_C.OnSetTargeting");

	AB_Assault_M4A1_Athena_C_OnSetTargeting_Params params;
	params.bNewIsTargeting = bNewIsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Assault_M4A1_Athena.B_Assault_M4A1_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Assault_M4A1_Athena_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Assault_M4A1_Athena.B_Assault_M4A1_Athena_C.ReceiveTick");

	AB_Assault_M4A1_Athena_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_Assault_M4A1_Athena.B_Assault_M4A1_Athena_C.ExecuteUbergraph_B_Assault_M4A1_Athena
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_Assault_M4A1_Athena_C::ExecuteUbergraph_B_Assault_M4A1_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_Assault_M4A1_Athena.B_Assault_M4A1_Athena_C.ExecuteUbergraph_B_Assault_M4A1_Athena");

	AB_Assault_M4A1_Athena_C_ExecuteUbergraph_B_Assault_M4A1_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

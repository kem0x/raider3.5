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

// Function Tracer_Shotgun.Tracer_Shotgun_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATracer_Shotgun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Shotgun.Tracer_Shotgun_C.UserConstructionScript");

	ATracer_Shotgun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tracer_Shotgun.Tracer_Shotgun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATracer_Shotgun_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Shotgun.Tracer_Shotgun_C.ReceiveBeginPlay");

	ATracer_Shotgun_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tracer_Shotgun.Tracer_Shotgun_C.ExecuteUbergraph_Tracer_Shotgun
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATracer_Shotgun_C::ExecuteUbergraph_Tracer_Shotgun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Shotgun.Tracer_Shotgun_C.ExecuteUbergraph_Tracer_Shotgun");

	ATracer_Shotgun_C_ExecuteUbergraph_Tracer_Shotgun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function Tracer_Shotgun_Break_01.Tracer_Shotgun_Break_01_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATracer_Shotgun_Break_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Shotgun_Break_01.Tracer_Shotgun_Break_01_C.UserConstructionScript");

	ATracer_Shotgun_Break_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tracer_Shotgun_Break_01.Tracer_Shotgun_Break_01_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATracer_Shotgun_Break_01_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Shotgun_Break_01.Tracer_Shotgun_Break_01_C.ReceiveBeginPlay");

	ATracer_Shotgun_Break_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tracer_Shotgun_Break_01.Tracer_Shotgun_Break_01_C.ExecuteUbergraph_Tracer_Shotgun_Break_01
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATracer_Shotgun_Break_01_C::ExecuteUbergraph_Tracer_Shotgun_Break_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Shotgun_Break_01.Tracer_Shotgun_Break_01_C.ExecuteUbergraph_Tracer_Shotgun_Break_01");

	ATracer_Shotgun_Break_01_C_ExecuteUbergraph_Tracer_Shotgun_Break_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

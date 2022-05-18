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

// Function FullPartyBarAthena.FullPartyBarAthena_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UFullPartyBarAthena_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.Initialize");

	UFullPartyBarAthena_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullPartyBarAthena_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.Construct");

	UFullPartyBarAthena_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullPartyBarAthena.FullPartyBarAthena_C.ExecuteUbergraph_FullPartyBarAthena
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullPartyBarAthena_C::ExecuteUbergraph_FullPartyBarAthena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullPartyBarAthena.FullPartyBarAthena_C.ExecuteUbergraph_FullPartyBarAthena");

	UFullPartyBarAthena_C_ExecuteUbergraph_FullPartyBarAthena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

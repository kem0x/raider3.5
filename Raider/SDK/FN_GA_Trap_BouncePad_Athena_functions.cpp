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

// Function GA_Trap_BouncePad_Athena.GA_Trap_BouncePad_Athena_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Trap_BouncePad_Athena_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_BouncePad_Athena.GA_Trap_BouncePad_Athena_C.K2_ActivateAbility");

	UGA_Trap_BouncePad_Athena_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Trap_BouncePad_Athena.GA_Trap_BouncePad_Athena_C.ExecuteUbergraph_GA_Trap_BouncePad_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Trap_BouncePad_Athena_C::ExecuteUbergraph_GA_Trap_BouncePad_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Trap_BouncePad_Athena.GA_Trap_BouncePad_Athena_C.ExecuteUbergraph_GA_Trap_BouncePad_Athena");

	UGA_Trap_BouncePad_Athena_C_ExecuteUbergraph_GA_Trap_BouncePad_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

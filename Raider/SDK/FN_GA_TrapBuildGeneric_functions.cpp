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

// Function GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_TrapBuildGeneric_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.K2_ActivateAbility");

	UGA_TrapBuildGeneric_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.ExecuteUbergraph_GA_TrapBuildGeneric
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_TrapBuildGeneric_C::ExecuteUbergraph_GA_TrapBuildGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.ExecuteUbergraph_GA_TrapBuildGeneric");

	UGA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

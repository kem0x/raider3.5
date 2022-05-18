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

// Function GAB_InstantHeal.GAB_InstantHeal_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_InstantHeal_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_InstantHeal.GAB_InstantHeal_C.K2_ActivateAbility");

	UGAB_InstantHeal_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_InstantHeal.GAB_InstantHeal_C.ExecuteUbergraph_GAB_InstantHeal
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_InstantHeal_C::ExecuteUbergraph_GAB_InstantHeal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_InstantHeal.GAB_InstantHeal_C.ExecuteUbergraph_GAB_InstantHeal");

	UGAB_InstantHeal_C_ExecuteUbergraph_GAB_InstantHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

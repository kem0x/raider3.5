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

// Function GAB_HuskFrustration.GAB_HuskFrustration_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_HuskFrustration_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskFrustration.GAB_HuskFrustration_C.K2_ActivateAbility");

	UGAB_HuskFrustration_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskFrustration.GAB_HuskFrustration_C.ExecuteUbergraph_GAB_HuskFrustration
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskFrustration_C::ExecuteUbergraph_GAB_HuskFrustration(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskFrustration.GAB_HuskFrustration_C.ExecuteUbergraph_GAB_HuskFrustration");

	UGAB_HuskFrustration_C_ExecuteUbergraph_GAB_HuskFrustration_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

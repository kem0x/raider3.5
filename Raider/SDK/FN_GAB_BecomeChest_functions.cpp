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

// Function GAB_BecomeChest.GAB_BecomeChest_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_BecomeChest_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_BecomeChest.GAB_BecomeChest_C.K2_ActivateAbility");

	UGAB_BecomeChest_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_BecomeChest.GAB_BecomeChest_C.ExecuteUbergraph_GAB_BecomeChest
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_BecomeChest_C::ExecuteUbergraph_GAB_BecomeChest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_BecomeChest.GAB_BecomeChest_C.ExecuteUbergraph_GAB_BecomeChest");

	UGAB_BecomeChest_C_ExecuteUbergraph_GAB_BecomeChest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

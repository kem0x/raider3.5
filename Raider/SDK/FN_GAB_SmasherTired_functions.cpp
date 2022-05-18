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

// Function GAB_SmasherTired.GAB_SmasherTired_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_SmasherTired_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherTired.GAB_SmasherTired_C.K2_ActivateAbility");

	UGAB_SmasherTired_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherTired.GAB_SmasherTired_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SmasherTired_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherTired.GAB_SmasherTired_C.K2_OnEndAbility");

	UGAB_SmasherTired_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SmasherTired.GAB_SmasherTired_C.ExecuteUbergraph_GAB_SmasherTired
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SmasherTired_C::ExecuteUbergraph_GAB_SmasherTired(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SmasherTired.GAB_SmasherTired_C.ExecuteUbergraph_GAB_SmasherTired");

	UGAB_SmasherTired_C_ExecuteUbergraph_GAB_SmasherTired_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

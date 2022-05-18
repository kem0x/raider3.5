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

// Function GAB_SurvivorApplyFullBodyHit.GAB_SurvivorApplyFullBodyHit_C.PickFullBodyHitMontageSection
// (BlueprintCallable, BlueprintEvent)

void UGAB_SurvivorApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorApplyFullBodyHit.GAB_SurvivorApplyFullBodyHit_C.PickFullBodyHitMontageSection");

	UGAB_SurvivorApplyFullBodyHit_C_PickFullBodyHitMontageSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorApplyFullBodyHit.GAB_SurvivorApplyFullBodyHit_C.ExecuteUbergraph_GAB_SurvivorApplyFullBodyHit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorApplyFullBodyHit_C::ExecuteUbergraph_GAB_SurvivorApplyFullBodyHit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorApplyFullBodyHit.GAB_SurvivorApplyFullBodyHit_C.ExecuteUbergraph_GAB_SurvivorApplyFullBodyHit");

	UGAB_SurvivorApplyFullBodyHit_C_ExecuteUbergraph_GAB_SurvivorApplyFullBodyHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

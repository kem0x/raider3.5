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

// Function GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.PickFullBodyHitMontageSection
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskApplyFullBodyHit_C::PickFullBodyHitMontageSection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.PickFullBodyHitMontageSection");

	UGAB_HuskApplyFullBodyHit_C_PickFullBodyHitMontageSection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.ExecuteUbergraph_GAB_HuskApplyFullBodyHit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskApplyFullBodyHit_C::ExecuteUbergraph_GAB_HuskApplyFullBodyHit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.ExecuteUbergraph_GAB_HuskApplyFullBodyHit");

	UGAB_HuskApplyFullBodyHit_C_ExecuteUbergraph_GAB_HuskApplyFullBodyHit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

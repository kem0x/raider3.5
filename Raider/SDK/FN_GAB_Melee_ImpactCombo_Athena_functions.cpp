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

// Function GAB_Melee_ImpactCombo_Athena.GAB_Melee_ImpactCombo_Athena_C.K2_CommitExecute
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGAB_Melee_ImpactCombo_Athena_C::K2_CommitExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_ImpactCombo_Athena.GAB_Melee_ImpactCombo_Athena_C.K2_CommitExecute");

	UGAB_Melee_ImpactCombo_Athena_C_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

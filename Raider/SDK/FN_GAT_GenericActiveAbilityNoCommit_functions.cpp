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

// Function GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_GenericActiveAbilityNoCommit_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C.K2_ActivateAbility");

	UGAT_GenericActiveAbilityNoCommit_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C.ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_GenericActiveAbilityNoCommit_C::ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C.ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit");

	UGAT_GenericActiveAbilityNoCommit_C_ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

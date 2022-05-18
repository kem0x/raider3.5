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

// Function GAB_BaseDespawn.GAB_BaseDespawn_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_BaseDespawn_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_BaseDespawn.GAB_BaseDespawn_C.K2_ActivateAbilityFromEvent");

	UGAB_BaseDespawn_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_BaseDespawn.GAB_BaseDespawn_C.ExecuteUbergraph_GAB_BaseDespawn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_BaseDespawn_C::ExecuteUbergraph_GAB_BaseDespawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_BaseDespawn.GAB_BaseDespawn_C.ExecuteUbergraph_GAB_BaseDespawn");

	UGAB_BaseDespawn_C_ExecuteUbergraph_GAB_BaseDespawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

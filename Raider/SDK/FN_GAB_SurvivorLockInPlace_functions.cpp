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

// Function GAB_SurvivorLockInPlace.GAB_SurvivorLockInPlace_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_SurvivorLockInPlace_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorLockInPlace.GAB_SurvivorLockInPlace_C.K2_ActivateAbilityFromEvent");

	UGAB_SurvivorLockInPlace_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_SurvivorLockInPlace.GAB_SurvivorLockInPlace_C.ExecuteUbergraph_GAB_SurvivorLockInPlace
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_SurvivorLockInPlace_C::ExecuteUbergraph_GAB_SurvivorLockInPlace(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_SurvivorLockInPlace.GAB_SurvivorLockInPlace_C.ExecuteUbergraph_GAB_SurvivorLockInPlace");

	UGAB_SurvivorLockInPlace_C_ExecuteUbergraph_GAB_SurvivorLockInPlace_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

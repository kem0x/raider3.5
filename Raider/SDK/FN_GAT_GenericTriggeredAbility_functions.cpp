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

// Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAT_GenericTriggeredAbility_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.K2_ActivateAbilityFromEvent");

	UGAT_GenericTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.ExecuteUbergraph_GAT_GenericTriggeredAbility
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_GenericTriggeredAbility_C::ExecuteUbergraph_GAT_GenericTriggeredAbility(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.ExecuteUbergraph_GAT_GenericTriggeredAbility");

	UGAT_GenericTriggeredAbility_C_ExecuteUbergraph_GAT_GenericTriggeredAbility_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

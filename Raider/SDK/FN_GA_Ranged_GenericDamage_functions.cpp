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

// Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.GetEventData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            EventTag                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayEventData      GameplayEventData              (Parm, OutParm)

void UGA_Ranged_GenericDamage_C::GetEventData(const struct FGameplayTag& EventTag, struct FGameplayEventData* GameplayEventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.GetEventData");

	UGA_Ranged_GenericDamage_C_GetEventData_Params params;
	params.EventTag = EventTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameplayEventData != nullptr)
		*GameplayEventData = params.GameplayEventData;
}


// Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.K2_CommitExecute
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Ranged_GenericDamage_C::K2_CommitExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.K2_CommitExecute");

	UGA_Ranged_GenericDamage_C_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

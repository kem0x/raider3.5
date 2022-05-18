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

// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Completed_B576F3AF456E16FEAB9BCCB307590576
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderTeleportIn_C::Completed_B576F3AF456E16FEAB9BCCB307590576(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Completed_B576F3AF456E16FEAB9BCCB307590576");

	UGAB_ShielderTeleportIn_C_Completed_B576F3AF456E16FEAB9BCCB307590576_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Cancelled_B576F3AF456E16FEAB9BCCB307590576
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderTeleportIn_C::Cancelled_B576F3AF456E16FEAB9BCCB307590576(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Cancelled_B576F3AF456E16FEAB9BCCB307590576");

	UGAB_ShielderTeleportIn_C_Cancelled_B576F3AF456E16FEAB9BCCB307590576_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Triggered_B576F3AF456E16FEAB9BCCB307590576
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_ShielderTeleportIn_C::Triggered_B576F3AF456E16FEAB9BCCB307590576(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Triggered_B576F3AF456E16FEAB9BCCB307590576");

	UGAB_ShielderTeleportIn_C_Triggered_B576F3AF456E16FEAB9BCCB307590576_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_ShielderTeleportIn_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.K2_ActivateAbilityFromEvent");

	UGAB_ShielderTeleportIn_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.ExecuteUbergraph_GAB_ShielderTeleportIn
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_ShielderTeleportIn_C::ExecuteUbergraph_GAB_ShielderTeleportIn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.ExecuteUbergraph_GAB_ShielderTeleportIn");

	UGAB_ShielderTeleportIn_C_ExecuteUbergraph_GAB_ShielderTeleportIn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

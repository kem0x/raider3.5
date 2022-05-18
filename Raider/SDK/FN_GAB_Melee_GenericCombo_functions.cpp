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

// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_Melee_GenericCombo_C::Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B");

	UGAB_Melee_GenericCombo_C_Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_Melee_GenericCombo_C::Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B");

	UGAB_Melee_GenericCombo_C_Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_Melee_GenericCombo_C::Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B");

	UGAB_Melee_GenericCombo_C_Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_Melee_GenericCombo_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_ActivateAbility");

	UGAB_Melee_GenericCombo_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Melee_GenericCombo_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_OnEndAbility");

	UGAB_Melee_GenericCombo_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.ExecuteUbergraph_GAB_Melee_GenericCombo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_Melee_GenericCombo_C::ExecuteUbergraph_GAB_Melee_GenericCombo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.ExecuteUbergraph_GAB_Melee_GenericCombo");

	UGAB_Melee_GenericCombo_C_ExecuteUbergraph_GAB_Melee_GenericCombo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

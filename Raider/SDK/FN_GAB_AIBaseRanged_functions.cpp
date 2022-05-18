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

// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Completed_2221E89D4148023005FB94B04BA06EF9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AIBaseRanged_C::Completed_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Completed_2221E89D4148023005FB94B04BA06EF9");

	UGAB_AIBaseRanged_C_Completed_2221E89D4148023005FB94B04BA06EF9_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Cancelled_2221E89D4148023005FB94B04BA06EF9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AIBaseRanged_C::Cancelled_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Cancelled_2221E89D4148023005FB94B04BA06EF9");

	UGAB_AIBaseRanged_C_Cancelled_2221E89D4148023005FB94B04BA06EF9_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Triggered_2221E89D4148023005FB94B04BA06EF9
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AIBaseRanged_C::Triggered_2221E89D4148023005FB94B04BA06EF9(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.Triggered_2221E89D4148023005FB94B04BA06EF9");

	UGAB_AIBaseRanged_C_Triggered_2221E89D4148023005FB94B04BA06EF9_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_AIBaseRanged_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_ActivateAbility");

	UGAB_AIBaseRanged_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_TriggerFromAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag*           ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_AIBaseRanged_C::K2_TriggerFromAnimation(struct FGameplayTag* ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_TriggerFromAnimation");

	UGAB_AIBaseRanged_C_K2_TriggerFromAnimation_Params params;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.IncreaseAccuracyAndUpdateLastThrowTime
// (BlueprintCallable, BlueprintEvent)

void UGAB_AIBaseRanged_C::IncreaseAccuracyAndUpdateLastThrowTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.IncreaseAccuracyAndUpdateLastThrowTime");

	UGAB_AIBaseRanged_C_IncreaseAccuracyAndUpdateLastThrowTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.ExecuteUbergraph_GAB_AIBaseRanged
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_AIBaseRanged_C::ExecuteUbergraph_GAB_AIBaseRanged(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_AIBaseRanged.GAB_AIBaseRanged_C.ExecuteUbergraph_GAB_AIBaseRanged");

	UGAB_AIBaseRanged_C_ExecuteUbergraph_GAB_AIBaseRanged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

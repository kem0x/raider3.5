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

// Function GAB_TakerEvade.GAB_TakerEvade_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGAB_TakerEvade_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerEvade.GAB_TakerEvade_C.K2_CanActivateAbility");

	UGAB_TakerEvade_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GAB_TakerEvade.GAB_TakerEvade_C.Completed_5F3AF706421290A95C9D1A948B671F8E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerEvade_C::Completed_5F3AF706421290A95C9D1A948B671F8E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerEvade.GAB_TakerEvade_C.Completed_5F3AF706421290A95C9D1A948B671F8E");

	UGAB_TakerEvade_C_Completed_5F3AF706421290A95C9D1A948B671F8E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerEvade.GAB_TakerEvade_C.Cancelled_5F3AF706421290A95C9D1A948B671F8E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerEvade_C::Cancelled_5F3AF706421290A95C9D1A948B671F8E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerEvade.GAB_TakerEvade_C.Cancelled_5F3AF706421290A95C9D1A948B671F8E");

	UGAB_TakerEvade_C_Cancelled_5F3AF706421290A95C9D1A948B671F8E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerEvade.GAB_TakerEvade_C.Triggered_5F3AF706421290A95C9D1A948B671F8E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_TakerEvade_C::Triggered_5F3AF706421290A95C9D1A948B671F8E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerEvade.GAB_TakerEvade_C.Triggered_5F3AF706421290A95C9D1A948B671F8E");

	UGAB_TakerEvade_C_Triggered_5F3AF706421290A95C9D1A948B671F8E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerEvade.GAB_TakerEvade_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_TakerEvade_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerEvade.GAB_TakerEvade_C.K2_ActivateAbility");

	UGAB_TakerEvade_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerEvade.GAB_TakerEvade_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerEvade_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerEvade.GAB_TakerEvade_C.K2_OnEndAbility");

	UGAB_TakerEvade_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerEvade.GAB_TakerEvade_C.OnQueryFinishedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerEvade_C::OnQueryFinishedEvent(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerEvade.GAB_TakerEvade_C.OnQueryFinishedEvent");

	UGAB_TakerEvade_C_OnQueryFinishedEvent_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_TakerEvade.GAB_TakerEvade_C.ExecuteUbergraph_GAB_TakerEvade
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_TakerEvade_C::ExecuteUbergraph_GAB_TakerEvade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_TakerEvade.GAB_TakerEvade_C.ExecuteUbergraph_GAB_TakerEvade");

	UGAB_TakerEvade_C_ExecuteUbergraph_GAB_TakerEvade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

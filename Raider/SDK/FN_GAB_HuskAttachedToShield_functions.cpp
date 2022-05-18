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

// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.RandomAttachAnimation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   AnimName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskAttachedToShield_C::RandomAttachAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.RandomAttachAnimation");

	UGAB_HuskAttachedToShield_C_RandomAttachAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimName != nullptr)
		*AnimName = params.AnimName;
}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Completed_D35D9F8942008716C246249F1CAEFA6B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskAttachedToShield_C::Completed_D35D9F8942008716C246249F1CAEFA6B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Completed_D35D9F8942008716C246249F1CAEFA6B");

	UGAB_HuskAttachedToShield_C_Completed_D35D9F8942008716C246249F1CAEFA6B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Cancelled_D35D9F8942008716C246249F1CAEFA6B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskAttachedToShield_C::Cancelled_D35D9F8942008716C246249F1CAEFA6B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Cancelled_D35D9F8942008716C246249F1CAEFA6B");

	UGAB_HuskAttachedToShield_C_Cancelled_D35D9F8942008716C246249F1CAEFA6B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Triggered_D35D9F8942008716C246249F1CAEFA6B
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskAttachedToShield_C::Triggered_D35D9F8942008716C246249F1CAEFA6B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Triggered_D35D9F8942008716C246249F1CAEFA6B");

	UGAB_HuskAttachedToShield_C_Triggered_D35D9F8942008716C246249F1CAEFA6B_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskAttachedToShield_C::Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13");

	UGAB_HuskAttachedToShield_C_Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskAttachedToShield_C::Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13");

	UGAB_HuskAttachedToShield_C_Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_HuskAttachedToShield_C::Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13");

	UGAB_HuskAttachedToShield_C_Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_HuskAttachedToShield_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.K2_ActivateAbilityFromEvent");

	UGAB_HuskAttachedToShield_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.EndAbilityFromTimer
// (BlueprintCallable, BlueprintEvent)

void UGAB_HuskAttachedToShield_C::EndAbilityFromTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.EndAbilityFromTimer");

	UGAB_HuskAttachedToShield_C_EndAbilityFromTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskAttachedToShield_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.K2_OnEndAbility");

	UGAB_HuskAttachedToShield_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.ExecuteUbergraph_GAB_HuskAttachedToShield
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_HuskAttachedToShield_C::ExecuteUbergraph_GAB_HuskAttachedToShield(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.ExecuteUbergraph_GAB_HuskAttachedToShield");

	UGAB_HuskAttachedToShield_C_ExecuteUbergraph_GAB_HuskAttachedToShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

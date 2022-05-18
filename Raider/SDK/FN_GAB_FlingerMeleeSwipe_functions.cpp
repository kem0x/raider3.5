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

// Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Completed_75D3277A479B3F48D2AD2889328C3F32
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_FlingerMeleeSwipe_C::Completed_75D3277A479B3F48D2AD2889328C3F32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Completed_75D3277A479B3F48D2AD2889328C3F32");

	UGAB_FlingerMeleeSwipe_C_Completed_75D3277A479B3F48D2AD2889328C3F32_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Cancelled_75D3277A479B3F48D2AD2889328C3F32
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_FlingerMeleeSwipe_C::Cancelled_75D3277A479B3F48D2AD2889328C3F32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Cancelled_75D3277A479B3F48D2AD2889328C3F32");

	UGAB_FlingerMeleeSwipe_C_Cancelled_75D3277A479B3F48D2AD2889328C3F32_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Triggered_75D3277A479B3F48D2AD2889328C3F32
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_FlingerMeleeSwipe_C::Triggered_75D3277A479B3F48D2AD2889328C3F32(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Triggered_75D3277A479B3F48D2AD2889328C3F32");

	UGAB_FlingerMeleeSwipe_C_Triggered_75D3277A479B3F48D2AD2889328C3F32_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_FlingerMeleeSwipe_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.K2_ActivateAbility");

	UGAB_FlingerMeleeSwipe_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.ExecuteUbergraph_GAB_FlingerMeleeSwipe
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_FlingerMeleeSwipe_C::ExecuteUbergraph_GAB_FlingerMeleeSwipe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.ExecuteUbergraph_GAB_FlingerMeleeSwipe");

	UGAB_FlingerMeleeSwipe_C_ExecuteUbergraph_GAB_FlingerMeleeSwipe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

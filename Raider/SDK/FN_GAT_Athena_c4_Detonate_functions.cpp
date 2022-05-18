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

// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.OnRep_NumberOfBombsOut
// (BlueprintCallable, BlueprintEvent)

void UGAT_Athena_c4_Detonate_C::OnRep_NumberOfBombsOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.OnRep_NumberOfBombsOut");

	UGAT_Athena_c4_Detonate_C_OnRep_NumberOfBombsOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAT_Athena_c4_Detonate_C::Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635");

	UGAT_Athena_c4_Detonate_C_Completed_1CF0B54948FD6A9E1DB2B5BC49A0C635_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAT_Athena_c4_Detonate_C::Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635");

	UGAT_Athena_c4_Detonate_C_Cancelled_1CF0B54948FD6A9E1DB2B5BC49A0C635_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAT_Athena_c4_Detonate_C::Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635");

	UGAT_Athena_c4_Detonate_C_Triggered_1CF0B54948FD6A9E1DB2B5BC49A0C635_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_Athena_c4_Detonate_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.K2_ActivateAbility");

	UGAT_Athena_c4_Detonate_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.ExecuteUbergraph_GAT_Athena_c4_Detonate
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAT_Athena_c4_Detonate_C::ExecuteUbergraph_GAT_Athena_c4_Detonate(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAT_Athena_c4_Detonate.GAT_Athena_c4_Detonate_C.ExecuteUbergraph_GAT_Athena_c4_Detonate");

	UGAT_Athena_c4_Detonate_C_ExecuteUbergraph_GAT_Athena_c4_Detonate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

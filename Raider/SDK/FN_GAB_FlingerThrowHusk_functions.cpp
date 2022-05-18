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

// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGAB_FlingerThrowHusk_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_CanActivateAbility");

	UGAB_FlingerThrowHusk_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Completed_B56594C44CE933A96A3E13BDCFC1097D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_FlingerThrowHusk_C::Completed_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Completed_B56594C44CE933A96A3E13BDCFC1097D");

	UGAB_FlingerThrowHusk_C_Completed_B56594C44CE933A96A3E13BDCFC1097D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Cancelled_B56594C44CE933A96A3E13BDCFC1097D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_FlingerThrowHusk_C::Cancelled_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Cancelled_B56594C44CE933A96A3E13BDCFC1097D");

	UGAB_FlingerThrowHusk_C_Cancelled_B56594C44CE933A96A3E13BDCFC1097D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Triggered_B56594C44CE933A96A3E13BDCFC1097D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGAB_FlingerThrowHusk_C::Triggered_B56594C44CE933A96A3E13BDCFC1097D(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Triggered_B56594C44CE933A96A3E13BDCFC1097D");

	UGAB_FlingerThrowHusk_C_Triggered_B56594C44CE933A96A3E13BDCFC1097D_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_FlingerThrowHusk_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_OnEndAbility");

	UGAB_FlingerThrowHusk_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAB_FlingerThrowHusk_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_ActivateAbility");

	UGAB_FlingerThrowHusk_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.CommitAndEndAbility
// (BlueprintCallable, BlueprintEvent)

void UGAB_FlingerThrowHusk_C::CommitAndEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.CommitAndEndAbility");

	UGAB_FlingerThrowHusk_C_CommitAndEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.SpawnFX
// (BlueprintCallable, BlueprintEvent)

void UGAB_FlingerThrowHusk_C::SpawnFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.SpawnFX");

	UGAB_FlingerThrowHusk_C_SpawnFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.StopFX
// (BlueprintCallable, BlueprintEvent)

void UGAB_FlingerThrowHusk_C::StopFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.StopFX");

	UGAB_FlingerThrowHusk_C_StopFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.OnEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_FlingerThrowHusk_C::OnEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.OnEndPlay");

	UGAB_FlingerThrowHusk_C_OnEndPlay_Params params;
	params.Actor = Actor;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.BindOnEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHuskPawn_C*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_FlingerThrowHusk_C::BindOnEndPlay(class AHuskPawn_C* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.BindOnEndPlay");

	UGAB_FlingerThrowHusk_C_BindOnEndPlay_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.UnbindOnEndPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHuskPawn_C*             Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_FlingerThrowHusk_C::UnbindOnEndPlay(class AHuskPawn_C* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.UnbindOnEndPlay");

	UGAB_FlingerThrowHusk_C_UnbindOnEndPlay_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.ExecuteUbergraph_GAB_FlingerThrowHusk
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGAB_FlingerThrowHusk_C::ExecuteUbergraph_GAB_FlingerThrowHusk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.ExecuteUbergraph_GAB_FlingerThrowHusk");

	UGAB_FlingerThrowHusk_C_ExecuteUbergraph_GAB_FlingerThrowHusk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

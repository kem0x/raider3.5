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

// Function GA_Athena_C4.GA_Athena_C4_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_C4_C::SetupDummyProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.SetupDummyProjectile");

	UGA_Athena_C4_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.CalcGrenadeSpeedFromPitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GrenadeSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_C4_C::CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.CalcGrenadeSpeedFromPitch");

	UGA_Athena_C4_C_CalcGrenadeSpeedFromPitch_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrenadeSpeed != nullptr)
		*GrenadeSpeed = params.GrenadeSpeed;
}


// Function GA_Athena_C4.GA_Athena_C4_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_C4_C::UpdateTrajectorySpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.UpdateTrajectorySpline");

	UGA_Athena_C4_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.SpawnLocationAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutLoc                         (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRot                         (Parm, OutParm, IsPlainOldData)

void UGA_Athena_C4_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.SpawnLocationAndRotation");

	UGA_Athena_C4_C_SpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
	if (OutRot != nullptr)
		*OutRot = params.OutRot;
}


// Function GA_Athena_C4.GA_Athena_C4_C.Completed_C84858EE4C8DF3AD547017AE92DD2D25
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_C4_C::Completed_C84858EE4C8DF3AD547017AE92DD2D25(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.Completed_C84858EE4C8DF3AD547017AE92DD2D25");

	UGA_Athena_C4_C_Completed_C84858EE4C8DF3AD547017AE92DD2D25_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.Cancelled_C84858EE4C8DF3AD547017AE92DD2D25
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_C4_C::Cancelled_C84858EE4C8DF3AD547017AE92DD2D25(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.Cancelled_C84858EE4C8DF3AD547017AE92DD2D25");

	UGA_Athena_C4_C_Cancelled_C84858EE4C8DF3AD547017AE92DD2D25_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.Triggered_C84858EE4C8DF3AD547017AE92DD2D25
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_C4_C::Triggered_C84858EE4C8DF3AD547017AE92DD2D25(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.Triggered_C84858EE4C8DF3AD547017AE92DD2D25");

	UGA_Athena_C4_C_Triggered_C84858EE4C8DF3AD547017AE92DD2D25_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_A4C94A3649D1AB25587D6FB932B0FB1A
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_C4_C::OnFinish_A4C94A3649D1AB25587D6FB932B0FB1A()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_A4C94A3649D1AB25587D6FB932B0FB1A");

	UGA_Athena_C4_C_OnFinish_A4C94A3649D1AB25587D6FB932B0FB1A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_F3EE7C7A41D0D02E5385ED9F13BBC693
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_C4_C::OnFinish_F3EE7C7A41D0D02E5385ED9F13BBC693()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_F3EE7C7A41D0D02E5385ED9F13BBC693");

	UGA_Athena_C4_C_OnFinish_F3EE7C7A41D0D02E5385ED9F13BBC693_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_01A70CBD4A577C13B81445B3B305B7EF
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_C4_C::OnFinish_01A70CBD4A577C13B81445B3B305B7EF()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_01A70CBD4A577C13B81445B3B305B7EF");

	UGA_Athena_C4_C_OnFinish_01A70CBD4A577C13B81445B3B305B7EF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_D5C0750D468D5EC1DF1F15815C808778
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_C4_C::OnFinish_D5C0750D468D5EC1DF1F15815C808778()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.OnFinish_D5C0750D468D5EC1DF1F15815C808778");

	UGA_Athena_C4_C_OnFinish_D5C0750D468D5EC1DF1F15815C808778_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_C4_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.K2_ActivateAbility");

	UGA_Athena_C4_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UGA_Athena_C4_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.Server_SpawnProjectile");

	UGA_Athena_C4_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_C4_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.K2_OnEndAbility");

	UGA_Athena_C4_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_C4_C::CleanupTrajectoryDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.CleanupTrajectoryDisplay");

	UGA_Athena_C4_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.TossGrenade
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_C4_C::TossGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.TossGrenade");

	UGA_Athena_C4_C_TossGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_Athena_C4_C::OnAbilityInputReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.OnAbilityInputReleased");

	UGA_Athena_C4_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_C4.GA_Athena_C4_C.ExecuteUbergraph_GA_Athena_C4
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_C4_C::ExecuteUbergraph_GA_Athena_C4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_C4.GA_Athena_C4_C.ExecuteUbergraph_GA_Athena_C4");

	UGA_Athena_C4_C_ExecuteUbergraph_GA_Athena_C4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

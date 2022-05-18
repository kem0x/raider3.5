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

// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.CalcGrenadeSpeedFromPitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GrenadeSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ProjWithTrajectory_C::CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.CalcGrenadeSpeedFromPitch");

	UGA_Athena_ProjWithTrajectory_C_CalcGrenadeSpeedFromPitch_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrenadeSpeed != nullptr)
		*GrenadeSpeed = params.GrenadeSpeed;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::UpdateTrajectorySpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.UpdateTrajectorySpline");

	UGA_Athena_ProjWithTrajectory_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::SetupDummyProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SetupDummyProjectile");

	UGA_Athena_ProjWithTrajectory_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SpawnLocationAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutLoc                         (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRot                         (Parm, OutParm, IsPlainOldData)

void UGA_Athena_ProjWithTrajectory_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SpawnLocationAndRotation");

	UGA_Athena_ProjWithTrajectory_C_SpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
	if (OutRot != nullptr)
		*OutRot = params.OutRot;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SetupGrenade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Base_Grenade                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Projectile_Speed               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FFortGameplayEffectContainerSpec Explosion_Gameplay_Spec        (Parm, OutParm)
// float                          Projectile_Gravity_Scale       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ProjWithTrajectory_C::SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.SetupGrenade");

	UGA_Athena_ProjWithTrajectory_C_SetupGrenade_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Base_Grenade != nullptr)
		*Base_Grenade = params.Base_Grenade;
	if (Projectile_Speed != nullptr)
		*Projectile_Speed = params.Projectile_Speed;
	if (Explosion_Gameplay_Spec != nullptr)
		*Explosion_Gameplay_Spec = params.Explosion_Gameplay_Spec;
	if (Projectile_Gravity_Scale != nullptr)
		*Projectile_Gravity_Scale = params.Projectile_Gravity_Scale;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ProjWithTrajectory_C::Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	UGA_Athena_ProjWithTrajectory_C_Destroyed_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ProjWithTrajectory_C::Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	UGA_Athena_ProjWithTrajectory_C_Exploded_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ProjWithTrajectory_C::Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	UGA_Athena_ProjWithTrajectory_C_Stopped_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ProjWithTrajectory_C::Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	UGA_Athena_ProjWithTrajectory_C_Bounced_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ProjWithTrajectory_C::Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	UGA_Athena_ProjWithTrajectory_C_Touched_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_ProjWithTrajectory_C::Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D");

	UGA_Athena_ProjWithTrajectory_C_Created_B9FD7A0A43AF00E4A8E57AAAC98E2A8D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Completed_1EDA62904AD9995FD9ABFE99B3E783C8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_ProjWithTrajectory_C::Completed_1EDA62904AD9995FD9ABFE99B3E783C8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Completed_1EDA62904AD9995FD9ABFE99B3E783C8");

	UGA_Athena_ProjWithTrajectory_C_Completed_1EDA62904AD9995FD9ABFE99B3E783C8_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_ProjWithTrajectory_C::Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8");

	UGA_Athena_ProjWithTrajectory_C_Cancelled_1EDA62904AD9995FD9ABFE99B3E783C8_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Triggered_1EDA62904AD9995FD9ABFE99B3E783C8
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_ProjWithTrajectory_C::Triggered_1EDA62904AD9995FD9ABFE99B3E783C8(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Triggered_1EDA62904AD9995FD9ABFE99B3E783C8");

	UGA_Athena_ProjWithTrajectory_C_Triggered_1EDA62904AD9995FD9ABFE99B3E783C8_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_74A6C2A243F8F5710A8F04AD536F05F9
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::OnFinish_74A6C2A243F8F5710A8F04AD536F05F9()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_74A6C2A243F8F5710A8F04AD536F05F9");

	UGA_Athena_ProjWithTrajectory_C_OnFinish_74A6C2A243F8F5710A8F04AD536F05F9_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_096929144FF7E14AFEB2B388A786D6BD
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::OnFinish_096929144FF7E14AFEB2B388A786D6BD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_096929144FF7E14AFEB2B388A786D6BD");

	UGA_Athena_ProjWithTrajectory_C_OnFinish_096929144FF7E14AFEB2B388A786D6BD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnCancelled_FEC68BA94D83D96FDD282EB15935D61B
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::OnCancelled_FEC68BA94D83D96FDD282EB15935D61B()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnCancelled_FEC68BA94D83D96FDD282EB15935D61B");

	UGA_Athena_ProjWithTrajectory_C_OnCancelled_FEC68BA94D83D96FDD282EB15935D61B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnInterrupted_FEC68BA94D83D96FDD282EB15935D61B
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::OnInterrupted_FEC68BA94D83D96FDD282EB15935D61B()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnInterrupted_FEC68BA94D83D96FDD282EB15935D61B");

	UGA_Athena_ProjWithTrajectory_C_OnInterrupted_FEC68BA94D83D96FDD282EB15935D61B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnBlendOut_FEC68BA94D83D96FDD282EB15935D61B
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::OnBlendOut_FEC68BA94D83D96FDD282EB15935D61B()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnBlendOut_FEC68BA94D83D96FDD282EB15935D61B");

	UGA_Athena_ProjWithTrajectory_C_OnBlendOut_FEC68BA94D83D96FDD282EB15935D61B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnCompleted_FEC68BA94D83D96FDD282EB15935D61B
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::OnCompleted_FEC68BA94D83D96FDD282EB15935D61B()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnCompleted_FEC68BA94D83D96FDD282EB15935D61B");

	UGA_Athena_ProjWithTrajectory_C_OnCompleted_FEC68BA94D83D96FDD282EB15935D61B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_D9A850F94B9C369C67CCD89C7B5492BD
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::OnFinish_D9A850F94B9C369C67CCD89C7B5492BD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_D9A850F94B9C369C67CCD89C7B5492BD");

	UGA_Athena_ProjWithTrajectory_C_OnFinish_D9A850F94B9C369C67CCD89C7B5492BD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_8B217C0E49D2D455A906EA8EEC307D0B
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::OnFinish_8B217C0E49D2D455A906EA8EEC307D0B()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnFinish_8B217C0E49D2D455A906EA8EEC307D0B");

	UGA_Athena_ProjWithTrajectory_C_OnFinish_8B217C0E49D2D455A906EA8EEC307D0B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.K2_ActivateAbility");

	UGA_Athena_ProjWithTrajectory_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UGA_Athena_ProjWithTrajectory_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.Server_SpawnProjectile");

	UGA_Athena_ProjWithTrajectory_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::OnAbilityInputReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.OnAbilityInputReleased");

	UGA_Athena_ProjWithTrajectory_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ProjWithTrajectory_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.K2_OnEndAbility");

	UGA_Athena_ProjWithTrajectory_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::CleanupTrajectoryDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.CleanupTrajectoryDisplay");

	UGA_Athena_ProjWithTrajectory_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.TossGrenade
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_ProjWithTrajectory_C::TossGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.TossGrenade");

	UGA_Athena_ProjWithTrajectory_C_TossGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.AthenaGrenadeSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     GrenadeReference               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ProjWithTrajectory_C::AthenaGrenadeSpawned(class AFortProjectileBase* GrenadeReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.AthenaGrenadeSpawned");

	UGA_Athena_ProjWithTrajectory_C_AthenaGrenadeSpawned_Params params;
	params.GrenadeReference = GrenadeReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.ExecuteUbergraph_GA_Athena_ProjWithTrajectory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_ProjWithTrajectory_C::ExecuteUbergraph_GA_Athena_ProjWithTrajectory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_ProjWithTrajectory.GA_Athena_ProjWithTrajectory_C.ExecuteUbergraph_GA_Athena_ProjWithTrajectory");

	UGA_Athena_ProjWithTrajectory_C_ExecuteUbergraph_GA_Athena_ProjWithTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

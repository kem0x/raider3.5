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

// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GrenadeSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_GasGrenade_WithTrajectory_C::CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch");

	UGA_Athena_GasGrenade_WithTrajectory_C_CalcGrenadeSpeedFromPitch_Params params;
	params.AimPitch = AimPitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GrenadeSpeed != nullptr)
		*GrenadeSpeed = params.GrenadeSpeed;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.UpdateTrajectorySpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::UpdateTrajectorySpline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.UpdateTrajectorySpline");

	UGA_Athena_GasGrenade_WithTrajectory_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SetupDummyProjectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::SetupDummyProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SetupDummyProjectile");

	UGA_Athena_GasGrenade_WithTrajectory_C_SetupDummyProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SpawnLocationAndRotation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 OutLoc                         (Parm, OutParm, IsPlainOldData)
// struct FRotator                OutRot                         (Parm, OutParm, IsPlainOldData)

void UGA_Athena_GasGrenade_WithTrajectory_C::SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SpawnLocationAndRotation");

	UGA_Athena_GasGrenade_WithTrajectory_C_SpawnLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLoc != nullptr)
		*OutLoc = params.OutLoc;
	if (OutRot != nullptr)
		*OutRot = params.OutRot;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SetupGrenade
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          AimPitch                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Base_Grenade                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Projectile_Speed               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FFortGameplayEffectContainerSpec Explosion_Gameplay_Spec        (Parm, OutParm)
// float                          Projectile_Gravity_Scale       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_GasGrenade_WithTrajectory_C::SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.SetupGrenade");

	UGA_Athena_GasGrenade_WithTrajectory_C_SetupGrenade_Params params;
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


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Destroyed_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_GasGrenade_WithTrajectory_C::Destroyed_0ABD0A2949396977EDE0E0A3A923210A(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Destroyed_0ABD0A2949396977EDE0E0A3A923210A");

	UGA_Athena_GasGrenade_WithTrajectory_C_Destroyed_0ABD0A2949396977EDE0E0A3A923210A_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Exploded_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_GasGrenade_WithTrajectory_C::Exploded_0ABD0A2949396977EDE0E0A3A923210A(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Exploded_0ABD0A2949396977EDE0E0A3A923210A");

	UGA_Athena_GasGrenade_WithTrajectory_C_Exploded_0ABD0A2949396977EDE0E0A3A923210A_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Stopped_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_GasGrenade_WithTrajectory_C::Stopped_0ABD0A2949396977EDE0E0A3A923210A(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Stopped_0ABD0A2949396977EDE0E0A3A923210A");

	UGA_Athena_GasGrenade_WithTrajectory_C_Stopped_0ABD0A2949396977EDE0E0A3A923210A_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Bounced_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_GasGrenade_WithTrajectory_C::Bounced_0ABD0A2949396977EDE0E0A3A923210A(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Bounced_0ABD0A2949396977EDE0E0A3A923210A");

	UGA_Athena_GasGrenade_WithTrajectory_C_Bounced_0ABD0A2949396977EDE0E0A3A923210A_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Touched_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_GasGrenade_WithTrajectory_C::Touched_0ABD0A2949396977EDE0E0A3A923210A(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Touched_0ABD0A2949396977EDE0E0A3A923210A");

	UGA_Athena_GasGrenade_WithTrajectory_C_Touched_0ABD0A2949396977EDE0E0A3A923210A_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Created_0ABD0A2949396977EDE0E0A3A923210A
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_GasGrenade_WithTrajectory_C::Created_0ABD0A2949396977EDE0E0A3A923210A(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Created_0ABD0A2949396977EDE0E0A3A923210A");

	UGA_Athena_GasGrenade_WithTrajectory_C_Created_0ABD0A2949396977EDE0E0A3A923210A_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Completed_2A6F61E14EAA329CE4DDE59F6D3984BB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_GasGrenade_WithTrajectory_C::Completed_2A6F61E14EAA329CE4DDE59F6D3984BB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Completed_2A6F61E14EAA329CE4DDE59F6D3984BB");

	UGA_Athena_GasGrenade_WithTrajectory_C_Completed_2A6F61E14EAA329CE4DDE59F6D3984BB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_GasGrenade_WithTrajectory_C::Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB");

	UGA_Athena_GasGrenade_WithTrajectory_C_Cancelled_2A6F61E14EAA329CE4DDE59F6D3984BB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Athena_GasGrenade_WithTrajectory_C::Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB");

	UGA_Athena_GasGrenade_WithTrajectory_C_Triggered_2A6F61E14EAA329CE4DDE59F6D3984BB_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_B638634A4C406D60FB73F0A0F89C4172
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::OnFinish_B638634A4C406D60FB73F0A0F89C4172()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_B638634A4C406D60FB73F0A0F89C4172");

	UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_B638634A4C406D60FB73F0A0F89C4172_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_C93035F048A7F05615196098CE2551EB
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::OnFinish_C93035F048A7F05615196098CE2551EB()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_C93035F048A7F05615196098CE2551EB");

	UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_C93035F048A7F05615196098CE2551EB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnCancelled_BC60A2D44E56ED883DEE30B8A0207898
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::OnCancelled_BC60A2D44E56ED883DEE30B8A0207898()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnCancelled_BC60A2D44E56ED883DEE30B8A0207898");

	UGA_Athena_GasGrenade_WithTrajectory_C_OnCancelled_BC60A2D44E56ED883DEE30B8A0207898_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898");

	UGA_Athena_GasGrenade_WithTrajectory_C_OnInterrupted_BC60A2D44E56ED883DEE30B8A0207898_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898");

	UGA_Athena_GasGrenade_WithTrajectory_C_OnBlendOut_BC60A2D44E56ED883DEE30B8A0207898_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnCompleted_BC60A2D44E56ED883DEE30B8A0207898
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::OnCompleted_BC60A2D44E56ED883DEE30B8A0207898()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnCompleted_BC60A2D44E56ED883DEE30B8A0207898");

	UGA_Athena_GasGrenade_WithTrajectory_C_OnCompleted_BC60A2D44E56ED883DEE30B8A0207898_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_F1120C8E4A077A38FB26EF90055BE75E
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::OnFinish_F1120C8E4A077A38FB26EF90055BE75E()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_F1120C8E4A077A38FB26EF90055BE75E");

	UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_F1120C8E4A077A38FB26EF90055BE75E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_EB9D493748A5D5BAD2487FB3E67C618F
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::OnFinish_EB9D493748A5D5BAD2487FB3E67C618F()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnFinish_EB9D493748A5D5BAD2487FB3E67C618F");

	UGA_Athena_GasGrenade_WithTrajectory_C_OnFinish_EB9D493748A5D5BAD2487FB3E67C618F_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.K2_ActivateAbility");

	UGA_Athena_GasGrenade_WithTrajectory_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UGA_Athena_GasGrenade_WithTrajectory_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.Server_SpawnProjectile");

	UGA_Athena_GasGrenade_WithTrajectory_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::OnAbilityInputReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.OnAbilityInputReleased");

	UGA_Athena_GasGrenade_WithTrajectory_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_GasGrenade_WithTrajectory_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.K2_OnEndAbility");

	UGA_Athena_GasGrenade_WithTrajectory_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::CleanupTrajectoryDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.CleanupTrajectoryDisplay");

	UGA_Athena_GasGrenade_WithTrajectory_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.TossGrenade
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_GasGrenade_WithTrajectory_C::TossGrenade()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.TossGrenade");

	UGA_Athena_GasGrenade_WithTrajectory_C_TossGrenade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_GasGrenade_WithTrajectory_C::ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Athena_GasGrenade_WithTrajectory.GA_Athena_GasGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory");

	UGA_Athena_GasGrenade_WithTrajectory_C_ExecuteUbergraph_GA_Athena_GasGrenade_WithTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

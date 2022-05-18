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

// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.SetupBottleRocket
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Spawn_Location                 (Parm, OutParm, IsPlainOldData)
// struct FRotator                Spawn_Rotation                 (Parm, OutParm, IsPlainOldData)
// struct FFortGameplayEffectContainerSpec Holder_Explosion               (Parm, OutParm)
// struct FFortGameplayEffectContainerSpec BottleRocket_Explosion         (Parm, OutParm)

void UGA_Weapon_Mimic_C::SetupBottleRocket(struct FVector* Spawn_Location, struct FRotator* Spawn_Rotation, struct FFortGameplayEffectContainerSpec* Holder_Explosion, struct FFortGameplayEffectContainerSpec* BottleRocket_Explosion)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.SetupBottleRocket");

	UGA_Weapon_Mimic_C_SetupBottleRocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spawn_Location != nullptr)
		*Spawn_Location = params.Spawn_Location;
	if (Spawn_Rotation != nullptr)
		*Spawn_Rotation = params.Spawn_Rotation;
	if (Holder_Explosion != nullptr)
		*Holder_Explosion = params.Holder_Explosion;
	if (BottleRocket_Explosion != nullptr)
		*BottleRocket_Explosion = params.BottleRocket_Explosion;
}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Destroyed_B3D1CBD84767EEBE300B609957138606
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_Mimic_C::Destroyed_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Destroyed_B3D1CBD84767EEBE300B609957138606");

	UGA_Weapon_Mimic_C_Destroyed_B3D1CBD84767EEBE300B609957138606_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Exploded_B3D1CBD84767EEBE300B609957138606
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_Mimic_C::Exploded_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Exploded_B3D1CBD84767EEBE300B609957138606");

	UGA_Weapon_Mimic_C_Exploded_B3D1CBD84767EEBE300B609957138606_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Stopped_B3D1CBD84767EEBE300B609957138606
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_Mimic_C::Stopped_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Stopped_B3D1CBD84767EEBE300B609957138606");

	UGA_Weapon_Mimic_C_Stopped_B3D1CBD84767EEBE300B609957138606_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Bounced_B3D1CBD84767EEBE300B609957138606
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_Mimic_C::Bounced_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Bounced_B3D1CBD84767EEBE300B609957138606");

	UGA_Weapon_Mimic_C_Bounced_B3D1CBD84767EEBE300B609957138606_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Touched_B3D1CBD84767EEBE300B609957138606
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_Mimic_C::Touched_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Touched_B3D1CBD84767EEBE300B609957138606");

	UGA_Weapon_Mimic_C_Touched_B3D1CBD84767EEBE300B609957138606_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Created_B3D1CBD84767EEBE300B609957138606
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_Mimic_C::Created_B3D1CBD84767EEBE300B609957138606(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Created_B3D1CBD84767EEBE300B609957138606");

	UGA_Weapon_Mimic_C_Created_B3D1CBD84767EEBE300B609957138606_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Completed_43984B0A46B0D598E56025AEA6D640D0
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Weapon_Mimic_C::Completed_43984B0A46B0D598E56025AEA6D640D0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Completed_43984B0A46B0D598E56025AEA6D640D0");

	UGA_Weapon_Mimic_C_Completed_43984B0A46B0D598E56025AEA6D640D0_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Cancelled_43984B0A46B0D598E56025AEA6D640D0
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Weapon_Mimic_C::Cancelled_43984B0A46B0D598E56025AEA6D640D0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Cancelled_43984B0A46B0D598E56025AEA6D640D0");

	UGA_Weapon_Mimic_C_Cancelled_43984B0A46B0D598E56025AEA6D640D0_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Triggered_43984B0A46B0D598E56025AEA6D640D0
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Weapon_Mimic_C::Triggered_43984B0A46B0D598E56025AEA6D640D0(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.Triggered_43984B0A46B0D598E56025AEA6D640D0");

	UGA_Weapon_Mimic_C_Triggered_43984B0A46B0D598E56025AEA6D640D0_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Weapon_Mimic_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.K2_ActivateAbility");

	UGA_Weapon_Mimic_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.ExecuteUbergraph_GA_Weapon_Mimic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Weapon_Mimic_C::ExecuteUbergraph_GA_Weapon_Mimic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_Mimic.GA_Weapon_Mimic_C.ExecuteUbergraph_GA_Weapon_Mimic");

	UGA_Weapon_Mimic_C_ExecuteUbergraph_GA_Weapon_Mimic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

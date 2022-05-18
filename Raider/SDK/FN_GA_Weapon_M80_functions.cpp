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

// Function GA_Weapon_M80.GA_Weapon_M80_C.ThrowM80
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 NewParam                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, OutParm, IsPlainOldData)

void UGA_Weapon_M80_C::ThrowM80(struct FVector* NewParam, struct FRotator* Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.ThrowM80");

	UGA_Weapon_M80_C_ThrowM80_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (Rotation != nullptr)
		*Rotation = params.Rotation;
}


// Function GA_Weapon_M80.GA_Weapon_M80_C.Completed_3828B846413BDD657BD4F9BDEC856444
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Weapon_M80_C::Completed_3828B846413BDD657BD4F9BDEC856444(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.Completed_3828B846413BDD657BD4F9BDEC856444");

	UGA_Weapon_M80_C_Completed_3828B846413BDD657BD4F9BDEC856444_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_M80.GA_Weapon_M80_C.Cancelled_3828B846413BDD657BD4F9BDEC856444
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Weapon_M80_C::Cancelled_3828B846413BDD657BD4F9BDEC856444(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.Cancelled_3828B846413BDD657BD4F9BDEC856444");

	UGA_Weapon_M80_C_Cancelled_3828B846413BDD657BD4F9BDEC856444_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_M80.GA_Weapon_M80_C.Triggered_3828B846413BDD657BD4F9BDEC856444
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Weapon_M80_C::Triggered_3828B846413BDD657BD4F9BDEC856444(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.Triggered_3828B846413BDD657BD4F9BDEC856444");

	UGA_Weapon_M80_C_Triggered_3828B846413BDD657BD4F9BDEC856444_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_M80.GA_Weapon_M80_C.Destroyed_4DCEF0C249251A8D551D83AC1D03811D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_M80_C::Destroyed_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.Destroyed_4DCEF0C249251A8D551D83AC1D03811D");

	UGA_Weapon_M80_C_Destroyed_4DCEF0C249251A8D551D83AC1D03811D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_M80.GA_Weapon_M80_C.Exploded_4DCEF0C249251A8D551D83AC1D03811D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_M80_C::Exploded_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.Exploded_4DCEF0C249251A8D551D83AC1D03811D");

	UGA_Weapon_M80_C_Exploded_4DCEF0C249251A8D551D83AC1D03811D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_M80.GA_Weapon_M80_C.Stopped_4DCEF0C249251A8D551D83AC1D03811D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_M80_C::Stopped_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.Stopped_4DCEF0C249251A8D551D83AC1D03811D");

	UGA_Weapon_M80_C_Stopped_4DCEF0C249251A8D551D83AC1D03811D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_M80.GA_Weapon_M80_C.Bounced_4DCEF0C249251A8D551D83AC1D03811D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_M80_C::Bounced_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.Bounced_4DCEF0C249251A8D551D83AC1D03811D");

	UGA_Weapon_M80_C_Bounced_4DCEF0C249251A8D551D83AC1D03811D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_M80.GA_Weapon_M80_C.Touched_4DCEF0C249251A8D551D83AC1D03811D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_M80_C::Touched_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.Touched_4DCEF0C249251A8D551D83AC1D03811D");

	UGA_Weapon_M80_C_Touched_4DCEF0C249251A8D551D83AC1D03811D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_M80.GA_Weapon_M80_C.Created_4DCEF0C249251A8D551D83AC1D03811D
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProjectileEventData    ProjectileData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Weapon_M80_C::Created_4DCEF0C249251A8D551D83AC1D03811D(const struct FProjectileEventData& ProjectileData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.Created_4DCEF0C249251A8D551D83AC1D03811D");

	UGA_Weapon_M80_C_Created_4DCEF0C249251A8D551D83AC1D03811D_Params params;
	params.ProjectileData = ProjectileData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_M80.GA_Weapon_M80_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Weapon_M80_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.K2_ActivateAbility");

	UGA_Weapon_M80_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Weapon_M80.GA_Weapon_M80_C.ExecuteUbergraph_GA_Weapon_M80
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Weapon_M80_C::ExecuteUbergraph_GA_Weapon_M80(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Weapon_M80.GA_Weapon_M80_C.ExecuteUbergraph_GA_Weapon_M80");

	UGA_Weapon_M80_C_ExecuteUbergraph_GA_Weapon_M80_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

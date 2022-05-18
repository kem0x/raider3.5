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

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin");

	UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle HitResult                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult");

	UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params params;
	params.HitResult = HitResult;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint");

	UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor");

	UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax");

	UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params params;
	params.SpecHandle = SpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// int                            StackCount                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount");

	UAbilitySystemBlueprintLibrary_SetStackCount_Params params;
	params.SpecHandle = SpecHandle;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration");

	UAbilitySystemBlueprintLibrary_SetDuration_Params params;
	params.SpecHandle = SpecHandle;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            EventTag                       (Parm)
// struct FGameplayEventData      Payload                        (Parm)

void UAbilitySystemBlueprintLibrary::STATIC_SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor");

	UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params params;
	params.Actor = Actor;
	params.EventTag = EventTag;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute      AttributeA                     (Parm)
// struct FGameplayAttribute      AttributeB                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_NotEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute");

	UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params params;
	params.AttributeA = AttributeA;
	params.AttributeB = AttributeB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameplayEffect*         InGameplayEffect               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InInstigator                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InEffectCauser                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          InLevel                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle");

	UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params params;
	params.InGameplayEffect = InGameplayEffect;
	params.InInstigator = InInstigator;
	params.InEffectCauser = InEffectCauser;
	params.InLevel = InLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayTargetDataFilter Filter                         (Parm)
// class AActor*                  FilterActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTargetDataFilterHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::STATIC_MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle");

	UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params params;
	params.Filter = Filter;
	params.FilterActor = FilterActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute      Attribute                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_IsValid(const struct FGameplayAttribute& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid");

	UAbilitySystemBlueprintLibrary_IsValid_Params params;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer");

	UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled");

	UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_HasHitResult(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult");

	UAbilitySystemBlueprintLibrary_HasHitResult_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin");

	UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform");

	UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint");

	UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::STATIC_GetOrigin(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin");

	UAbilitySystemBlueprintLibrary_GetOrigin_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayAttribute      Attribute                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetModifiedAttributeMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayAttribute& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude");

	UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params params;
	params.SpecHandle = SpecHandle;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetInstigatorTransform(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform");

	UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::STATIC_GetInstigatorActor(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor");

	UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle HitResult                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData");

	UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params params;
	params.HitResult = HitResult;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_GetHitResult(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult");

	UAbilitySystemBlueprintLibrary_GetHitResult_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)
// struct FVector                 Normal                         (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal");

	UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params params;
	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FVector                 Direction                      (Parm, OutParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection");

	UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params params;
	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (Parm)
// bool                           bSuccessfullyFoundAttribute    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttributeFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent");

	UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params params;
	params.AbilitySystem = AbilitySystem;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystemComponent         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (Parm)
// bool                           bSuccessfullyFoundAttribute    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttributeBaseFromAbilitySystemComponent(class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent");

	UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params params;
	params.AbilitySystemComponent = AbilitySystemComponent;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (Parm)
// bool                           bSuccessfullyFoundAttribute    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttributeBase(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase");

	UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params params;
	params.Actor = Actor;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (Parm)
// bool                           bSuccessfullyFoundAttribute    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute");

	UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params params;
	params.Actor = Actor;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayEffectContextHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectContextHandle UAbilitySystemBlueprintLibrary::STATIC_GetEffectContext(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext");

	UAbilitySystemBlueprintLibrary_GetEffectContext_Params params;
	params.SpecHandle = SpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemBlueprintLibrary::STATIC_GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData");

	UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params params;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// TArray<struct FGameplayEffectSpecHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGameplayEffectSpecHandle> UAbilitySystemBlueprintLibrary::STATIC_GetAllLinkedGameplayEffectSpecHandles(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles");

	UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params params;
	params.SpecHandle = SpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UAbilitySystemBlueprintLibrary::STATIC_GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData");

	UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemBlueprintLibrary::STATIC_GetActorCount(const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount");

	UAbilitySystemBlueprintLibrary_GetActorCount_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::STATIC_GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex");

	UAbilitySystemBlueprintLibrary_GetActorByIndex_Params params;
	params.Parameters = Parameters;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectTotalDuration(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration");

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectTotalDuration_Params params;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectStartTime(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime");

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStartTime_Params params;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectStackLimitCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount");

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params params;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount");

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params params;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectRemainingDuration(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration");

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectRemainingDuration_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectExpectedEndTime(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime");

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectExpectedEndTime_Params params;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectDebugString(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString");

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params params;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::STATIC_GetAbilitySystemComponent(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent");

	UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayCueInterface> TargetCueInterface             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void UAbilitySystemBlueprintLibrary::STATIC_ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget");

	UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params params;
	params.TargetCueInterface = TargetCueInterface;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetDataHandle               (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTargetDataFilterHandle ActorFilterClass               (Parm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData");

	UAbilitySystemBlueprintLibrary_FilterTargetData_Params params;
	params.TargetDataHandle = TargetDataHandle;
	params.ActorFilterClass = ActorFilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (Parm)
// struct FGameplayTagContainer   SourceTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   TargetTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// float                          BaseValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_EvaluateAttributeValueWithTagsAndBase(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, float BaseValue, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase");

	UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params params;
	params.AbilitySystem = AbilitySystem;
	params.Attribute = Attribute;
	params.SourceTags = SourceTags;
	params.TargetTags = TargetTags;
	params.BaseValue = BaseValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (Parm)
// struct FGameplayTagContainer   SourceTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   TargetTags                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bSuccess                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemBlueprintLibrary::STATIC_EvaluateAttributeValueWithTags(class UAbilitySystemComponent* AbilitySystem, const struct FGameplayAttribute& Attribute, const struct FGameplayTagContainer& SourceTags, const struct FGameplayTagContainer& TargetTags, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags");

	UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params params;
	params.AbilitySystem = AbilitySystem;
	params.Attribute = Attribute;
	params.SourceTags = SourceTags;
	params.TargetTags = TargetTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAttribute      AttributeA                     (Parm)
// struct FGameplayAttribute      AttributeB                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_EqualEqual_GameplayAttributeGameplayAttribute(const struct FGameplayAttribute& AttributeA, const struct FGameplayAttribute& AttributeB)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute");

	UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params params;
	params.AttributeA = AttributeA;
	params.AttributeB = AttributeB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// struct FVector                 Origin                         (Parm, IsPlainOldData)

void UAbilitySystemBlueprintLibrary::STATIC_EffectContextSetOrigin(const struct FGameplayEffectContextHandle& EffectContext, const struct FVector& Origin)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin");

	UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params params;
	params.EffectContext = EffectContext;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_EffectContextIsValid(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid");

	UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled");

	UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult");

	UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject");

	UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor");

	UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin");

	UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor");

	UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// struct FHitResult              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult");

	UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser");

	UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// struct FHitResult              HitResult                      (Parm, IsPlainOldData)
// bool                           bReset                         (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemBlueprintLibrary::STATIC_EffectContextAddHitResult(const struct FGameplayEffectContextHandle& EffectContext, const struct FHitResult& HitResult, bool bReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult");

	UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params params;
	params.EffectContext = EffectContext;
	params.HitResult = HitResult;
	params.bReset = bReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor");

	UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params params;
	params.TargetData = TargetData;
	params.Index = Index;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayCueParameters  Parameters                     (Parm)
// struct FGameplayTagRequirements SourceTagReqs                  (Parm, OutParm, ReferenceParm)
// struct FGameplayTagRequirements TargetTagReqs                  (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemBlueprintLibrary::STATIC_DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements");

	UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SourceTagReqs != nullptr)
		*SourceTagReqs = params.SourceTagReqs;
	if (TargetTagReqs != nullptr)
		*TargetTagReqs = params.TargetTagReqs;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  InNewInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InEffectCauser                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle GameplayEffectSpecHandle_Clone (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_CloneSpecHandle(class AActor* InNewInstigator, class AActor* InEffectCauser, const struct FGameplayEffectSpecHandle& GameplayEffectSpecHandle_Clone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle");

	UAbilitySystemBlueprintLibrary_CloneSpecHandle_Params params;
	params.InNewInstigator = InNewInstigator;
	params.InEffectCauser = InEffectCauser;
	params.GameplayEffectSpecHandle_Clone = GameplayEffectSpecHandle_Clone;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayTag            DataTag                        (Parm)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AssignTagSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& DataTag, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude");

	UAbilitySystemBlueprintLibrary_AssignTagSetByCallerMagnitude_Params params;
	params.SpecHandle = SpecHandle;
	params.DataTag = DataTag;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FName                   DataName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude");

	UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params params;
	params.SpecHandle = SpecHandle;
	params.DataName = DataName;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetHandle                   (Parm)
// struct FGameplayAbilityTargetDataHandle HandleToAdd                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle");

	UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params params;
	params.TargetHandle = TargetHandle;
	params.HandleToAdd = HandleToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayEffectSpecHandle LinkedGameplayEffectSpec       (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec");

	UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params params;
	params.SpecHandle = SpecHandle;
	params.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// class UClass*                  LinkedGameplayEffect           (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddLinkedGameplayEffect(const struct FGameplayEffectSpecHandle& SpecHandle, class UClass* LinkedGameplayEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect");

	UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params params;
	params.SpecHandle = SpecHandle;
	params.LinkedGameplayEffect = LinkedGameplayEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayTagContainer   NewGameplayTags                (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags");

	UAbilitySystemBlueprintLibrary_AddGrantedTags_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayTag            NewGameplayTag                 (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag");

	UAbilitySystemBlueprintLibrary_AddGrantedTag_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayTagContainer   NewGameplayTags                (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags");

	UAbilitySystemBlueprintLibrary_AddAssetTags_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm)
// struct FGameplayTag            NewGameplayTag                 (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag");

	UAbilitySystemBlueprintLibrary_AddAssetTag_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfo SourceLocation                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilityTargetingLocationInfo TargetLocation                 (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params params;
	params.SourceLocation = SourceLocation;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FHitResult              HitResult                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromHitResult(const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class AActor*>          ActorArray                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           OneTargetPerHandle             (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params params;
	params.ActorArray = ActorArray;
	params.OneTargetPerHandle = OneTargetPerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromActor(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InAbilityToActivate            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass");

	UAbilitySystemComponent_TryActivateAbilityByClass_Params params;
	params.InAbilityToActivate = InAbilityToActivate;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   GameplayTagContainer           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bAllowRemoteActivation         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag");

	UAbilitySystemComponent_TryActivateAbilitiesByTag_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
// (Final, Native, Public, BlueprintCallable)

void UAbilitySystemComponent::TargetConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TargetConfirm");

	UAbilitySystemComponent_TargetConfirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
// (Final, Native, Public, BlueprintCallable)

void UAbilitySystemComponent::TargetCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TargetCancel");

	UAbilitySystemComponent_TargetCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           NewInhibit                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited");

	UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params params;
	params.NewInhibit = NewInhibit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayEffectQuery    Query                          (Parm)
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::SetActiveGameplayEffectLevelUsingQuery(const struct FGameplayEffectQuery& Query, int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery");

	UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params params;
	params.Query = Query;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)
// int                            NewLevel                       (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel");

	UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params params;
	params.ActiveHandle = ActiveHandle;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)
// bool                           InputPressed                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayEventData      TriggerEventData               (Parm)

void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData");

	UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)
// bool                           InputPressed                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FPredictionKey          PredictionKey                  (Parm)

void UAbilitySystemComponent::ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility");

	UAbilitySystemComponent_ServerTryActivateAbility_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (Parm)
// struct FPredictionKey          CurrentPredictionKey           (Parm)

void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled");

	UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params params;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (Parm)
// struct FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle     (ConstParm, Parm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (Parm)
// struct FPredictionKey          CurrentPredictionKey           (Parm)

void UAbilitySystemComponent::ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData");

	UAbilitySystemComponent_ServerSetReplicatedTargetData_Params params;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
	params.ApplicationTag = ApplicationTag;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (Parm)
// struct FPredictionKey          CurrentPredictionKey           (Parm)
// struct FVector_NetQuantize100  VectorPayload                  (Parm)

void UAbilitySystemComponent::ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey, const struct FVector_NetQuantize100& VectorPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload");

	UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;
	params.VectorPayload = VectorPayload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (Parm)
// struct FPredictionKey          CurrentPredictionKey           (Parm)

void UAbilitySystemComponent::ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent");

	UAbilitySystemComponent_ServerSetReplicatedEvent_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)

void UAbilitySystemComponent::ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased");

	UAbilitySystemComponent_ServerSetInputReleased_Params params;
	params.AbilityHandle = AbilityHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)

void UAbilitySystemComponent::ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed");

	UAbilitySystemComponent_ServerSetInputPressed_Params params;
	params.AbilityHandle = AbilityHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// TArray<struct FString>         Strings                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UAbilitySystemComponent::ServerPrintDebug_RequestWithStrings(TArray<struct FString> Strings)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings");

	UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params params;
	params.Strings = Strings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)

void UAbilitySystemComponent::ServerPrintDebug_Request()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request");

	UAbilitySystemComponent_ServerPrintDebug_Request_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToEnd                   (Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (Parm)
// struct FPredictionKey          PredictionKey                  (Parm)

void UAbilitySystemComponent::ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility");

	UAbilitySystemComponent_ServerEndAbility_Params params;
	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (Parm, ZeroConstructor, IsPlainOldData)
// float                          InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageSetPlayRate(class UAnimMontage* ClientAnimMontage, float InPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate");

	UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.InPlayRate = InPlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ClientPosition                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SectionName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NextSectionName                (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName");

	UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.ClientPosition = ClientPosition;
	params.SectionName = SectionName;
	params.NextSectionName = NextSectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UAnimMontage*            ClientAnimMontage              (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SectionName                    (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName");

	UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToCancel                (Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (Parm)

void UAbilitySystemComponent::ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility");

	UAbilitySystemComponent_ServerCancelAbility_Params params;
	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FGameplayAbilities_FServerAbilityRPCBatch BatchInfo                      (Parm)

void UAbilitySystemComponent::ServerAbilityRPCBatch(const struct FGameplayAbilities_FServerAbilityRPCBatch& BatchInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch");

	UAbilitySystemComponent_ServerAbilityRPCBatch_Params params;
	params.BatchInfo = BatchInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffect                 (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* InstigatorAbilitySystemComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect");

	UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params params;
	params.GameplayEffect = GameplayEffect;
	params.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (Parm)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect");

	UAbilitySystemComponent_RemoveActiveGameplayEffect_Params params;
	params.Handle = Handle;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemComponent::RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags");

	UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemComponent::RemoveActiveEffectsWithSourceTags(const struct FGameplayTagContainer& Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags");

	UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemComponent::RemoveActiveEffectsWithGrantedTags(const struct FGameplayTagContainer& Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags");

	UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   Tags                           (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemComponent::RemoveActiveEffectsWithAppliedTags(const struct FGameplayTagContainer& Tags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags");

	UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
// (Native, Public)

void UAbilitySystemComponent::OnRep_ServerDebugString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString");

	UAbilitySystemComponent_OnRep_ServerDebugString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
// (Final, Native, Protected)

void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage");

	UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
// (Final, Native, Public)

void UAbilitySystemComponent::OnRep_OwningActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor");

	UAbilitySystemComponent_OnRep_OwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
// (Native, Public)

void UAbilitySystemComponent::OnRep_ClientDebugString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString");

	UAbilitySystemComponent_OnRep_ClientDebugString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
// (Final, Native, Protected)

void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities");

	UAbilitySystemComponent_OnRep_ActivateAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer   GameplayCueTags                (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params params;
	params.GameplayCueTags = GameplayCueTags;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer   GameplayCueTags                (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesExecuted(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params params;
	params.GameplayCueTags = GameplayCueTags;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTagContainer   GameplayCueTags                (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(const struct FGameplayTagContainer& GameplayCueTags, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params params;
	params.GameplayCueTags = GameplayCueTags;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayEffectSpecForRPC Spec                           (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params params;
	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayEffectSpecForRPC Spec                           (ConstParm, Parm, ReferenceParm)
// struct FPredictionKey          PredictionKey                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params params;
	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayCueParameters  Parameters                     (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
// (Net, Native, Event, NetMulticast, Public)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)

void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec");

	UAbilitySystemComponent_MakeOutgoingSpec_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayEffectContextHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectContextHandle UAbilitySystemComponent::MakeEffectContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext");

	UAbilitySystemComponent_MakeEffectContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  Attributes                     (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable*              DataTable                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::K2_InitStats(class UClass* Attributes, class UDataTable* DataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.K2_InitStats");

	UAbilitySystemComponent_K2_InitStats_Params params;
	params.Attributes = Attributes;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (ConstParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive");

	UAbilitySystemComponent_IsGameplayCueActive_Params params;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilitySystemComponent::GetUserAbilityActivationInhibited()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited");

	UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (Parm)
// struct FGameplayAttribute      Attribute                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAbilitySystemComponent::GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude");

	UAbilitySystemComponent_GetGameplayEffectMagnitude_Params params;
	params.Handle = Handle;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  SourceGameplayEffect           (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* OptionalInstigatorFilterComponent (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bEnforceOnGoingCheck           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UAbilitySystemComponent::GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount");

	UAbilitySystemComponent_GetGameplayEffectCount_Params params;
	params.SourceGameplayEffect = SourceGameplayEffect;
	params.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;
	params.bEnforceOnGoingCheck = bEnforceOnGoingCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
// (Final, Native, Public, HasOutParms, BlueprintCallable, Const)
// Parameters:
// struct FGameplayEffectQuery    Query                          (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UAbilitySystemComponent::GetActiveEffects(const struct FGameplayEffectQuery& Query)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects");

	UAbilitySystemComponent_GetActiveEffects_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)

void UAbilitySystemComponent::ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility");

	UAbilitySystemComponent_ClientTryActivateAbility_Params params;
	params.AbilityToActivate = AbilityToActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TEnumAsByte<EAbilityGenericReplicatedEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilitySpecHandle AbilityHandle                  (Parm)
// struct FPredictionKey          AbilityOriginalPredictionKey   (Parm)

void UAbilitySystemComponent::ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent");

	UAbilitySystemComponent_ClientSetReplicatedEvent_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// TArray<struct FString>         Strings                        (ConstParm, Parm, ZeroConstructor, ReferenceParm)
// int                            GameFlags                      (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::ClientPrintDebug_Response(TArray<struct FString> Strings, int GameFlags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response");

	UAbilitySystemComponent_ClientPrintDebug_Response_Params params;
	params.Strings = Strings;
	params.GameFlags = GameFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToEnd                   (Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (Parm)

void UAbilitySystemComponent::ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility");

	UAbilitySystemComponent_ClientEndAbility_Params params;
	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToCancel                (Parm)
// struct FGameplayAbilityActivationInfo ActivationInfo                 (Parm)

void UAbilitySystemComponent::ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility");

	UAbilitySystemComponent_ClientCancelAbility_Params params;
	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)
// struct FPredictionKey          PredictionKey                  (Parm)
// struct FGameplayEventData      TriggerEventData               (Parm)

void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData");

	UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)
// struct FPredictionKey          PredictionKey                  (Parm)

void UAbilitySystemComponent::ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed");

	UAbilitySystemComponent_ClientActivateAbilitySucceed_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// struct FGameplayAbilitySpecHandle AbilityToActivate              (Parm)
// int16_t                        PredictionKey                  (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed");

	UAbilitySystemComponent_ClientActivateAbilityFailed_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle Context                        (Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget");

	UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Target = Target;
	params.Level = Level;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle EffectContext                  (Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf");

	UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent* Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(class UAbilitySystemComponent* Target, struct FGameplayEffectSpecHandle* SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget");

	UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle SpecHandle                     (Parm, OutParm, ReferenceParm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf");

	UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;

	return params.ReturnValue;
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature");

	UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int                            InputID                        (Parm, ZeroConstructor, IsPlainOldData)

void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int InputID)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature");

	UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params params;
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
// (Exec, Native, Public)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts");

	UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
// (Exec, Native, Public)

void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns");

	UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldDirection                 (Parm, IsPlainOldData)
// float                          Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsAdditive                    (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             StrengthOverTime               (Parm, ZeroConstructor, IsPlainOldData)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SetVelocityOnFinish            (Parm, IsPlainOldData)
// float                          ClampVelocityOnFinish          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_ApplyRootMotionConstantForce* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_ApplyRootMotionConstantForce* UAbilityTask_ApplyRootMotionConstantForce::STATIC_ApplyRootMotionConstantForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& WorldDirection, float Strength, float Duration, bool bIsAdditive, class UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce");

	UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.WorldDirection = WorldDirection;
	params.Strength = Strength;
	params.Duration = Duration;
	params.bIsAdditive = bIsAdditive;
	params.StrengthOverTime = StrengthOverTime;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAbilityTask_ApplyRootMotionJumpForce::OnLandedCallback(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback");

	UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
// (Final, Native, Public, BlueprintCallable)

void UAbilityTask_ApplyRootMotionJumpForce::Finish()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish");

	UAbilityTask_ApplyRootMotionJumpForce_Finish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Height                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumLandedTriggerTime       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFinishOnLanded                (Parm, ZeroConstructor, IsPlainOldData)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SetVelocityOnFinish            (Parm, IsPlainOldData)
// float                          ClampVelocityOnFinish          (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveVector*            PathOffsetCurve                (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             TimeMappingCurve               (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_ApplyRootMotionJumpForce* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_ApplyRootMotionJumpForce* UAbilityTask_ApplyRootMotionJumpForce::STATIC_ApplyRootMotionJumpForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FRotator& Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce");

	UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.Rotation = Rotation;
	params.Distance = Distance;
	params.Height = Height;
	params.Duration = Duration;
	params.MinimumLandedTriggerTime = MinimumLandedTriggerTime;
	params.bFinishOnLanded = bFinishOnLanded;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;
	params.PathOffsetCurve = PathOffsetCurve;
	params.TimeMappingCurve = TimeMappingCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
// (Final, Native, Public)
// Parameters:
// class AActor*                  OriginalTarget                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnTargetActorSwapped(class AActor* OriginalTarget, class AActor* NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped");

	UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Params params;
	params.OriginalTarget = OriginalTarget;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
// (Final, Native, Protected)

void UAbilityTask_ApplyRootMotionMoveToActorForce::OnRep_TargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation");

	UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetDataHandle               (Parm)
// int                            TargetDataIndex                (Parm, ZeroConstructor, IsPlainOldData)
// int                            TargetActorIndex               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocationOffset           (Parm, IsPlainOldData)
// ERootMotionMoveToActorTargetOffsetType OffsetAlignment                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             TargetLerpSpeedHorizontal      (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             TargetLerpSpeedVertical        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetNewMovementMode            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     MovementMode                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRestrictSpeedToExpected       (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveVector*            PathOffsetCurve                (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             TimeMappingCurve               (Parm, ZeroConstructor, IsPlainOldData)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SetVelocityOnFinish            (Parm, IsPlainOldData)
// float                          ClampVelocityOnFinish          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableDestinationReachedInterrupt (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::STATIC_ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int TargetDataIndex, int TargetActorIndex, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce");

	UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.TargetDataHandle = TargetDataHandle;
	params.TargetDataIndex = TargetDataIndex;
	params.TargetActorIndex = TargetActorIndex;
	params.TargetLocationOffset = TargetLocationOffset;
	params.OffsetAlignment = OffsetAlignment;
	params.Duration = Duration;
	params.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	params.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	params.bSetNewMovementMode = bSetNewMovementMode;
	params.MovementMode = MovementMode;
	params.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	params.PathOffsetCurve = PathOffsetCurve;
	params.TimeMappingCurve = TimeMappingCurve;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;
	params.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocationOffset           (Parm, IsPlainOldData)
// ERootMotionMoveToActorTargetOffsetType OffsetAlignment                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             TargetLerpSpeedHorizontal      (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             TargetLerpSpeedVertical        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetNewMovementMode            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     MovementMode                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRestrictSpeedToExpected       (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveVector*            PathOffsetCurve                (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             TimeMappingCurve               (Parm, ZeroConstructor, IsPlainOldData)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SetVelocityOnFinish            (Parm, IsPlainOldData)
// float                          ClampVelocityOnFinish          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableDestinationReachedInterrupt (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_ApplyRootMotionMoveToActorForce* UAbilityTask_ApplyRootMotionMoveToActorForce::STATIC_ApplyRootMotionMoveToActorForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class AActor* TargetActor, const struct FVector& TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, class UCurveFloat* TargetLerpSpeedHorizontal, class UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, class UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce");

	UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.TargetActor = TargetActor;
	params.TargetLocationOffset = TargetLocationOffset;
	params.OffsetAlignment = OffsetAlignment;
	params.Duration = Duration;
	params.TargetLerpSpeedHorizontal = TargetLerpSpeedHorizontal;
	params.TargetLerpSpeedVertical = TargetLerpSpeedVertical;
	params.bSetNewMovementMode = bSetNewMovementMode;
	params.MovementMode = MovementMode;
	params.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	params.PathOffsetCurve = PathOffsetCurve;
	params.TimeMappingCurve = TimeMappingCurve;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;
	params.bDisableDestinationReachedInterrupt = bDisableDestinationReachedInterrupt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetLocation                 (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSetNewMovementMode            (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     MovementMode                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bRestrictSpeedToExpected       (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveVector*            PathOffsetCurve                (Parm, ZeroConstructor, IsPlainOldData)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SetVelocityOnFinish            (Parm, IsPlainOldData)
// float                          ClampVelocityOnFinish          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_ApplyRootMotionMoveToForce* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_ApplyRootMotionMoveToForce* UAbilityTask_ApplyRootMotionMoveToForce::STATIC_ApplyRootMotionMoveToForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, class UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce");

	UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.TargetLocation = TargetLocation;
	params.Duration = Duration;
	params.bSetNewMovementMode = bSetNewMovementMode;
	params.MovementMode = MovementMode;
	params.bRestrictSpeedToExpected = bRestrictSpeedToExpected;
	params.PathOffsetCurve = PathOffsetCurve;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// class AActor*                  LocationActor                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Strength                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPush                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsAdditive                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bNoZForce                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             StrengthDistanceFalloff        (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             StrengthOverTime               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseFixedWorldDirection        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                FixedWorldDirection            (Parm, IsPlainOldData)
// ERootMotionFinishVelocityMode  VelocityOnFinishMode           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SetVelocityOnFinish            (Parm, IsPlainOldData)
// float                          ClampVelocityOnFinish          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_ApplyRootMotionRadialForce* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_ApplyRootMotionRadialForce* UAbilityTask_ApplyRootMotionRadialForce::STATIC_ApplyRootMotionRadialForce(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, class AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, class UCurveFloat* StrengthDistanceFalloff, class UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, const struct FRotator& FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, const struct FVector& SetVelocityOnFinish, float ClampVelocityOnFinish)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce");

	UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.Location = Location;
	params.LocationActor = LocationActor;
	params.Strength = Strength;
	params.Duration = Duration;
	params.Radius = Radius;
	params.bIsPush = bIsPush;
	params.bIsAdditive = bIsAdditive;
	params.bNoZForce = bNoZForce;
	params.StrengthDistanceFalloff = StrengthDistanceFalloff;
	params.StrengthOverTime = StrengthOverTime;
	params.bUseFixedWorldDirection = bUseFixedWorldDirection;
	params.FixedWorldDirection = FixedWorldDirection;
	params.VelocityOnFinishMode = VelocityOnFinishMode;
	params.SetVelocityOnFinish = SetVelocityOnFinish;
	params.ClampVelocityOnFinish = ClampVelocityOnFinish;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             OptionalInterpolationCurve     (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveVector*            OptionalVectorInterpolationCurve (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_MoveToLocation* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::STATIC_MoveToLocation(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation");

	UAbilityTask_MoveToLocation_MoveToLocation_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.Location = Location;
	params.Duration = Duration;
	params.OptionalInterpolationCurve = OptionalInterpolationCurve;
	params.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// EAbilityTaskNetSyncType        SyncType                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_NetworkSyncPoint* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::STATIC_WaitNetSync(class UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync");

	UAbilityTask_NetworkSyncPoint_WaitNetSync_Params params;
	params.OwningAbility = OwningAbility;
	params.SyncType = SyncType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
// (Final, Native, Public)

void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback");

	UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
// (Final, Native, Public)

void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted");

	UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_PlayMontageAndWait::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded");

	UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut");

	UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartSection                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bStopWhenAbilityEnds           (Parm, ZeroConstructor, IsPlainOldData)
// float                          AnimRootMotionTranslationScale (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_PlayMontageAndWait* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::STATIC_CreatePlayMontageAndWaitProxy(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy");

	UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.MontageToPlay = MontageToPlay;
	params.Rate = Rate;
	params.StartSection = StartSection;
	params.bStopWhenAbilityEnds = bStopWhenAbilityEnds;
	params.AnimRootMotionTranslationScale = AnimRootMotionTranslationScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeBetweenActions             (Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalActionCount               (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_Repeat*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_Repeat* UAbilityTask_Repeat::STATIC_RepeatAction(class UGameplayAbility* OwningAbility, float TimeBetweenActions, int TotalActionCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_Repeat.RepeatAction");

	UAbilityTask_Repeat_RepeatAction_Params params;
	params.OwningAbility = OwningAbility;
	params.TimeBetweenActions = TimeBetweenActions;
	params.TotalActionCount = TotalActionCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_SpawnActor* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::STATIC_SpawnActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor");

	UAbilityTask_SpawnActor_SpawnActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// class AActor*                  SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_SpawnActor::FinishSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor");

	UAbilityTask_SpawnActor_FinishSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityTask_SpawnActor::BeginSpawningActor(class UGameplayAbility* OwningAbility, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor");

	UAbilityTask_SpawnActor_BeginSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetData = TargetData;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StateName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEndCurrentState               (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_StartAbilityState* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::STATIC_StartAbilityState(class UGameplayAbility* OwningAbility, const struct FName& StateName, bool bEndCurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState");

	UAbilityTask_StartAbilityState_StartAbilityState_Params params;
	params.OwningAbility = OwningAbility;
	params.StateName = StateName;
	params.bEndCurrentState = bEndCurrentState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_VisualizeTargeting* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::STATIC_VisualizeTargetingUsingActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor");

	UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetActor = TargetActor;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_VisualizeTargeting* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::STATIC_VisualizeTargeting(class UGameplayAbility* OwningAbility, class UClass* Class, const struct FName& TaskInstanceName, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting");

	UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params params;
	params.OwningAbility = OwningAbility;
	params.Class = Class;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_VisualizeTargeting::FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor");

	UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor");

	UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagRequirements TagRequirements                (Parm)
// bool                           IncludeTriggeredAbilities      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAbilityActivate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::STATIC_WaitForAbilityActivateWithTagRequirements(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements");

	UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params params;
	params.OwningAbility = OwningAbility;
	params.TagRequirements = TagRequirements;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagQuery       Query                          (Parm)
// bool                           IncludeTriggeredAbilities      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAbilityActivate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::STATIC_WaitForAbilityActivate_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query");

	UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Params params;
	params.OwningAbility = OwningAbility;
	params.Query = Query;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            WithTag                        (Parm)
// struct FGameplayTag            WithoutTag                     (Parm)
// bool                           IncludeTriggeredAbilities      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAbilityActivate* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::STATIC_WaitForAbilityActivate(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate");

	UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params params;
	params.OwningAbility = OwningAbility;
	params.WithTag = WithTag;
	params.WithoutTag = WithoutTag;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*        ActivatedAbility               (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(class UGameplayAbility* ActivatedAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate");

	UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params params;
	params.ActivatedAbility = ActivatedAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagQuery       Query                          (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAbilityCommit* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::STATIC_WaitForAbilityCommit_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTagQuery& Query, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query");

	UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Params params;
	params.OwningAbility = OwningAbility;
	params.Query = Query;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            WithTag                        (Parm)
// struct FGameplayTag            WithoutTage                    (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAbilityCommit* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::STATIC_WaitForAbilityCommit(class UGameplayAbility* OwningAbility, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit");

	UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params params;
	params.OwningAbility = OwningAbility;
	params.WithTag = WithTag;
	params.WithoutTage = WithoutTage;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*        ActivatedAbility               (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(class UGameplayAbility* ActivatedAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit");

	UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params params;
	params.ActivatedAbility = ActivatedAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      InAttribute                    (Parm)
// struct FGameplayTag            InWithTag                      (Parm)
// struct FGameplayTag            InWithoutTag                   (Parm)
// TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType               (Parm, ZeroConstructor, IsPlainOldData)
// float                          InComparisonValue              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAttributeChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::STATIC_WaitForAttributeChangeWithComparison(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison");

	UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params params;
	params.OwningAbility = OwningAbility;
	params.InAttribute = InAttribute;
	params.InWithTag = InWithTag;
	params.InWithoutTag = InWithoutTag;
	params.InComparisonType = InComparisonType;
	params.InComparisonValue = InComparisonValue;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (Parm)
// struct FGameplayTag            WithSrcTag                     (Parm)
// struct FGameplayTag            WithoutSrcTag                  (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAttributeChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::STATIC_WaitForAttributeChange(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange");

	UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params params;
	params.OwningAbility = OwningAbility;
	params.Attribute = Attribute;
	params.WithSrcTag = WithSrcTag;
	params.WithoutSrcTag = WithoutSrcTag;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      AttributeNumerator             (Parm)
// struct FGameplayAttribute      AttributeDenominator           (Parm)
// TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ComparisonValue                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTriggerOnce                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAttributeChangeRatioThreshold* UAbilityTask_WaitAttributeChangeRatioThreshold::STATIC_WaitForAttributeChangeRatioThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& AttributeNumerator, const struct FGameplayAttribute& AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold");

	UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params params;
	params.OwningAbility = OwningAbility;
	params.AttributeNumerator = AttributeNumerator;
	params.AttributeDenominator = AttributeDenominator;
	params.ComparisonType = ComparisonType;
	params.ComparisonValue = ComparisonValue;
	params.bTriggerOnce = bTriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAttribute      Attribute                      (Parm)
// TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          ComparisonValue                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTriggerOnce                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitAttributeChangeThreshold* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitAttributeChangeThreshold* UAbilityTask_WaitAttributeChangeThreshold::STATIC_WaitForAttributeChangeThreshold(class UGameplayAbility* OwningAbility, const struct FGameplayAttribute& Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, class AActor* OptionalExternalOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold");

	UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params params;
	params.OwningAbility = OwningAbility;
	params.Attribute = Attribute;
	params.ComparisonType = ComparisonType;
	params.ComparisonValue = ComparisonValue;
	params.bTriggerOnce = bTriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitCancel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::STATIC_WaitCancel(class UGameplayAbility* OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel");

	UAbilityTask_WaitCancel_WaitCancel_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback");

	UAbilityTask_WaitCancel_OnLocalCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitCancel::OnCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback");

	UAbilityTask_WaitCancel_OnCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitConfirm* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::STATIC_WaitConfirm(class UGameplayAbility* OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm");

	UAbilityTask_WaitConfirm_WaitConfirm_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
// (Final, Native, Public)
// Parameters:
// class UGameplayAbility*        InAbility                      (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitConfirm::OnConfirmCallback(class UGameplayAbility* InAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback");

	UAbilityTask_WaitConfirm_OnConfirmCallback_Params params;
	params.InAbility = InAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitConfirmCancel* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::STATIC_WaitConfirmCancel(class UGameplayAbility* OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel");

	UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback");

	UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback");

	UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback");

	UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
// (Final, Native, Public)

void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback");

	UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitDelay*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::STATIC_WaitDelay(class UGameplayAbility* OwningAbility, float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay");

	UAbilityTask_WaitDelay_WaitDelay_Params params;
	params.OwningAbility = OwningAbility;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UAbilitySystemComponent* Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayEffectSpec     SpecApplied                    (ConstParm, Parm, OutParm, ReferenceParm)
// struct FActiveGameplayEffectHandle ActiveHandle                   (Parm)

void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback");

	UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params params;
	params.Target = Target;
	params.SpecApplied = SpecApplied;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTargetDataFilterHandle SourceFilter                   (ConstParm, Parm)
// struct FGameplayTagQuery       SourceTagQuery                 (Parm)
// struct FGameplayTagQuery       TargetTagQuery                 (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ListenForPeriodicEffect        (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::STATIC_WaitGameplayEffectAppliedToSelf_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query");

	UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Params params;
	params.OwningAbility = OwningAbility;
	params.SourceFilter = SourceFilter;
	params.SourceTagQuery = SourceTagQuery;
	params.TargetTagQuery = TargetTagQuery;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;
	params.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTargetDataFilterHandle SourceFilter                   (ConstParm, Parm)
// struct FGameplayTagRequirements SourceTagRequirements          (Parm)
// struct FGameplayTagRequirements TargetTagRequirements          (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ListenForPeriodicEffect        (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::STATIC_WaitGameplayEffectAppliedToSelf(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf");

	UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params params;
	params.OwningAbility = OwningAbility;
	params.SourceFilter = SourceFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;
	params.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTargetDataFilterHandle SourceFilter                   (ConstParm, Parm)
// struct FGameplayTagQuery       SourceTagQuery                 (Parm)
// struct FGameplayTagQuery       TargetTagQuery                 (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ListenForPeriodicEffect        (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::STATIC_WaitGameplayEffectAppliedToTarget_Query(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagQuery& SourceTagQuery, const struct FGameplayTagQuery& TargetTagQuery, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query");

	UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Params params;
	params.OwningAbility = OwningAbility;
	params.SourceFilter = SourceFilter;
	params.SourceTagQuery = SourceTagQuery;
	params.TargetTagQuery = TargetTagQuery;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;
	params.ListenForPeriodicEffect = ListenForPeriodicEffect;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTargetDataFilterHandle TargetFilter                   (ConstParm, Parm)
// struct FGameplayTagRequirements SourceTagRequirements          (Parm)
// struct FGameplayTagRequirements TargetTagRequirements          (Parm)
// bool                           TriggerOnce                    (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OptionalExternalOwner          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ListenForPeriodicEffects       (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::STATIC_WaitGameplayEffectAppliedToTarget(class UGameplayAbility* OwningAbility, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner, bool ListenForPeriodicEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget");

	UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params params;
	params.OwningAbility = OwningAbility;
	params.TargetFilter = TargetFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;
	params.ListenForPeriodicEffects = ListenForPeriodicEffects;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagRequirements SourceTagRequirements          (Parm)
// struct FGameplayTagRequirements TargetTagRequirements          (Parm)
// class AActor*                  OptionalExternalTarget         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::STATIC_WaitGameplayEffectBlockedByImmunity(class UGameplayAbility* OwningAbility, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity");

	UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params params;
	params.OwningAbility = OwningAbility;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FActiveGameplayEffectHandle Handle                         (Parm)
// class UAbilityTask_WaitGameplayEffectRemoved* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::STATIC_WaitForGameplayEffectRemoved(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved");

	UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params params;
	params.OwningAbility = OwningAbility;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayEffectRemovalInfo InGameplayEffectRemovalInfo    (ConstParm, Parm, OutParm, ReferenceParm)

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved(const struct FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved");

	UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params params;
	params.InGameplayEffectRemovalInfo = InGameplayEffectRemovalInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FActiveGameplayEffectHandle Handle                         (Parm)
// class UAbilityTask_WaitGameplayEffectStackChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::STATIC_WaitForGameplayEffectStackChange(class UGameplayAbility* OwningAbility, const struct FActiveGameplayEffectHandle& Handle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange");

	UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params params;
	params.OwningAbility = OwningAbility;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
// (Final, Native, Public)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (Parm)
// int                            NewCount                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            OldCount                       (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(const struct FActiveGameplayEffectHandle& Handle, int NewCount, int OldCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange");

	UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params params;
	params.Handle = Handle;
	params.NewCount = NewCount;
	params.OldCount = OldCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            EventTag                       (Parm)
// class AActor*                  OptionalExternalTarget         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayEvent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::STATIC_WaitGameplayEvent(class UGameplayAbility* OwningAbility, const struct FGameplayTag& EventTag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent");

	UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params params;
	params.OwningAbility = OwningAbility;
	params.EventTag = EventTag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
// (Native, Public)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm)
// int                            NewCount                       (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback");

	UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params params;
	params.Tag = Tag;
	params.NewCount = NewCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)
// class AActor*                  InOptionalExternalTarget       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayTagAdded* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::STATIC_WaitGameplayTagAdd(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd");

	UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params params;
	params.OwningAbility = OwningAbility;
	params.Tag = Tag;
	params.InOptionalExternalTarget = InOptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            Tag                            (Parm)
// class AActor*                  InOptionalExternalTarget       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           OnlyTriggerOnce                (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitGameplayTagRemoved* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::STATIC_WaitGameplayTagRemove(class UGameplayAbility* OwningAbility, const struct FGameplayTag& Tag, class AActor* InOptionalExternalTarget, bool OnlyTriggerOnce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove");

	UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params params;
	params.OwningAbility = OwningAbility;
	params.Tag = Tag;
	params.InOptionalExternalTarget = InOptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestAlreadyPressed            (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitInputPress* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::STATIC_WaitInputPress(class UGameplayAbility* OwningAbility, bool bTestAlreadyPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress");

	UAbilityTask_WaitInputPress_WaitInputPress_Params params;
	params.OwningAbility = OwningAbility;
	params.bTestAlreadyPressed = bTestAlreadyPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
// (Final, Native, Public)

void UAbilityTask_WaitInputPress::OnPressCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback");

	UAbilityTask_WaitInputPress_OnPressCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bTestAlreadyReleased           (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitInputRelease* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::STATIC_WaitInputRelease(class UGameplayAbility* OwningAbility, bool bTestAlreadyReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease");

	UAbilityTask_WaitInputRelease_WaitInputRelease_Params params;
	params.OwningAbility = OwningAbility;
	params.bTestAlreadyReleased = bTestAlreadyReleased;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
// (Final, Native, Public)

void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback");

	UAbilityTask_WaitInputRelease_OnReleaseCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
// (Final, Native, Public)
// Parameters:
// class ACharacter*              Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  PreviousCustomMode             (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(class ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange");

	UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>     NewMode                        (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitMovementModeChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::STATIC_CreateWaitMovementModeChange(class UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange");

	UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params params;
	params.OwningAbility = OwningAbility;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitOverlap* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::STATIC_WaitForOverlap(class UGameplayAbility* OwningAbility)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap");

	UAbilityTask_WaitOverlap_WaitForOverlap_Params params;
	params.OwningAbility = OwningAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComp                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UAbilityTask_WaitOverlap::OnHitCallback(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback");

	UAbilityTask_WaitOverlap_OnHitCallback_Params params;
	params.HitComp = HitComp;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitTargetData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::STATIC_WaitTargetDataUsingActor(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor");

	UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TaskInstanceName               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitTargetData* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::STATIC_WaitTargetData(class UGameplayAbility* OwningAbility, const struct FName& TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData");

	UAbilityTask_WaitTargetData_WaitTargetData_Params params;
	params.OwningAbility = OwningAbility;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
// (Final, Native, Public)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback");

	UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ActivationTag                  (Parm)

void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback");

	UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params params;
	params.Data = Data;
	params.ActivationTag = ActivationTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback");

	UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FGameplayAbilityTargetDataHandle Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback");

	UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (Parm, ZeroConstructor, IsPlainOldData)

void UAbilityTask_WaitTargetData::FinishSpawningActor(class UGameplayAbility* OwningAbility, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor");

	UAbilityTask_WaitTargetData_FinishSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// class AGameplayAbilityTargetActor* SpawnedActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAbilityTask_WaitTargetData::BeginSpawningActor(class UGameplayAbility* OwningAbility, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor");

	UAbilityTask_WaitTargetData_BeginSpawningActor_Params params;
	params.OwningAbility = OwningAbility;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UGameplayAbility*        OwningAbility                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Direction                      (Parm, IsPlainOldData)
// float                          MinimumMagnitude               (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilityTask_WaitVelocityChange* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::STATIC_CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, const struct FVector& Direction, float MinimumMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange");

	UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params params;
	params.OwningAbility = OwningAbility;
	params.Direction = Direction;
	params.MinimumMagnitude = MinimumMagnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldBlockAbilities          (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities");

	UGameplayAbility_SetShouldBlockOtherAbilities_Params params;
	params.bShouldBlockAbilities = bShouldBlockAbilities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCanBeCanceled                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SetCanBeCanceled");

	UGameplayAbility_SetCanBeCanceled_Params params;
	params.bCanBeCanceled = bCanBeCanceled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag            EventTag                       (Parm)
// struct FGameplayEventData      Payload                        (Parm)

void UGameplayAbility::SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SendGameplayEvent");

	UGameplayAbility_SendGameplayEvent_Params params;
	params.EventTag = EventTag;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
// (Final, Native, Public, BlueprintCallable)

void UGameplayAbility::RemoveGrantedByEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect");

	UGameplayAbility_RemoveGrantedByEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MontageStop
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float                          OverrideBlendOutTime           (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageStop");

	UGameplayAbility_MontageStop_Params params;
	params.OverrideBlendOutTime = OverrideBlendOutTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   FromSectionName                (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ToSectionName                  (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName");

	UGameplayAbility_MontageSetNextSectionName_Params params;
	params.FromSectionName = FromSectionName;
	params.ToSectionName = ToSectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   SectionName                    (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::MontageJumpToSection(const struct FName& SectionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageJumpToSection");

	UGameplayAbility_MontageJumpToSection_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   SocketName                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayAbilityTargetingLocationInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent");

	UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGameplayAbilityTargetingLocationInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor");

	UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Level                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpecHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec");

	UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm)
// struct FGameplayEventData      Payload                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent");

	UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (Parm)

void UGameplayAbility::K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue");

	UGameplayAbility_K2_RemoveGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::K2_OnEndAbility(bool bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_OnEndAbility");

	UGameplayAbility_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
// (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayCueParameters  GameplayCueParameters          (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams");

	UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayEffectContextHandle Context                        (Parm)

void UGameplayAbility::K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue");

	UGameplayAbility_K2_ExecuteGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_EndAbility
// (Native, Protected, BlueprintCallable)

void UGameplayAbility::K2_EndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_EndAbility");

	UGameplayAbility_K2_EndAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
// (Event, Public, BlueprintEvent)

void UGameplayAbility::K2_CommitExecute()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitExecute");

	UGameplayAbility_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           BroadcastCommitEvent           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost");

	UGameplayAbility_K2_CommitAbilityCost_Params params;
	params.BroadcastCommitEvent = BroadcastCommitEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           BroadcastCommitEvent           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ForceCooldown                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown");

	UGameplayAbility_K2_CommitAbilityCooldown_Params params;
	params.BroadcastCommitEvent = BroadcastCommitEvent;
	params.ForceCooldown = ForceCooldown;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CommitAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbility");

	UGameplayAbility_K2_CommitAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CheckAbilityCost()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost");

	UGameplayAbility_K2_CheckAbilityCost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CheckAbilityCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown");

	UGameplayAbility_K2_CheckAbilityCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_CancelAbility
// (Final, Native, Public, BlueprintCallable)

void UGameplayAbility::K2_CancelAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CancelAbility");

	UGameplayAbility_K2_CancelAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ActorInfo                      (Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayAbility::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility");

	UGameplayAbility_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle EffectSpecHandle               (ConstParm, Parm)
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget");

	UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params params;
	params.EffectSpecHandle = EffectSpecHandle;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayEffectSpecHandle EffectSpecHandle               (ConstParm, Parm)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner");

	UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params params;
	params.EffectSpecHandle = EffectSpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
// (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayCueParameters  GameplayCueParameter           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::K2_AddGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams");

	UGameplayAbility_K2_AddGameplayCueWithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameter = GameplayCueParameter;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
// (Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag            GameplayCueTag                 (Parm)
// struct FGameplayEffectContextHandle Context                        (Parm)
// bool                           bRemoveOnAbilityEnd            (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue");

	UGameplayAbility_K2_AddGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayAbility::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent");

	UGameplayAbility_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGameplayAbility::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ActivateAbility");

	UGameplayAbility_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
// (Final, Native, Public, BlueprintCallable, Const)

void UGameplayAbility::InvalidateClientPredictionKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey");

	UGameplayAbility_InvalidateClientPredictionKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo");

	UGameplayAbility_GetOwningComponentFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayAbility::GetOwningActorFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo");

	UGameplayAbility_GetOwningActorFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayEffectContextHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectContextHandle UGameplayAbility::GetGrantedByEffectContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext");

	UGameplayAbility_GetGrantedByEffectContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UGameplayAbility::GetCurrentSourceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject");

	UGameplayAbility_GetCurrentSourceObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UGameplayAbility::GetCurrentMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCurrentMontage");

	UGameplayAbility_GetCurrentMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayAbility::GetCooldownTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining");

	UGameplayAbility_GetCooldownTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandle OptionalTargetData             (Parm)
// struct FGameplayEffectContextHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetContextFromOwner");

	UGameplayAbility_GetContextFromOwner_Params params;
	params.OptionalTargetData = OptionalTargetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UGameplayAbility::GetAvatarActorFromActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo");

	UGameplayAbility_GetAvatarActorFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetActorInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayAbilityActorInfo ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetActorInfo");

	UGameplayAbility_GetActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameplayAbility::GetAbilityLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAbilityLevel");

	UGameplayAbility_GetAbilityLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::EndTaskByInstanceName(const struct FName& InstanceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName");

	UGameplayAbility_EndTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.EndAbilityState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   OptionalStateNameToEnd         (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::EndAbilityState(const struct FName& OptionalStateNameToEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.EndAbilityState");

	UGameplayAbility_EndAbilityState_Params params;
	params.OptionalStateNameToEnd = OptionalStateNameToEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEndTask                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName");

	UGameplayAbility_ConfirmTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;
	params.bEndTask = bEndTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   InstanceName                   (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::CancelTaskByInstanceName(const struct FName& InstanceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName");

	UGameplayAbility_CancelTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FActiveGameplayEffectHandle Handle                         (Parm)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithHandle(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle");

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Params params;
	params.Handle = Handle;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   WithGrantedTags                (Parm)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags");

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params params;
	params.WithGrantedTags = WithGrantedTags;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer   WithAssetTags                  (Parm)
// int                            StacksToRemove                 (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags");

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params params;
	params.WithAssetTags = WithAssetTags;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (Parm)
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// int                            GameplayEffectLevel            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Stacks                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FActiveGameplayEffectHandle> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget");

	UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params params;
	params.TargetData = TargetData;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;
	params.Stacks = Stacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UClass*                  GameplayEffectClass            (Parm, ZeroConstructor, IsPlainOldData)
// int                            GameplayEffectLevel            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Stacks                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FActiveGameplayEffectHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel, int Stacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner");

	UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;
	params.Stacks = Stacks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
// (Native, Public)

void AGameplayAbilityTargetActor::ConfirmTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting");

	AGameplayAbilityTargetActor_ConfirmTargeting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
// (Native, Public)

void AGameplayAbilityTargetActor::CancelTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting");

	AGameplayAbilityTargetActor_CancelTargeting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Value                          (Parm, IsPlainOldData)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector");

	AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(const struct FName& ParamName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat");

	AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged");

	AGameplayAbilityWorldReticle_OnValidTargetChanged_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bNewValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor");

	AGameplayAbilityWorldReticle_OnTargetingAnActor_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
// (Event, Public, BlueprintEvent)

void AGameplayAbilityWorldReticle::OnParametersInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized");

	AGameplayAbilityWorldReticle_OnParametersInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bFaceIn2D                      (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource");

	AGameplayAbilityWorldReticle_FaceTowardSource_Params params;
	params.bFaceIn2D = bFaceIn2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
// (BlueprintCosmetic, Native, Public, BlueprintCallable)

void UGameplayCueInterface::ForwardGameplayCueToParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent");

	UGameplayCueInterface_ForwardGameplayCueToParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (Parm)

void UGameplayCueInterface::BlueprintCustomHandler(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler");

	UGameplayCueInterface_BlueprintCustomHandler_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive");

	AGameplayCueNotify_Actor_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove");

	AGameplayCueNotify_Actor_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
// (Native, Public)
// Parameters:
// class AActor*                  DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void AGameplayCueNotify_Actor::OnOwnerDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed");

	AGameplayCueNotify_Actor_OnOwnerDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute");

	AGameplayCueNotify_Actor_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGameplayCueNotify_Actor::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnActive");

	AGameplayCueNotify_Actor_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void AGameplayCueNotify_Actor::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue");

	AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
// (Native, Public, BlueprintCallable)

void AGameplayCueNotify_Actor::K2_EndGameplayCue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue");

	AGameplayCueNotify_Actor_K2_EndGameplayCue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.WhileActive");

	UGameplayCueNotify_Static_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnRemove");

	UGameplayCueNotify_Static_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnExecute");

	UGameplayCueNotify_Static_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayCueNotify_Static::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnActive");

	UGameplayCueNotify_Static_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class AActor*                  MyTarget                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent> EventType                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (ConstParm, Parm, OutParm, ReferenceParm)

void UGameplayCueNotify_Static::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue");

	UGameplayCueNotify_Static_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// class UGameplayEffect*         GameplayEffect                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// class UAbilitySystemComponent* ASC                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameplayEffectCustomApplicationRequirement::CanApplyGameplayEffect(class UGameplayEffect* GameplayEffect, const struct FGameplayEffectSpec& Spec, class UAbilitySystemComponent* ASC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect");

	UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Spec = Spec;
	params.ASC = ASC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParameters ExecutionParams                (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectCustomExecutionOutput OutExecutionOutput             (Parm, OutParm)

void UGameplayEffectExecutionCalculation::Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute");

	UGameplayEffectExecutionCalculation_Execute_Params params;
	params.ExecutionParams = ExecutionParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = params.OutExecutionOutput;
}


// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
// (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectSpec     Spec                           (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude");

	UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag            Tag                            (ConstParm, Parm)
// int                            NewCount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAbilitySystemComponent* ASC                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            idx                            (Parm, ZeroConstructor, IsPlainOldData)

void UGameplayTagReponseTable::TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int idx)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent");

	UGameplayTagReponseTable_TagResponseEvent_Params params;
	params.Tag = Tag;
	params.NewCount = NewCount;
	params.ASC = ASC;
	params.idx = idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

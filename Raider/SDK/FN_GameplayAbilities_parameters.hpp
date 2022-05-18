#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
struct UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
struct UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params
{
	struct FGameplayAbilityTargetDataHandle            HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
struct UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
struct UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
struct UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
struct UAbilitySystemBlueprintLibrary_SetStackCount_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	int                                                StackCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
struct UAbilitySystemBlueprintLibrary_SetDuration_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
struct UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                EventTag;                                                 // (Parm)
	struct FGameplayEventData                          Payload;                                                  // (Parm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.NotEqual_GameplayAttributeGameplayAttribute
struct UAbilitySystemBlueprintLibrary_NotEqual_GameplayAttributeGameplayAttribute_Params
{
	struct FGameplayAttribute                          AttributeA;                                               // (Parm)
	struct FGameplayAttribute                          AttributeB;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
struct UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params
{
	class UGameplayEffect*                             InGameplayEffect;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InInstigator;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InEffectCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLevel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
struct UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params
{
	struct FGameplayTargetDataFilter                   Filter;                                                   // (Parm)
	class AActor*                                      FilterActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsValid
struct UAbilitySystemBlueprintLibrary_IsValid_Params
{
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
struct UAbilitySystemBlueprintLibrary_HasHitResult_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
struct UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
struct UAbilitySystemBlueprintLibrary_GetOrigin_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetModifiedAttributeMagnitude
struct UAbilitySystemBlueprintLibrary_GetModifiedAttributeMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
struct UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
struct UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
struct UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
struct UAbilitySystemBlueprintLibrary_GetHitResult_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
struct UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
struct UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	struct FVector                                     Direction;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeFromAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeFromAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	bool                                               bSuccessfullyFoundAttribute;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBaseFromAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBaseFromAbilitySystemComponent_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	bool                                               bSuccessfullyFoundAttribute;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttributeBase
struct UAbilitySystemBlueprintLibrary_GetFloatAttributeBase_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	bool                                               bSuccessfullyFoundAttribute;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
struct UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params
{
	class AActor*                                      Actor;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	bool                                               bSuccessfullyFoundAttribute;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetEffectContext
struct UAbilitySystemBlueprintLibrary_GetEffectContext_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
struct UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAllLinkedGameplayEffectSpecHandles
struct UAbilitySystemBlueprintLibrary_GetAllLinkedGameplayEffectSpecHandles_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	TArray<struct FGameplayEffectSpecHandle>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
struct UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
struct UAbilitySystemBlueprintLibrary_GetActorCount_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
struct UAbilitySystemBlueprintLibrary_GetActorByIndex_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectTotalDuration
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectTotalDuration_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStartTime
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStartTime_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackLimitCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackLimitCount_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectRemainingDuration
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectRemainingDuration_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectExpectedEndTime
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectExpectedEndTime_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectDebugString
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectDebugString_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
struct UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params
{
	TScriptInterface<class UGameplayCueInterface>      TargetCueInterface;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
struct UAbilitySystemBlueprintLibrary_FilterTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetDataHandle;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTargetDataFilterHandle             ActorFilterClass;                                         // (Parm)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTagsAndBase
struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTagsAndBase_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	struct FGameplayTagContainer                       SourceTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       TargetTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              BaseValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EvaluateAttributeValueWithTags
struct UAbilitySystemBlueprintLibrary_EvaluateAttributeValueWithTags_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	struct FGameplayTagContainer                       SourceTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       TargetTags;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EqualEqual_GameplayAttributeGameplayAttribute
struct UAbilitySystemBlueprintLibrary_EqualEqual_GameplayAttributeGameplayAttribute_Params
{
	struct FGameplayAttribute                          AttributeA;                                               // (Parm)
	struct FGameplayAttribute                          AttributeB;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextSetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextSetOrigin_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	struct FVector                                     Origin;                                                   // (Parm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsValid
struct UAbilitySystemBlueprintLibrary_EffectContextIsValid_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
struct UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
struct UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextAddHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextAddHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData)
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
struct UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
struct UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params
{
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
	struct FGameplayTagRequirements                    SourceTagReqs;                                            // (Parm, OutParm, ReferenceParm)
	struct FGameplayTagRequirements                    TargetTagReqs;                                            // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.CloneSpecHandle
struct UAbilitySystemBlueprintLibrary_CloneSpecHandle_Params
{
	class AActor*                                      InNewInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      InEffectCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpecHandle                   GameplayEffectSpecHandle_Clone;                           // (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignTagSetByCallerMagnitude
struct UAbilitySystemBlueprintLibrary_AssignTagSetByCallerMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	struct FGameplayTag                                DataTag;                                                  // (Parm)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
struct UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	struct FName                                       DataName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
struct UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetHandle;                                             // (Parm)
	struct FGameplayAbilityTargetDataHandle            HandleToAdd;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	struct FGameplayEffectSpecHandle                   LinkedGameplayEffectSpec;                                 // (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffect
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffect_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	class UClass*                                      LinkedGameplayEffect;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
struct UAbilitySystemBlueprintLibrary_AddGrantedTags_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	struct FGameplayTagContainer                       NewGameplayTags;                                          // (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
struct UAbilitySystemBlueprintLibrary_AddGrantedTag_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	struct FGameplayTag                                NewGameplayTag;                                           // (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
struct UAbilitySystemBlueprintLibrary_AddAssetTags_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	struct FGameplayTagContainer                       NewGameplayTags;                                          // (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
struct UAbilitySystemBlueprintLibrary_AddAssetTag_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm)
	struct FGameplayTag                                NewGameplayTag;                                           // (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params
{
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params
{
	TArray<class AActor*>                              ActorArray;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               OneTargetPerHandle;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
struct UAbilitySystemComponent_TryActivateAbilityByClass_Params
{
	class UClass*                                      InAbilityToActivate;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRemoteActivation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
struct UAbilitySystemComponent_TryActivateAbilitiesByTag_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bAllowRemoteActivation;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
struct UAbilitySystemComponent_TargetConfirm_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
struct UAbilitySystemComponent_TargetCancel_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
struct UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params
{
	bool                                               NewInhibit;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
struct UAbilitySystemComponent_SetActiveGameplayEffectLevelUsingQuery_Params
{
	struct FGameplayEffectQuery                        Query;                                                    // (Parm)
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
struct UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
	int                                                NewLevel;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
struct UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm)
	bool                                               InputPressed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
	struct FGameplayEventData                          TriggerEventData;                                         // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
struct UAbilitySystemComponent_ServerTryActivateAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm)
	bool                                               InputPressed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
struct UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (Parm)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
struct UAbilitySystemComponent_ServerSetReplicatedTargetData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (Parm)
	struct FGameplayAbilityTargetDataHandle            ReplicatedTargetDataHandle;                               // (ConstParm, Parm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (Parm)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
struct UAbilitySystemComponent_ServerSetReplicatedEventWithPayload_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (Parm)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (Parm)
	struct FVector_NetQuantize100                      VectorPayload;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
struct UAbilitySystemComponent_ServerSetReplicatedEvent_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (Parm)
	struct FPredictionKey                              CurrentPredictionKey;                                     // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
struct UAbilitySystemComponent_ServerSetInputReleased_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
struct UAbilitySystemComponent_ServerSetInputPressed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
struct UAbilitySystemComponent_ServerPrintDebug_RequestWithStrings_Params
{
	TArray<struct FString>                             Strings;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
struct UAbilitySystemComponent_ServerPrintDebug_Request_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
struct UAbilitySystemComponent_ServerEndAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToEnd;                                             // (Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
struct UAbilitySystemComponent_ServerCurrentMontageSetPlayRate_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPlayRate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
struct UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ClientPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       NextSectionName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
struct UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
struct UAbilitySystemComponent_ServerCancelAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToCancel;                                          // (Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
struct UAbilitySystemComponent_ServerAbilityRPCBatch_Params
{
	struct FGameplayAbilities_FServerAbilityRPCBatch   BatchInfo;                                                // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params
{
	class UClass*                                      GameplayEffect;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     InstigatorAbilitySystemComponent;                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffect_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithSourceTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithGrantedTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithAppliedTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                     // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
struct UAbilitySystemComponent_OnRep_ServerDebugString_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
struct UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
struct UAbilitySystemComponent_OnRep_OwningActor_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
struct UAbilitySystemComponent_OnRep_ClientDebugString_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
struct UAbilitySystemComponent_OnRep_ActivateAbilities_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_WithParams_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          // (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesExecuted_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          // (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams_Params
{
	struct FGameplayTagContainer                       GameplayCueTags;                                          // (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params
{
	struct FGameplayEffectSpecForRPC                   Spec;                                                     // (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params
{
	struct FGameplayEffectSpecForRPC                   Spec;                                                     // (ConstParm, Parm, ReferenceParm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
struct UAbilitySystemComponent_MakeOutgoingSpec_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.MakeEffectContext
struct UAbilitySystemComponent_MakeEffectContext_Params
{
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
struct UAbilitySystemComponent_K2_InitStats_Params
{
	class UClass*                                      Attributes;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DataTable;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
struct UAbilitySystemComponent_IsGameplayCueActive_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (ConstParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
struct UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
struct UAbilitySystemComponent_GetGameplayEffectMagnitude_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
struct UAbilitySystemComponent_GetGameplayEffectCount_Params
{
	class UClass*                                      SourceGameplayEffect;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     OptionalInstigatorFilterComponent;                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnforceOnGoingCheck;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.GetActiveEffects
struct UAbilitySystemComponent_GetActiveEffects_Params
{
	struct FGameplayEffectQuery                        Query;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
struct UAbilitySystemComponent_ClientTryActivateAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
struct UAbilitySystemComponent_ClientSetReplicatedEvent_Params
{
	TEnumAsByte<EAbilityGenericReplicatedEvent>        EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // (Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                             // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
struct UAbilitySystemComponent_ClientPrintDebug_Response_Params
{
	TArray<struct FString>                             Strings;                                                  // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	int                                                GameFlags;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
struct UAbilitySystemComponent_ClientEndAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToEnd;                                             // (Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
struct UAbilitySystemComponent_ClientCancelAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToCancel;                                          // (Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
struct UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
	struct FGameplayEventData                          TriggerEventData;                                         // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
struct UAbilitySystemComponent_ClientActivateAbilitySucceed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm)
	struct FPredictionKey                              PredictionKey;                                            // (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
struct UAbilitySystemComponent_ClientActivateAbilityFailed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                        // (Parm)
	int16_t                                            PredictionKey;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (Parm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, OutParm, ReferenceParm)
	class UAbilitySystemComponent*                     Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                               // (Parm, OutParm, ReferenceParm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
struct UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params
{
};

// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
struct UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params
{
	int                                                InputID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params
{
};

// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params
{
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
struct UAbilityTask_ApplyRootMotionConstantForce_ApplyRootMotionConstantForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldDirection;                                           // (Parm, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, IsPlainOldData)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_ApplyRootMotionConstantForce*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
struct UAbilityTask_ApplyRootMotionJumpForce_OnLandedCallback_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
struct UAbilityTask_ApplyRootMotionJumpForce_Finish_Params
{
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
struct UAbilityTask_ApplyRootMotionJumpForce_ApplyRootMotionJumpForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumLandedTriggerTime;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFinishOnLanded;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, IsPlainOldData)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PathOffsetCurve;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_ApplyRootMotionJumpForce*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnTargetActorSwapped_Params
{
	class AActor*                                      OriginalTarget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
struct UAbilityTask_ApplyRootMotionMoveToActorForce_OnRep_TargetLocation_Params
{
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToTargetDataActorForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            TargetDataHandle;                                         // (Parm)
	int                                                TargetDataIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TargetActorIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocationOffset;                                     // (Parm, IsPlainOldData)
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedHorizontal;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedVertical;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PathOffsetCurve;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, IsPlainOldData)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableDestinationReachedInterrupt;                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
struct UAbilityTask_ApplyRootMotionMoveToActorForce_ApplyRootMotionMoveToActorForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocationOffset;                                     // (Parm, IsPlainOldData)
	ERootMotionMoveToActorTargetOffsetType             OffsetAlignment;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedHorizontal;                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TargetLerpSpeedVertical;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PathOffsetCurve;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TimeMappingCurve;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, IsPlainOldData)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableDestinationReachedInterrupt;                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_ApplyRootMotionMoveToActorForce* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
struct UAbilityTask_ApplyRootMotionMoveToForce_ApplyRootMotionMoveToForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetNewMovementMode;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestrictSpeedToExpected;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                PathOffsetCurve;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, IsPlainOldData)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_ApplyRootMotionMoveToForce*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
struct UAbilityTask_ApplyRootMotionRadialForce_ApplyRootMotionRadialForce_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	class AActor*                                      LocationActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Strength;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPush;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdditive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bNoZForce;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StrengthDistanceFalloff;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StrengthOverTime;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFixedWorldDirection;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FixedWorldDirection;                                      // (Parm, IsPlainOldData)
	ERootMotionFinishVelocityMode                      VelocityOnFinishMode;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SetVelocityOnFinish;                                      // (Parm, IsPlainOldData)
	float                                              ClampVelocityOnFinish;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_ApplyRootMotionRadialForce*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
struct UAbilityTask_MoveToLocation_MoveToLocation_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 OptionalInterpolationCurve;                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                OptionalVectorInterpolationCurve;                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_MoveToLocation*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
struct UAbilityTask_NetworkSyncPoint_WaitNetSync_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	EAbilityTaskNetSyncType                            SyncType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_NetworkSyncPoint*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
struct UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
struct UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params
{
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
struct UAbilityTask_PlayMontageAndWait_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
struct UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
struct UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MontageToPlay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStopWhenAbilityEnds;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimRootMotionTranslationScale;                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_PlayMontageAndWait*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
struct UAbilityTask_Repeat_RepeatAction_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeBetweenActions;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalActionCount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_Repeat*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
struct UAbilityTask_SpawnActor_SpawnActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_SpawnActor*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
struct UAbilityTask_SpawnActor_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm)
	class AActor*                                      SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
struct UAbilityTask_SpawnActor_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
struct UAbilityTask_StartAbilityState_StartAbilityState_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StateName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEndCurrentState;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_StartAbilityState*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
struct UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameplayAbilityTargetActor*                 TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_VisualizeTargeting*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
struct UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_VisualizeTargeting*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
struct UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
struct UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivateWithTagRequirements_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagRequirements                    TagRequirements;                                          // (Parm)
	bool                                               IncludeTriggeredAbilities;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           Query;                                                    // (Parm)
	bool                                               IncludeTriggeredAbilities;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                WithTag;                                                  // (Parm)
	struct FGameplayTag                                WithoutTag;                                               // (Parm)
	bool                                               IncludeTriggeredAbilities;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
struct UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           Query;                                                    // (Parm)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitAbilityCommit*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                WithTag;                                                  // (Parm)
	struct FGameplayTag                                WithoutTage;                                              // (Parm)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitAbilityCommit*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
struct UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          InAttribute;                                              // (Parm)
	struct FGameplayTag                                InWithTag;                                                // (Parm)
	struct FGameplayTag                                InWithoutTag;                                             // (Parm)
	TEnumAsByte<EWaitAttributeChangeComparison>        InComparisonType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InComparisonValue;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitAttributeChange*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	struct FGameplayTag                                WithSrcTag;                                               // (Parm)
	struct FGameplayTag                                WithoutSrcTag;                                            // (Parm)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitAttributeChange*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
struct UAbilityTask_WaitAttributeChangeRatioThreshold_WaitForAttributeChangeRatioThreshold_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          AttributeNumerator;                                       // (Parm)
	struct FGameplayAttribute                          AttributeDenominator;                                     // (Parm)
	TEnumAsByte<EWaitAttributeChangeComparison>        ComparisonType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ComparisonValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerOnce;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitAttributeChangeRatioThreshold* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
struct UAbilityTask_WaitAttributeChangeThreshold_WaitForAttributeChangeThreshold_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAttribute                          Attribute;                                                // (Parm)
	TEnumAsByte<EWaitAttributeChangeComparison>        ComparisonType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ComparisonValue;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggerOnce;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitAttributeChangeThreshold*   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
struct UAbilityTask_WaitCancel_WaitCancel_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitCancel*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
struct UAbilityTask_WaitCancel_OnLocalCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
struct UAbilityTask_WaitCancel_OnCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
struct UAbilityTask_WaitConfirm_WaitConfirm_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitConfirm*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
struct UAbilityTask_WaitConfirm_OnConfirmCallback_Params
{
	class UGameplayAbility*                            InAbility;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
struct UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitConfirmCancel*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
struct UAbilityTask_WaitDelay_WaitDelay_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitDelay*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
struct UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params
{
	class UAbilitySystemComponent*                     Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayEffectSpec                         SpecApplied;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                             // (Parm)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             SourceFilter;                                             // (ConstParm, Parm)
	struct FGameplayTagQuery                           SourceTagQuery;                                           // (Parm)
	struct FGameplayTagQuery                           TargetTagQuery;                                           // (Parm)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ListenForPeriodicEffect;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             SourceFilter;                                             // (ConstParm, Parm)
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    // (Parm)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    // (Parm)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ListenForPeriodicEffect;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Query_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             SourceFilter;                                             // (ConstParm, Parm)
	struct FGameplayTagQuery                           SourceTagQuery;                                           // (Parm)
	struct FGameplayTagQuery                           TargetTagQuery;                                           // (Parm)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ListenForPeriodicEffect;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTargetDataFilterHandle             TargetFilter;                                             // (ConstParm, Parm)
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    // (Parm)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    // (Parm)
	bool                                               TriggerOnce;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OptionalExternalOwner;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ListenForPeriodicEffects;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
struct UAbilityTask_WaitGameplayEffectBlockedImmunity_WaitGameplayEffectBlockedByImmunity_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagRequirements                    SourceTagRequirements;                                    // (Parm)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                    // (Parm)
	class AActor*                                      OptionalExternalTarget;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayEffectBlockedImmunity* ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm)
	class UAbilityTask_WaitGameplayEffectRemoved*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params
{
	struct FGameplayEffectRemovalInfo                  InGameplayEffectRemovalInfo;                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
struct UAbilityTask_WaitGameplayEffectStackChange_WaitForGameplayEffectStackChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm)
	class UAbilityTask_WaitGameplayEffectStackChange*  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
struct UAbilityTask_WaitGameplayEffectStackChange_OnGameplayEffectStackChange_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm)
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
struct UAbilityTask_WaitGameplayEvent_WaitGameplayEvent_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                EventTag;                                                 // (Parm)
	class AActor*                                      OptionalExternalTarget;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayEvent*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
struct UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm)
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
struct UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
	class AActor*                                      InOptionalExternalTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayTagAdded*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
struct UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                Tag;                                                      // (Parm)
	class AActor*                                      InOptionalExternalTarget;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTriggerOnce;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitGameplayTagRemoved*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
struct UAbilityTask_WaitInputPress_WaitInputPress_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestAlreadyPressed;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitInputPress*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
struct UAbilityTask_WaitInputPress_OnPressCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
struct UAbilityTask_WaitInputRelease_WaitInputRelease_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bTestAlreadyReleased;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitInputRelease*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
struct UAbilityTask_WaitInputRelease_OnReleaseCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
struct UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params
{
	class ACharacter*                                  Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
struct UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitMovementModeChange*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
struct UAbilityTask_WaitOverlap_WaitForOverlap_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitOverlap*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
struct UAbilityTask_WaitOverlap_OnHitCallback_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
struct UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayTargetingConfirmation>        ConfirmationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameplayAbilityTargetActor*                 TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitTargetData*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
struct UAbilityTask_WaitTargetData_WaitTargetData_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TaskInstanceName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayTargetingConfirmation>        ConfirmationType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitTargetData*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ActivationTag;                                            // (Parm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
struct UAbilityTask_WaitTargetData_FinishSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
struct UAbilityTask_WaitTargetData_BeginSpawningActor_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
struct UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params
{
	class UGameplayAbility*                            OwningAbility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	float                                              MinimumMagnitude;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilityTask_WaitVelocityChange*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
struct UGameplayAbility_SetShouldBlockOtherAbilities_Params
{
	bool                                               bShouldBlockAbilities;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
struct UGameplayAbility_SetCanBeCanceled_Params
{
	bool                                               bCanBeCanceled;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
struct UGameplayAbility_SendGameplayEvent_Params
{
	struct FGameplayTag                                EventTag;                                                 // (Parm)
	struct FGameplayEventData                          Payload;                                                  // (Parm)
};

// Function GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
struct UGameplayAbility_RemoveGrantedByEffect_Params
{
};

// Function GameplayAbilities.GameplayAbility.MontageStop
struct UGameplayAbility_MontageStop_Params
{
	float                                              OverrideBlendOutTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
struct UGameplayAbility_MontageSetNextSectionName_Params
{
	struct FName                                       FromSectionName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ToSectionName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
struct UGameplayAbility_MontageJumpToSection_Params
{
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params
{
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilityTargetingLocationInfo       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params
{
	struct FGameplayAbilityTargetingLocationInfo       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
struct UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Level;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
struct UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (Parm)
	struct FGameplayEventData                          Payload;                                                  // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
struct UGameplayAbility_K2_RemoveGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
};

// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
struct UGameplayAbility_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
struct UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
struct UGameplayAbility_K2_ExecuteGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
};

// Function GameplayAbilities.GameplayAbility.K2_EndAbility
struct UGameplayAbility_K2_EndAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
struct UGameplayAbility_K2_CommitExecute_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
struct UGameplayAbility_K2_CommitAbilityCost_Params
{
	bool                                               BroadcastCommitEvent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
struct UGameplayAbility_K2_CommitAbilityCooldown_Params
{
	bool                                               BroadcastCommitEvent;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ForceCooldown;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
struct UGameplayAbility_K2_CommitAbility_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
struct UGameplayAbility_K2_CheckAbilityCost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
struct UGameplayAbility_K2_CheckAbilityCooldown_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_CancelAbility
struct UGameplayAbility_K2_CancelAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
struct UGameplayAbility_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params
{
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                         // (ConstParm, Parm)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params
{
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                         // (ConstParm, Parm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
struct UGameplayAbility_K2_AddGameplayCueWithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
	struct FGameplayCueParameters                      GameplayCueParameter;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
struct UGameplayAbility_K2_AddGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (Parm)
	struct FGameplayEffectContextHandle                Context;                                                  // (Parm)
	bool                                               bRemoveOnAbilityEnd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
struct UGameplayAbility_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
struct UGameplayAbility_K2_ActivateAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
struct UGameplayAbility_InvalidateClientPredictionKey_Params
{
};

// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
struct UGameplayAbility_GetOwningComponentFromActorInfo_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
struct UGameplayAbility_GetOwningActorFromActorInfo_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
struct UGameplayAbility_GetGrantedByEffectContext_Params
{
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
struct UGameplayAbility_GetCurrentSourceObject_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
struct UGameplayAbility_GetCurrentMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
struct UGameplayAbility_GetCooldownTimeRemaining_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
struct UGameplayAbility_GetContextFromOwner_Params
{
	struct FGameplayAbilityTargetDataHandle            OptionalTargetData;                                       // (Parm)
	struct FGameplayEffectContextHandle                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
struct UGameplayAbility_GetAvatarActorFromActorInfo_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.GetActorInfo
struct UGameplayAbility_GetActorInfo_Params
{
	struct FGameplayAbilityActorInfo                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
struct UGameplayAbility_GetAbilityLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
struct UGameplayAbility_EndTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.EndAbilityState
struct UGameplayAbility_EndAbilityState_Params
{
	struct FName                                       OptionalStateNameToEnd;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
struct UGameplayAbility_ConfirmTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEndTask;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
struct UGameplayAbility_CancelTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithHandle_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                   // (Parm)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params
{
	struct FGameplayTagContainer                       WithGrantedTags;                                          // (Parm)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params
{
	struct FGameplayTagContainer                       WithAssetTags;                                            // (Parm)
	int                                                StacksToRemove;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
struct UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (Parm)
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameplayEffectLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Stacks;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
struct UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params
{
	class UClass*                                      GameplayEffectClass;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameplayEffectLevel;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Stacks;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
struct AGameplayAbilityTargetActor_ConfirmTargeting_Params
{
};

// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
struct AGameplayAbilityTargetActor_CancelTargeting_Params
{
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Value;                                                    // (Parm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params
{
	struct FName                                       ParamName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
struct AGameplayAbilityWorldReticle_OnValidTargetChanged_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
struct AGameplayAbilityWorldReticle_OnTargetingAnActor_Params
{
	bool                                               bNewValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
struct AGameplayAbilityWorldReticle_OnParametersInitialized_Params
{
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
struct AGameplayAbilityWorldReticle_FaceTowardSource_Params
{
	bool                                               bFaceIn2D;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
struct UGameplayCueInterface_ForwardGameplayCueToParent_Params
{
};

// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
struct UGameplayCueInterface_BlueprintCustomHandler_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (Parm)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
struct AGameplayCueNotify_Actor_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
struct AGameplayCueNotify_Actor_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
struct AGameplayCueNotify_Actor_OnOwnerDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
struct AGameplayCueNotify_Actor_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
struct AGameplayCueNotify_Actor_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
struct AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
struct AGameplayCueNotify_Actor_K2_EndGameplayCue_Params
{
};

// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
struct UGameplayCueNotify_Static_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
struct UGameplayCueNotify_Static_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
struct UGameplayCueNotify_Static_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
struct UGameplayCueNotify_Static_OnActive_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
struct UGameplayCueNotify_Static_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.GameplayEffectCustomApplicationRequirement.CanApplyGameplayEffect
struct UGameplayEffectCustomApplicationRequirement_CanApplyGameplayEffect_Params
{
	class UGameplayEffect*                             GameplayEffect;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	class UAbilitySystemComponent*                     ASC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
struct UGameplayEffectExecutionCalculation_Execute_Params
{
	struct FGameplayEffectCustomExecutionParameters    ExecutionParams;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectCustomExecutionOutput        OutExecutionOutput;                                       // (Parm, OutParm)
};

// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
struct UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params
{
	struct FGameplayEffectSpec                         Spec;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
struct UGameplayTagReponseTable_TagResponseEvent_Params
{
	struct FGameplayTag                                Tag;                                                      // (ConstParm, Parm)
	int                                                NewCount;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAbilitySystemComponent*                     ASC;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	CancelAbilityImmediately       = 0,
	RemoveAbilityOnEnd             = 1,
	DoNothing                      = 2,
	EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class EGameplayEffectAttributeCaptureSource : uint8_t
{
	Source                         = 0,
	Target                         = 1,
	EGameplayEffectAttributeCaptureSource_MAX = 2
};


// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class EGameplayAbilityActivationMode : uint8_t
{
	Authority                      = 0,
	NonAuthority                   = 1,
	Predicting                     = 2,
	Confirmed                      = 3,
	Rejected                       = 4,
	EGameplayAbilityActivationMode_MAX = 5
};


// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class EAbilityGenericReplicatedEvent : uint8_t
{
	GenericConfirm                 = 0,
	GenericCancel                  = 1,
	InputPressed                   = 2,
	InputReleased                  = 3,
	GenericSignalFromClient        = 4,
	GenericSignalFromServer        = 5,
	GameCustom1                    = 6,
	GameCustom2                    = 7,
	GameCustom3                    = 8,
	GameCustom4                    = 9,
	GameCustom5                    = 10,
	GameCustom6                    = 11,
	MAX                            = 12
};


// Enum GameplayAbilities.EReplicationMode
enum class EReplicationMode : uint8_t
{
	Minimal                        = 0,
	Mixed                          = 1,
	Full                           = 2,
	EReplicationMode_MAX           = 3
};


// Enum GameplayAbilities.EAbilityTaskWaitState
enum class EAbilityTaskWaitState : uint8_t
{
	WaitingOnGame                  = 0,
	WaitingOnUser                  = 1,
	WaitingOnAvatar                = 2,
	EAbilityTaskWaitState_MAX      = 3
};


// Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
enum class ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	AlignFromTargetToSource        = 0,
	AlignToTargetForward           = 1,
	AlignToWorldSpace              = 2,
	ERootMotionMoveToActorTargetOffsetType_MAX = 3
};


// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class EAbilityTaskNetSyncType : uint8_t
{
	BothWait                       = 0,
	OnlyServerWait                 = 1,
	OnlyClientWait                 = 2,
	EAbilityTaskNetSyncType_MAX    = 3
};


// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class EWaitAttributeChangeComparison : uint8_t
{
	None                           = 0,
	GreaterThan                    = 1,
	LessThan                       = 2,
	GreaterThanOrEqualTo           = 3,
	LessThanOrEqualTo              = 4,
	NotEqualTo                     = 5,
	ExactlyEqualTo                 = 6,
	MAX                            = 7
};


// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class EGameplayAbilityInputBinds : uint8_t
{
	Ability1                       = 0,
	Ability2                       = 1,
	Ability3                       = 2,
	Ability4                       = 3,
	Ability5                       = 4,
	Ability6                       = 5,
	Ability7                       = 6,
	Ability8                       = 7,
	Ability9                       = 8,
	EGameplayAbilityInputBinds_MAX = 9
};


// Enum GameplayAbilities.ETargetAbilitySelfSelection
enum class ETargetAbilitySelfSelection : uint8_t
{
	TASS_Permit                    = 0,
	TASS_Forbid                    = 1,
	TASS_Require                   = 2,
	TASS_MAX                       = 3
};


// Enum GameplayAbilities.ETargetDataFilterSelf
enum class ETargetDataFilterSelf : uint8_t
{
	TDFS_Any                       = 0,
	TDFS_NoSelf                    = 1,
	TDFS_NoOthers                  = 2,
	TDFS_MAX                       = 3
};


// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class EGameplayAbilityTargetingLocationType : uint8_t
{
	LiteralTransform               = 0,
	ActorTransform                 = 1,
	SocketTransform                = 2,
	EGameplayAbilityTargetingLocationType_MAX = 3
};


// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class EGameplayTargetingConfirmation : uint8_t
{
	Instant                        = 0,
	UserConfirmed                  = 1,
	Custom                         = 2,
	CustomMulti                    = 3,
	EGameplayTargetingConfirmation_MAX = 4
};


// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class EGameplayAbilityTriggerSource : uint8_t
{
	GameplayEvent                  = 0,
	OwnedTagAdded                  = 1,
	OwnedTagPresent                = 2,
	EGameplayAbilityTriggerSource_MAX = 3
};


// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class EGameplayAbilityReplicationPolicy : uint8_t
{
	ReplicateNo                    = 0,
	ReplicateYes                   = 1,
	EGameplayAbilityReplicationPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class EGameplayAbilityNetExecutionPolicy : uint8_t
{
	LocalPredicted                 = 0,
	LocalOnly                      = 1,
	ServerInitiated                = 2,
	ServerOnly                     = 3,
	EGameplayAbilityNetExecutionPolicy_MAX = 4
};


// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class EGameplayAbilityInstancingPolicy : uint8_t
{
	NonInstanced                   = 0,
	InstancedPerActor              = 1,
	InstancedPerExecution          = 2,
	EGameplayAbilityInstancingPolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayCuePayloadType
enum class EGameplayCuePayloadType : uint8_t
{
	EffectContext                  = 0,
	CueParameters                  = 1,
	FromSpec                       = 2,
	EGameplayCuePayloadType_MAX    = 3
};


// Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
enum class EGameplayEffectStackingExpirationPolicy : uint8_t
{
	ClearEntireStack               = 0,
	RemoveSingleStackAndRefreshDuration = 1,
	RefreshDuration                = 2,
	EGameplayEffectStackingExpirationPolicy_MAX = 3
};


// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class EGameplayEffectStackingPeriodPolicy : uint8_t
{
	ResetOnSuccessfulApplication   = 0,
	NeverReset                     = 1,
	EGameplayEffectStackingPeriodPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class EGameplayEffectStackingDurationPolicy : uint8_t
{
	RefreshOnSuccessfulApplication = 0,
	NeverRefresh                   = 1,
	EGameplayEffectStackingDurationPolicy_MAX = 2
};


// Enum GameplayAbilities.EGameplayEffectDurationType
enum class EGameplayEffectDurationType : uint8_t
{
	Instant                        = 0,
	Infinite                       = 1,
	HasDuration                    = 2,
	EGameplayEffectDurationType_MAX = 3
};


// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class EAttributeBasedFloatCalculationType : uint8_t
{
	AttributeMagnitude             = 0,
	AttributeBaseValue             = 1,
	AttributeBonusMagnitude        = 2,
	AttributeMagnitudeEvaluatedUpToChannel = 3,
	EAttributeBasedFloatCalculationType_MAX = 4
};


// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class EGameplayEffectMagnitudeCalculation : uint8_t
{
	ScalableFloat                  = 0,
	AttributeBased                 = 1,
	CustomCalculationClass         = 2,
	SetByCaller                    = 3,
	EGameplayEffectMagnitudeCalculation_MAX = 4
};


// Enum GameplayAbilities.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{
	NewOrRemoved                   = 0,
	AnyCountChange                 = 1,
	EGameplayTagEventType_MAX      = 2
};


// Enum GameplayAbilities.EGameplayCueEvent
enum class EGameplayCueEvent : uint8_t
{
	OnActive                       = 0,
	WhileActive                    = 1,
	Executed                       = 2,
	Removed                        = 3,
	EGameplayCueEvent_MAX          = 4
};


// Enum GameplayAbilities.EGameplayEffectStackingType
enum class EGameplayEffectStackingType : uint8_t
{
	None                           = 0,
	AggregateBySource              = 1,
	AggregateByTarget              = 2,
	EGameplayEffectStackingType_MAX = 3
};


// Enum GameplayAbilities.EGameplayModOp
enum class EGameplayModOp : uint8_t
{
	Additive                       = 0,
	Multiplicitive                 = 1,
	Division                       = 2,
	Override                       = 3,
	Max                            = 4
};


// Enum GameplayAbilities.EGameplayModEvaluationChannel
enum class EGameplayModEvaluationChannel : uint8_t
{
	Channel0                       = 0,
	Channel1                       = 1,
	Channel2                       = 2,
	Channel3                       = 3,
	Channel4                       = 4,
	Channel5                       = 5,
	Channel6                       = 6,
	Channel7                       = 7,
	Channel8                       = 8,
	Channel9                       = 9,
	Channel_MAX                    = 10,
	EGameplayModEvaluationChannel_MAX = 11
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0020
struct FGameplayAbilityTargetDataHandle
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0018
struct FGameplayEffectSpecHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0018
struct FGameplayEffectContextHandle
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x00A8
struct FGameplayEventData
{
	struct FGameplayTag                                EventTag;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible)
	class AActor*                                      Instigator;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OptionalObject2;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                ContextHandle;                                            // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       InstigatorTags;                                           // 0x0040(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       TargetTags;                                               // 0x0060(0x0020) (Edit, BlueprintVisible)
	float                                              EventMagnitude;                                           // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0088(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0020
struct FGameplayAttribute
{
	struct FString                                     AttributeName;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	class UProperty*                                   Attribute;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStruct*                                     AttributeOwner;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0028
struct FGameplayTargetDataFilter
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      SelfActor;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETargetDataFilterSelf>                 SelfFilter;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UClass*                                      RequiredActorClass;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseFilter;                                           // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0010
struct FGameplayTargetDataFilterHandle
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x00B8
struct FGameplayCueParameters
{
	float                                              NormalizedMagnitude;                                      // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RawMagnitude;                                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0008(0x0018) (BlueprintVisible)
	struct FGameplayTag                                MatchedTagName;                                           // 0x0020(0x0008) (BlueprintVisible, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGameplayTag                                OriginalTag;                                              // 0x0028(0x0008) (BlueprintVisible, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // 0x0030(0x0020) (BlueprintVisible)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // 0x0050(0x0020) (BlueprintVisible)
	struct FVector_NetQuantize10                       Location;                                                 // 0x0070(0x000C) (BlueprintVisible)
	struct FVector_NetQuantizeNormal                   Normal;                                                   // 0x007C(0x000C) (BlueprintVisible)
	TWeakObjectPtr<class AActor>                       Instigator;                                               // 0x0088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                             // 0x0090(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0098(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysicalMaterial;                                         // 0x00A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GameplayEffectLevel;                                      // 0x00A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AbilityLevel;                                             // 0x00AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              TargetAttachComponent;                                    // 0x00B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0008
struct FActiveGameplayEffectHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPassedFiltersAndWasExecuted;                             // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0040
struct FGameplayTagRequirements
{
	struct FGameplayTagContainer                       RequireTags;                                              // 0x0000(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       IgnoreTags;                                               // 0x0020(0x0020) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070
struct FGameplayAbilityTargetingLocationInfo
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	TEnumAsByte<EGameplayAbilityTargetingLocationType> LocationType;                                             // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0011(0x000F) MISSED OFFSET
	struct FTransform                                  LiteralTransform;                                         // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData)
	class AActor*                                      SourceActor;                                              // 0x0050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMeshComponent*                              SourceComponent;                                          // 0x0058(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayAbility*                            SourceAbility;                                            // 0x0060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceSocketName;                                         // 0x0068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0010
struct FAttributeDefaults
{
	class UClass*                                      Attributes;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DefaultStartingTable;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0004
struct FGameplayAbilitySpecHandle
{
	int                                                Handle;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.PredictionKey
// 0x0018
struct FPredictionKey
{
	int16_t                                            Current;                                                  // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Base;                                                     // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UPackageMap*                                 PredictiveConnection;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsStale;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsServerInitiated;                                       // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0020
struct FGameplayAbilityActivationInfo
{
	TEnumAsByte<EGameplayAbilityActivationMode>        ActivationMode;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCanBeEndedByOtherInstance : 1;                           // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FPredictionKey                              PredictionKeyWhenActivated;                               // 0x0008(0x0018)
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x00BC (0x00C8 - 0x000C)
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // 0x000C(0x0004)
	class UGameplayAbility*                            Ability;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InputID;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     SourceObject;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ActiveCount;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      InputPressed : 1;                                         // 0x0029(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      RemoveAfterActivation : 1;                                // 0x0029(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      PendingRemove : 1;                                        // 0x0029(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                           // 0x0030(0x0020) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                   // 0x0050(0x0010) (ZeroConstructor, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                      // 0x0060(0x0010) (ZeroConstructor)
	struct FActiveGameplayEffectHandle                 GameplayEffectHandle;                                     // 0x0070(0x0008) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0078(0x0050) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0018 (0x00C8 - 0x00B0)
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
	TArray<struct FGameplayAbilitySpec>                Items;                                                    // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0030
struct FGameplayAbilityRepAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Position;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      NextSectionID;                                            // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsStopped : 1;                                            // 0x0015(0x0001)
	unsigned char                                      ForcePlayBit : 1;                                         // 0x0015(0x0001)
	unsigned char                                      SkipPositionCorrection : 1;                               // 0x0015(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0030
struct FGameplayAbilityLocalAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               PlayBit;                                                  // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0010(0x0018)
	class UGameplayAbility*                            AnimatingAbility;                                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0028
struct FGameplayEffectModifiedAttribute
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020)
	float                                              TotalMagnitude;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0028
struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute                          AttributeToCapture;                                       // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	EGameplayEffectAttributeCaptureSource              AttributeSource;                                          // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSnapshot;                                                // 0x0021(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0038
struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition   BackingDefinition;                                        // 0x0000(0x0028)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                         // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                         // 0x0010(0x0010) (ZeroConstructor)
	bool                                               bHasNonSnapshottedAttributes;                             // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x0088
struct FTagContainerAggregator
{
	struct FGameplayTagContainer                       CapturedActorTags;                                        // 0x0000(0x0020)
	struct FGameplayTagContainer                       CapturedSpecTags;                                         // 0x0020(0x0020)
	struct FGameplayTagContainer                       ScopedTags;                                               // 0x0040(0x0020)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0060(0x0028) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0004
struct FModifierSpec
{
	float                                              EvaluatedMagnitude;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0028
struct FScalableFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FCurveTableRowHandle                        Curve;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x00A0
struct FGameplayAbilitySpecDef
{
	class UClass*                                      Ability;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                Level;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FScalableFloat                              LevelScalableFloat;                                       // 0x0010(0x0028) (Edit, DisableEditOnInstance, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                InputID;                                                  // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	EGameplayEffectGrantedAbilityRemovePolicy          RemovalPolicy;                                            // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	class UObject*                                     SourceObject;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0048(0x0050) MISSED OFFSET
	struct FGameplayAbilitySpecHandle                  AssignedHandle;                                           // 0x0098(0x0004)
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x0298
struct FGameplayEffectSpec
{
	class UGameplayEffect*                             Def;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       // 0x0008(0x0010) (ZeroConstructor)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                               // 0x0018(0x0028) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	float                                              Duration;                                                 // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ChanceToApplyToTarget;                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FTagContainerAggregator                     CapturedSourceTags;                                       // 0x0060(0x0088) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTagContainerAggregator                     CapturedTargetTags;                                       // 0x00E8(0x0088) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FGameplayTagContainer                       DynamicGrantedTags;                                       // 0x0170(0x0020)
	struct FGameplayTagContainer                       DynamicAssetTags;                                         // 0x0190(0x0020)
	TArray<struct FModifierSpec>                       Modifiers;                                                // 0x01B0(0x0010) (ZeroConstructor)
	int                                                StackCount;                                               // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCompletedSourceAttributeCapture : 1;                     // 0x01C4(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bCompletedTargetAttributeCapture : 1;                     // 0x01C4(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      bDurationLocked : 1;                                      // 0x01C4(0x0001) (RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01C5(0x0003) MISSED OFFSET
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilitySpecs;                                      // 0x01C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0xA0];                                      // 0x01D8(0x00A0) MISSED OFFSET
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0278(0x0018)
	float                                              Level;                                                    // 0x0290(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x0524 (0x0530 - 0x000C)
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
	struct FGameplayEffectSpec                         Spec;                                                     // 0x0018(0x0298)
	struct FPredictionKey                              PredictionKey;                                            // 0x02B0(0x0018)
	float                                              StartServerWorldTime;                                     // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CachedStartServerWorldTime;                               // 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              StartWorldTime;                                           // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	bool                                               bIsInhibited;                                             // 0x02D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x25B];                                     // 0x02D5(0x025B) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x0440 (0x04F0 - 0x00B0)
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x00B0(0x0090) MISSED OFFSET
	TArray<struct FActiveGameplayEffect>               GameplayEffects_Internal;                                 // 0x0140(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x370];                                     // 0x0150(0x0370) MISSED OFFSET
	TArray<class UGameplayEffect*>                     ApplicationImmunityQueryEffects;                          // 0x04C0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x20];                                      // 0x04D0(0x0020) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x00E4 (0x00F0 - 0x000C)
struct FActiveGameplayCue : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0010(0x0008)
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
	struct FGameplayCueParameters                      Parameters;                                               // 0x0030(0x00B8)
	bool                                               bPredictivelyRemoved;                                     // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0020 (0x00D0 - 0x00B0)
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
	TArray<struct FActiveGameplayCue>                  GameplayCues;                                             // 0x00B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	class UAbilitySystemComponent*                     Owner;                                                    // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.MinimalReplicationTagCountMap
// 0x0060
struct FMinimalReplicationTagCountMap
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	class UAbilitySystemComponent*                     Owner;                                                    // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0058(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyItem
// 0x001C (0x0028 - 0x000C)
struct FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0010(0x0018)
};

// ScriptStruct GameplayAbilities.ReplicatedPredictionKeyMap
// 0x0010 (0x00C0 - 0x00B0)
struct FReplicatedPredictionKeyMap : public FFastArraySerializer
{
	TArray<struct FReplicatedPredictionKeyItem>        PredictionKeys;                                           // 0x00B0(0x0010) (ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x0170
struct FGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0000(0x0040) MISSED OFFSET
	struct FScriptDelegate                             CustomMatchDelegate_BP;                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FGameplayTagQuery                           OwningTagQuery;                                           // 0x0050(0x0048) (Edit, BlueprintVisible)
	struct FGameplayTagQuery                           EffectTagQuery;                                           // 0x0098(0x0048) (Edit, BlueprintVisible)
	struct FGameplayTagQuery                           SourceTagQuery;                                           // 0x00E0(0x0048) (Edit, BlueprintVisible)
	struct FGameplayAttribute                          ModifyingAttribute;                                       // 0x0128(0x0020) (Edit, BlueprintVisible)
	class UObject*                                     EffectSource;                                             // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      EffectDefinition;                                         // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0158(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ServerAbilityRPCBatch
// 0x0048
struct FGameplayAbilities_FServerAbilityRPCBatch
{
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0008(0x0018)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // 0x0020(0x0020)
	bool                                               InputPressed;                                             // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Ended;                                                    // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               Started;                                                  // 0x0042(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0043(0x0005) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0078
struct FGameplayEffectSpecForRPC
{
	class UGameplayEffect*                             Def;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                       // 0x0008(0x0010) (ZeroConstructor)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0018(0x0018)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                     // 0x0030(0x0020)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                     // 0x0050(0x0020)
	float                                              Level;                                                    // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AbilityLevel;                                             // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayEffectRemovalInfo
// 0x0020
struct FGameplayEffectRemovalInfo
{
	bool                                               bPrematureRemoval;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                StackCount;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // 0x0008(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x0010
struct FAbilityTriggerData
{
	struct FGameplayTag                                TriggerTag;                                               // 0x0000(0x0008) (Edit)
	TEnumAsByte<EGameplayAbilityTriggerSource>         TriggerSource;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0040
struct FGameplayAbilityActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       OwnerActor;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       AvatarActor;                                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APlayerController>            PlayerController;                                         // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      AbilitySystemComponent;                                   // 0x0020(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class USkeletalMeshComponent>       SkeletalMeshComponent;                                    // 0x0028(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAnimInstance>                AnimInstance;                                             // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UMovementComponent>           MovementComponent;                                        // 0x0038(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0010
struct FGameplayAbilityBindInfo
{
	TEnumAsByte<EGameplayAbilityInputBinds>            Command;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UClass*                                      GameplayAbilityClass;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C
struct FWorldReticleParameters
{
	struct FVector                                     AOEScale;                                                 // 0x0000(0x000C) (BlueprintVisible, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCueObjectLibrary
// 0x00C0
struct FGameplayCueObjectLibrary
{
	TArray<struct FString>                             Paths;                                                    // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x80];                                      // 0x0010(0x0080) MISSED OFFSET
	class UObjectLibrary*                              ActorObjectLibrary;                                       // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UObjectLibrary*                              StaticObjectLibrary;                                      // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00A0(0x0004) MISSED OFFSET
	bool                                               bShouldSyncScan;                                          // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAsyncLoad;                                         // 0x00A5(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bShouldSyncLoad;                                          // 0x00A6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00A7(0x0001) MISSED OFFSET
	class UGameplayCueSet*                             CueSet;                                                   // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasBeenInitialized;                                      // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x00B1(0x000F) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0170
struct FGameplayCuePendingExecute
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
	struct FPredictionKey                              PredictionKey;                                            // 0x0018(0x0018)
	EGameplayCuePayloadType                            PayloadType;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UAbilitySystemComponent*                     OwningComponent;                                          // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FGameplayEffectSpecForRPC                   FromSpec;                                                 // 0x0040(0x0078)
	struct FGameplayCueParameters                      CueParameters;                                            // 0x00B8(0x00B8)
};

// ScriptStruct GameplayAbilities.PreallocationInfo
// 0x0068
struct FPreallocationInfo
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
	TArray<class UClass*>                              ClassesNeedingPreallocation;                              // 0x0050(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0030
struct FGameplayCueNotifyData
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0000(0x0008) (Edit)
	struct FSoftObjectPath                             GameplayCueNotifyObj;                                     // 0x0008(0x0018) (Edit)
	class UClass*                                      LoadedGameplayCueClass;                                   // 0x0020(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x00F8
struct FAttributeBasedFloat
{
	struct FScalableFloat                              Coefficient;                                              // 0x0000(0x0028) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 // 0x0028(0x0028) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                // 0x0050(0x0028) (Edit, DisableEditOnInstance)
	struct FGameplayEffectAttributeCaptureDefinition   BackingAttribute;                                         // 0x0078(0x0028) (Edit, DisableEditOnInstance)
	struct FCurveTableRowHandle                        AttributeCurve;                                           // 0x00A0(0x0010) (Edit, DisableEditOnInstance)
	EAttributeBasedFloatCalculationType                AttributeCalculationType;                                 // 0x00B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EGameplayModEvaluationChannel                      FinalChannel;                                             // 0x00B1(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x00B2(0x0006) MISSED OFFSET
	struct FGameplayTagContainer                       SourceTagFilter;                                          // 0x00B8(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetTagFilter;                                          // 0x00D8(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0090
struct FCustomCalculationBasedFloat
{
	class UClass*                                      CalculationClassMagnitude;                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              Coefficient;                                              // 0x0008(0x0028) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                 // 0x0030(0x0028) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                // 0x0058(0x0028) (Edit, DisableEditOnInstance)
	struct FCurveTableRowHandle                        FinalLookupCurve;                                         // 0x0080(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0010
struct FSetByCallerFloat
{
	struct FName                                       DataName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FGameplayTag                                DataTag;                                                  // 0x0008(0x0008) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x01C8
struct FGameplayEffectModifierMagnitude
{
	EGameplayEffectMagnitudeCalculation                MagnitudeCalculationType;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FScalableFloat                              ScalableFloatMagnitude;                                   // 0x0008(0x0028) (Edit, DisableEditOnInstance)
	struct FAttributeBasedFloat                        AttributeBasedMagnitude;                                  // 0x0030(0x00F8) (Edit, DisableEditOnInstance)
	struct FCustomCalculationBasedFloat                CustomMagnitude;                                          // 0x0128(0x0090) (Edit, DisableEditOnInstance)
	struct FSetByCallerFloat                           SetByCallerMagnitude;                                     // 0x01B8(0x0010) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayModEvaluationChannelSettings
// 0x0001
struct FGameplayModEvaluationChannelSettings
{
	EGameplayModEvaluationChannel                      Channel;                                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x02A0
struct FGameplayModifierInfo
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0020(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	struct FScalableFloat                              Magnitude;                                                // 0x0028(0x0028)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        // 0x0050(0x01C8) (Edit, DisableEditOnInstance)
	struct FGameplayModEvaluationChannelSettings       EvaluationChannelSettings;                                // 0x0218(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0219(0x0007) MISSED OFFSET
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x0220(0x0040) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0260(0x0040) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0280
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition   CapturedAttribute;                                        // 0x0000(0x0028) (Edit, DisableEditOnInstance, EditConst)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                        // 0x0030(0x01C8) (Edit, DisableEditOnInstance)
	struct FGameplayModEvaluationChannelSettings       EvaluationChannelSettings;                                // 0x01F8(0x0001) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	struct FGameplayTagRequirements                    SourceTags;                                               // 0x0200(0x0040) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    TargetTags;                                               // 0x0240(0x0040) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.ConditionalGameplayEffect
// 0x0028
struct FConditionalGameplayEffect
{
	class UClass*                                      EffectClass;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       RequiredSourceTags;                                       // 0x0008(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0058
struct FGameplayEffectExecutionDefinition
{
	class UClass*                                      CalculationClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       PassedInTags;                                             // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                     // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                         // 0x0038(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FConditionalGameplayEffect>          ConditionalGameplayEffects;                               // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0048
struct FGameplayEffectCue
{
	struct FGameplayAttribute                          MagnitudeAttribute;                                       // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	float                                              MinLevel;                                                 // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLevel;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       GameplayCueTags;                                          // 0x0028(0x0020) (Edit, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0060
struct FInheritedTagContainer
{
	struct FGameplayTagContainer                       CombinedTags;                                             // 0x0000(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	struct FGameplayTagContainer                       Added;                                                    // 0x0020(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance)
	struct FGameplayTagContainer                       Removed;                                                  // 0x0040(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance)
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x00A8
struct FGameplayEffectCustomExecutionParameters
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0038
struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute                          Attribute;                                                // 0x0000(0x0020)
	TEnumAsByte<EGameplayModOp>                        ModifierOp;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Magnitude;                                                // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 Handle;                                                   // 0x0028(0x0008)
	bool                                               IsValid;                                                  // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0018
struct FGameplayEffectCustomExecutionOutput
{
	TArray<struct FGameplayModifierEvaluatedData>      OutputModifiers;                                          // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      bTriggerConditionalGameplayEffects : 1;                   // 0x0010(0x0001)
	unsigned char                                      bHandledStackCountManually : 1;                           // 0x0010(0x0001)
	unsigned char                                      bHandledGameplayCuesManually : 1;                         // 0x0010(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0028
struct FGameplayTagReponsePair
{
	struct FGameplayTag                                Tag;                                                      // 0x0000(0x0008) (Edit)
	class UClass*                                      ResponseGameplayEffect;                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              ResponseGameplayEffects;                                  // 0x0010(0x0010) (Edit, ZeroConstructor)
	int                                                SoftCountCap;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0050
struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair                     Positive;                                                 // 0x0000(0x0028) (Edit)
	struct FGameplayTagReponsePair                     Negative;                                                 // 0x0028(0x0028) (Edit)
};

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0028 (0x0030 - 0x0008)
struct FAttributeMetaData : public FTableRowBase
{
	float                                              BaseValue;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FString                                     DerivedAttributeInfo;                                     // 0x0018(0x0010) (ZeroConstructor)
	bool                                               bCanStack;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GlobalCurveDataOverride
// 0x0010
struct FGlobalCurveDataOverride
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAttributeData
// 0x0010
struct FGameplayAttributeData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	float                                              BaseValue;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentValue;                                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0008
struct FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
	struct FHitResult                                  HitResult;                                                // 0x0008(0x0088) (IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // 0x0010(0x0070) (Edit, BlueprintVisible)
	TArray<TWeakObjectPtr<class AActor>>               TargetActorArray;                                         // 0x0080(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00E8 (0x00F0 - 0x0008)
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                           // 0x0010(0x0070) (Edit, BlueprintVisible)
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                           // 0x0080(0x0070) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.AbilityTaskDebugMessage
// 0x0018
struct FAbilityTaskDebugMessage
{
	class UGameplayTask*                               FromTask;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.AbilityEndedData
// 0x0010
struct FAbilityEndedData
{
	class UGameplayAbility*                            AbilityThatEnded;                                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  AbilitySpecHandle;                                        // 0x0008(0x0004)
	bool                                               bReplicateEndAbility;                                     // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWasCancelled;                                            // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                            // 0x0000(0x0004)
	int                                                PredictionKeyAtCreation;                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCueTag
// 0x0008
struct FGameplayCueTag
{
	struct FGameplayTag                                GameplayCueTag;                                           // 0x0000(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationLink
// 0x0018
struct FGameplayCueTranslationLink
{
	class UGameplayCueTranslator*                      RulesCDO;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNodeIndex
// 0x0004
struct FGameplayCueTranslatorNodeIndex
{
	int                                                Index;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct GameplayAbilities.GameplayCueTranslatorNode
// 0x0078
struct FGameplayCueTranslatorNode
{
	TArray<struct FGameplayCueTranslationLink>         Links;                                                    // 0x0000(0x0010) (ZeroConstructor)
	struct FGameplayCueTranslatorNodeIndex             CachedIndex;                                              // 0x0010(0x0004)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FGameplayTag                                CachedGameplayTag;                                        // 0x0018(0x0008)
	struct FName                                       CachedGameplayTagName;                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayCueTranslationManager
// 0x0080
struct FGameplayCueTranslationManager
{
	TArray<struct FGameplayCueTranslatorNode>          TranslationLUT;                                           // 0x0000(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap;                                // 0x0010(0x0050) (ZeroConstructor)
	class UGameplayTagsManager*                        TagManager;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0068(0x0018) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x00A0
struct FActiveGameplayEffectQuery
{
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0000(0x00A0) MISSED OFFSET
};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0070
struct FGameplayEffectContext
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Instigator;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UGameplayAbility>             AbilityCDO;                                               // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UGameplayAbility>             AbilityInstanceNotReplicated;                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                AbilityLevel;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x002C(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAbilitySystemComponent>      InstigatorAbilitySystemComponent;                         // 0x0034(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                   // 0x0040(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0050(0x0010) MISSED OFFSET
	struct FVector                                     WorldOrigin;                                              // 0x0060(0x000C) (IsPlainOldData)
	unsigned char                                      bHasWorldOrigin : 1;                                      // 0x006C(0x0001)
	unsigned char                                      bReplicateSourceObject : 1;                               // 0x006C(0x0001)
	unsigned char                                      UnknownData03[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

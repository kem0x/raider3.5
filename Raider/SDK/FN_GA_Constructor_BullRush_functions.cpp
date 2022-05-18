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

// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HighOffGround
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ImpactPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Constructor_BullRush_C::HighOffGround(const struct FVector& ImpactPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HighOffGround");

	UGA_Constructor_BullRush_C_HighOffGround_Params params;
	params.ImpactPoint = ImpactPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.NotBuilding
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Constructor_BullRush_C::NotBuilding(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.NotBuilding");

	UGA_Constructor_BullRush_C_NotBuilding_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HasShieldCharacterPiece
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasCharm                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::HasShieldCharacterPiece(bool* HasCharm)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HasShieldCharacterPiece");

	UGA_Constructor_BullRush_C_HasShieldCharacterPiece_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasCharm != nullptr)
		*HasCharm = params.HasCharm;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.NotADefender
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NotADefender                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::NotADefender(class AFortPawn* InPawn, bool* NotADefender)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.NotADefender");

	UGA_Constructor_BullRush_C_NotADefender_Params params;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NotADefender != nullptr)
		*NotADefender = params.NotADefender;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAppliedDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  Applied                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::GetAppliedDamage(class UClass** Applied)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAppliedDamage");

	UGA_Constructor_BullRush_C_GetAppliedDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Applied != nullptr)
		*Applied = params.Applied;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAIType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             InPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EAIType>           OutType                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::GetAIType(class AFortAIPawn* InPawn, TEnumAsByte<EAIType>* OutType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAIType");

	UGA_Constructor_BullRush_C_GetAIType_Params params;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutType != nullptr)
		*OutType = params.OutType;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyDamageToTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Applied                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::ApplyDamageToTarget(class AActor* Actor, class UClass* Applied)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyDamageToTarget");

	UGA_Constructor_BullRush_C_ApplyDamageToTarget_Params params;
	params.Actor = Actor;
	params.Applied = Applied;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceAttachClose
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::ForceAttachClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceAttachClose");

	UGA_Constructor_BullRush_C_ForceAttachClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IsAShielder
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPawn*               Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Constructor_BullRush_C::IsAShielder(class AFortPawn* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IsAShielder");

	UGA_Constructor_BullRush_C_IsAShielder_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetCharacterNormalizedVelocity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UGA_Constructor_BullRush_C::GetCharacterNormalizedVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetCharacterNormalizedVelocity");

	UGA_Constructor_BullRush_C_GetCharacterNormalizedVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HideToggledDecoTools
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::HideToggledDecoTools()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HideToggledDecoTools");

	UGA_Constructor_BullRush_C_HideToggledDecoTools_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HandleBigMonsterCollide
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::HandleBigMonsterCollide(class UObject* Object, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HandleBigMonsterCollide");

	UGA_Constructor_BullRush_C_HandleBigMonsterCollide_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.LaunchPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ApplyDamage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::LaunchPawn(class AFortAIPawn* InputPin, bool ApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.LaunchPawn");

	UGA_Constructor_BullRush_C_LaunchPawn_Params params;
	params.InputPin = InputPin;
	params.ApplyDamage = ApplyDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IsBigMonster
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class UGameplayTagAssetInterface> InPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsSmasher                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::IsBigMonster(const TScriptInterface<class UGameplayTagAssetInterface>& InPawn, bool* IsSmasher)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IsBigMonster");

	UGA_Constructor_BullRush_C_IsBigMonster_Params params;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSmasher != nullptr)
		*IsSmasher = params.IsSmasher;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.DetachPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             InPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::DetachPawn(class AFortAIPawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.DetachPawn");

	UGA_Constructor_BullRush_C_DetachPawn_Params params;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::EndPushingAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAll");

	UGA_Constructor_BullRush_C_EndPushingAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyPushToPawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InPawn                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::ApplyPushToPawn(class AFortPawn* InPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyPushToPawn");

	UGA_Constructor_BullRush_C_ApplyPushToPawn_Params params;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.AbilityRemainingTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGA_Constructor_BullRush_C::AbilityRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.AbilityRemainingTime");

	UGA_Constructor_BullRush_C_AbilityRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IgnoreCollisionWith
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABuildingActor*          InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldIgnore                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::IgnoreCollisionWith(class ABuildingActor* InActor, bool* ShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IgnoreCollisionWith");

	UGA_Constructor_BullRush_C_IgnoreCollisionWith_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldIgnore != nullptr)
		*ShouldIgnore = params.ShouldIgnore;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ShouldForceCollision
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  InActor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Constructor_BullRush_C::ShouldForceCollision(class AActor* InActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ShouldForceCollision");

	UGA_Constructor_BullRush_C_ShouldForceCollision_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAnimationNameForHusk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   AnimName                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::GetAnimationNameForHusk(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAnimationNameForHusk");

	UGA_Constructor_BullRush_C_GetAnimationNameForHusk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimName != nullptr)
		*AnimName = params.AnimName;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IncrementAnimCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Output_Get                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::IncrementAnimCount(int* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.IncrementAnimCount");

	UGA_Constructor_BullRush_C_IncrementAnimCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.PrepareAbilityValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::PrepareAbilityValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.PrepareAbilityValues");

	UGA_Constructor_BullRush_C_PrepareAbilityValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAllCollideWall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UGA_Constructor_BullRush_C::EndPushingAllCollideWall(const struct FVector& HitNormal, const struct FVector& HitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAllCollideWall");

	UGA_Constructor_BullRush_C_EndPushingAllCollideWall_Params params;
	params.HitNormal = HitNormal;
	params.HitLocation = HitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.RunChinaShop
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InOverlap                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PassThroughWall                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::RunChinaShop(class AActor* InOverlap, bool* PassThroughWall)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.RunChinaShop");

	UGA_Constructor_BullRush_C_RunChinaShop_Params params;
	params.InOverlap = InOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThroughWall != nullptr)
		*PassThroughWall = params.PassThroughWall;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleCapsuleCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::ToggleCapsuleCollision(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleCapsuleCollision");

	UGA_Constructor_BullRush_C_ToggleCapsuleCollision_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_ImpactEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::FX_ImpactEnemy()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_ImpactEnemy");

	UGA_Constructor_BullRush_C_FX_ImpactEnemy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleSteeringReduction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnableSteeringReduction       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::ToggleSteeringReduction(bool bEnableSteeringReduction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleSteeringReduction");

	UGA_Constructor_BullRush_C_ToggleSteeringReduction_Params params;
	params.bEnableSteeringReduction = bEnableSteeringReduction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Deactivate
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::FX_MotionLines_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Deactivate");

	UGA_Constructor_BullRush_C_FX_MotionLines_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Activate
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::FX_MotionLines_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Activate");

	UGA_Constructor_BullRush_C_FX_MotionLines_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyEndingDamage
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::ApplyEndingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyEndingDamage");

	UGA_Constructor_BullRush_C_ApplyEndingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent* AbilitySystem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGA_Constructor_BullRush_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.SetupAbility");

	UGA_Constructor_BullRush_C_SetupAbility_Params params;
	params.AbilitySystem = AbilitySystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnChange_67D8F5D643B13C19C65EEBAC7E806B43
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>     NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::OnChange_67D8F5D643B13C19C65EEBAC7E806B43(TEnumAsByte<EMovementMode> NewMovementMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnChange_67D8F5D643B13C19C65EEBAC7E806B43");

	UGA_Constructor_BullRush_C_OnChange_67D8F5D643B13C19C65EEBAC7E806B43_Params params;
	params.NewMovementMode = NewMovementMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_81268963444013D8ABD8329A74FC2BA7
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Completed_81268963444013D8ABD8329A74FC2BA7(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_81268963444013D8ABD8329A74FC2BA7");

	UGA_Constructor_BullRush_C_Completed_81268963444013D8ABD8329A74FC2BA7_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_81268963444013D8ABD8329A74FC2BA7
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Cancelled_81268963444013D8ABD8329A74FC2BA7(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_81268963444013D8ABD8329A74FC2BA7");

	UGA_Constructor_BullRush_C_Cancelled_81268963444013D8ABD8329A74FC2BA7_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_81268963444013D8ABD8329A74FC2BA7
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Triggered_81268963444013D8ABD8329A74FC2BA7(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_81268963444013D8ABD8329A74FC2BA7");

	UGA_Constructor_BullRush_C_Triggered_81268963444013D8ABD8329A74FC2BA7_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_C1DD435D421925C851371490B466988E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Completed_C1DD435D421925C851371490B466988E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_C1DD435D421925C851371490B466988E");

	UGA_Constructor_BullRush_C_Completed_C1DD435D421925C851371490B466988E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_C1DD435D421925C851371490B466988E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Cancelled_C1DD435D421925C851371490B466988E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_C1DD435D421925C851371490B466988E");

	UGA_Constructor_BullRush_C_Cancelled_C1DD435D421925C851371490B466988E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_C1DD435D421925C851371490B466988E
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Triggered_C1DD435D421925C851371490B466988E(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_C1DD435D421925C851371490B466988E");

	UGA_Constructor_BullRush_C_Triggered_C1DD435D421925C851371490B466988E_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_91555FE04FDFE9F5B7F3CB96A10864D5
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Completed_91555FE04FDFE9F5B7F3CB96A10864D5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_91555FE04FDFE9F5B7F3CB96A10864D5");

	UGA_Constructor_BullRush_C_Completed_91555FE04FDFE9F5B7F3CB96A10864D5_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5");

	UGA_Constructor_BullRush_C_Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_91555FE04FDFE9F5B7F3CB96A10864D5
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Triggered_91555FE04FDFE9F5B7F3CB96A10864D5(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_91555FE04FDFE9F5B7F3CB96A10864D5");

	UGA_Constructor_BullRush_C_Triggered_91555FE04FDFE9F5B7F3CB96A10864D5_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EventReceived_C1DB76B7444372BAD736AFB207F3A2D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::EventReceived_C1DB76B7444372BAD736AFB207F3A2D2(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EventReceived_C1DB76B7444372BAD736AFB207F3A2D2");

	UGA_Constructor_BullRush_C_EventReceived_C1DB76B7444372BAD736AFB207F3A2D2_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_763E234D46424B8B9BF854AD480CB4DE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Completed_763E234D46424B8B9BF854AD480CB4DE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_763E234D46424B8B9BF854AD480CB4DE");

	UGA_Constructor_BullRush_C_Completed_763E234D46424B8B9BF854AD480CB4DE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_763E234D46424B8B9BF854AD480CB4DE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Cancelled_763E234D46424B8B9BF854AD480CB4DE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_763E234D46424B8B9BF854AD480CB4DE");

	UGA_Constructor_BullRush_C_Cancelled_763E234D46424B8B9BF854AD480CB4DE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_763E234D46424B8B9BF854AD480CB4DE
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Triggered_763E234D46424B8B9BF854AD480CB4DE(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_763E234D46424B8B9BF854AD480CB4DE");

	UGA_Constructor_BullRush_C_Triggered_763E234D46424B8B9BF854AD480CB4DE_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_58E7CF8B45CF32A479A6C5AF0380A969
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Completed_58E7CF8B45CF32A479A6C5AF0380A969(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_58E7CF8B45CF32A479A6C5AF0380A969");

	UGA_Constructor_BullRush_C_Completed_58E7CF8B45CF32A479A6C5AF0380A969_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_58E7CF8B45CF32A479A6C5AF0380A969
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Cancelled_58E7CF8B45CF32A479A6C5AF0380A969(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_58E7CF8B45CF32A479A6C5AF0380A969");

	UGA_Constructor_BullRush_C_Cancelled_58E7CF8B45CF32A479A6C5AF0380A969_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_58E7CF8B45CF32A479A6C5AF0380A969
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Triggered_58E7CF8B45CF32A479A6C5AF0380A969(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_58E7CF8B45CF32A479A6C5AF0380A969");

	UGA_Constructor_BullRush_C_Triggered_58E7CF8B45CF32A479A6C5AF0380A969_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_A67F8C7741932B2C145CA08ECC81FA13
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Completed_A67F8C7741932B2C145CA08ECC81FA13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_A67F8C7741932B2C145CA08ECC81FA13");

	UGA_Constructor_BullRush_C_Completed_A67F8C7741932B2C145CA08ECC81FA13_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_A67F8C7741932B2C145CA08ECC81FA13
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Cancelled_A67F8C7741932B2C145CA08ECC81FA13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_A67F8C7741932B2C145CA08ECC81FA13");

	UGA_Constructor_BullRush_C_Cancelled_A67F8C7741932B2C145CA08ECC81FA13_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_A67F8C7741932B2C145CA08ECC81FA13
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandle TargetData                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            ApplicationTag                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Constructor_BullRush_C::Triggered_A67F8C7741932B2C145CA08ECC81FA13(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_A67F8C7741932B2C145CA08ECC81FA13");

	UGA_Constructor_BullRush_C_Triggered_A67F8C7741932B2C145CA08ECC81FA13_Params params;
	params.TargetData = TargetData;
	params.ApplicationTag = ApplicationTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Constructor_BullRush_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_ActivateAbility");

	UGA_Constructor_BullRush_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::K2_OnEndAbility(bool* bWasCancelled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_OnEndAbility");

	UGA_Constructor_BullRush_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.CheckDashDistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InDelta                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::CheckDashDistance(float InDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.CheckDashDistance");

	UGA_Constructor_BullRush_C_CheckDashDistance_Params params;
	params.InDelta = InDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BeginFallingTimer
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::BeginFallingTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BeginFallingTimer");

	UGA_Constructor_BullRush_C_BeginFallingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnPawnLanded_Event_0_1
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGA_Constructor_BullRush_C::OnPawnLanded_Event_0_1(const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnPawnLanded_Event_0_1");

	UGA_Constructor_BullRush_C_OnPawnLanded_Event_0_1_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindOnPawnLanded
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::BindOnPawnLanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindOnPawnLanded");

	UGA_Constructor_BullRush_C_BindOnPawnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndFallingTimer
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::EndFallingTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndFallingTimer");

	UGA_Constructor_BullRush_C_EndFallingTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndAbilitySlide
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::EndAbilitySlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndAbilitySlide");

	UGA_Constructor_BullRush_C_EndAbilitySlide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndAbilityHitWall
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::EndAbilityHitWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndAbilityHitWall");

	UGA_Constructor_BullRush_C_EndAbilityHitWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.DistanceCheckTimer
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::DistanceCheckTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.DistanceCheckTimer");

	UGA_Constructor_BullRush_C_DistanceCheckTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HitWall
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGA_Constructor_BullRush_C::HitWall(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.HitWall");

	UGA_Constructor_BullRush_C_HitWall_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindHitWall
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::BindHitWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindHitWall");

	UGA_Constructor_BullRush_C_BindHitWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnBindHitWall
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::UnBindHitWall()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnBindHitWall");

	UGA_Constructor_BullRush_C_UnBindHitWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OverlapEnemyCallback
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*               InOverlapped                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::OverlapEnemyCallback(class AFortPawn* InOverlapped)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.OverlapEnemyCallback");

	UGA_Constructor_BullRush_C_OverlapEnemyCallback_Params params;
	params.InOverlapped = InOverlapped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindShieldOverlaps
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::BindShieldOverlaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindShieldOverlaps");

	UGA_Constructor_BullRush_C_BindShieldOverlaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ShieldOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGA_Constructor_BullRush_C::ShieldOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ShieldOverlap");

	UGA_Constructor_BullRush_C_ShieldOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnbindShieldOverlaps
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::UnbindShieldOverlaps()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnbindShieldOverlaps");

	UGA_Constructor_BullRush_C_UnbindShieldOverlaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceEndAbility
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::ForceEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceEndAbility");

	UGA_Constructor_BullRush_C_ForceEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ConstructorPawnHit
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SelfActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGA_Constructor_BullRush_C::ConstructorPawnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ConstructorPawnHit");

	UGA_Constructor_BullRush_C_ConstructorPawnHit_Params params;
	params.SelfActor = SelfActor;
	params.OtherActor = OtherActor;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Hit
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::Hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.Hit");

	UGA_Constructor_BullRush_C_Hit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnbindHit
// (BlueprintCallable, BlueprintEvent)

void UGA_Constructor_BullRush_C::UnbindHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnbindHit");

	UGA_Constructor_BullRush_C_UnbindHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceAttach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*             LocalOverlap                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::ForceAttach(class AFortAIPawn* LocalOverlap)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceAttach");

	UGA_Constructor_BullRush_C_ForceAttach_Params params;
	params.LocalOverlap = LocalOverlap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ExecuteUbergraph_GA_Constructor_BullRush
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Constructor_BullRush_C::ExecuteUbergraph_GA_Constructor_BullRush(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GA_Constructor_BullRush.GA_Constructor_BullRush_C.ExecuteUbergraph_GA_Constructor_BullRush");

	UGA_Constructor_BullRush_C_ExecuteUbergraph_GA_Constructor_BullRush_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

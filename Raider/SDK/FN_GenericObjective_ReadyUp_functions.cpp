// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.GetObjectiveBulletIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             BulletIcon                     (Parm, OutParm)

void AGenericObjective_ReadyUp_C::GetObjectiveBulletIcon(struct FSlateBrush* BulletIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.GetObjectiveBulletIcon");

	AGenericObjective_ReadyUp_C_GetObjectiveBulletIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BulletIcon != nullptr)
		*BulletIcon = params.BulletIcon;
}


// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.OnRep_ObjectiveText
// (BlueprintCallable, BlueprintEvent)

void AGenericObjective_ReadyUp_C::OnRep_ObjectiveText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.OnRep_ObjectiveText");

	AGenericObjective_ReadyUp_C_OnRep_ObjectiveText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.BlueprintGetObjectiveDisplayText
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText AGenericObjective_ReadyUp_C::BlueprintGetObjectiveDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.BlueprintGetObjectiveDisplayText");

	AGenericObjective_ReadyUp_C_BlueprintGetObjectiveDisplayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.OnRep_DifficultyLevel
// (BlueprintCallable, BlueprintEvent)

void AGenericObjective_ReadyUp_C::OnRep_DifficultyLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.OnRep_DifficultyLevel");

	AGenericObjective_ReadyUp_C_OnRep_DifficultyLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.SetDifficultyIncreaseRewardTier
// (Public, BlueprintCallable, BlueprintEvent)

void AGenericObjective_ReadyUp_C::SetDifficultyIncreaseRewardTier()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.SetDifficultyIncreaseRewardTier");

	AGenericObjective_ReadyUp_C_SetDifficultyIncreaseRewardTier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.ApplyGameDifficultyIncrease
// (Public, BlueprintCallable, BlueprintEvent)

void AGenericObjective_ReadyUp_C::ApplyGameDifficultyIncrease()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.ApplyGameDifficultyIncrease");

	AGenericObjective_ReadyUp_C_ApplyGameDifficultyIncrease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.ApplyDifficultyBoostGameplayModifierItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGenericObjective_ReadyUp_C::ApplyDifficultyBoostGameplayModifierItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.ApplyDifficultyBoostGameplayModifierItem");

	AGenericObjective_ReadyUp_C_ApplyDifficultyBoostGameplayModifierItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGenericObjective_ReadyUp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.UserConstructionScript");

	AGenericObjective_ReadyUp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.HandleMissionEvent_StartObjective
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   InMissionGuid                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams* Params                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGenericObjective_ReadyUp_C::HandleMissionEvent_StartObjective(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.HandleMissionEvent_StartObjective");

	AGenericObjective_ReadyUp_C_HandleMissionEvent_StartObjective_Params params;
	params.InMissionGuid = InMissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.HandleMissionEvent_MissionSucceeded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   InMissionGuid                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams* Params                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGenericObjective_ReadyUp_C::HandleMissionEvent_MissionSucceeded(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.HandleMissionEvent_MissionSucceeded");

	AGenericObjective_ReadyUp_C_HandleMissionEvent_MissionSucceeded_Params params;
	params.InMissionGuid = InMissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.HandleMissionEvent_IncreaseDifficulty
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                   InMissionGuid                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FGameplayTagContainer   ObjectiveHandle                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortMissionEventParams* Params                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DO_NOT_USE_THIS_OR_VARIABLES_BELOW (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDataAsset*              EventContent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  EventInstigator                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            GenericInt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GenericFloat                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   GenericText                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTagContainer   GameplayTags                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortMissionEvent       MissionEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AGenericObjective_ReadyUp_C::HandleMissionEvent_IncreaseDifficulty(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.HandleMissionEvent_IncreaseDifficulty");

	AGenericObjective_ReadyUp_C_HandleMissionEvent_IncreaseDifficulty_Params params;
	params.InMissionGuid = InMissionGuid;
	params.ObjectiveHandle = ObjectiveHandle;
	params.Params = Params;
	params.DO_NOT_USE_THIS_OR_VARIABLES_BELOW = DO_NOT_USE_THIS_OR_VARIABLES_BELOW;
	params.EventFocus = EventFocus;
	params.EventContent = EventContent;
	params.EventInstigator = EventInstigator;
	params.GenericInt = GenericInt;
	params.GenericFloat = GenericFloat;
	params.GenericText = GenericText;
	params.GameplayTags = GameplayTags;
	params.MissionEvent = MissionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.ExecuteUbergraph_GenericObjective_ReadyUp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AGenericObjective_ReadyUp_C::ExecuteUbergraph_GenericObjective_ReadyUp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GenericObjective_ReadyUp.GenericObjective_ReadyUp_C.ExecuteUbergraph_GenericObjective_ReadyUp");

	AGenericObjective_ReadyUp_C_ExecuteUbergraph_GenericObjective_ReadyUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.OnRep_SavedBase
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Constructor_C::OnRep_SavedBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.OnRep_SavedBase");

	APlayerPawn_Constructor_C_OnRep_SavedBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetIFFMeshesEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Constructor_C::SetIFFMeshesEnabled(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetIFFMeshesEnabled");

	APlayerPawn_Constructor_C_SetIFFMeshesEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Constructor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.UserConstructionScript");

	APlayerPawn_Constructor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.TakeDamageTimeline__FinishedFunc
// (BlueprintEvent)

void APlayerPawn_Constructor_C::TakeDamageTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.TakeDamageTimeline__FinishedFunc");

	APlayerPawn_Constructor_C_TakeDamageTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.TakeDamageTimeline__UpdateFunc
// (BlueprintEvent)

void APlayerPawn_Constructor_C::TakeDamageTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.TakeDamageTimeline__UpdateFunc");

	APlayerPawn_Constructor_C_TakeDamageTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Damage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Constructor_C::GameplayCue_Damage(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Damage");

	APlayerPawn_Constructor_C_GameplayCue_Damage_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.ToInfinityAndBeyond.ActiveFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Constructor_C::GameplayCue_Constructor_ToInfinityAndBeyond_ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.ToInfinityAndBeyond.ActiveFX");

	APlayerPawn_Constructor_C_GameplayCue_Constructor_ToInfinityAndBeyond_ActiveFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.KineticOverload.ActiveFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Constructor_C::GameplayCue_Constructor_KineticOverload_ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.KineticOverload.ActiveFX");

	APlayerPawn_Constructor_C_GameplayCue_Constructor_KineticOverload_ActiveFX_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.PlasmaPulse.IFFCoding
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent> EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters  Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Constructor_C::GameplayCue_Constructor_PlasmaPulse_IFFCoding(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.PlasmaPulse.IFFCoding");

	APlayerPawn_Constructor_C_GameplayCue_Constructor_PlasmaPulse_IFFCoding_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Constructor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ReceiveBeginPlay");

	APlayerPawn_Constructor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.testIFF
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Constructor_C::testIFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.testIFF");

	APlayerPawn_Constructor_C_testIFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.OnCharacterPartsReinitialized
// (Event, Protected, BlueprintEvent)

void APlayerPawn_Constructor_C::OnCharacterPartsReinitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.OnCharacterPartsReinitialized");

	APlayerPawn_Constructor_C_OnCharacterPartsReinitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Constructor_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1");

	APlayerPawn_Constructor_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void APlayerPawn_Constructor_C::GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2");

	APlayerPawn_Constructor_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArm
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Constructor_C::PlayArm()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArm");

	APlayerPawn_Constructor_C_PlayArm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.testEndIFF
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Constructor_C::testEndIFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.testEndIFF");

	APlayerPawn_Constructor_C_testEndIFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetMenuScreenClassName
// (BlueprintCallable, BlueprintEvent)

void APlayerPawn_Constructor_C::SetMenuScreenClassName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetMenuScreenClassName");

	APlayerPawn_Constructor_C_SetMenuScreenClassName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.MultiToggleShield
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Toggle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Constructor_C::MultiToggleShield(bool Toggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.MultiToggleShield");

	APlayerPawn_Constructor_C_MultiToggleShield_Params params;
	params.Toggle = Toggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ToggleShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Toggle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Constructor_C::ToggleShield(bool Toggle)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ToggleShield");

	APlayerPawn_Constructor_C_ToggleShield_Params params;
	params.Toggle = Toggle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetBase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AB_Constructor_BASE_C*   SavedBase                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Constructor_C::SetBase(class AB_Constructor_BASE_C* SavedBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetBase");

	APlayerPawn_Constructor_C_SetBase_Params params;
	params.SavedBase = SavedBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ExecuteUbergraph_PlayerPawn_Constructor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APlayerPawn_Constructor_C::ExecuteUbergraph_PlayerPawn_Constructor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.ExecuteUbergraph_PlayerPawn_Constructor");

	APlayerPawn_Constructor_C_ExecuteUbergraph_PlayerPawn_Constructor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArmAnim__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void APlayerPawn_Constructor_C::PlayArmAnim__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArmAnim__DelegateSignature");

	APlayerPawn_Constructor_C_PlayArmAnim__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

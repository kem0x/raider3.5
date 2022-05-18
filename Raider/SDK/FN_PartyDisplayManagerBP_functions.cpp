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

// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PostSetupPrefabVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APartyDisplayManagerBP_C::PostSetupPrefabVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PostSetupPrefabVisuals");

	APartyDisplayManagerBP_C_PostSetupPrefabVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetTeslaHackParticles
// (Public, BlueprintCallable, BlueprintEvent)

void APartyDisplayManagerBP_C::ResetTeslaHackParticles()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetTeslaHackParticles");

	APartyDisplayManagerBP_C_ResetTeslaHackParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupPrefabVisuals
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APartyDisplayManagerBP_C::SetupPrefabVisuals(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupPrefabVisuals");

	APartyDisplayManagerBP_C_SetupPrefabVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetMeshForCurrentDisplayedItem
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMeshComponent*          OutDisplayedMesh               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void APartyDisplayManagerBP_C::GetMeshForCurrentDisplayedItem(class UMeshComponent** OutDisplayedMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetMeshForCurrentDisplayedItem");

	APartyDisplayManagerBP_C_GetMeshForCurrentDisplayedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDisplayedMesh != nullptr)
		*OutDisplayedMesh = params.OutDisplayedMesh;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APartyDisplayManagerBP_C::GetItemDefinitionToShow(class UFortItemDefinition** ItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow");

	APartyDisplayManagerBP_C_GetItemDefinitionToShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDefinition != nullptr)
		*ItemDefinition = params.ItemDefinition;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Large_Texture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItemDefinition*     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortRarity                    Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyDisplayManagerBP_C::SetUIOverrideVisuals(class UTexture2D* Large_Texture, class UFortItemDefinition* Item, EFortRarity Rarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals");

	APartyDisplayManagerBP_C_SetUIOverrideVisuals_Params params;
	params.Large_Texture = Large_Texture;
	params.Item = Item;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform APartyDisplayManagerBP_C::GetWeaponPlacementTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform");

	APartyDisplayManagerBP_C_GetWeaponPlacementTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void APartyDisplayManagerBP_C::UpdatePreviewMeshTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms");

	APartyDisplayManagerBP_C_UpdatePreviewMeshTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform APartyDisplayManagerBP_C::GetItemPreviewOffset(class UFortItemDefinition* ItemDefinition)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset");

	APartyDisplayManagerBP_C_GetItemPreviewOffset_Params params;
	params.ItemDefinition = ItemDefinition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform APartyDisplayManagerBP_C::GetPreviewMeshWorldTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform");

	APartyDisplayManagerBP_C_GetPreviewMeshWorldTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyDisplayManagerBP_C::SetupStaticMeshVisuals(class UStaticMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals");

	APartyDisplayManagerBP_C_SetupStaticMeshVisuals_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyDisplayManagerBP_C::SetupSkeletalMeshVisuals(class USkeletalMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals");

	APartyDisplayManagerBP_C_SetupSkeletalMeshVisuals_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals
// (Private, BlueprintCallable, BlueprintEvent)

void APartyDisplayManagerBP_C::ResetVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals");

	APartyDisplayManagerBP_C_ResetVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APartyDisplayManagerBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.UserConstructionScript");

	APartyDisplayManagerBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc
// (BlueprintEvent)

void APartyDisplayManagerBP_C::ScaleAnimLevel__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc");

	APartyDisplayManagerBP_C_ScaleAnimLevel__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc
// (BlueprintEvent)

void APartyDisplayManagerBP_C::ScaleAnimLevel__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc");

	APartyDisplayManagerBP_C_ScaleAnimLevel__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc
// (BlueprintEvent)

void APartyDisplayManagerBP_C::ScaleAnimEvolve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc");

	APartyDisplayManagerBP_C_ScaleAnimEvolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc
// (BlueprintEvent)

void APartyDisplayManagerBP_C::ScaleAnimEvolve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc");

	APartyDisplayManagerBP_C_ScaleAnimEvolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowLoading
// (Event, Public, BlueprintEvent)

void APartyDisplayManagerBP_C::ShowLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowLoading");

	APartyDisplayManagerBP_C_ShowLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HideLoading
// (Event, Public, BlueprintEvent)

void APartyDisplayManagerBP_C::HideLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HideLoading");

	APartyDisplayManagerBP_C_HideLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem**              ItemToView                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyDisplayManagerBP_C::ShowItem(class UFortItem** ItemToView)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem");

	APartyDisplayManagerBP_C_ShowItem_Params params;
	params.ItemToView = ItemToView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect
// (Event, Public, BlueprintEvent)

void APartyDisplayManagerBP_C::PlayLevelUpEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect");

	APartyDisplayManagerBP_C_PlayLevelUpEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect
// (Event, Public, BlueprintEvent)

void APartyDisplayManagerBP_C::PlayEvolutionEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect");

	APartyDisplayManagerBP_C_PlayEvolutionEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX
// (BlueprintCallable, BlueprintEvent)

void APartyDisplayManagerBP_C::CelebrateWithFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX");

	APartyDisplayManagerBP_C_CelebrateWithFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX
// (BlueprintCallable, BlueprintEvent)

void APartyDisplayManagerBP_C::PerformScaleMeshFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX");

	APartyDisplayManagerBP_C_PerformScaleMeshFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UFortItem**              ItemWhoseAssetsWereLoaded      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>*        LoadedAssets                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void APartyDisplayManagerBP_C::HandleLoadingAssetsForItemCompleted(class UFortItem** ItemWhoseAssetsWereLoaded, TArray<class UObject*>* LoadedAssets)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted");

	APartyDisplayManagerBP_C_HandleLoadingAssetsForItemCompleted_Params params;
	params.ItemWhoseAssetsWereLoaded = ItemWhoseAssetsWereLoaded;
	params.LoadedAssets = LoadedAssets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyDisplayManagerBP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick");

	APartyDisplayManagerBP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.Set Character Parts Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewVisible                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyDisplayManagerBP_C::Set_Character_Parts_Visibility(bool NewVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.Set Character Parts Visibility");

	APartyDisplayManagerBP_C_Set_Character_Parts_Visibility_Params params;
	params.NewVisible = NewVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.Character Customization Finished
// (BlueprintCallable, BlueprintEvent)

void APartyDisplayManagerBP_C::Character_Customization_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.Character Customization Finished");

	APartyDisplayManagerBP_C_Character_Customization_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APartyDisplayManagerBP_C::ExecuteUbergraph_PartyDisplayManagerBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP");

	APartyDisplayManagerBP_C_ExecuteUbergraph_PartyDisplayManagerBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

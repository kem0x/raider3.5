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

// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Orphaned
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsOrphaned                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AFortPawn*               AttachedPawn                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::Orphaned(bool* IsOrphaned, class AFortPawn** AttachedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.Orphaned");

	AEnemyPawn_Parent_C_Orphaned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOrphaned != nullptr)
		*IsOrphaned = params.IsOrphaned;
	if (AttachedPawn != nullptr)
		*AttachedPawn = params.AttachedPawn;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetMinibossLightHiddenInGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::SetMinibossLightHiddenInGame(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetMinibossLightHiddenInGame");

	AEnemyPawn_Parent_C_SetMinibossLightHiddenInGame_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnMinibossLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::SpawnMinibossLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnMinibossLight");

	AEnemyPawn_Parent_C_SpawnMinibossLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllCharacterMIDsByMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, float>      Map                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AEnemyPawn_Parent_C::SetScalarParameterOnAllCharacterMIDsByMap(TMap<struct FName, float> Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllCharacterMIDsByMap");

	AEnemyPawn_Parent_C_SetScalarParameterOnAllCharacterMIDsByMap_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllCharacterMIDsByMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FName, struct FLinearColor> Map                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void AEnemyPawn_Parent_C::SetVectorParameterOnAllCharacterMIDsByMap(TMap<struct FName, struct FLinearColor> Map)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllCharacterMIDsByMap");

	AEnemyPawn_Parent_C_SetVectorParameterOnAllCharacterMIDsByMap_Params params;
	params.Map = Map;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.TransformHitLocationWorldSpaceToPreskinnedLocalSpace
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 PreskinnedLS                   (Parm, OutParm, IsPlainOldData)

void AEnemyPawn_Parent_C::TransformHitLocationWorldSpaceToPreskinnedLocalSpace(struct FVector* PreskinnedLS)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.TransformHitLocationWorldSpaceToPreskinnedLocalSpace");

	AEnemyPawn_Parent_C_TransformHitLocationWorldSpaceToPreskinnedLocalSpace_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PreskinnedLS != nullptr)
		*PreskinnedLS = params.PreskinnedLS;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetParticlesOnCharacterMeshHiddenInGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::SetParticlesOnCharacterMeshHiddenInGame(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetParticlesOnCharacterMeshHiddenInGame");

	AEnemyPawn_Parent_C_SetParticlesOnCharacterMeshHiddenInGame_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetDuplicateCharacterMeshHiddenInGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::SetDuplicateCharacterMeshHiddenInGame(bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetDuplicateCharacterMeshHiddenInGame");

	AEnemyPawn_Parent_C_SetDuplicateCharacterMeshHiddenInGame_Params params;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CreateDuplicateCharacterMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material_to_Apply              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::CreateDuplicateCharacterMesh(class UMaterialInterface* Material_to_Apply)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.CreateDuplicateCharacterMesh");

	AEnemyPawn_Parent_C_CreateDuplicateCharacterMesh_Params params;
	params.Material_to_Apply = Material_to_Apply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestoreMaterialMapToDefaults
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::RestoreMaterialMapToDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestoreMaterialMapToDefaults");

	AEnemyPawn_Parent_C_RestoreMaterialMapToDefaults_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverwriteKeysInMaterialMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Fire                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Ice                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Lightning                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Default                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::OverwriteKeysInMaterialMap(class UMaterialInterface* Fire, class UMaterialInterface* Ice, class UMaterialInterface* Lightning, class UMaterialInterface* Default)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverwriteKeysInMaterialMap");

	AEnemyPawn_Parent_C_OverwriteKeysInMaterialMap_Params params;
	params.Fire = Fire;
	params.Ice = Ice;
	params.Lightning = Lightning;
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialFromMapByMeshTag
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::OverrideMaterialFromMapByMeshTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialFromMapByMeshTag");

	AEnemyPawn_Parent_C_OverrideMaterialFromMapByMeshTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnRep_SpecialEventHalloweenPumpkinHeadApplied
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::OnRep_SpecialEventHalloweenPumpkinHeadApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnRep_SpecialEventHalloweenPumpkinHeadApplied");

	AEnemyPawn_Parent_C_OnRep_SpecialEventHalloweenPumpkinHeadApplied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpecialEventHalloweenPumpkinHeadHusk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ApplyPumpkinHeadMesh           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DebugApplicationOrRemoval_     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::SpecialEventHalloweenPumpkinHeadHusk(bool ApplyPumpkinHeadMesh, bool DebugApplicationOrRemoval_)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpecialEventHalloweenPumpkinHeadHusk");

	AEnemyPawn_Parent_C_SpecialEventHalloweenPumpkinHeadHusk_Params params;
	params.ApplyPumpkinHeadMesh = ApplyPumpkinHeadMesh;
	params.DebugApplicationOrRemoval_ = DebugApplicationOrRemoval_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnMeshAttachedToCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Static_Mesh                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Socket_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              Relative_Transform             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Absolute_Location              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute_Rotation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Absolute_Scale                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UStaticMeshComponent*    Static_Mesh_Component_Reference (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEnemyPawn_Parent_C::SpawnMeshAttachedToCharacter(class UStaticMesh* Static_Mesh, const struct FName& Socket_Name, const struct FTransform& Relative_Transform, bool Absolute_Location, bool Absolute_Rotation, bool Absolute_Scale, class UStaticMeshComponent** Static_Mesh_Component_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnMeshAttachedToCharacter");

	AEnemyPawn_Parent_C_SpawnMeshAttachedToCharacter_Params params;
	params.Static_Mesh = Static_Mesh;
	params.Socket_Name = Socket_Name;
	params.Relative_Transform = Relative_Transform;
	params.Absolute_Location = Absolute_Location;
	params.Absolute_Rotation = Absolute_Rotation;
	params.Absolute_Scale = Absolute_Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Static_Mesh_Component_Reference != nullptr)
		*Static_Mesh_Component_Reference = params.Static_Mesh_Component_Reference;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay_in_Seconds               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::RestorePreviousMaterialOnCharacterMesh(float Delay_in_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialOnCharacterMesh");

	AEnemyPawn_Parent_C_RestorePreviousMaterialOnCharacterMesh_Params params;
	params.Delay_in_Seconds = Delay_in_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.CharacterSpawnInSafetyCheck
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::CharacterSpawnInSafetyCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.CharacterSpawnInSafetyCheck");

	AEnemyPawn_Parent_C_CharacterSpawnInSafetyCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterEyeColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Eye_Color_Inner                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Eye_Color_Outer                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AEnemyPawn_Parent_C::SetCharacterEyeColors(const struct FLinearColor& Eye_Color_Inner, const struct FLinearColor& Eye_Color_Outer)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterEyeColors");

	AEnemyPawn_Parent_C_SetCharacterEyeColors_Params params;
	params.Eye_Color_Inner = Eye_Color_Inner;
	params.Eye_Color_Outer = Eye_Color_Outer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterFresnelGlowColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Inner_Color                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            Outer_Color                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AEnemyPawn_Parent_C::SetCharacterFresnelGlowColors(const struct FLinearColor& Inner_Color, const struct FLinearColor& Outer_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetCharacterFresnelGlowColors");

	AEnemyPawn_Parent_C_SetCharacterFresnelGlowColors_Params params;
	params.Inner_Color = Inner_Color;
	params.Outer_Color = Outer_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnParticleSystemOnCharacterMesh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         ParticleSystemTemplate         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ParticleSystemComponentReferenceVar (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   AttachPointName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// TArray<struct FParticleSysParam> InstanceParameters             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           AutoActivate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AutoDestroy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AbsoluteLocation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AbsoluteRotation               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AbsoluteScale                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* PSComponentReference           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AEnemyPawn_Parent_C::SpawnParticleSystemOnCharacterMesh(class UParticleSystem* ParticleSystemTemplate, class UParticleSystemComponent* ParticleSystemComponentReferenceVar, const struct FName& AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, bool AutoActivate, bool AutoDestroy, bool AbsoluteLocation, bool AbsoluteRotation, bool AbsoluteScale, TArray<struct FParticleSysParam>* InstanceParameters, class UParticleSystemComponent** PSComponentReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnParticleSystemOnCharacterMesh");

	AEnemyPawn_Parent_C_SpawnParticleSystemOnCharacterMesh_Params params;
	params.ParticleSystemTemplate = ParticleSystemTemplate;
	params.ParticleSystemComponentReferenceVar = ParticleSystemComponentReferenceVar;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.Rotation = Rotation;
	params.AutoActivate = AutoActivate;
	params.AutoDestroy = AutoDestroy;
	params.AbsoluteLocation = AbsoluteLocation;
	params.AbsoluteRotation = AbsoluteRotation;
	params.AbsoluteScale = AbsoluteScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstanceParameters != nullptr)
		*InstanceParameters = params.InstanceParameters;
	if (PSComponentReference != nullptr)
		*PSComponentReference = params.PSComponentReference;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverridePhysicalMaterialOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhysicalMaterial*       Physical_Material_Override     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::OverridePhysicalMaterialOnCharacterMesh(class UPhysicalMaterial* Physical_Material_Override)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverridePhysicalMaterialOnCharacterMesh");

	AEnemyPawn_Parent_C_OverridePhysicalMaterialOnCharacterMesh_Params params;
	params.Physical_Material_Override = Physical_Material_Override;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyAwokenSkeletalMesh
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::DestroyAwokenSkeletalMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DestroyAwokenSkeletalMesh");

	AEnemyPawn_Parent_C_DestroyAwokenSkeletalMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialAndCopyParametersOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      New_Material_To_Apply          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::OverrideMaterialAndCopyParametersOnCharacterMesh(class UMaterialInterface* New_Material_To_Apply)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OverrideMaterialAndCopyParametersOnCharacterMesh");

	AEnemyPawn_Parent_C_OverrideMaterialAndCopyParametersOnCharacterMesh_Params params;
	params.New_Material_To_Apply = New_Material_To_Apply;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PlayAdditiveHitReacts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Hit_Direction                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UAnimMontage*            Anim_Montage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::PlayAdditiveHitReacts(const struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.PlayAdditiveHitReacts");

	AEnemyPawn_Parent_C_PlayAdditiveHitReacts_Params params;
	params.Hit_Direction = Hit_Direction;
	params.Anim_Montage = Anim_Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetActiveParticlesOnCharacterMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::SetActiveParticlesOnCharacterMesh(bool Active, bool Reset)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetActiveParticlesOnCharacterMesh");

	AEnemyPawn_Parent_C_SetActiveParticlesOnCharacterMesh_Params params;
	params.Active = Active;
	params.Reset = Reset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllCharacterMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Parameter_Name                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scalar_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::SetScalarParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, float Scalar_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetScalarParameterOnAllCharacterMIDs");

	AEnemyPawn_Parent_C_SetScalarParameterOnAllCharacterMIDs_Params params;
	params.Parameter_Name = Parameter_Name;
	params.Scalar_Value = Scalar_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllCharacterMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Parameter_Name                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Linear_Color                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AEnemyPawn_Parent_C::SetVectorParameterOnAllCharacterMIDs(const struct FName& Parameter_Name, const struct FLinearColor& Linear_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SetVectorParameterOnAllCharacterMIDs");

	AEnemyPawn_Parent_C_SetVectorParameterOnAllCharacterMIDs_Params params;
	params.Parameter_Name = Parameter_Name;
	params.Linear_Color = Linear_Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PickColorFromAnArrayOfColors
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FLinearColor>    ArrayOfColors                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor            Color                          (Parm, OutParm, IsPlainOldData)

void AEnemyPawn_Parent_C::PickColorFromAnArrayOfColors(TArray<struct FLinearColor>* ArrayOfColors, struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.PickColorFromAnArrayOfColors");

	AEnemyPawn_Parent_C_PickColorFromAnArrayOfColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrayOfColors != nullptr)
		*ArrayOfColors = params.ArrayOfColors;
	if (Color != nullptr)
		*Color = params.Color;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopDeathFX
// (Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::StopDeathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.StopDeathFX");

	AEnemyPawn_Parent_C_StopDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemyDeathVisuals
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HQ                             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::EnemyDeathVisuals(bool* HQ)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemyDeathVisuals");

	AEnemyPawn_Parent_C_EnemyDeathVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HQ != nullptr)
		*HQ = params.HQ;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.UserConstructionScript");

	AEnemyPawn_Parent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.FadeMiniBossLightOutTL__FinishedFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::FadeMiniBossLightOutTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.FadeMiniBossLightOutTL__FinishedFunc");

	AEnemyPawn_Parent_C_FadeMiniBossLightOutTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.FadeMiniBossLightOutTL__UpdateFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::FadeMiniBossLightOutTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.FadeMiniBossLightOutTL__UpdateFunc");

	AEnemyPawn_Parent_C_FadeMiniBossLightOutTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__FinishedFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__FinishedFunc");

	AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__UpdateFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::Enemy_Spawn_Out_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.Enemy Spawn Out TL__UpdateFunc");

	AEnemyPawn_Parent_C_Enemy_Spawn_Out_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__FinishedFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__FinishedFunc");

	AEnemyPawn_Parent_C_EnemySpawnInTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__UpdateFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__UpdateFunc");

	AEnemyPawn_Parent_C_EnemySpawnInTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__Spawn__EventFunc
// (BlueprintEvent)

void AEnemyPawn_Parent_C::EnemySpawnInTL__Spawn__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.EnemySpawnInTL__Spawn__EventFunc");

	AEnemyPawn_Parent_C_EnemySpawnInTL__Spawn__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEnemyPawn_Parent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.ReceiveBeginPlay");

	AEnemyPawn_Parent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AEnemyPawn_Parent_C::OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDeathPlayEffects");

	AEnemyPawn_Parent_C_OnDeathPlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.BeginDeathFX
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::BeginDeathFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.BeginDeathFX");

	AEnemyPawn_Parent_C_BeginDeathFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ManualDespawnEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RiftLocationWS                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AEnemyPawn_Parent_C::ManualDespawnEnemy(const struct FVector& RiftLocationWS)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.ManualDespawnEnemy");

	AEnemyPawn_Parent_C_ManualDespawnEnemy_Params params;
	params.RiftLocationWS = RiftLocationWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ManualEnemySpawnIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RiftLocationWS                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AEnemyPawn_Parent_C::ManualEnemySpawnIn(const struct FVector& RiftLocationWS)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.ManualEnemySpawnIn");

	AEnemyPawn_Parent_C_ManualEnemySpawnIn_Params params;
	params.RiftLocationWS = RiftLocationWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.FadeMiniBossLightOut
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::FadeMiniBossLightOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.FadeMiniBossLightOut");

	AEnemyPawn_Parent_C_FadeMiniBossLightOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnInSafetyCheck
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::SpawnInSafetyCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.SpawnInSafetyCheck");

	AEnemyPawn_Parent_C_SpawnInSafetyCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PostSpawnIn
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::PostSpawnIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.PostSpawnIn");

	AEnemyPawn_Parent_C_PostSpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DespawnEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 RiftLocationWS                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AEnemyPawn_Parent_C::DespawnEnemy(const struct FVector& RiftLocationWS)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DespawnEnemy");

	AEnemyPawn_Parent_C_DespawnEnemy_Params params;
	params.RiftLocationWS = RiftLocationWS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.DebugEnemySpawnIn
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::DebugEnemySpawnIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.DebugEnemySpawnIn");

	AEnemyPawn_Parent_C_DebugEnemySpawnIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnFinishedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnFinishedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnFinishedEncounterSpawn");

	AEnemyPawn_Parent_C_OnFinishedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnStartedEncounterSpawn
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnStartedEncounterSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnStartedEncounterSpawn");

	AEnemyPawn_Parent_C_OnStartedEncounterSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.PawnUniqueIDSet
// (Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::PawnUniqueIDSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.PawnUniqueIDSet");

	AEnemyPawn_Parent_C_PawnUniqueIDSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer*  DamageTags                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector*                Momentum                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             HitInfo                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AFortPawn**              InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayEffectContextHandle* EffectContext                  (BlueprintVisible, BlueprintReadOnly, Parm)

void AEnemyPawn_Parent_C::OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnDamagePlayEffects");

	AEnemyPawn_Parent_C_OnDamagePlayEffects_Params params;
	params.Damage = Damage;
	params.DamageTags = DamageTags;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::AdditiveHitReactDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.AdditiveHitReactDelay");

	AEnemyPawn_Parent_C_AdditiveHitReactDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBeginSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnBeginSleepEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnBeginSleepEffects");

	AEnemyPawn_Parent_C_OnBeginSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnEndSleepEffects
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AEnemyPawn_Parent_C::OnEndSleepEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnEndSleepEffects");

	AEnemyPawn_Parent_C_OnEndSleepEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelayCompleted
// (BlueprintCallable, BlueprintEvent)

void AEnemyPawn_Parent_C::RestorePreviousMaterialDelayCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelayCompleted");

	AEnemyPawn_Parent_C_RestorePreviousMaterialDelayCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delay_Amount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::RestorePreviousMaterialDelay(float Delay_Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.RestorePreviousMaterialDelay");

	AEnemyPawn_Parent_C_RestorePreviousMaterialDelay_Params params;
	params.Delay_Amount = Delay_Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnCheatUpdateSpecialEventGE
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bShouldUseSpecialEventGE       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::OnCheatUpdateSpecialEventGE(bool* bShouldUseSpecialEventGE)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.OnCheatUpdateSpecialEventGE");

	AEnemyPawn_Parent_C_OnCheatUpdateSpecialEventGE_Params params;
	params.bShouldUseSpecialEventGE = bShouldUseSpecialEventGE;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPawn_Parent.EnemyPawn_Parent_C.ExecuteUbergraph_EnemyPawn_Parent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEnemyPawn_Parent_C::ExecuteUbergraph_EnemyPawn_Parent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPawn_Parent.EnemyPawn_Parent_C.ExecuteUbergraph_EnemyPawn_Parent");

	AEnemyPawn_Parent_C_ExecuteUbergraph_EnemyPawn_Parent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

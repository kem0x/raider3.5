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

// Function WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Wind_location                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Storm_Cyl_Mesh_Match           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Wind_Cyl_Mesh_Array_Match_Index (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWindManager_C::Find_Matching_Wind_Mesh_Index_And_Write_Bool(const struct FVector& Wind_location, bool* Storm_Cyl_Mesh_Match, int* Wind_Cyl_Mesh_Array_Match_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool");

	AWindManager_C_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Params params;
	params.Wind_location = Wind_location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Storm_Cyl_Mesh_Match != nullptr)
		*Storm_Cyl_Mesh_Match = params.Storm_Cyl_Mesh_Match;
	if (Wind_Cyl_Mesh_Array_Match_Index != nullptr)
		*Wind_Cyl_Mesh_Array_Match_Index = params.Wind_Cyl_Mesh_Array_Match_Index;
}


// Function WindManager.WindManager_C.SetWindMatVariables
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Mid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_AnimatedCylinderCenter     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AnimatedCylinderCenter         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Set_Animating_Wind_Magnitude   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Animating_Wind_Magnitude       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_Static_Wind_Magnitude      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Static_Wind_Magnitude          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_CylinderCenter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 CylinderCenter                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Set_WindVector                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WindVector                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Set_WindCrossVector            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WindCrossVector                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Set_OverallOuterRadius         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OverallOuterRadius             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_OverallInnerRadius         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OverallInnerRadius             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_Wind_Still_0_or_Animating_1 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Wind_Still_0_or_Animating_1    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Set_Circular_Shader_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Circular_Shader_               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWindManager_C::SetWindMatVariables(class UMaterialInstanceDynamic* Mid, bool Set_AnimatedCylinderCenter, const struct FVector& AnimatedCylinderCenter, bool Set_Animating_Wind_Magnitude, float Animating_Wind_Magnitude, bool Set_Static_Wind_Magnitude, float Static_Wind_Magnitude, bool Set_CylinderCenter, const struct FVector& CylinderCenter, bool Set_WindVector, const struct FVector& WindVector, bool Set_WindCrossVector, const struct FVector& WindCrossVector, bool Set_OverallOuterRadius, float OverallOuterRadius, bool Set_OverallInnerRadius, float OverallInnerRadius, bool Set_Wind_Still_0_or_Animating_1, float Wind_Still_0_or_Animating_1, bool Set_Circular_Shader_, float Circular_Shader_, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.SetWindMatVariables");

	AWindManager_C_SetWindMatVariables_Params params;
	params.Mid = Mid;
	params.Set_AnimatedCylinderCenter = Set_AnimatedCylinderCenter;
	params.AnimatedCylinderCenter = AnimatedCylinderCenter;
	params.Set_Animating_Wind_Magnitude = Set_Animating_Wind_Magnitude;
	params.Animating_Wind_Magnitude = Animating_Wind_Magnitude;
	params.Set_Static_Wind_Magnitude = Set_Static_Wind_Magnitude;
	params.Static_Wind_Magnitude = Static_Wind_Magnitude;
	params.Set_CylinderCenter = Set_CylinderCenter;
	params.CylinderCenter = CylinderCenter;
	params.Set_WindVector = Set_WindVector;
	params.WindVector = WindVector;
	params.Set_WindCrossVector = Set_WindCrossVector;
	params.WindCrossVector = WindCrossVector;
	params.Set_OverallOuterRadius = Set_OverallOuterRadius;
	params.OverallOuterRadius = OverallOuterRadius;
	params.Set_OverallInnerRadius = Set_OverallInnerRadius;
	params.OverallInnerRadius = OverallInnerRadius;
	params.Set_Wind_Still_0_or_Animating_1 = Set_Wind_Still_0_or_Animating_1;
	params.Wind_Still_0_or_Animating_1 = Wind_Still_0_or_Animating_1;
	params.Set_Circular_Shader_ = Set_Circular_Shader_;
	params.Circular_Shader_ = Circular_Shader_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WindManager.WindManager_C.UpdateWindDeltaCyl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Static_Cylinder_Outer_Radius   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Mid                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Wind_Circular_              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWindManager_C::UpdateWindDeltaCyl(float Static_Cylinder_Outer_Radius, float Duration, class UMaterialInstanceDynamic* Mid, bool Is_Wind_Circular_)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.UpdateWindDeltaCyl");

	AWindManager_C_UpdateWindDeltaCyl_Params params;
	params.Static_Cylinder_Outer_Radius = Static_Cylinder_Outer_Radius;
	params.Duration = Duration;
	params.Mid = Mid;
	params.Is_Wind_Circular_ = Is_Wind_Circular_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.RemoveWindCylinder
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder WindImpulseCylinder            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWindManager_C::RemoveWindCylinder(const struct FFortWindImpulseCylinder& WindImpulseCylinder)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.RemoveWindCylinder");

	AWindManager_C_RemoveWindCylinder_Params params;
	params.WindImpulseCylinder = WindImpulseCylinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.UpdateStormWindCylinder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder Wind_Impulse                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFortWindImpulseCylinderDelta Wind_Delta                     (BlueprintVisible, BlueprintReadOnly, Parm)

void AWindManager_C::UpdateStormWindCylinder(const struct FFortWindImpulseCylinder& Wind_Impulse, const struct FFortWindImpulseCylinderDelta& Wind_Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.UpdateStormWindCylinder");

	AWindManager_C_UpdateStormWindCylinder_Params params;
	params.Wind_Impulse = Wind_Impulse;
	params.Wind_Delta = Wind_Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Calculate Camera Position
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USceneCaptureComponent2D* Scene_Capture                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector AWindManager_C::Calculate_Camera_Position(float Scale, class USceneCaptureComponent2D* Scene_Capture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.Calculate Camera Position");

	AWindManager_C_Calculate_Camera_Position_Params params;
	params.Scale = Scale;
	params.Scene_Capture = Scene_Capture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WindManager.WindManager_C.SetRenderOnlyAssets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWindManager_C::SetRenderOnlyAssets(class UPrimitiveComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.SetRenderOnlyAssets");

	AWindManager_C_SetRenderOnlyAssets_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.InitializeOrthoSettings
// (Public, BlueprintCallable, BlueprintEvent)

void AWindManager_C::InitializeOrthoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.InitializeOrthoSettings");

	AWindManager_C_InitializeOrthoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AWindManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.UserConstructionScript");

	AWindManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Add Render To Texture Particle
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*         EmitterTemplate                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              InTransform                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AWindManager_C::Add_Render_To_Texture_Particle(class UParticleSystem* EmitterTemplate, const struct FTransform& InTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.Add Render To Texture Particle");

	AWindManager_C_Add_Render_To_Texture_Particle_Params params;
	params.EmitterTemplate = EmitterTemplate;
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.OnWorldReady
// (Event, Public, BlueprintEvent)

void AWindManager_C::OnWorldReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.OnWorldReady");

	AWindManager_C_OnWorldReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWindManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.ReceiveTick");

	AWindManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Register player for render to texture purposes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Effect_Water_Interaction_FX    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPrimitiveComponent*     Gameplay_Wind_INteraction_Effects (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWindManager_C::Register_player_for_render_to_texture_purposes(class UPrimitiveComponent* Effect_Water_Interaction_FX, class UPrimitiveComponent* Gameplay_Wind_INteraction_Effects)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.Register player for render to texture purposes");

	AWindManager_C_Register_player_for_render_to_texture_purposes_Params params;
	params.Effect_Water_Interaction_FX = Effect_Water_Interaction_FX;
	params.Gameplay_Wind_INteraction_Effects = Gameplay_Wind_INteraction_Effects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.AddWindParticleSystemComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent** ParticleSystemComponent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWindManager_C::AddWindParticleSystemComponent(class UParticleSystemComponent** ParticleSystemComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.AddWindParticleSystemComponent");

	AWindManager_C_AddWindParticleSystemComponent_Params params;
	params.ParticleSystemComponent = ParticleSystemComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.OnWindImpulseCylinderCreation
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder* WindImpulseCylinder            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FFortWindImpulseCylinderDelta* WindImpulseCylinderDelta       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWindManager_C::OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder* WindImpulseCylinder, struct FFortWindImpulseCylinderDelta* WindImpulseCylinderDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.OnWindImpulseCylinderCreation");

	AWindManager_C_OnWindImpulseCylinderCreation_Params params;
	params.WindImpulseCylinder = WindImpulseCylinder;
	params.WindImpulseCylinderDelta = WindImpulseCylinderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.OnWindImpulseCylinderDeath
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder* WindImpulseCylinder            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWindManager_C::OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder* WindImpulseCylinder)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.OnWindImpulseCylinderDeath");

	AWindManager_C_OnWindImpulseCylinderDeath_Params params;
	params.WindImpulseCylinder = WindImpulseCylinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortWindImpulseCylinder* WindImpulseCylinder            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AWindManager_C::OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder* WindImpulseCylinder)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete");

	AWindManager_C_OnWindImpulseCylinderDeltaComplete_Params params;
	params.WindImpulseCylinder = WindImpulseCylinder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.SpawnTestWind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ImpulseMagnitude               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWindManager_C::SpawnTestWind(float Radius, float ImpulseMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.SpawnTestWind");

	AWindManager_C_SpawnTestWind_Params params;
	params.Radius = Radius;
	params.ImpulseMagnitude = ImpulseMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Play Water Splash Particle System At Location
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Particle_Transform             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void AWindManager_C::Play_Water_Splash_Particle_System_At_Location(const struct FTransform& Particle_Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.Play Water Splash Particle System At Location");

	AWindManager_C_Play_Water_Splash_Particle_System_At_Location_Params params;
	params.Particle_Transform = Particle_Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Add Wind Component
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InComponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWindManager_C::Add_Wind_Component(class UPrimitiveComponent* InComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.Add Wind Component");

	AWindManager_C_Add_Wind_Component_Params params;
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWindManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.ReceiveBeginPlay");

	AWindManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.Update Test
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMagnitude                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWindManager_C::Update_Test(float NewMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.Update Test");

	AWindManager_C_Update_Test_Params params;
	params.NewMagnitude = NewMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WindManager.WindManager_C.ExecuteUbergraph_WindManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWindManager_C::ExecuteUbergraph_WindManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WindManager.WindManager_C.ExecuteUbergraph_WindManager");

	AWindManager_C_ExecuteUbergraph_WindManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

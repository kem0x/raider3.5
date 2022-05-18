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

// Function WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool
struct AWindManager_C_Find_Matching_Wind_Mesh_Index_And_Write_Bool_Params
{
	struct FVector                                     Wind_location;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Storm_Cyl_Mesh_Match;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Wind_Cyl_Mesh_Array_Match_Index;                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.SetWindMatVariables
struct AWindManager_C_SetWindMatVariables_Params
{
	class UMaterialInstanceDynamic*                    Mid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_AnimatedCylinderCenter;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnimatedCylinderCenter;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Set_Animating_Wind_Magnitude;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Animating_Wind_Magnitude;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Static_Wind_Magnitude;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Static_Wind_Magnitude;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_CylinderCenter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CylinderCenter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Set_WindVector;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WindVector;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Set_WindCrossVector;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WindCrossVector;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Set_OverallOuterRadius;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverallOuterRadius;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_OverallInnerRadius;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverallInnerRadius;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Wind_Still_0_or_Animating_1;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Wind_Still_0_or_Animating_1;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Set_Circular_Shader_;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Circular_Shader_;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.UpdateWindDeltaCyl
struct AWindManager_C_UpdateWindDeltaCyl_Params
{
	float                                              Static_Cylinder_Outer_Radius;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Is_Wind_Circular_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.RemoveWindCylinder
struct AWindManager_C_RemoveWindCylinder_Params
{
	struct FFortWindImpulseCylinder                    WindImpulseCylinder;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WindManager.WindManager_C.UpdateStormWindCylinder
struct AWindManager_C_UpdateStormWindCylinder_Params
{
	struct FFortWindImpulseCylinder                    Wind_Impulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortWindImpulseCylinderDelta               Wind_Delta;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WindManager.WindManager_C.Calculate Camera Position
struct AWindManager_C_Calculate_Camera_Position_Params
{
	float                                              Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneCaptureComponent2D*                    Scene_Capture;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WindManager.WindManager_C.SetRenderOnlyAssets
struct AWindManager_C_SetRenderOnlyAssets_Params
{
	class UPrimitiveComponent*                         InComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WindManager.WindManager_C.InitializeOrthoSettings
struct AWindManager_C_InitializeOrthoSettings_Params
{
};

// Function WindManager.WindManager_C.UserConstructionScript
struct AWindManager_C_UserConstructionScript_Params
{
};

// Function WindManager.WindManager_C.Add Render To Texture Particle
struct AWindManager_C_Add_Render_To_Texture_Particle_Params
{
	class UParticleSystem*                             EmitterTemplate;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InTransform;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WindManager.WindManager_C.OnWorldReady
struct AWindManager_C_OnWorldReady_Params
{
};

// Function WindManager.WindManager_C.ReceiveTick
struct AWindManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.Register player for render to texture purposes
struct AWindManager_C_Register_player_for_render_to_texture_purposes_Params
{
	class UPrimitiveComponent*                         Effect_Water_Interaction_FX;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         Gameplay_Wind_INteraction_Effects;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WindManager.WindManager_C.AddWindParticleSystemComponent
struct AWindManager_C_AddWindParticleSystemComponent_Params
{
	class UParticleSystemComponent**                   ParticleSystemComponent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WindManager.WindManager_C.OnWindImpulseCylinderCreation
struct AWindManager_C_OnWindImpulseCylinderCreation_Params
{
	struct FFortWindImpulseCylinder*                   WindImpulseCylinder;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FFortWindImpulseCylinderDelta*              WindImpulseCylinderDelta;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WindManager.WindManager_C.OnWindImpulseCylinderDeath
struct AWindManager_C_OnWindImpulseCylinderDeath_Params
{
	struct FFortWindImpulseCylinder*                   WindImpulseCylinder;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete
struct AWindManager_C_OnWindImpulseCylinderDeltaComplete_Params
{
	struct FFortWindImpulseCylinder*                   WindImpulseCylinder;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WindManager.WindManager_C.SpawnTestWind
struct AWindManager_C_SpawnTestWind_Params
{
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseMagnitude;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.Play Water Splash Particle System At Location
struct AWindManager_C_Play_Water_Splash_Particle_System_At_Location_Params
{
	struct FTransform                                  Particle_Transform;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function WindManager.WindManager_C.Add Wind Component
struct AWindManager_C_Add_Wind_Component_Params
{
	class UPrimitiveComponent*                         InComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WindManager.WindManager_C.ReceiveBeginPlay
struct AWindManager_C_ReceiveBeginPlay_Params
{
};

// Function WindManager.WindManager_C.Update Test
struct AWindManager_C_Update_Test_Params
{
	float                                              NewMagnitude;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WindManager.WindManager_C.ExecuteUbergraph_WindManager
struct AWindManager_C_ExecuteUbergraph_WindManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

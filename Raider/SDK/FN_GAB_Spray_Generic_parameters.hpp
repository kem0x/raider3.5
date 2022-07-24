#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GAB_Spray_Generic.GAB_Spray_Generic_C.GetMontageToPlay
struct UGAB_Spray_Generic_C_GetMontageToPlay_Params
{
	class UFortMontageItemDefinitionBase**             EmoteAsset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortCustomBodyType>*                  BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortCustomGender>*                    Gender;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GAB_Spray_Generic.GAB_Spray_Generic_C.TargetLineTrace
struct UGAB_Spray_Generic_C_TargetLineTrace_Params
{
	class AFortPawn*                                   ActivatingPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitSomething;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function GAB_Spray_Generic.GAB_Spray_Generic_C.OnMontageStartedPlaying
struct UGAB_Spray_Generic_C_OnMontageStartedPlaying_Params
{
};

// Function GAB_Spray_Generic.GAB_Spray_Generic_C.ExecuteUbergraph_GAB_Spray_Generic
struct UGAB_Spray_Generic_C_ExecuteUbergraph_GAB_Spray_Generic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

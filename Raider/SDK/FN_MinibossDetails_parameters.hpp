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

// Function MinibossDetails.MinibossDetails_C.StopIntroAnimation
struct UMinibossDetails_C_StopIntroAnimation_Params
{
};

// Function MinibossDetails.MinibossDetails_C.OnIntroAnimationFinished
struct UMinibossDetails_C_OnIntroAnimationFinished_Params
{
};

// Function MinibossDetails.MinibossDetails_C.StopOutroAnimation
struct UMinibossDetails_C_StopOutroAnimation_Params
{
};

// Function MinibossDetails.MinibossDetails_C.OnOutroAnimationFinished
struct UMinibossDetails_C_OnOutroAnimationFinished_Params
{
};

// Function MinibossDetails.MinibossDetails_C.StopKillAnimation
struct UMinibossDetails_C_StopKillAnimation_Params
{
};

// Function MinibossDetails.MinibossDetails_C.OnKillAnimationFinished
struct UMinibossDetails_C_OnKillAnimationFinished_Params
{
};

// Function MinibossDetails.MinibossDetails_C.Kill
struct UMinibossDetails_C_Kill_Params
{
};

// Function MinibossDetails.MinibossDetails_C.Outro
struct UMinibossDetails_C_Outro_Params
{
};

// Function MinibossDetails.MinibossDetails_C.Intro
struct UMinibossDetails_C_Intro_Params
{
};

// Function MinibossDetails.MinibossDetails_C.Update Health
struct UMinibossDetails_C_Update_Health_Params
{
	float                                              InPercent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinibossDetails.MinibossDetails_C.PopulateModifiers
struct UMinibossDetails_C_PopulateModifiers_Params
{
	TArray<struct FText>                               inModifiersArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MinibossDetails.MinibossDetails_C.InitializeMiniBossDetails
struct UMinibossDetails_C_InitializeMiniBossDetails_Params
{
	TArray<struct FText>                               inModifiers;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FText                                       InName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       inUpgradeName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              inHealthPercent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               showPortrait;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      NameStyle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ModifiersStyle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Name_Alignment;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Modifiers_Alignment;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Health_Bar_Width;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinibossDetails.MinibossDetails_C.OnTargetChanged
struct UMinibossDetails_C_OnTargetChanged_Params
{
};

// Function MinibossDetails.MinibossDetails_C.OnTargetHealthChanged
struct UMinibossDetails_C_OnTargetHealthChanged_Params
{
};

// Function MinibossDetails.MinibossDetails_C.OnTargetDied
struct UMinibossDetails_C_OnTargetDied_Params
{
};

// Function MinibossDetails.MinibossDetails_C.OnTargetDestroyed
struct UMinibossDetails_C_OnTargetDestroyed_Params
{
};

// Function MinibossDetails.MinibossDetails_C.ExecuteUbergraph_MinibossDetails
struct UMinibossDetails_C_ExecuteUbergraph_MinibossDetails_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

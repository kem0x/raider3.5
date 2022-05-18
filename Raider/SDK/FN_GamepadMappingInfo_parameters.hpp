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

// Function GamepadMappingInfo.GamepadMappingInfo_C.ClearAllComboTextLines
struct UGamepadMappingInfo_C_ClearAllComboTextLines_Params
{
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonTextForSTWCombatProCombat
struct UGamepadMappingInfo_C_InitializeListOfButtonTextForSTWCombatProCombat_Params
{
	TArray<struct FText>                               ButtonTextLabels;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.SetTextFieldVisibilityForExtraLine
struct UGamepadMappingInfo_C_SetTextFieldVisibilityForExtraLine_Params
{
	class UTextBlock*                                  TextWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay
struct UGamepadMappingInfo_C_GetDesiredSlateVisibilityForAbilityChordFromTextDisplay_Params
{
	class UTextBlock*                                  TextWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   DesiredSlateVisibility;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonTextForSTWCombatProBuild
struct UGamepadMappingInfo_C_InitializeListOfButtonTextForSTWCombatProBuild_Params
{
	TArray<struct FText>                               ButtonTextLabels;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.InitializeListOfButtonLabelTextWidgets
struct UGamepadMappingInfo_C_InitializeListOfButtonLabelTextWidgets_Params
{
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed Hide or Show Unused Text Lines
struct UGamepadMappingInfo_C_Handle_Config_Changed_Hide_or_Show_Unused_Text_Lines_Params
{
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed STW Combat Mode
struct UGamepadMappingInfo_C_Handle_Config_Changed_STW_Combat_Mode_Params
{
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.Handle Config Changed STW Build Mode
struct UGamepadMappingInfo_C_Handle_Config_Changed_STW_Build_Mode_Params
{
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged
struct UGamepadMappingInfo_C_HandleConfigChanged_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.HandleConfigChanged_Athena
struct UGamepadMappingInfo_C_HandleConfigChanged_Athena_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.OnConfigChanged
struct UGamepadMappingInfo_C_OnConfigChanged_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.Update Displayed Mapping
struct UGamepadMappingInfo_C_Update_Displayed_Mapping_Params
{
	int                                                Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Configuration;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.Construct
struct UGamepadMappingInfo_C_Construct_Params
{
};

// Function GamepadMappingInfo.GamepadMappingInfo_C.ExecuteUbergraph_GamepadMappingInfo
struct UGamepadMappingInfo_C_ExecuteUbergraph_GamepadMappingInfo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

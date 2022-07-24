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

// Function AlterationOption.AlterationOption_C.SetWidgetSettings
struct UAlterationOption_C_SetWidgetSettings_Params
{
	TEnumAsByte<EFortBrushSize>                        InIconSize;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOption.AlterationOption_C.GetValidBrush
struct UAlterationOption_C_GetValidBrush_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AlterationOption.AlterationOption_C.HasValidBrush
struct UAlterationOption_C_HasValidBrush_Params
{
	bool                                               ValidBrush;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOption.AlterationOption_C.InitIcon
struct UAlterationOption_C_InitIcon_Params
{
};

// Function AlterationOption.AlterationOption_C.IntroPlay
struct UAlterationOption_C_IntroPlay_Params
{
};

// Function AlterationOption.AlterationOption_C.IntroReset
struct UAlterationOption_C_IntroReset_Params
{
};

// Function AlterationOption.AlterationOption_C.SetupPips
struct UAlterationOption_C_SetupPips_Params
{
};

// Function AlterationOption.AlterationOption_C.OnSetup
struct UAlterationOption_C_OnSetup_Params
{
};

// Function AlterationOption.AlterationOption_C.HandleInputMethodChanged
struct UAlterationOption_C_HandleInputMethodChanged_Params
{
	ECommonInputType                                   bNewInputType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AlterationOption.AlterationOption_C.ExecuteUbergraph_AlterationOption
struct UAlterationOption_C_ExecuteUbergraph_AlterationOption_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

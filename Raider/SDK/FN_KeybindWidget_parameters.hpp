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

// Function KeybindWidget.KeybindWidget_C.ShowHoldBackPlate
struct UKeybindWidget_C_ShowHoldBackPlate_Params
{
};

// Function KeybindWidget.KeybindWidget_C.Get Bound Action
struct UKeybindWidget_C_Get_Bound_Action_Params
{
	struct FName                                       Action;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KeybindWidget.KeybindWidget_C.Set Brush Size
struct UKeybindWidget_C_Set_Brush_Size_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeybindWidget.KeybindWidget_C.Get Brush Size
struct UKeybindWidget_C_Get_Brush_Size_Params
{
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function KeybindWidget.KeybindWidget_C.Construct
struct UKeybindWidget_C_Construct_Params
{
};

// Function KeybindWidget.KeybindWidget_C.Update
struct UKeybindWidget_C_Update_Params
{
};

// Function KeybindWidget.KeybindWidget_C.PreConstruct
struct UKeybindWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function KeybindWidget.KeybindWidget_C.UpdateFrameSize
struct UKeybindWidget_C_UpdateFrameSize_Params
{
};

// Function KeybindWidget.KeybindWidget_C.Destruct
struct UKeybindWidget_C_Destruct_Params
{
};

// Function KeybindWidget.KeybindWidget_C.ExecuteUbergraph_KeybindWidget
struct UKeybindWidget_C_ExecuteUbergraph_KeybindWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

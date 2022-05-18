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

// Function StyleLibrary.StyleLibrary_C.Get Conning Color For Specific Difficulty
struct UStyleLibrary_C_Get_Conning_Color_For_Specific_Difficulty_Params
{
	int                                                Difficulty_Value;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Difficulty_Linear_Color;                                  // (Parm, OutParm, IsPlainOldData)
	bool                                               Invalid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Conning Color From Difficulty Value
struct UStyleLibrary_C_Get_Conning_Color_From_Difficulty_Value_Params
{
	int                                                Player_Skill_Level;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Content_Difficulty_Level;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameDifficultyInfo                         Game_Difficulty_Info;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Content_Skill_Points;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Difficulty_Linear_Color;                                  // (Parm, OutParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ToolTipText;                                              // (Parm, OutParm)
	int                                                DifficultyValue;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get HarvestWeakPoint Color
struct UStyleLibrary_C_Get_HarvestWeakPoint_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                StyleSheetOut;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.ResizeBrush
struct UStyleLibrary_C_ResizeBrush_Params
{
	TEnumAsByte<EFortBrushSize>                        BrushSize;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 BaseBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 NewParam;                                                 // (Parm, OutParm)
};

// Function StyleLibrary.StyleLibrary_C.Get Base & Buff Colors
struct UStyleLibrary_C_Get_Base___Buff_Colors_Params
{
	EFortStatValueDisplayType                          Display_Type;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortBuffState                                     Buff_State;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Base;                                                     // (Parm, OutParm, IsPlainOldData)
	struct FLinearColor                                Buff;                                                     // (Parm, OutParm, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Bolt Elemental Color
struct UStyleLibrary_C_Get_Bolt_Elemental_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Ice Elemental Color
struct UStyleLibrary_C_Get_Ice_Elemental_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Fire Elemental Color
struct UStyleLibrary_C_Get_Fire_Elemental_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Unique Color
struct UStyleLibrary_C_Get_Unique_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Item Size
struct UStyleLibrary_C_Get_Item_Size_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Item_Size;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Debuff Color
struct UStyleLibrary_C_Get_Debuff_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Buff Color
struct UStyleLibrary_C_Get_Buff_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Item Icon Size
struct UStyleLibrary_C_Get_Item_Icon_Size_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Icon_Size;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Standard Icon Size
struct UStyleLibrary_C_Get_Standard_Icon_Size_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EFortBrushSize>                        Brush_Size;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Icon_Size;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function StyleLibrary.StyleLibrary_C.Get Theme
struct UStyleLibrary_C_Get_Theme_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EFortUITheme>                          Theme_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortUITheme                                Theme;                                                    // (Parm, OutParm)
};

// Function StyleLibrary.StyleLibrary_C.Get Theme Color
struct UStyleLibrary_C_Get_Theme_Color_Params
{
	struct FFortUIStylesheet                           Stylesheet;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EFortUITheme>                          Theme_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortUIThemeColor>                     Color_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Theme_Color;                                              // (Parm, OutParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

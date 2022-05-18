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

// Function IconTabButtonReplay.IconTabButtonReplay_C.SetChangeIconColorWhenSelected
struct UIconTabButtonReplay_C_SetChangeIconColorWhenSelected_Params
{
	bool                                               ChangeColorWhenSelected;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SelectedColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 UnselectedColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.Update Bang State
struct UIconTabButtonReplay_C_Update_Bang_State_Params
{
	bool                                               bBangEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.SetTutorialBorderStyle
struct UIconTabButtonReplay_C_SetTutorialBorderStyle_Params
{
	class UClass*                                      BorderStyle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.ShowText
struct UIconTabButtonReplay_C_ShowText_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.Set Icon
struct UIconTabButtonReplay_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.Set Text
struct UIconTabButtonReplay_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.PreConstruct
struct UIconTabButtonReplay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.SetTabLabelInfo
struct UIconTabButtonReplay_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnSelected
struct UIconTabButtonReplay_C_OnSelected_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnDeselected
struct UIconTabButtonReplay_C_OnDeselected_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.Construct
struct UIconTabButtonReplay_C_Construct_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnHovered
struct UIconTabButtonReplay_C_OnHovered_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnUnhovered
struct UIconTabButtonReplay_C_OnUnhovered_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnEnabled
struct UIconTabButtonReplay_C_OnEnabled_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnDisabled
struct UIconTabButtonReplay_C_OnDisabled_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.OnCurrentTextStyleChanged
struct UIconTabButtonReplay_C_OnCurrentTextStyleChanged_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.ExecuteUbergraph_IconTabButtonReplay
struct UIconTabButtonReplay_C_ExecuteUbergraph_IconTabButtonReplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

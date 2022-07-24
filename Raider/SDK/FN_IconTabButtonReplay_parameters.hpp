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

// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnSelected
struct UIconTabButtonReplay_C_BP_OnSelected_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnDeselected
struct UIconTabButtonReplay_C_BP_OnDeselected_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.Construct
struct UIconTabButtonReplay_C_Construct_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnHovered
struct UIconTabButtonReplay_C_BP_OnHovered_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnUnhovered
struct UIconTabButtonReplay_C_BP_OnUnhovered_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnEnabled
struct UIconTabButtonReplay_C_BP_OnEnabled_Params
{
};

// Function IconTabButtonReplay.IconTabButtonReplay_C.BP_OnDisabled
struct UIconTabButtonReplay_C_BP_OnDisabled_Params
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

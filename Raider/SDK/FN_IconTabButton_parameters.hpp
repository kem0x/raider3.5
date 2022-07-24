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

// Function IconTabButton.IconTabButton_C.SetChangeIconColorWhenSelected
struct UIconTabButton_C_SetChangeIconColorWhenSelected_Params
{
	bool                                               ChangeColorWhenSelected;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 SelectedColor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 UnselectedColor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTabButton.IconTabButton_C.Update Bang State
struct UIconTabButton_C_Update_Bang_State_Params
{
	bool                                               bBangEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle
struct UIconTabButton_C_SetTutorialBorderStyle_Params
{
	class UClass*                                      BorderStyle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTabButton.IconTabButton_C.ShowText
struct UIconTabButton_C_ShowText_Params
{
};

// Function IconTabButton.IconTabButton_C.Set Icon
struct UIconTabButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTabButton.IconTabButton_C.Set Text
struct UIconTabButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IconTabButton.IconTabButton_C.PreConstruct
struct UIconTabButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function IconTabButton.IconTabButton_C.SetTabLabelInfo
struct UIconTabButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function IconTabButton.IconTabButton_C.BP_OnSelected
struct UIconTabButton_C_BP_OnSelected_Params
{
};

// Function IconTabButton.IconTabButton_C.BP_OnDeselected
struct UIconTabButton_C_BP_OnDeselected_Params
{
};

// Function IconTabButton.IconTabButton_C.Construct
struct UIconTabButton_C_Construct_Params
{
};

// Function IconTabButton.IconTabButton_C.BP_OnHovered
struct UIconTabButton_C_BP_OnHovered_Params
{
};

// Function IconTabButton.IconTabButton_C.BP_OnUnhovered
struct UIconTabButton_C_BP_OnUnhovered_Params
{
};

// Function IconTabButton.IconTabButton_C.BP_OnEnabled
struct UIconTabButton_C_BP_OnEnabled_Params
{
};

// Function IconTabButton.IconTabButton_C.BP_OnDisabled
struct UIconTabButton_C_BP_OnDisabled_Params
{
};

// Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged
struct UIconTabButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton
struct UIconTabButton_C_ExecuteUbergraph_IconTabButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

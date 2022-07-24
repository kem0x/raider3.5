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

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialNameID
struct UQuestsCountIconTabButton_C_SetTutorialNameID_Params
{
	struct FName                                       InTutorialBangID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Bang State
struct UQuestsCountIconTabButton_C_Update_Bang_State_Params
{
	bool                                               bBangEnabled;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Text
struct UQuestsCountIconTabButton_C_Update_Text_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialBorderStyle
struct UQuestsCountIconTabButton_C_SetTutorialBorderStyle_Params
{
	class UClass*                                      BorderStyle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ShowText
struct UQuestsCountIconTabButton_C_ShowText_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Icon
struct UQuestsCountIconTabButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Text
struct UQuestsCountIconTabButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnCurrentTextStyleChanged
struct UQuestsCountIconTabButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.PreConstruct
struct UQuestsCountIconTabButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTabLabelInfo
struct UQuestsCountIconTabButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnSelected
struct UQuestsCountIconTabButton_C_BP_OnSelected_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnDeselected
struct UQuestsCountIconTabButton_C_BP_OnDeselected_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Construct
struct UQuestsCountIconTabButton_C_Construct_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnHovered
struct UQuestsCountIconTabButton_C_BP_OnHovered_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnUnhovered
struct UQuestsCountIconTabButton_C_BP_OnUnhovered_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Handle Quest Count Updated
struct UQuestsCountIconTabButton_C_Handle_Quest_Count_Updated_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnEnabled
struct UQuestsCountIconTabButton_C_BP_OnEnabled_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnDisabled
struct UQuestsCountIconTabButton_C_BP_OnDisabled_Params
{
};

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ExecuteUbergraph_QuestsCountIconTabButton
struct UQuestsCountIconTabButton_C_ExecuteUbergraph_QuestsCountIconTabButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

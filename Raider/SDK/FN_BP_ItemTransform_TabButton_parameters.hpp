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

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get FortPC
struct UBP_ItemTransform_TabButton_C_Get_FortPC_Params
{
	class AFortPlayerController*                       FortPC;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Item from Transform Seen State
struct UBP_ItemTransform_TabButton_C_Get_Item_from_Transform_Seen_State_Params
{
	class UFortAccountItem*                            Transform_Key;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortAccountItem*                            Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Calculate Unseen Keys
struct UBP_ItemTransform_TabButton_C_Calculate_Unseen_Keys_Params
{
	TArray<class UFortAccountItem*>                    Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                NumUnseen;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Get Tab Id as Request Type
struct UBP_ItemTransform_TabButton_C_Get_Tab_Id_as_Request_Type_Params
{
	EConversionControlKeyRequest                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Tab Id
struct UBP_ItemTransform_TabButton_C_Set_Tab_Id_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Refresh Bang State
struct UBP_ItemTransform_TabButton_C_Refresh_Bang_State_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Icon
struct UBP_ItemTransform_TabButton_C_Set_Icon_Params
{
	struct FSlateBrush                                 IconBrush;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Set Text
struct UBP_ItemTransform_TabButton_C_Set_Text_Params
{
	struct FText                                       ButtonText;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnCurrentTextStyleChanged
struct UBP_ItemTransform_TabButton_C_OnCurrentTextStyleChanged_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.PreConstruct
struct UBP_ItemTransform_TabButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.SetTabLabelInfo
struct UBP_ItemTransform_TabButton_C_SetTabLabelInfo_Params
{
	struct FFortTabButtonLabelInfo                     TabLabelInfo;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.Construct
struct UBP_ItemTransform_TabButton_C_Construct_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnSelected
struct UBP_ItemTransform_TabButton_C_OnSelected_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnDeselected
struct UBP_ItemTransform_TabButton_C_OnDeselected_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnHovered
struct UBP_ItemTransform_TabButton_C_OnHovered_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.OnUnhovered
struct UBP_ItemTransform_TabButton_C_OnUnhovered_Params
{
};

// Function BP_ItemTransform_TabButton.BP_ItemTransform_TabButton_C.ExecuteUbergraph_BP_ItemTransform_TabButton
struct UBP_ItemTransform_TabButton_C_ExecuteUbergraph_BP_ItemTransform_TabButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function HorizontalTabList.HorizontalTabList_C.SetVerticalAlignment
struct UHorizontalTabList_C_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    FillVertically;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.UpdateGamepadKeyVisibility
struct UHorizontalTabList_C_UpdateGamepadKeyVisibility_Params
{
};

// Function HorizontalTabList.HorizontalTabList_C.Get Tab From Id
struct UHorizontalTabList_C_Get_Tab_From_Id_Params
{
	struct FName                                       TabNameID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.ChangeInputBindings
struct UHorizontalTabList_C_ChangeInputBindings_Params
{
	struct FDataTableRowHandle                         NextBinding;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDataTableRowHandle                         PreviousBinding;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function HorizontalTabList.HorizontalTabList_C.Construct
struct UHorizontalTabList_C_Construct_Params
{
};

// Function HorizontalTabList.HorizontalTabList_C.Handle OnInputMethodChanged
struct UHorizontalTabList_C_Handle_OnInputMethodChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.PreConstruct
struct UHorizontalTabList_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.Previous Visibility
struct UHorizontalTabList_C_Previous_Visibility_Params
{
};

// Function HorizontalTabList.HorizontalTabList_C.CustomEvent_0_1
struct UHorizontalTabList_C_CustomEvent_0_1_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.HandleTabCreated
struct UHorizontalTabList_C_HandleTabCreated_Params
{
	struct FName*                                      TabNameID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton**                              TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function HorizontalTabList.HorizontalTabList_C.ExecuteUbergraph_HorizontalTabList
struct UHorizontalTabList_C_ExecuteUbergraph_HorizontalTabList_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

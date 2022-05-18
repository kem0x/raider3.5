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

// Function InfoEntry.InfoEntry_C.DoesItemHaveChildren
struct UInfoEntry_C_DoesItemHaveChildren_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.GetIndentLevel
struct UInfoEntry_C_GetIndentLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.IsItemExpanded
struct UInfoEntry_C_IsItemExpanded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.GetData
struct UInfoEntry_C_GetData_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.OnAcquireFromPool
struct UInfoEntry_C_OnAcquireFromPool_Params
{
};

// Function InfoEntry.InfoEntry_C.OnReleaseToPool
struct UInfoEntry_C_OnReleaseToPool_Params
{
};

// Function InfoEntry.InfoEntry_C.Private_OnExpanderArrowShiftClicked
struct UInfoEntry_C_Private_OnExpanderArrowShiftClicked_Params
{
};

// Function InfoEntry.InfoEntry_C.RegisterOnClicked
struct UInfoEntry_C_RegisterOnClicked_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function InfoEntry.InfoEntry_C.SetExpanded
struct UInfoEntry_C_SetExpanded_Params
{
	bool                                               bExpanded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.SetIndexInList
struct UInfoEntry_C_SetIndexInList_Params
{
	int                                                InIndexInList;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.SetSelected
struct UInfoEntry_C_SetSelected_Params
{
	bool                                               bSelected;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.ToggleExpansion
struct UInfoEntry_C_ToggleExpansion_Params
{
};

// Function InfoEntry.InfoEntry_C.Reset
struct UInfoEntry_C_Reset_Params
{
};

// Function InfoEntry.InfoEntry_C.Construct
struct UInfoEntry_C_Construct_Params
{
};

// Function InfoEntry.InfoEntry_C.SetData
struct UInfoEntry_C_SetData_Params
{
	class UObject*                                     InData;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonListView*                             OwningList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature
struct UInfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_34_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature
struct UInfoEntry_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_61_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.ExecuteUbergraph_InfoEntry
struct UInfoEntry_C_ExecuteUbergraph_InfoEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InfoEntry.InfoEntry_C.Entry Selected__DelegateSignature
struct UInfoEntry_C_Entry_Selected__DelegateSignature_Params
{
	class UFortItemDefinition*                         Entry_Item_Definition;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

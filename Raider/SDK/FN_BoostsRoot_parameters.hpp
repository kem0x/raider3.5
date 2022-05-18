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

// Function BoostsRoot.BoostsRoot_C.HandleStore
struct UBoostsRoot_C_HandleStore_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BoostsRoot.BoostsRoot_C.HandleCursorModeChanging
struct UBoostsRoot_C_HandleCursorModeChanging_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoostsRoot.BoostsRoot_C.Set Input Action Handlers
struct UBoostsRoot_C_Set_Input_Action_Handlers_Params
{
};

// Function BoostsRoot.BoostsRoot_C.HandleBack
struct UBoostsRoot_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BoostsRoot.BoostsRoot_C.Construct
struct UBoostsRoot_C_Construct_Params
{
};

// Function BoostsRoot.BoostsRoot_C.Destruct
struct UBoostsRoot_C_Destruct_Params
{
};

// Function BoostsRoot.BoostsRoot_C.OnActivated
struct UBoostsRoot_C_OnActivated_Params
{
};

// Function BoostsRoot.BoostsRoot_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature
struct UBoostsRoot_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BoostsRoot.BoostsRoot_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_29_OnActiveWidgetChanged__DelegateSignature
struct UBoostsRoot_C_BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_29_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoostsRoot.BoostsRoot_C.OnDeactivated
struct UBoostsRoot_C_OnDeactivated_Params
{
};

// Function BoostsRoot.BoostsRoot_C.ExecuteUbergraph_BoostsRoot
struct UBoostsRoot_C_ExecuteUbergraph_BoostsRoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

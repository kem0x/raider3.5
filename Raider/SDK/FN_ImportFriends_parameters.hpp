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

// Function ImportFriends.ImportFriends_C.PreConstruct
struct UImportFriends_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.OnPanelTypeSet
struct UImportFriends_C_OnPanelTypeSet_Params
{
	ESocialImportPanelType*                            NewType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.HandleHeaderText
struct UImportFriends_C_HandleHeaderText_Params
{
};

// Function ImportFriends.ImportFriends_C.HandleDescriptionText
struct UImportFriends_C_HandleDescriptionText_Params
{
};

// Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature
struct UImportFriends_C_BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.OnActivated
struct UImportFriends_C_OnActivated_Params
{
};

// Function ImportFriends.ImportFriends_C.OnIncentivizedSet
struct UImportFriends_C_OnIncentivizedSet_Params
{
	bool*                                              bIncentivized;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends
struct UImportFriends_C_ExecuteUbergraph_ImportFriends_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

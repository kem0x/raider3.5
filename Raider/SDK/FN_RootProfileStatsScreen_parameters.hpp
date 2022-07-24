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

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.UpdateStatSet
struct URootProfileStatsScreen_C_UpdateStatSet_Params
{
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.UpdatePlaylist
struct URootProfileStatsScreen_C_UpdatePlaylist_Params
{
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.HandleBack
struct URootProfileStatsScreen_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.Construct
struct URootProfileStatsScreen_C_Construct_Params
{
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnDeactivated
struct URootProfileStatsScreen_C_OnDeactivated_Params
{
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent_87_CommonButtonClicked__DelegateSignature
struct URootProfileStatsScreen_C_BndEvt__StatSetRightBtn_K2Node_ComponentBoundEvent_87_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent_104_CommonButtonClicked__DelegateSignature
struct URootProfileStatsScreen_C_BndEvt__StatSetLeftBtn_K2Node_ComponentBoundEvent_104_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent_147_CommonButtonClicked__DelegateSignature
struct URootProfileStatsScreen_C_BndEvt__PlaylistBucketChanger_K2Node_ComponentBoundEvent_147_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnStatSetChanged
struct URootProfileStatsScreen_C_OnStatSetChanged_Params
{
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature
struct URootProfileStatsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnActivated
struct URootProfileStatsScreen_C_OnActivated_Params
{
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnStartFetchingData
struct URootProfileStatsScreen_C_OnStartFetchingData_Params
{
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnNoData
struct URootProfileStatsScreen_C_OnNoData_Params
{
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.OnDataRecieved
struct URootProfileStatsScreen_C_OnDataRecieved_Params
{
};

// Function RootProfileStatsScreen.RootProfileStatsScreen_C.ExecuteUbergraph_RootProfileStatsScreen
struct URootProfileStatsScreen_C_ExecuteUbergraph_RootProfileStatsScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

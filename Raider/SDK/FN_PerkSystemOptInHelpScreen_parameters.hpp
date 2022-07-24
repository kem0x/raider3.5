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

// Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.SetMode
struct UPerkSystemOptInHelpScreen_C_SetMode_Params
{
	int                                                Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.Construct
struct UPerkSystemOptInHelpScreen_C_Construct_Params
{
};

// Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.BndEvt__ButtonDonotshow_K2Node_ComponentBoundEvent_225_CommonSelectedStateChanged__DelegateSignature
struct UPerkSystemOptInHelpScreen_C_BndEvt__ButtonDonotshow_K2Node_ComponentBoundEvent_225_CommonSelectedStateChanged__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.BndEvt__ButtonInfo_K2Node_ComponentBoundEvent_177_CommonButtonClicked__DelegateSignature
struct UPerkSystemOptInHelpScreen_C_BndEvt__ButtonInfo_K2Node_ComponentBoundEvent_177_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PerkSystemOptInHelpScreen.PerkSystemOptInHelpScreen_C.ExecuteUbergraph_PerkSystemOptInHelpScreen
struct UPerkSystemOptInHelpScreen_C_ExecuteUbergraph_PerkSystemOptInHelpScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

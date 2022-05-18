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

// Function SocialPanel.SocialPanel_C.HandleAction_Close
struct USocialPanel_C_HandleAction_Close_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SocialPanel.SocialPanel_C.InitializeInput
struct USocialPanel_C_InitializeInput_Params
{
};

// Function SocialPanel.SocialPanel_C.Construct
struct USocialPanel_C_Construct_Params
{
};

// Function SocialPanel.SocialPanel_C.OnActivated
struct USocialPanel_C_OnActivated_Params
{
};

// Function SocialPanel.SocialPanel_C.OnDeactivated
struct USocialPanel_C_OnDeactivated_Params
{
};

// Function SocialPanel.SocialPanel_C.OnBeginIntro
struct USocialPanel_C_OnBeginIntro_Params
{
};

// Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
struct USocialPanel_C_ExecuteUbergraph_SocialPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

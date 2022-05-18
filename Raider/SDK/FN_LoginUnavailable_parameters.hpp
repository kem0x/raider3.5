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

// Function LoginUnavailable.LoginUnavailable_C.BndEvt__Button_Status_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct ULoginUnavailable_C_BndEvt__Button_Status_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LoginUnavailable.LoginUnavailable_C.OnMessageSet
struct ULoginUnavailable_C_OnMessageSet_Params
{
	bool*                                              bDisableMessage;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginUnavailable.LoginUnavailable_C.ExecuteUbergraph_LoginUnavailable
struct ULoginUnavailable_C_ExecuteUbergraph_LoginUnavailable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

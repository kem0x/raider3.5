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

// Function PermissionsRoot.PermissionsRoot_C.Input Handle Back
struct UPermissionsRoot_C_Input_Handle_Back_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PermissionsRoot.PermissionsRoot_C.RefreshOutpostInfo
struct UPermissionsRoot_C_RefreshOutpostInfo_Params
{
};

// Function PermissionsRoot.PermissionsRoot_C.Construct
struct UPermissionsRoot_C_Construct_Params
{
};

// Function PermissionsRoot.PermissionsRoot_C.OnActivated
struct UPermissionsRoot_C_OnActivated_Params
{
};

// Function PermissionsRoot.PermissionsRoot_C.ExecuteUbergraph_PermissionsRoot
struct UPermissionsRoot_C_ExecuteUbergraph_PermissionsRoot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

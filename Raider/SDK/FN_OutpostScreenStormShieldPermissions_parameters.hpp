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

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CenterWidget
struct UOutpostScreenStormShieldPermissions_C_CenterWidget_Params
{
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.SetParent
struct UOutpostScreenStormShieldPermissions_C_SetParent_Params
{
	class UOutpostScreenStormShield_C*                 ParentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.HandleBack
struct UOutpostScreenStormShieldPermissions_C_HandleBack_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.AddInputHandlers
struct UOutpostScreenStormShieldPermissions_C_AddInputHandlers_Params
{
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.IsOwningPlayerOutpostOwner
struct UOutpostScreenStormShieldPermissions_C_IsOwningPlayerOutpostOwner_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilages
struct UOutpostScreenStormShieldPermissions_C_UpdatePrivilages_Params
{
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.isPlayerAlone
struct UOutpostScreenStormShieldPermissions_C_isPlayerAlone_Params
{
	bool                                               isAlone;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.Construct
struct UOutpostScreenStormShieldPermissions_C_Construct_Params
{
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_0_1
struct UOutpostScreenStormShieldPermissions_C_UpdatePrivilagesEvent_0_1_Params
{
	struct FFortTeamMemberInfo                         NewTeamMemberInfo;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.UpdatePrivilagesEvent_1_2
struct UOutpostScreenStormShieldPermissions_C_UpdatePrivilagesEvent_1_2_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.OnActivated
struct UOutpostScreenStormShieldPermissions_C_OnActivated_Params
{
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.ExecuteUbergraph_OutpostScreenStormShieldPermissions
struct UOutpostScreenStormShieldPermissions_C_ExecuteUbergraph_OutpostScreenStormShieldPermissions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function OutpostScreenStormShieldPermissions.OutpostScreenStormShieldPermissions_C.CloseOutpostScreen__DelegateSignature
struct UOutpostScreenStormShieldPermissions_C_CloseOutpostScreen__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

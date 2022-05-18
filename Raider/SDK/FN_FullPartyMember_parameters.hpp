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

// Function FullPartyMember.FullPartyMember_C.UpdateBang
struct UFullPartyMember_C_UpdateBang_Params
{
};

// Function FullPartyMember.FullPartyMember_C.HighlightEmptyBanner
struct UFullPartyMember_C_HighlightEmptyBanner_Params
{
	bool                                               BannerIsHighlighted;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMember.FullPartyMember_C.SetSecondaryStatDisplayVisibility
struct UFullPartyMember_C_SetSecondaryStatDisplayVisibility_Params
{
	ESlateVisibility                                   InVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMember.FullPartyMember_C.SetStatDisplayStyle
struct UFullPartyMember_C_SetStatDisplayStyle_Params
{
	class UClass*                                      InStyle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMember.FullPartyMember_C.UpdateStatDisplays
struct UFullPartyMember_C_UpdateStatDisplays_Params
{
};

// Function FullPartyMember.FullPartyMember_C.InitializeConnectedWidget
struct UFullPartyMember_C_InitializeConnectedWidget_Params
{
	class UFullPartyMemberConnected_C*                 ConnectedWidget;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function FullPartyMember.FullPartyMember_C.MakeLocalPlayerConfirmActions
struct UFullPartyMember_C_MakeLocalPlayerConfirmActions_Params
{
	bool                                               LocalPlayerAlone;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FConfirmationDialogAction>           OutConfirmActions;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function FullPartyMember.FullPartyMember_C.HandleLocalPlayerActionsResult
struct UFullPartyMember_C_HandleLocalPlayerActionsResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMember.FullPartyMember_C.UpdateLocalPlayerAction
struct UFullPartyMember_C_UpdateLocalPlayerAction_Params
{
};

// Function FullPartyMember.FullPartyMember_C.DuplicateConnectedWidget
struct UFullPartyMember_C_DuplicateConnectedWidget_Params
{
	class UFullPartyMemberConnected_C*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function FullPartyMember.FullPartyMember_C.Initialize
struct UFullPartyMember_C_Initialize_Params
{
};

// Function FullPartyMember.FullPartyMember_C.UpdateDimensions
struct UFullPartyMember_C_UpdateDimensions_Params
{
	struct FVector2D                                   NewDimensions;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function FullPartyMember.FullPartyMember_C.ShowConnected
struct UFullPartyMember_C_ShowConnected_Params
{
};

// Function FullPartyMember.FullPartyMember_C.ShowConnecting
struct UFullPartyMember_C_ShowConnecting_Params
{
};

// Function FullPartyMember.FullPartyMember_C.ShowOpen
struct UFullPartyMember_C_ShowOpen_Params
{
};

// Function FullPartyMember.FullPartyMember_C.UpdateMemberInfo
struct UFullPartyMember_C_UpdateMemberInfo_Params
{
	struct FFortTeamMemberInfo                         NewMemberInfo;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullPartyMember.FullPartyMember_C.DialogResult_1F64669049EA0B1762273C8ED9CBB619
struct UFullPartyMember_C_DialogResult_1F64669049EA0B1762273C8ED9CBB619_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMember.FullPartyMember_C.Construct
struct UFullPartyMember_C_Construct_Params
{
};

// Function FullPartyMember.FullPartyMember_C.PreConstruct
struct UFullPartyMember_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FullPartyMember.FullPartyMember_C.OnClicked
struct UFullPartyMember_C_OnClicked_Params
{
};

// Function FullPartyMember.FullPartyMember_C.Destruct
struct UFullPartyMember_C_Destruct_Params
{
};

// Function FullPartyMember.FullPartyMember_C.OnPlayerInfoChanged
struct UFullPartyMember_C_OnPlayerInfoChanged_Params
{
	struct FFortTeamMemberInfo*                        NewInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function FullPartyMember.FullPartyMember_C.OnPlayerAttributesChanged
struct UFullPartyMember_C_OnPlayerAttributesChanged_Params
{
};

// Function FullPartyMember.FullPartyMember_C.ExecuteUbergraph_FullPartyMember
struct UFullPartyMember_C_ExecuteUbergraph_FullPartyMember_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function PlayerBannedModal.PlayerBannedModal_C.HandleCloseAttempted
struct UPlayerBannedModal_C_HandleCloseAttempted_Params
{
};

// Function PlayerBannedModal.PlayerBannedModal_C.RemoveModal
struct UPlayerBannedModal_C_RemoveModal_Params
{
};

// Function PlayerBannedModal.PlayerBannedModal_C.BanEnumToText
struct UPlayerBannedModal_C_BanEnumToText_Params
{
	EPlayerBanReasons                                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerBannedModal.PlayerBannedModal_C.OnBanAck
struct UPlayerBannedModal_C_OnBanAck_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBannedModal.PlayerBannedModal_C.UpdateTimeRemaining
struct UPlayerBannedModal_C_UpdateTimeRemaining_Params
{
	struct FText                                       Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerBannedModal.PlayerBannedModal_C.DisableButton
struct UPlayerBannedModal_C_DisableButton_Params
{
	bool                                               DisableButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBannedModal.PlayerBannedModal_C.UpdateText
struct UPlayerBannedModal_C_UpdateText_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Content;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerBannedModal.PlayerBannedModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
struct UPlayerBannedModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerBannedModal.PlayerBannedModal_C.OnActivated
struct UPlayerBannedModal_C_OnActivated_Params
{
};

// Function PlayerBannedModal.PlayerBannedModal_C.ExecuteUbergraph_PlayerBannedModal
struct UPlayerBannedModal_C_ExecuteUbergraph_PlayerBannedModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerBannedModal.PlayerBannedModal_C.OnCloseSucceeded__DelegateSignature
struct UPlayerBannedModal_C_OnCloseSucceeded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

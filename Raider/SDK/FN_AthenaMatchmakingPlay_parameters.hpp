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

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenPlayOptions
struct UAthenaMatchmakingPlay_C_OpenPlayOptions_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.FillChange
struct UAthenaMatchmakingPlay_C_FillChange_Params
{
	bool                                               bDirection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistChange
struct UAthenaMatchmakingPlay_C_PlaylistChange_Params
{
	bool                                               bDirection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetAutoFillOptions
struct UAthenaMatchmakingPlay_C_SetAutoFillOptions_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Construct
struct UAthenaMatchmakingPlay_C_Construct_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.NewModeSelected_Display
struct UAthenaMatchmakingPlay_C_NewModeSelected_Display_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnAvailablePlaylistsUpdated
struct UAthenaMatchmakingPlay_C_OnAvailablePlaylistsUpdated_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlayButtonUpdated
struct UAthenaMatchmakingPlay_C_OnPlayButtonUpdated_Params
{
	bool*                                              bShowPlayButton;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__TouchButtonChangeGameMode_K2Node_ComponentBoundEvent_95_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__TouchButtonChangeGameMode_K2Node_ComponentBoundEvent_95_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetPlayButtonText
struct UAthenaMatchmakingPlay_C_OnSetPlayButtonText_Params
{
	struct FText*                                      PlayButtonText;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnSetCancelButtonText
struct UAthenaMatchmakingPlay_C_OnSetCancelButtonText_Params
{
	struct FText*                                      CancelButtonText;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.ExecuteUbergraph_AthenaMatchmakingPlay
struct UAthenaMatchmakingPlay_C_ExecuteUbergraph_AthenaMatchmakingPlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature
struct UAthenaMatchmakingPlay_C_PlaylistsUpdated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

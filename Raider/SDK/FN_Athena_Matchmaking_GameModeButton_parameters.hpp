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

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetButtonSize
struct UAthena_Matchmaking_GameModeButton_C_SetButtonSize_Params
{
	bool                                               useLargeSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetOwningDisplayWidget
struct UAthena_Matchmaking_GameModeButton_C_SetOwningDisplayWidget_Params
{
	class UAthenaMatchmakingOptionsDisplay_v2_C*       OwningDisplay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.UpdateGameModeAvailibilty
struct UAthena_Matchmaking_GameModeButton_C_UpdateGameModeAvailibilty_Params
{
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ShowDisabledMessage
struct UAthena_Matchmaking_GameModeButton_C_ShowDisabledMessage_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.DisableGameModeButton
struct UAthena_Matchmaking_GameModeButton_C_DisableGameModeButton_Params
{
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.IsGameModeAvailable
struct UAthena_Matchmaking_GameModeButton_C_IsGameModeAvailable_Params
{
	class UFortPlaylistAthena*                         InMode;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Available;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnFocusReceived
struct UAthena_Matchmaking_GameModeButton_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.SetupGameModeButton
struct UAthena_Matchmaking_GameModeButton_C_SetupGameModeButton_Params
{
	class UFortPlaylistAthena*                         PlaylistObj;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.PreConstruct
struct UAthena_Matchmaking_GameModeButton_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature
struct UAthena_Matchmaking_GameModeButton_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_191_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.OnModeButtonHovered
struct UAthena_Matchmaking_GameModeButton_C_OnModeButtonHovered_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.Construct
struct UAthena_Matchmaking_GameModeButton_C_Construct_Params
{
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ExecuteUbergraph_Athena_Matchmaking_GameModeButton
struct UAthena_Matchmaking_GameModeButton_C_ExecuteUbergraph_Athena_Matchmaking_GameModeButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.ButtonHovered__DelegateSignature
struct UAthena_Matchmaking_GameModeButton_C_ButtonHovered__DelegateSignature_Params
{
	class UAthena_Matchmaking_GameModeButton_C*        HoveredButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Athena_Matchmaking_GameModeButton.Athena_Matchmaking_GameModeButton_C.GameModeSelected__DelegateSignature
struct UAthena_Matchmaking_GameModeButton_C_GameModeSelected__DelegateSignature_Params
{
	class UAthena_Matchmaking_GameModeButton_C*        SelectedGameModeButton;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

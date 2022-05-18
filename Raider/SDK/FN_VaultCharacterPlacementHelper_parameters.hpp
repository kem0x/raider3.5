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

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UpdatePosition For Camera
struct AVaultCharacterPlacementHelper_C_UpdatePosition_For_Camera_Params
{
	EFrontEndCamera                                    FrontendCamera;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript
struct AVaultCharacterPlacementHelper_C_UserConstructionScript_Params
{
};

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay
struct AVaultCharacterPlacementHelper_C_ReceiveBeginPlay_Params
{
};

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.SubGameChanged_Event_0_1
struct AVaultCharacterPlacementHelper_C_SubGameChanged_Event_0_1_Params
{
	ESubGame                                           SubGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveTick
struct AVaultCharacterPlacementHelper_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnFrontEndCameraChanged
struct AVaultCharacterPlacementHelper_C_OnFrontEndCameraChanged_Params
{
	EFrontEndCamera                                    NewCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFrontEndCamera                                    OldCamera;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper
struct AVaultCharacterPlacementHelper_C_ExecuteUbergraph_VaultCharacterPlacementHelper_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
struct AVaultCharacterPlacementHelper_C_NewEventDispatcher_0__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

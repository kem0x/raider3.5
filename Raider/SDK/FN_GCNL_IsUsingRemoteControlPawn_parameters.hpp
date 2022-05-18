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

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.OnRemove
struct AGCNL_IsUsingRemoteControlPawn_C_OnRemove_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.OnActive
struct AGCNL_IsUsingRemoteControlPawn_C_OnActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.UserConstructionScript
struct AGCNL_IsUsingRemoteControlPawn_C_UserConstructionScript_Params
{
};

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ReceiveEndPlay
struct AGCNL_IsUsingRemoteControlPawn_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ReceiveDestroyed
struct AGCNL_IsUsingRemoteControlPawn_C_ReceiveDestroyed_Params
{
};

// Function GCNL_IsUsingRemoteControlPawn.GCNL_IsUsingRemoteControlPawn_C.ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn
struct AGCNL_IsUsingRemoteControlPawn_C_ExecuteUbergraph_GCNL_IsUsingRemoteControlPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

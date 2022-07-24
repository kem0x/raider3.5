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

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.OnRep_BotData
struct AB_BGA_BotTurret_Parent_C_OnRep_BotData_Params
{
};

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.LeftOrRightGunFired
struct AB_BGA_BotTurret_Parent_C_LeftOrRightGunFired_Params
{
	int                                                A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetGunSpawnRotFromSocket
struct AB_BGA_BotTurret_Parent_C_SetGunSpawnRotFromSocket_Params
{
	struct FName                                       SocketName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InVect;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.UserConstructionScript
struct AB_BGA_BotTurret_Parent_C_UserConstructionScript_Params
{
};

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.PassBotInfo
struct AB_BGA_BotTurret_Parent_C_PassBotInfo_Params
{
	float                                              WarmupTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BotDuration;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RadiusDefault;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ExplosionUpgrade;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetTarget
struct AB_BGA_BotTurret_Parent_C_SetTarget_Params
{
	class AFortAIPawn*                                 Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Ready
struct AB_BGA_BotTurret_Parent_C_Ready_Params
{
};

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.ExecuteUbergraph_B_BGA_BotTurret_Parent
struct AB_BGA_BotTurret_Parent_C_ExecuteUbergraph_B_BGA_BotTurret_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplode__DelegateSignature
struct AB_BGA_BotTurret_Parent_C_BotExplode__DelegateSignature_Params
{
};

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplosionWarning__DelegateSignature
struct AB_BGA_BotTurret_Parent_C_BotExplosionWarning__DelegateSignature_Params
{
};

// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotFired__DelegateSignature
struct AB_BGA_BotTurret_Parent_C_BotFired__DelegateSignature_Params
{
	int                                                Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.OnExecute
struct UGCN_MedicPack_Equipped_C_OnExecute_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.GetMaxFuel
struct UGCN_MedicPack_Equipped_C_GetMaxFuel_Params
{
	class APlayerPawn_Athena_C*                        PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.GetFuel
struct UGCN_MedicPack_Equipped_C_GetFuel_Params
{
	class APlayerPawn_Athena_C*                        PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.GetFuelPercent
struct UGCN_MedicPack_Equipped_C_GetFuelPercent_Params
{
	class APlayerPawn_Athena_C*                        PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Fuel_Percent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_MedicPack_Equipped.GCN_MedicPack_Equipped_C.WhileActive
struct UGCN_MedicPack_Equipped_C_WhileActive_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

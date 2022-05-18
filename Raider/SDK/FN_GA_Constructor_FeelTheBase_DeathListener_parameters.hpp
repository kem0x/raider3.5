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

// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.ActivateBaseStacks
struct UGA_Constructor_FeelTheBase_DeathListener_C_ActivateBaseStacks_Params
{
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AB_Constructor_BASE_C*                       BaseReference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.Exceute GC
struct UGA_Constructor_FeelTheBase_DeathListener_C_Exceute_GC_Params
{
	class AB_Constructor_BASE_C*                       BaseReference;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Overflow;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.K2_ActivateAbilityFromEvent
struct UGA_Constructor_FeelTheBase_DeathListener_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener
struct UGA_Constructor_FeelTheBase_DeathListener_C_ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

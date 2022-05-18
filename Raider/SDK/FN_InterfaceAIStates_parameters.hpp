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

// Function InterfaceAIStates.InterfaceAIStates_C.PortalCollision
struct UInterfaceAIStates_C_PortalCollision_Params
{
	bool                                               Collide_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalFX
struct UInterfaceAIStates_C_PortalFX_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalGet
struct UInterfaceAIStates_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      BT;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckInterrupted
struct UInterfaceAIStates_C_TakerSoulSuckInterrupted_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalClear
struct UInterfaceAIStates_C_PortalClear_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.PortalAdd
struct UInterfaceAIStates_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundEnd
struct UInterfaceAIStates_C_TakerSoulSuckSoundEnd_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundBegin
struct UInterfaceAIStates_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerAttackFSM
struct UInterfaceAIStates_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.IsTakerWallPortalAvailable
struct UInterfaceAIStates_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.TakerWallPortalBehavior
struct UInterfaceAIStates_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBTTask_BlueprintBase*                       Task;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DesiredMoveLocation;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Debug;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.EndTakerSwoopAttack
struct UInterfaceAIStates_C_EndTakerSwoopAttack_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.BeginTakerSwoopAttack
struct UInterfaceAIStates_C_BeginTakerSwoopAttack_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.ResetTakerSpecialAttackTimer
struct UInterfaceAIStates_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SoulSuckMelee;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.VerifyTakerAttack
struct UInterfaceAIStates_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Swoop;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Soul_Suck;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Portal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InterfaceAIStates.InterfaceAIStates_C.HuskEvadeStart
struct UInterfaceAIStates_C_HuskEvadeStart_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.MantleEnd
struct UInterfaceAIStates_C_MantleEnd_Params
{
};

// Function InterfaceAIStates.InterfaceAIStates_C.MantleStart
struct UInterfaceAIStates_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     MidPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               LowWall;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MidWall;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FullWall;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WindowWall;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

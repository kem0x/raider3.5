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

// Function IMeleeWhileMoving.IMeleeWhileMoving_C.GetCollisionPredictionComponent
struct UIMeleeWhileMoving_C_GetCollisionPredictionComponent_Params
{
	class UShapeComponent*                             Collision_Prediction_Shape_Component;                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

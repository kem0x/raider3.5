// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IMeleeWhileMoving.IMeleeWhileMoving_C.GetCollisionPredictionComponent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShapeComponent*         Collision_Prediction_Shape_Component (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UIMeleeWhileMoving_C::GetCollisionPredictionComponent(class UShapeComponent** Collision_Prediction_Shape_Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function IMeleeWhileMoving.IMeleeWhileMoving_C.GetCollisionPredictionComponent");

	UIMeleeWhileMoving_C_GetCollisionPredictionComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Collision_Prediction_Shape_Component != nullptr)
		*Collision_Prediction_Shape_Component = params.Collision_Prediction_Shape_Component;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

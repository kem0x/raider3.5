#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IMeleeWhileMoving.IMeleeWhileMoving_C
// 0x0000 (0x0028 - 0x0028)
class UIMeleeWhileMoving_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IMeleeWhileMoving.IMeleeWhileMoving_C");
		return ptr;
	}


	void GetCollisionPredictionComponent(class UShapeComponent** Collision_Prediction_Shape_Component);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

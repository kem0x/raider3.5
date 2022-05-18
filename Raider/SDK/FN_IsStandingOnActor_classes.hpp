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

// BlueprintGeneratedClass IsStandingOnActor.IsStandingOnActor_C
// 0x0028 (0x00C8 - 0x00A0)
class UIsStandingOnActor_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      ActorToCheck;                                             // 0x00A0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IsStandingOnActor.IsStandingOnActor_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

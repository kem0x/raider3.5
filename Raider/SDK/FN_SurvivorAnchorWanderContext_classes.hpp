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

// BlueprintGeneratedClass SurvivorAnchorWanderContext.SurvivorAnchorWanderContext_C
// 0x0004 (0x0034 - 0x0030)
class USurvivorAnchorWanderContext_C : public UEnvQueryContext_BlueprintBase
{
public:
	float                                              ZGridSnapSize;                                            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SurvivorAnchorWanderContext.SurvivorAnchorWanderContext_C");
		return ptr;
	}


	void ProvideLocationsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<struct FVector>* ResultingLocationSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

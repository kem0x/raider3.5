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

// BlueprintGeneratedClass SurvivorAnchorLocationsToAvoidContext.SurvivorAnchorLocationsToAvoidContext_C
// 0x0008 (0x0038 - 0x0030)
class USurvivorAnchorLocationsToAvoidContext_C : public UEnvQueryContext_BlueprintBase
{
public:
	bool                                               Debug;                                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              AnchorPaddingDistanceToIncludeAdditionalAvoidanceObjects; // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SurvivorAnchorLocationsToAvoidContext.SurvivorAnchorLocationsToAvoidContext_C");
		return ptr;
	}


	void ProvideLocationsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<struct FVector>* ResultingLocationSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

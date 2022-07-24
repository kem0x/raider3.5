#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UsedPlacementActorsContext.UsedPlacementActorsContext_C
// 0x0048 (0x0078 - 0x0030)
class UUsedPlacementActorsContext_C : public UEnvQueryContext_BlueprintBase
{
public:
	struct FGameplayTagQuery                           UsedTagsAddedQuery;                                       // 0x0030(0x0048) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UsedPlacementActorsContext.UsedPlacementActorsContext_C");
		return ptr;
	}


	void ProvideActorsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

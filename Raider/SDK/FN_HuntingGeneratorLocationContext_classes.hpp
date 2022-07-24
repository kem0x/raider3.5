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

// BlueprintGeneratedClass HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C
// 0x0001 (0x0031 - 0x0030)
class UHuntingGeneratorLocationContext_C : public UEnvQueryContext_BlueprintBase
{
public:
	bool                                               Debug;                                                    // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C");
		return ptr;
	}


	void ProvideSingleLocation(class UObject** QuerierObject, class AActor** QuerierActor, struct FVector* ResultingLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

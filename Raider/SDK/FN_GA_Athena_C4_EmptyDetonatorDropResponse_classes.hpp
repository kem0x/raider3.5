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

// BlueprintGeneratedClass GA_Athena_C4_EmptyDetonatorDropResponse.GA_Athena_C4_EmptyDetonatorDropResponse_C
// 0x0020 (0x0930 - 0x0910)
class UGA_Athena_C4_EmptyDetonatorDropResponse_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	class UFortWorldItemDefinition*                    C4ItemDef;                                                // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                TrackedActorTag;                                          // 0x0920(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DelayBetweenExplosions;                                   // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentExplosionDelay;                                    // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_C4_EmptyDetonatorDropResponse.GA_Athena_C4_EmptyDetonatorDropResponse_C");
		return ptr;
	}


	bool K2_ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayEventData* Payload);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GA_Athena_C4_EmptyDetonatorDropResponse(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

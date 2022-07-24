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

// BlueprintGeneratedClass GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C
// 0x00BA (0x09DA - 0x0920)
class UGAT_GenericTriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0920(0x0008) (Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                // 0x0928(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutoCommitted;                                          // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStaminaLockedOut;                                       // 0x09D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAT_GenericTriggeredAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

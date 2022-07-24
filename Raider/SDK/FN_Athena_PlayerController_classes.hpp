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

// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// 0x0010 (0x2060 - 0x2050)
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2050(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             ListenerOverride;                                         // 0x2058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C");
		return ptr;
	}


	bool IsLocalPlayerFriendsWithSquadMember(class AFortPlayerState** SquadMember);
	void UserConstructionScript();
	void PlayWinEffects(class APawn** FinisherPawn, class UFortWeaponItemDefinition** FinishingWeapon, EDeathCause* DeathCause);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Athena_PlayerController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

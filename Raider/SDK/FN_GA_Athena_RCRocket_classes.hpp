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

// BlueprintGeneratedClass GA_Athena_RCRocket.GA_Athena_RCRocket_C
// 0x0020 (0x0B10 - 0x0AF0)
class UGA_Athena_RCRocket_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)
	class AB_PrjPawn_Athena_RCRocket_C*                SpawnedRocket;                                            // 0x0AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPawn*                                   PlayerPawn;                                               // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                GT_EventWeaponFire;                                       // 0x0B08(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_RCRocket.GA_Athena_RCRocket_C");
		return ptr;
	}


	struct FVector Calculate_Launch_Forward_Adjustment();
	struct FVector Calculate_Launch_Up_Adjustment();
	struct FVector Calculate_Launch_Right_Adjustment();
	void CalculateRocketSpawnLocation(struct FTransform* Transform);
	void GetAthenaPlayerPawn(class AFortPlayerPawnAthena** AsFort_Player_Pawn_Athena);
	void GetAthenaPlayerController(class AFortPlayerControllerAthena** AsFort_Player_Controller_Athena);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_RCRocket(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

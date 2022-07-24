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

// BlueprintGeneratedClass GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C
// 0x0030 (0x0BA8 - 0x0B78)
class UGA_Athena_TowerGrenadeWithTrajectory_C : public UGA_Athena_ProjWithTrajectory_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B78(0x0008) (Transient, DuplicateTransient)
	class ABP_ProjectileTrajectory_C*                  ProjectileTrajectoryRed;                                  // 0x0B80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TrajectoryIndicatorRedClass;                              // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         ObjectiveStat;                                            // 0x0B90(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortQuestItemDefinition*                    QuestItemUsePortafort;                                    // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C");
		return ptr;
	}


	void SetupDummyProjectileRed();
	void K2_ActivateAbility();
	void CleanupTrajectoryDisplay();
	void Server_SpawnProjectile(struct FVector* Location, struct FRotator* Direction);
	void UpdateTrajectorySpline();
	void ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

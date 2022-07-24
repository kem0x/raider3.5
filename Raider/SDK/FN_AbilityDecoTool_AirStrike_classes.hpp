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

// BlueprintGeneratedClass AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C
// 0x0160 (0x0CE0 - 0x0B80)
class AAbilityDecoTool_AirStrike_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // 0x0B88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayAttribute                          firingRangeSubBuilding3;                                  // 0x0B90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                PowerLevel;                                               // 0x0BB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BB4(0x0004) MISSED OFFSET
	struct FAirStrikeLeveledPatterns                   DONOTEDIT_LeveledAirStrikeArrays;                         // 0x0BB8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Current_Air_Strike_Sub_Tier_Selection;                    // 0x0BC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Current_Level_Max;                                        // 0x0BCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             Current_Unprocessed_Positions_Array;                      // 0x0BD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             Position_Array_Cleaned_of_duplicates;                     // 0x0BE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Duplicate_Positions;                                      // 0x0BF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        Double_Entries;                                           // 0x0C00(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Spacing_Between_the_Impacts;                              // 0x0C10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0C14(0x0004) MISSED OFFSET
	class AFortDecoHelper*                             FortDecoHelper;                                           // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                Old_Power_Level;                                          // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Pattern_Needs_to_change;                                  // 0x0C24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0C25(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       TC_BombUpgrade1;                                          // 0x0C28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BombUpgrade2;                                          // 0x0C48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BombUpgrade3;                                          // 0x0C68(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BombUpgrade4;                                          // 0x0C88(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_BombUpgrade5;                                          // 0x0CA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Onboarding;                                               // 0x0CC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0CC9(0x0007) MISSED OFFSET
	class AFortDecoHelper*                             Helper;                                                   // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                HideTimerHandle;                                          // 0x0CD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C");
		return ptr;
	}


	void HideMeshAndPlacement(bool InHide);
	void PopulatePositionArrays();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BPOnSetDecoObjectPreview(class AFortDecoHelper** FortDecoHelper);
	void BPPressSecondaryFire(class AFortDecoHelper** FortDecoHelper);
	void PassInfo(int Power_Level);
	void HideFor(float InTime);
	void Show();
	void ExecuteUbergraph_AbilityDecoTool_AirStrike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

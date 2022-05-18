#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_SurvivorScriptedAbilities.Struct_SurvivorScriptedAbilities
// 0x0048
struct FStruct_SurvivorScriptedAbilities
{
	float                                              SurvivorHelpReminderDuration_14_F54DDCC9447A56E42EEA23B2F26A82BF;// 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FGameplayTag                                NPC_Ability_NonAttack_CowerIndefiniteTrue_6_F917B44A44D629C4351341967FEDCE08;// 0x0008(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_CowerIndefiniteFalse_7_E6F8C1C646C79DEF76809E829DCA289D;// 0x0010(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_RescueTrue_9_6F9D8205427713C6B3C45D889DF83BE4;// 0x0018(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_RescueFalse_11_B549D5AB4CBCBCA2155C3FAA098A58D0;// 0x0020(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_LockInPlaceTrue_18_1FA6565D4BC9F11CB51AC584EFDE6999;// 0x0028(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_LockInPlaceFalse_20_B578575C4157F18CAD94EEBB4BA45E71;// 0x0030(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_RescueStart_28_F37EAFF4488E12ABFE11299818466044;// 0x0038(0x0008) (Edit, BlueprintVisible)
	struct FGameplayTag                                NPC_Ability_NonAttack_RescueFinish_29_7B19BD2348AA524234D34493C53321F3;// 0x0040(0x0008) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

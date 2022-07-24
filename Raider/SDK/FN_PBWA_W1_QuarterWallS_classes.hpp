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

// BlueprintGeneratedClass PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C
// 0x0008 (0x0C68 - 0x0C60)
class APBWA_W1_QuarterWallS_C : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C60(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PBWA_W1_QuarterWallS.PBWA_W1_QuarterWallS_C");
		return ptr;
	}


	void UserConstructionScript();
	void GameplayCue_Abilities_Activation_Generic_BannerWallBuff1(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_BannerWallBuff2(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_PBWA_W1_QuarterWallS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

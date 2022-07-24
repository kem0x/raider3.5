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

// BlueprintGeneratedClass DA_MedicPack_v2.DA_MedicPack_v2_C
// 0x0030 (0x0BB0 - 0x0B80)
class ADA_MedicPack_v2_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)
	float                                              MinHeldTime;                                              // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0B8C(0x0004) MISSED OFFSET
	struct FTimerHandle                                ButtonHeldTimer;                                          // 0x0B90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CanFire;                                                  // 0x0B98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlreadyReleased;                                          // 0x0B99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0B9A(0x0006) MISSED OFFSET
	class ABP_Med_Pack_OverlapVolume_C*                OverlapVolume;                                            // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TargetToKnock;                                            // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_MedicPack_v2.DA_MedicPack_v2_C");
		return ptr;
	}


	void IsOnGround(bool* bOnGround);
	void RaiseUsageError(const struct FGameplayTagContainer& FailedReason);
	void UserConstructionScript();
	void MinHeldTimeCheck();
	void BPPressTrigger(class AFortDecoHelper** FortDecoHelper);
	void BPReleaseTrigger(class AFortDecoHelper** FortDecoHelper);
	void ExecuteUbergraph_DA_MedicPack_v2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

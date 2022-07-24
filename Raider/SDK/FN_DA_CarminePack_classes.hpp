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

// BlueprintGeneratedClass DA_CarminePack.DA_CarminePack_C
// 0x0038 (0x0BB8 - 0x0B80)
class ADA_CarminePack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)
	float                                              TimePressed;                                              // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PunchPicker;                                              // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               hasLandedAfterBeam;                                       // 0x0B90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B91(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       Carmine_Ability_Tags;                                     // 0x0B98(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_CarminePack.DA_CarminePack_C");
		return ptr;
	}


	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper** FortDecoHelper);
	void BPPressSecondaryFire(class AFortDecoHelper** FortDecoHelper);
	void ReceiveBeginPlay();
	void Landed(const struct FHitResult& Hit);
	void ExecuteUbergraph_DA_CarminePack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

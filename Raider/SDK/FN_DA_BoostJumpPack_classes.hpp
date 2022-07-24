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

// BlueprintGeneratedClass DA_BoostJumpPack.DA_BoostJumpPack_C
// 0x0068 (0x0BE8 - 0x0B80)
class ADA_BoostJumpPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       ErrorReason;                                              // 0x0B88(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ErrorReasonGamepad;                                       // 0x0BA8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ErrorCannotUse;                                           // 0x0BC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_BoostJumpPack.DA_BoostJumpPack_C");
		return ptr;
	}


	void IsOnGround(bool* bOnGround);
	void RaiseUsageError(const struct FGameplayTagContainer& FailedReason);
	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper** FortDecoHelper);
	void ExecuteUbergraph_DA_BoostJumpPack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

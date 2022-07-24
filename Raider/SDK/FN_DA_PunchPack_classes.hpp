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

// BlueprintGeneratedClass DA_PunchPack.DA_PunchPack_C
// 0x000C (0x0B8C - 0x0B80)
class ADA_PunchPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B80(0x0008) (Transient, DuplicateTransient)
	float                                              PunchPicker;                                              // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_PunchPack.DA_PunchPack_C");
		return ptr;
	}


	void IsOnGround(bool* bOnGround);
	void RaiseUsageError(const struct FGameplayTagContainer& FailedReason);
	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper** FortDecoHelper);
	void ExecuteUbergraph_DA_PunchPack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

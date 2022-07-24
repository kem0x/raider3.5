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

// BlueprintGeneratedClass GA_AthenaInVehicle.GA_AthenaInVehicle_C
// 0x0028 (0x0938 - 0x0910)
class UGA_AthenaInVehicle_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       ExitTag;                                                  // 0x0918(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_AthenaInVehicle.GA_AthenaInVehicle_C");
		return ptr;
	}


	void K2_OnEndAbility(bool* bWasCancelled);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_AthenaInVehicle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

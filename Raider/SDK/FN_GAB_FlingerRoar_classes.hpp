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

// BlueprintGeneratedClass GAB_FlingerRoar.GAB_FlingerRoar_C
// 0x0008 (0x0AF8 - 0x0AF0)
class UGAB_FlingerRoar_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AF0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_FlingerRoar.GAB_FlingerRoar_C");
		return ptr;
	}


	void OnCancelled_AD410E224F398036F9E428A39B02B87C();
	void OnInterrupted_AD410E224F398036F9E428A39B02B87C();
	void OnBlendOut_AD410E224F398036F9E428A39B02B87C();
	void OnCompleted_AD410E224F398036F9E428A39B02B87C();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_FlingerRoar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

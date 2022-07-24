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

// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C
// 0x0008 (0x0BE8 - 0x0BE0)
class AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C : public AB_Melee_Impact_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BE0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_DarkEagle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

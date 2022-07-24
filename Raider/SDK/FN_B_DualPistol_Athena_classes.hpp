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

// BlueprintGeneratedClass B_DualPistol_Athena.B_DualPistol_Athena_C
// 0x0013 (0x0F50 - 0x0F3D)
class AB_DualPistol_Athena_C : public AB_Ranged_Dual_Generic_Athena_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0F3D(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0F40(0x0008) (Transient, DuplicateTransient)
	class USoundCue*                                   FireSoundOverride;                                        // 0x0F48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_DualPistol_Athena.B_DualPistol_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPlayWeaponFireFX(bool* bPersistentFire, bool* bSecondaryFire);
	void ExecuteUbergraph_B_DualPistol_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_PotofGold.B_Melee_Impact_Pickaxe_PotofGold_C
// 0x0008 (0x0BE8 - 0x0BE0)
class AB_Melee_Impact_Pickaxe_PotofGold_C : public AB_Melee_Impact_Generic_C
{
public:
	class UParticleSystemComponent*                    P_PotofGold_Pickaxe;                                      // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Impact_Pickaxe_PotofGold.B_Melee_Impact_Pickaxe_PotofGold_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

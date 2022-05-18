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

// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_PotofGold.B_Melee_Impact_Pickaxe_PotofGold_C
// 0x0008 (0x0B78 - 0x0B70)
class AB_Melee_Impact_Pickaxe_PotofGold_C : public AB_Melee_Impact_Generic_C
{
public:
	class UParticleSystemComponent*                    P_PotofGold_Pickaxe;                                      // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

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

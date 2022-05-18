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

// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_TeslaCoil_Athena.B_Melee_Impact_Pickaxe_TeslaCoil_Athena_C
// 0x0010 (0x0B80 - 0x0B70)
class AB_Melee_Impact_Pickaxe_TeslaCoil_Athena_C : public AB_Melee_Impact_Generic_C
{
public:
	class UParticleSystemComponent*                    FX_Coil;                                                  // 0x0B70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FX_Head;                                                  // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Impact_Pickaxe_TeslaCoil_Athena.B_Melee_Impact_Pickaxe_TeslaCoil_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

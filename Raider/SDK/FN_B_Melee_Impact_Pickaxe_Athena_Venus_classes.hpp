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

// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Athena_Venus.B_Melee_Impact_Pickaxe_Athena_Venus_C
// 0x0011 (0x0BF1 - 0x0BE0)
class AB_Melee_Impact_Pickaxe_Athena_Venus_C : public AB_Melee_Impact_Generic_C
{
public:
	class UParticleSystemComponent*                    NewVar_1;                                                 // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    NewVar_2;                                                 // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               NewVar_3;                                                 // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Athena_Venus.B_Melee_Impact_Pickaxe_Athena_Venus_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

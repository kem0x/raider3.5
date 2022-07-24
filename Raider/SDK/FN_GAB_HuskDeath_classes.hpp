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

// BlueprintGeneratedClass GAB_HuskDeath.GAB_HuskDeath_C
// 0x0010 (0x0AB0 - 0x0AA0)
class UGAB_HuskDeath_C : public UGAB_GenericDeath_C
{
public:
	struct FGameplayTag                                LaserTag;                                                 // 0x0AA0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                Headshot;                                                 // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskDeath.GAB_HuskDeath_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

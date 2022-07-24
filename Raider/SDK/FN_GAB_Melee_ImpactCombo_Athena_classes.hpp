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

// BlueprintGeneratedClass GAB_Melee_ImpactCombo_Athena.GAB_Melee_ImpactCombo_Athena_C
// 0x0000 (0x0934 - 0x0934)
class UGAB_Melee_ImpactCombo_Athena_C : public UGAB_Melee_GenericCombo_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_Melee_ImpactCombo_Athena.GAB_Melee_ImpactCombo_Athena_C");
		return ptr;
	}


	void K2_CommitExecute();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

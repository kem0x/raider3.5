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

// BlueprintGeneratedClass GAB_SmasherDeath.GAB_SmasherDeath_C
// 0x0008 (0x0AA8 - 0x0AA0)
class UGAB_SmasherDeath_C : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AA0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherDeath.GAB_SmasherDeath_C");
		return ptr;
	}


	void ExecuteUbergraph_GAB_SmasherDeath(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

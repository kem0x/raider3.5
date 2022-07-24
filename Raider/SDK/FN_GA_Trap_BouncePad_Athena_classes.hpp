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

// BlueprintGeneratedClass GA_Trap_BouncePad_Athena.GA_Trap_BouncePad_Athena_C
// 0x0008 (0x0948 - 0x0940)
class UGA_Trap_BouncePad_Athena_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0940(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_BouncePad_Athena.GA_Trap_BouncePad_Athena_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Trap_BouncePad_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

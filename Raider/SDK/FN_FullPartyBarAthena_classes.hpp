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

// WidgetBlueprintGeneratedClass FullPartyBarAthena.FullPartyBarAthena_C
// 0x0008 (0x0238 - 0x0230)
class UFullPartyBarAthena_C : public UAthenaPartyBar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0230(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FullPartyBarAthena.FullPartyBarAthena_C");
		return ptr;
	}


	void Initialize();
	void Construct();
	void ExecuteUbergraph_FullPartyBarAthena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

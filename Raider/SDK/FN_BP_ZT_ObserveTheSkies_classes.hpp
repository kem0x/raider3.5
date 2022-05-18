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

// BlueprintGeneratedClass BP_ZT_ObserveTheSkies.BP_ZT_ObserveTheSkies_C
// 0x0000 (0x02E8 - 0x02E8)
class UBP_ZT_ObserveTheSkies_C : public UBP_ZT_TheGrasslands_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZT_ObserveTheSkies.BP_ZT_ObserveTheSkies_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

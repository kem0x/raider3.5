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

// BlueprintGeneratedClass Border-ItemInfo-Locked.Border-ItemInfo-Locked_C
// 0x0000 (0x00B0 - 0x00B0)
class UBorder_ItemInfo_Locked_C : public UBorder_ItemInfo_Unlocked_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Border-ItemInfo-Locked.Border-ItemInfo-Locked_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

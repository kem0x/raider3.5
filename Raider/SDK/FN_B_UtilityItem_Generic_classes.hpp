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

// BlueprintGeneratedClass B_UtilityItem_Generic.B_UtilityItem_Generic_C
// 0x0000 (0x0B00 - 0x0B00)
class AB_UtilityItem_Generic_C : public AFortWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_UtilityItem_Generic.B_UtilityItem_Generic_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

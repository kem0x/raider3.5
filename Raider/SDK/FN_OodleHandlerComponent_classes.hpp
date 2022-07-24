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

// Class OodleHandlerComponent.OodleTrainerCommandlet
// 0x0000 (0x0080 - 0x0080)
class UOodleTrainerCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OodleHandlerComponent.OodleTrainerCommandlet");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

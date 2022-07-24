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

// BlueprintGeneratedClass PlayerCameraMode1P.PlayerCameraMode1P_C
// 0x0000 (0x0C20 - 0x0C20)
class UPlayerCameraMode1P_C : public UFortCameraMode_ThirdPerson
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerCameraMode1P.PlayerCameraMode1P_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

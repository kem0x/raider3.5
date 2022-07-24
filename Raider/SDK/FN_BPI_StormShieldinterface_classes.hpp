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

// BlueprintGeneratedClass BPI_StormShieldinterface.BPI_StormShieldInterface_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_StormShieldInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_StormShieldinterface.BPI_StormShieldInterface_C");
		return ptr;
	}


	void GetOutpostReadyState(bool* ReadyToExpand, bool* ReadyToInstallAmplifier);
	void CanLeaveOutpost(bool* AllowedToLeave);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

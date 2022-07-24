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

// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// 0x0008 (0x00F8 - 0x00F0)
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EasyAntiCheatCommon.EasyAntiCheatNetComponent");
		return ptr;
	}


	void ServerMessage(TArray<unsigned char> MESSAGE);
	void ClientMessage(TArray<unsigned char> MESSAGE);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class NetUI.NetDebugWidget
// 0x0108 (0x0318 - 0x0210)
class UNetDebugWidget : public UUserWidget
{
public:
	class UCommonTextBlock*                            PingUI;                                                   // 0x0210(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketInRateUI;                                           // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketOutRateUI;                                          // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketInLossUI;                                           // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            PacketOutLossUI;                                          // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            UpBandwidthUI;                                            // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonTextBlock*                            DownBandwidthUI;                                          // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHorizontalBox*                              TimeoutUI;                                                // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0250(0x00C8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NetUI.NetDebugWidget");
		return ptr;
	}


	void StopTimer();
	void StartTimer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

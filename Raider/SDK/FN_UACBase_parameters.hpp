#pragma once

// Fortnite (4.5-CL-4159770) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UACBase.UACNetworkComponent.SendPacketToServer
struct UUACNetworkComponent_SendPacketToServer_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Packet;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function UACBase.UACNetworkComponent.SendPacketToClient
struct UUACNetworkComponent_SendPacketToClient_Params
{
	unsigned char                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Packet;                                                   // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function UACBase.UACNetworkComponent.SendClientHello
struct UUACNetworkComponent_SendClientHello_Params
{
	uint32_t                                           SessionKey;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

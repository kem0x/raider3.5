// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UACBase.UACNetworkComponent.SendPacketToServer
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// unsigned char                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Packet                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UUACNetworkComponent::SendPacketToServer(unsigned char Type, TArray<unsigned char> Packet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UACBase.UACNetworkComponent.SendPacketToServer");

	UUACNetworkComponent_SendPacketToServer_Params params;
	params.Type = Type;
	params.Packet = Packet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UACBase.UACNetworkComponent.SendPacketToClient
// (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
// unsigned char                  Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Packet                         (ConstParm, Parm, ZeroConstructor, ReferenceParm)

void UUACNetworkComponent::SendPacketToClient(unsigned char Type, TArray<unsigned char> Packet)
{
	static auto fn = UObject::FindObject<UFunction>("Function UACBase.UACNetworkComponent.SendPacketToClient");

	UUACNetworkComponent_SendPacketToClient_Params params;
	params.Type = Type;
	params.Packet = Packet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UACBase.UACNetworkComponent.SendClientHello
// (Net, NetReliable, Native, Event, Public, NetClient)

void UUACNetworkComponent::SendClientHello()
{
	static auto fn = UObject::FindObject<UFunction>("Function UACBase.UACNetworkComponent.SendClientHello");

	UUACNetworkComponent_SendClientHello_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

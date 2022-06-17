#pragma once

#include "SDK.hpp"
#include "game.h"
#include "hooks.h"
#include "ufunctionhooks.h"

DWORD WINAPI Main(LPVOID lpParam)
{
    SetupConsole();

    auto Start = std::chrono::steady_clock::now();
    Native::InitializeAll();
    auto End = std::chrono::steady_clock::now();

    printf("[Native::InitializeAll] Time: %.02f ms\n", (End - Start).count() / 1000000.);

    UFunctionHooks::Initialize();

    DETOUR_START
    DetourAttachE(Native::NetDriver::TickFlush, Hooks::TickFlush);
    DetourAttachE(Native::LocalPlayer::SpawnPlayActor, Hooks::LocalPlayerSpawnPlayActor);

    auto Address = Utils::FindPattern(Patterns::NetDebug);
    CheckNullFatal(Address, "Failed to find NetDebug");
    void* (*NetDebug)(void* _this) = nullptr;
    AddressToFunction(Address, NetDebug);
    
    DetourAttachE(NetDebug, Hooks::NetDebug);
    DetourAttachE(ProcessEvent, Hooks::ProcessEventHook);
    DETOUR_END

    printf("[+] Hooked ProcessEvent\n");

    printf("[+] Base Address: %p\n", Offsets::Imagebase);

    CreateConsole();
	
    return 1;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
    if (dwReason == DLL_PROCESS_ATTACH)
        CreateThread(0, 0, Main, hModule, 0, 0);

    return true;
}

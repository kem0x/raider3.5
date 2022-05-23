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
    DetourAttachE(PEOriginal, Hooks::ProcessEvent);
    DetourAttachE(Native::NetDriver::TickFlush, Hooks::TickFlush);
    DetourAttachE(Native::LocalPlayer::SpawnPlayActor, Hooks::LocalPlayerSpawnPlayActor);

    void* (*NetDebug)(void* _this) = (void* (*)(void* _this))(Offsets::Imagebase + 0x5CDAD0);
    DetourAttachE(NetDebug, Hooks::NetDebug);
    DETOUR_END

    printf("[+] Hooked ProcessEvent\n");

    CreateConsole();

    printf("[+] Base Address: %I64d\n", Offsets::Imagebase);
	
    return 1;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
    if (dwReason == DLL_PROCESS_ATTACH)
        CreateThread(0, 0, Main, hModule, 0, 0);

    return true;
}

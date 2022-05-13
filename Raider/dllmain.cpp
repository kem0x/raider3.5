#pragma once
#include "SDK.hpp"
#include "game.h"
#include "hooks.h"
#include "ue4.h"

DWORD WINAPI Main(LPVOID lpParam)
{
    SetupConsole();

    auto Start = std::chrono::steady_clock::now();
    Functions::InitializeAll();
    auto End = std::chrono::steady_clock::now();

    printf("[Functions::InitializeAll] Time: %.02f ms\n", (End - Start).count() / 1000000.);

    DETOUR_START
    DetourAttachE(PEOriginal, Hooks::ProcessEvent);
    DetourAttachE(Functions::NetDriver::TickFlush, Hooks::TickFlush);

    void* (*NetDebug)(void* _this) = (void* (*)(void* _this))(Offsets::Imagebase + 0x5CDAD0);
    DetourAttachE(NetDebug, Hooks::NetDebug);
    DETOUR_END

    printf("[+] Hooked ProcessEvent\n");

    Game::InitConsole();
    Game::Start();

    printf("[Game::Start] Done\n");
    return 1;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
    if (dwReason == DLL_PROCESS_ATTACH)
        CreateThread(0, 0, Main, hModule, 0, 0);

    return true;
}

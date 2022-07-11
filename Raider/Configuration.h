#pragma once
#include "UE4.h"
#include "json.hpp"
#include <string>
#include <fstream>
#include <filesystem>
#include "Config.h"

namespace Configuration
{
    std::string FILENAME = "config.json";
    void createConfig(nlohmann::json json)
    {
        LOG_INFO("Creating config file");
        std::ofstream configFile(FILENAME);
        if (configFile && configFile.is_open())
        {
            configFile << std::setw(4) << json << std::flush;
            configFile.close();
        } // written successfully
    }

        nlohmann::json getDefaultConfig()
    {
        LOG_INFO("Loading default config");
        std::vector<std::string> defaultWids = {
            "WID_Harvest_Pickaxe_Athena_C_T01",
            "WID_Shotgun_Standard_Athena_UC_Ore_T03", // Blue Pump
            "WID_Shotgun_Standard_Athena_UC_Ore_T03", // Blue Pump
            "WID_Assault_AutoHigh_Athena_SR_Ore_T03", // Gold AR
            "WID_Sniper_BoltAction_Scope_Athena_R_Ore_T03", // Blue Bolt Action
            "Athena_Shields" // Big Shield Potion
        };
        nlohmann::json json = {
            { "loadout", defaultWids },
            { "bMultiLoadout", false },
            { "loadouts", nlohmann::json::array() },
            { "gameMode", "GameModeSolos" },
            { "maxShield", 100 },
            { "maxHealth", 100 },
            { "bNoSafezone", false },
            { "bRespawnEnabled", false }
        };

        return json;
    }

    template <class T>
    bool getPropertyOrDefault(nlohmann::json json, std::string propertyName, T* buffer, T defaultValue)
    {

        if ((json.find(propertyName) != json.end()) && !json[propertyName].is_null())
        {
            *buffer = json[propertyName].get<T>();
            return true;
        }
        else
        {
            LOG_INFO("property {} hasn't been found in json, using default value", propertyName.c_str());
            *buffer = defaultValue;
            return false;
        }
    }


    void loadConfiguration()
    {
        nlohmann::json json;
        if (!std::filesystem::exists(FILENAME))
        {
            json = getDefaultConfig();
            createConfig(json);
        }
        else
        {
            std::ifstream configFile(FILENAME);
            if (configFile && configFile.is_open())
            {
                std::string fileContent;
                std::string buffer;
                while (getline(configFile, buffer))
                {
                    fileContent += buffer + "\n";
                }
                buffer.clear();
                json = nlohmann::json::parse(fileContent);
                fileContent.clear();
                configFile.close();
            }
            else
            {
                json = getDefaultConfig();
            }
        }

        getPropertyOrDefault<int>(json, "maxShield", &ConfigVars::maxShield, 100);
        getPropertyOrDefault<int>(json, "maxHealth", &ConfigVars::maxHealth, 100);
        getPropertyOrDefault<bool>(json, "bNoSafezone", &ConfigVars::bNoSafezone, false);
        getPropertyOrDefault<bool>(json, "bRespawnEnabled", &ConfigVars::bRespawnEnabled, false);
        getPropertyOrDefault<bool>(json, "bRegenEnabled", &ConfigVars::bRegenEnabled, false);
        getPropertyOrDefault<bool>(json, "bMultiLoadout", &ConfigVars::bMultiLoadout, false);
        getPropertyOrDefault<std::string>(json, "gameMode", &ConfigVars::gameMode, "GameModeSolos");

        // this->getPropertyOrDefault<std::vector<std::string>(json, "loadouts", &tempLoadouts, {});
        if (json.find("loadouts") != json.end() && json["loadouts"].is_array())
        {
            for (int i = 0; i < json["loadouts"].size(); i++)
            {
                auto loadout = PlayerLoadout {
                    FindWID("WID_Harvest_Pickaxe_Athena_C_T01")
                };
                auto itemArray = json["loadouts"][i];
                for (int i = 0; i < 5; i++)
                {
                    auto wid = itemArray[i].get<std::string>();
                   // LOG_INFO("Loading WID : {}", wid);
                    auto Item = FindWID(wid);
                    loadout[i + 1] = Item;
                }
                ConfigVars::loadouts.push_back(loadout);
            }
        }

        LOG_INFO("Multi-Loadouts loaded successfully");

        //    std::vector<std::string> loadout = {};
        //     this->getPropertyOrDefault<std::vector<std::string>>(json, "loadout", &loadout, {});
        if ((json.find("loadout") != json.end()) && json["loadout"].is_array())
        {
            auto pickaxe = FindWID("WID_Harvest_Pickaxe_Athena_C_T01");
            ConfigVars::loadout.at(0) = pickaxe;
            for (int i = 0; i < 5; i++)
            {
                auto wid = json["loadout"][i].get<std::string>();
              //  LOG_INFO("Loading WID : {}", wid);
                auto Item = FindWID(wid);
                ConfigVars::loadout[i + 1] = Item;
            }

            LOG_INFO("Loadout loaded successfully");
        }

        LOG_INFO("Config loaded successfully, you can start your game!");
        ConfigVars::bConfigLoadedSuccessfully = true;
    }

        bool isConfigLoadedSuccessfully()
    {
            return ConfigVars::bConfigLoadedSuccessfully;
    }






}


#include <stdio.h>
#include <string.h>

#include <sampgdk.h>

#include <Api/CAPIManager.h>
#include <Base/CPool.h>

PLUGIN_EXPORT bool PLUGIN_CALL OnGameModeInit()
{
    CAPIManager::Setup();
    if (CAPIManager::GetGamemodeType() == EApiType::NORMAL_GAMEMODE)
    {
        NORMAL_GAMEMODE_CHECK_FUNCTION(CAPIManager::NormalGamemode, OnGameModeInit)
        {
            return NORMAL_GAMEMODE_FUNCTION_CALL(CAPIManager::NormalGamemode, OnGameModeInit);
        }
    }
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnGameModeExit()
{
    
    if (CAPIManager::GetGamemodeType() == EApiType::NORMAL_GAMEMODE)
    {
        NORMAL_GAMEMODE_CHECK_FUNCTION(CAPIManager::NormalGamemode, OnGameModeExit)
        {
            return NORMAL_GAMEMODE_FUNCTION_CALL(CAPIManager::NormalGamemode, OnGameModeExit);
        }
    }
    CAPIManager::Cleanup();
    return true;
}

PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerConnect(int playerid)
{
    // Add the player to the CPlayer pool
    CPool::AddPlayerToPool(playerid);
    
    // Rest of the code..
    if (CAPIManager::GetGamemodeType() == EApiType::NORMAL_GAMEMODE)
    {
        NORMAL_GAMEMODE_CHECK_FUNCTION(CAPIManager::NormalGamemode, OnPlayerConnect)
        {
            return NORMAL_GAMEMODE_FUNCTION_CALL(CAPIManager::NormalGamemode, OnPlayerConnect, playerid);
        }
    }
    return true;
}
PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerDisconnect(int playerid, int reason)
{
    // Remove the player from the CPlayer pool
    CPool::DeletePlayerFromPool(playerid);

    //Rest of the code..
    if (CAPIManager::GetGamemodeType() == EApiType::NORMAL_GAMEMODE)
    {
        NORMAL_GAMEMODE_CHECK_FUNCTION(CAPIManager::NormalGamemode, OnPlayerDisconnect)
        {
            return NORMAL_GAMEMODE_FUNCTION_CALL(CAPIManager::NormalGamemode, OnPlayerDisconnect, playerid, reason);
        }
    }
    return true;
}

PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerRequestClass(int playerid, int classid)
{
    if (CAPIManager::GetGamemodeType() == EApiType::NORMAL_GAMEMODE)
    {
        NORMAL_GAMEMODE_CHECK_FUNCTION(CAPIManager::NormalGamemode, OnPlayerRequestClass)
        {
            return NORMAL_GAMEMODE_FUNCTION_CALL(CAPIManager::NormalGamemode, OnPlayerRequestClass, playerid, classid);
        }
    }
    return true;
}

PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerCommandText(int playerid, const char* cmdtext)
{
    if (CAPIManager::GetGamemodeType() == EApiType::NORMAL_GAMEMODE)
    {
        NORMAL_GAMEMODE_CHECK_FUNCTION(CAPIManager::NormalGamemode, OnPlayerCommandText)
        {
            return NORMAL_GAMEMODE_FUNCTION_CALL(CAPIManager::NormalGamemode, OnPlayerCommandText, playerid, cmdtext);
        }
    }
    return false;
}

PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerSpawn(int playerid)
{
    if (CAPIManager::GetGamemodeType() == EApiType::NORMAL_GAMEMODE)
    {
        NORMAL_GAMEMODE_CHECK_FUNCTION(CAPIManager::NormalGamemode, OnPlayerSpawn)
        {
            return NORMAL_GAMEMODE_FUNCTION_CALL(CAPIManager::NormalGamemode, OnPlayerSpawn, playerid);
        }
    }
    return true;
}

PLUGIN_EXPORT bool PLUGIN_CALL OnPlayerStateChange(int playerid, int newstate, int oldstate)
{
    if (CAPIManager::GetGamemodeType() == EApiType::NORMAL_GAMEMODE)
    {
        NORMAL_GAMEMODE_CHECK_FUNCTION(CAPIManager::NormalGamemode, OnPlayerStateChange)
        {
            return NORMAL_GAMEMODE_FUNCTION_CALL(CAPIManager::NormalGamemode, OnPlayerStateChange, playerid, newstate, oldstate);
        }
    }
    return true;
}
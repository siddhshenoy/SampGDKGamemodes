#include <stdio.h>
#include <string.h>

#include <sampgdk.h>

#include <Api/CAPIManager.h>
#include <Base/CPool.h>
#include <ThirdParty/FCNPC.h>

PLUGIN_EXPORT bool PLUGIN_CALL OnGameModeInit()
{
    srand(time(NULL));
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
PLUGIN_EXPORT bool PLUGIN_CALL OnRconCommand(const char* cmd)
{
    if (CAPIManager::GetGamemodeType() == EApiType::NORMAL_GAMEMODE)
    {
        NORMAL_GAMEMODE_CHECK_FUNCTION(CAPIManager::NormalGamemode, OnRconCommand)
        {
            return NORMAL_GAMEMODE_FUNCTION_CALL(CAPIManager::NormalGamemode, OnRconCommand, std::string(cmd));
        }
    }
    return false;
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
PLUGIN_EXPORT bool PLUGIN_CALL OnPublicCall(AMX* amx, const char* name, cell* params, cell* retval)
{
    // TO DO: Convert all static_cast<float>(params[x]), they need to acquired via amx_ctof as floats requires amx conversion , check OnPlayerTakeDamage for reference
    
    std::string callback_name = std::string(name);    
  
    if (callback_name == "FCNPC_OnCreate") return FCNPC::FCNPC_OnCreate(static_cast<int>(params[1]));
    else if (callback_name == "FCNPC_OnDestroy") return FCNPC::FCNPC_OnDestroy(static_cast<int>(params[1]));
    else if (callback_name == "FCNPC_OnSpawn") return FCNPC::FCNPC_OnSpawn(static_cast<int>(params[1]));
    else if (callback_name == "FCNPC_OnRespawn") return FCNPC::FCNPC_OnRespawn(static_cast<int>(params[1]));
    else if (callback_name == "FCNPC_OnDeath") return FCNPC::FCNPC_OnDeath(static_cast<int>(params[1]), static_cast<int>(params[2]), static_cast<int>(params[3]));
    else if (callback_name == "FCNPC_OnUpdate") return FCNPC::FCNPC_OnUpdate(static_cast<int>(params[1]));
    else if (callback_name == "FCNPC_OnTakeDamage")
    {
        float amount = amx_ctof(params[3]);
        return FCNPC::FCNPC_OnTakeDamage(static_cast<int>(params[1]), static_cast<int>(params[2]), amount, static_cast<int>(params[4]), static_cast<int>(params[5]));
    }
    else if (callback_name == "FCNPC_OnGiveDamage") {
        float amount = amx_ctof(params[3]);
        return FCNPC::FCNPC_OnGiveDamage(static_cast<int>(params[1]), static_cast<int>(params[2]), amount, static_cast<int>(params[4]), static_cast<int>(params[5]));
    }
    else if (callback_name == "FCNPC_OnReachDestination") return FCNPC::FCNPC_OnReachDestination(static_cast<int>(params[1]));
    else if (callback_name == "FCNPC_OnWeaponShot") {
        float fX = amx_ctof(params[5]);
        float fY = amx_ctof(params[6]);
        float fZ = amx_ctof(params[7]);
        return FCNPC::FCNPC_OnWeaponShot(static_cast<int>(params[1]), static_cast<int>(params[2]), static_cast<int>(params[3]), static_cast<int>(params[4]), fX, fY, fZ);
    }
    else if (callback_name == "FCNPC_OnWeaponStateChange") return FCNPC::FCNPC_OnWeaponStateChange(static_cast<int>(params[1]), static_cast<int>(params[2]));
    else if (callback_name == "FCNPC_OnStreamIn") return FCNPC::FCNPC_OnStreamIn(static_cast<int>(params[1]), static_cast<int>(params[2]));
    else if (callback_name == "FCNPC_OnStreamOut") return FCNPC::FCNPC_OnStreamOut(static_cast<int>(params[1]), static_cast<int>(params[2]));
    else if (callback_name == "FCNPC_OnVehicleEntryComplete") {
        
        int npcid = static_cast<int>(params[1]);
        int vehicleid = static_cast<int>(params[2]);
        int seatid = static_cast<int>(params[3]);
        sampgdk::logprintf("OnPublicCall::FCNPC_OnVehicleEntryComplete(%d,%d,%d)", npcid, vehicleid, seatid);
        return FCNPC::FCNPC_OnVehicleEntryComplete(static_cast<int>(params[1]), static_cast<int>(params[2]), static_cast<int>(params[3]));
    }
    else if (callback_name == "FCNPC_OnVehicleExitComplete") return FCNPC::FCNPC_OnVehicleExitComplete(static_cast<int>(params[1]), static_cast<int>(params[2]));
    else if (callback_name == "FCNPC_OnVehicleTakeDamage") {
        float amount = amx_ctof(params[4]);
        float fX = amx_ctof(params[6]);
        float fY = amx_ctof(params[7]);
        float fZ = amx_ctof(params[8]);
        return FCNPC::FCNPC_OnVehicleTakeDamage(static_cast<int>(params[1]), static_cast<int>(params[2]), static_cast<int>(params[3]), amount, static_cast<int>(params[5]), fX, fY, fZ);
    }
    else if (callback_name == "FCNPC_OnFinishPlayback") return FCNPC::FCNPC_OnFinishPlayback(static_cast<int>(params[1]));
    else if (callback_name == "FCNPC_OnFinishNode") return FCNPC::FCNPC_OnFinishNode(static_cast<int>(params[1]), static_cast<int>(params[2]));
    else if (callback_name == "FCNPC_OnFinishNodePoint") return FCNPC::FCNPC_OnFinishNodePoint(static_cast<int>(params[1]), static_cast<int>(params[2]), static_cast<int>(params[3]));
    else if (callback_name == "FCNPC_OnChangeNode") return FCNPC::FCNPC_OnChangeNode(static_cast<int>(params[1]), static_cast<int>(params[2]), static_cast<int>(params[3]));
    else if (callback_name == "FCNPC_OnFinishMovePath") return FCNPC::FCNPC_OnFinishMovePath(static_cast<int>(params[1]), static_cast<int>(params[2]));
    else if (callback_name == "FCNPC_OnFinishMovePathPoint") return FCNPC::FCNPC_OnFinishMovePathPoint(static_cast<int>(params[1]), static_cast<int>(params[2]), static_cast<int>(params[3]));
    else if (callback_name == "FCNPC_OnChangeHeightPos") {
        float newz = amx_ctof(params[2]);
        float oldz = amx_ctof(params[3]);
        return FCNPC::FCNPC_OnChangeHeightPos(static_cast<int>(params[1]), newz, oldz);
    }
    return 1;
}
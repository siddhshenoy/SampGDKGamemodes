#pragma once
#include "GrandTheftAuto.h"

#include <iostream>
#include <string>

#include <sampgdk.h>
#include <Functions/Functions.h>
#include <Functions/StringFunctions.h>
#include <Functions/VectorFunctions.h>
#include <ThirdParty/FCNPC.h>
#include <Base/CNpcConfig.h>
#include <Base/CNpc.h>
#include <Base/CNPCJsQueue.h>
#include <JavascriptSettings.h>





namespace GrandTheftAuto
{
    struct PlayerData
    {
        int AdminLevel;
        int State;
    };
    static const int total_connectable_npcs = 20;
    static std::map<int, PlayerData*> g_PlayerData;
    
    //static int NPCID;
    /*CNpc* CopNPC = nullptr;
    CNpc* CopNPC2 = nullptr;*/
    CNpc* PedNPC[50];
    //JavascriptRuntime g_Runtime;
    bool OnGameModeInit()
    {
        //Creating the loggers (this uses spdlog)
        CLogger::Setup();
        CLogger::CreateLogger("CNpc", "./scriptfiles/logs/npclogs", "npclogs.log");
        JavascriptSettings::InitiliazeJavascriptLogger("./scriptfiles/logs/", "ChakraCoreEngine.log");
        //Finish creating the loggers (It is important to shutdown the logger which is done on 'OnGameModeExit')
        //g_Runtime.CreateRuntime();
        //CNPCJsQueue::StartTimer();
        //sampgdk::logprintf("Created JS Runtime with memory limit: %d", g_Runtime.GetRuntimeMemoryLimit());
        //CNpcConfig::SetNPCJSRuntime(&g_Runtime);
        /*SAMPJS::Initialize();
        FCNPCJS::Initialize();*/
        FCNPC::InitNatives();
        FCNPC::Set_Callback_OnCreate(&GrandTheftAuto::Callback_FCNPC_OnCreate);
        FCNPC::Set_Callback_OnUpdate(&GrandTheftAuto::Callback_FCNPC_OnUpdate);
        FCNPC::Set_Callback_OnDestroy(&GrandTheftAuto::Callback_FCNPC_OnDestroy);
        FCNPC::Set_Callback_OnTakeDamage(&GrandTheftAuto::Callback_FCNPC_OnTakeDamage);
        FCNPC::Set_Callback_OnReachDestination(&GrandTheftAuto::Callback_FCNPC_OnReachDestination);
        FCNPC::Set_Callback_OnDeath(&GrandTheftAuto::Callback_FCNPC_OnDeath);
        FCNPC::Set_Callback_OnVehicleEntryComplete(&GrandTheftAuto::Callback_FCNPC_OnVehicleEntryComplete);
        FCNPC::Set_Callback_OnVehicleExitComplete(&GrandTheftAuto::Callback_FCNPC_OnVehicleExitComplete);
        for (int i = 0; i < total_connectable_npcs; i++) {
            PedNPC[i] = new CNpc();
            PedNPC[i]->Create(("Ped" + std::to_string(i)).c_str());
            PedNPC[i]->AttachScript("./scriptfiles/jsscripts/npc/cop_npc_logic.js");
            /*PedNPC[i]->Spawn((1 + (rand() % 300)), 0.0f, 0.0f, 0.0f);
            PedNPC[i]->SetAngle(0.0f);*/
        }
       /* CopNPC = new CNpc();
        CopNPC->Create("CopNPC");
        CopNPC->AttachScript("./scriptfiles/jsscripts/npc/cop_npc_logic.js");
        CopNPC->Spawn(294, 0.0f, 0.0f, 3.0f);
        CopNPC->SetAngle(50.0f);
        sampgdk::logprintf("Rotation: %f", CopNPC->GetAngle());*/

        /*CopNPC2 = new CNpc();
        CopNPC2->Create("CopNPC2");
        CopNPC2->Spawn(293, 0.0f, 0.0f, 3.0f);
        CopNPC2->AttachScript("./scriptfiles/jsscripts/npc/cop_npc_logic.js");*/

        
        //sampgdk::logprintf("FCNPC: GetAngle(%f)", FCNPC::FCNPC_GetAngle(NPCID));
        sampgdk::logprintf("Loading OnGameModeInit using INormalGamemode");
        
        return true;
    }
    bool OnGameModeExit()
    {
        
        //FCNPC::FCNPC_Destroy(NPCID);
        sampgdk::logprintf("Loading OnGameModeExit using INormalGamemode");
        
        for (std::map<int, CNpc*>::iterator it = CNpc::g_NpcPool.begin(); it != CNpc::g_NpcPool.end(); it++) {
            if (it->second != NULL) {
                sampgdk::logprintf("Destroying CNPC");
                delete it->second;
                sampgdk::logprintf("Done..");
            }
        }
        //g_Runtime.Dispose();
        CLogger::Destroy();
        JavascriptSettings::Cleanup();
        return true;
    }
    bool OnPlayerConnect(int playerid)
    {
        PlayerData* pData = new PlayerData;
        pData->AdminLevel = -1;
        pData->State = -1;
        g_PlayerData.insert(std::pair<int, PlayerData*>(playerid, pData));
        std::string DisconnectMessage;
        DisconnectMessage = "[C] Player " + PlayerName(playerid) + " has connected to the server.";
        SendClientMessageToAll(0x9A9A9AFF, DisconnectMessage.c_str());
        return true;
    }
    bool OnPlayerDisconnect(int playerid, int reason)
    {
        //Disconnect message..
        
        g_PlayerData.erase(playerid);
        std::string DisconnectMessage;
        DisconnectMessage = "[D] Player " + PlayerName(playerid) + " has disconnected from the server (" + GetDisconnectReason(reason) + ").";
        SendClientMessageToAll(0x9A9A9AFF, DisconnectMessage.c_str());
        return true;
    }

    bool OnPlayerRequestClass(int playerid, int classid)
    {
        return true;
    }
    bool OnRconCommand(const std::string& command) {
        sampgdk::logprintf("OnRconCommand");
        if (command == "reloadnpcscripts") {
            sampgdk::logprintf("Reloading NPC scripts..");
            for (std::map<int, CNpc*>::iterator it = CNpc::g_NpcPool.begin(); it != CNpc::g_NpcPool.end(); it++) {
                if (it->second != NULL) {
                    sampgdk::logprintf("%d", it->first);
                    /*sampgdk::logprintf("CNpc: %x", it->second);*/
                    it->second->ReloadScript();
                }
            }
        }
        return true;
    }
    bool OnPlayerCommandText(int playerid, const std::string& cmdtext)
    {
        std::vector<std::string> Splits = Utils::String::Split(cmdtext, ' ');
        std::vector<std::string> Params = Utils::Vector::CreateVector(Splits, 1, Splits.size());
        
        if (Splits.size() > 0)
        {
            if (Splits[0] == "/reloadnpcscripts")
            {
                for (std::map<int, CNpc*>::iterator it = CNpc::g_NpcPool.begin(); it != CNpc::g_NpcPool.end(); it++) {
                    if (it->second != NULL) {
                        sampgdk::logprintf("%d", it->first);
                        /*sampgdk::logprintf("CNpc: %x", it->second);*/
                        it->second->ReloadScript();
                    }
                }
                return true;
            }
            else if (Splits[0] == "/weapon")
            {
                std::vector<std::string> Result;
                if (!Utils::String::sscanf(Params, "ii", Result))
                {
                    int weaponid = std::atoi(Result[0].c_str());
                    int ammo = std::atoi(Result[1].c_str());
                    GivePlayerWeapon(playerid, weaponid, ammo);
                }
                else
                {
                    SendClientMessage(playerid, 0xFF0000FF, "Usage: /weapon <weaponid> <ammo>");
                }
                return true;
               
            }
            else if (Splits[0] == "/setwanted") {
                std::vector<std::string> Result;
                if (!Utils::String::sscanf(Params, "ii", Result))
                {
                    int player1 = std::atoi(Result[0].c_str());
                    int wantedlevel = std::atoi(Result[1].c_str());
                    if (wantedlevel < 0) return SendClientMessage(playerid, 0xFF0000FF, "Error: Wanted level cannot be less than 0");
                    if (IsPlayerConnected(player1)) {
                        SetPlayerWantedLevel(player1, wantedlevel);
                    }
                    else SendClientMessage(playerid, 0xFF0000FF, "Error: Player is not connected!");
                }
                else
                {
                    SendClientMessage(playerid, 0xFF0000FF, "Usage: /setwanted <weaponid> <ammo>");
                }
                return true;
            }
            else if (Splits[0] == "/testcommand")
            {
                std::vector<std::string> Result;
                if (Utils::String::sscanf(Params, "ifcs", Result))
                {
                    if (Utils::String::sscanf(Params, "ifc", Result))
                    {
                        if (Utils::String::sscanf(Params, "if", Result))
                        {
                            if (Utils::String::sscanf(Params, "i", Result))
                            {
                                SendClientMessage(playerid, 0xFF0000FF, "Usage: /testcommand <integer> (Option: <float> <character> <string>)");
                            }
                            else
                            {
                                SendClientMessage(playerid, -1, Result[0].c_str());
                            }
                        }
                        else
                        {
                            SendClientMessage(playerid, -1, Result[0].c_str());
                            SendClientMessage(playerid, -1, Result[1].c_str());
                        }
                    }
                    else
                    {
                        SendClientMessage(playerid, -1, Result[0].c_str());
                        SendClientMessage(playerid, -1, Result[1].c_str());
                        SendClientMessage(playerid, -1, Result[2].c_str());
                    }
                }
                else
                {
                    SendClientMessage(playerid, -1, Result[0].c_str());
                    SendClientMessage(playerid, -1, Result[1].c_str());
                    SendClientMessage(playerid, -1, Result[2].c_str());
                    SendClientMessage(playerid, -1, Result[3].c_str());
                }
                return true;
            }
            else if (Splits[0] == "/pfindertest")
            {
                sampgdk::logprintf("Params Size: %d", Params.size());
                std::vector<std::string> Result;
                if (Utils::String::sscanf(Params, "u", Result)) return SendClientMessage(playerid, 0xFF0000FF, "Usage: /pfindertest <pid/playername>");
                SendClientMessage(playerid, -1, Result[0].c_str());
                return true;
            }
            else if (Splits[0] == "/goto")
            {
                int player1 = -1;
                std::vector<std::string> Result;
                if (Utils::String::sscanf(Params, "u", Result)) return SendClientMessage(playerid, 0xFF0000FF, "Usage: /goto <playerid/playername>");
                player1 = std::atoi(Result[0].c_str());
                if (!IsPlayerConnected(player1)) return SendClientMessage(playerid, 0xFF0000FF, "ERROR: Player is not connected!");
                float pos[3];
                GetPlayerPos(player1, &pos[0], &pos[1], &pos[2]);
                if (g_PlayerData[playerid]->State == PLAYER_STATE_DRIVER) {
                    int vID = GetPlayerVehicleID(playerid);
                    SetVehiclePos(vID, pos[0] + 5.0f, pos[1], pos[2]);
                }
                else
                {
                    SetPlayerPos(playerid, pos[0] + 2.0f, pos[1], pos[2]);
                }
                std::string str;
                str = "GOTO: You have teleported to Player '" + PlayerName(player1) + "'";
                SendClientMessage(playerid, 0xA9A9A9FF, str.c_str());
                str = "GOTO: " + PlayerName(playerid) + " has teleported to you.";
                SendClientMessage(player1, 0xA9A9A9FF, str.c_str());
                return true;
            }
        }
        return false;
    }
    bool OnPlayerStateChange(int playerid, int newstate, int oldstate)
    {
        g_PlayerData[playerid]->State = newstate;
        //sampgdk::logprintf("g_PlayerData[%d]->State = %d", playerid, g_PlayerData[playerid]->State);
        return true;
    }
    bool OnPlayerSpawn(int playerid)
    {
        int x = 5;
        SetPlayerPos(playerid, -2680.4922f, -2224.0251f, 2.2676f);
        SetPlayerFacingAngle(playerid, 220.3892f);
        SendClientMessage(playerid, -1, "You have spawned at the default position.");
        return true;
    }
    bool Callback_FCNPC_OnCreate(int npcid)
    {
        sampgdk::logprintf("[FCNPC JOIN]: Calling callback from GrandTheftAuto scope ID %d has joined the server!", npcid);
        return true;
    }
    bool Callback_FCNPC_OnUpdate(int npcid)
    {
        CNpc* npc = CNpc::g_NpcPool[npcid];
        if (npc != NULL) {
            npc->OnUpdate();
        }
        //sampgdk::logprintf("[FCNPC UPDATE]: Calling callback from GrandTheftAuto scope ID %d has joined the server!", npcid);
        return true;
    }
    bool Callback_FCNPC_OnDestroy(int npcid)
    {
        sampgdk::logprintf("[FCNPC DESTROY]: Calling callback from GrandTheftAuto scope ID %d has joined the server!", npcid);
        return true;
    }
    bool Callback_FCNPC_OnTakeDamage(int npcid, int issuerid, float amount, int weaponid, int bodypart)
    {
        CNpc* npc = CNpc::g_NpcPool[npcid];
        if (npc != NULL) {
            npc->OnTakeDamage(issuerid, amount, weaponid, bodypart);
        }
        return true;
    }
    bool Callback_FCNPC_OnDeath(int npcid, int killerid, int reason)
    {
        CNpc* npc = CNpc::g_NpcPool[npcid];
        if (npc != NULL) {
            npc->OnDeath(killerid, reason);
        }
        return true;
    }
    bool Callback_FCNPC_OnReachDestination(int npcid)
    {
        CNpc* npc = CNpc::g_NpcPool[npcid];
        if (npc != NULL) {
            npc->OnReachDestination();
        }

        return true;
    }
    bool Callback_FCNPC_OnVehicleEntryComplete(int npcid, int vehicleid, int seatid)
    {
        sampgdk::logprintf("Callback_FCNPC_OnVehicleEntryComplete");
        CNpc* npc = CNpc::g_NpcPool[npcid];
        if (npc != NULL) {
            npc->OnVehicleEntryComplete(vehicleid, seatid);
        }
        return true;
    }
    bool Callback_FCNPC_OnVehicleExitComplete(int npcid, int vehicleid)
    {
        CNpc* npc = CNpc::g_NpcPool[npcid];
        if (npc != NULL) {
            npc->OnVehicleExitComplete(vehicleid);
        }
        return true;
    }
};


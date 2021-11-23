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





namespace GrandTheftAuto
{
    struct PlayerData
    {
        int AdminLevel;
        int State;
    };
    static std::map<int, PlayerData*> g_PlayerData;
    //static int NPCID;
    CNpc* CopNPC = nullptr;
    CNpc* CopNPC2 = nullptr;
    JavascriptRuntime g_Runtime;
    bool OnGameModeInit()
    {
        
        g_Runtime.CreateRuntime();
        CNpcConfig::SetNPCJSRuntime(&g_Runtime);
        /*SAMPJS::Initialize();
        FCNPCJS::Initialize();*/
        FCNPC::InitNatives();
        FCNPC::Set_Callback_OnCreate(&GrandTheftAuto::Callback_FCNPC_OnCreate);
        FCNPC::Set_Callback_OnUpdate(&GrandTheftAuto::Callback_FCNPC_OnUpdate);
        FCNPC::Set_Callback_OnDestroy(&GrandTheftAuto::Callback_FCNPC_OnDestroy);
        FCNPC::Set_Callback_OnTakeDamage(&GrandTheftAuto::Callback_FCNPC_OnTakeDamage);

        CopNPC = new CNpc();
        CopNPC->Create("CopNPC");
        CopNPC->AttachScript("./scriptfiles/jsscripts/npc/cop_npc_logic.js");
        CopNPC->Spawn(294, 0.0f, 0.0f, 3.0f);
        CopNPC->SetAngle(50.0f);
        sampgdk::logprintf("Rotation: %f", CopNPC->GetAngle());

        CopNPC2 = new CNpc();
        CopNPC2->Create("CopNPC2");
        CopNPC2->Spawn(293, 0.0f, 0.0f, 3.0f);
        CopNPC2->AttachScript("./scriptfiles/jsscripts/npc/cop_npc_logic.js");

        
        //sampgdk::logprintf("FCNPC: GetAngle(%f)", FCNPC::FCNPC_GetAngle(NPCID));
        sampgdk::logprintf("Loading OnGameModeInit using INormalGamemode");
        
        return true;
    }
    bool OnGameModeExit()
    {
        //FCNPC::FCNPC_Destroy(NPCID);
        sampgdk::logprintf("Loading OnGameModeExit using INormalGamemode");
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

    bool OnPlayerCommandText(int playerid, const std::string& cmdtext)
    {
        std::vector<std::string> Splits = Utils::String::Split(cmdtext, ' ');
        std::vector<std::string> Params = Utils::Vector::CreateVector(Splits, 1, Splits.size());
        
        if (Splits.size() > 0)
        {
            if (Splits[0] == "/weapon")
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
};


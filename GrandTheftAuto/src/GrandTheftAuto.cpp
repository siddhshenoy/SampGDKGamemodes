#pragma once
#include "GrandTheftAuto.h"

#include <iostream>
#include <string>

#include <sampgdk.h>
#include <Functions/Functions.h>
#include <Functions/StringFunctions.h>
#include <Functions/VectorFunctions.h>

namespace GrandTheftAuto
{

    bool OnGameModeInit()
    {
        sampgdk::logprintf("Loading OnGameModeInit using INormalGamemode");
        return true;
    }
    bool OnGameModeExit()
    {
        sampgdk::logprintf("Loading OnGameModeExit using INormalGamemode");
        return true;
    }
    bool OnPlayerConnect(int playerid)
    {
        std::string DisconnectMessage;
        DisconnectMessage = "[C] Player " + PlayerName(playerid) + " has connected to the server.";
        SendClientMessageToAll(0x9A9A9AFF, DisconnectMessage.c_str());
        return true;
    }
    bool OnPlayerDisconnect(int playerid, int reason)
    {
        //Disconnect message..
        

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
            if (Splits[0] == "/testcommand")
            {
                std::vector<std::string> Result;
                if (Utils::String::sscanf(Params, "ifcs", Result)) return SendClientMessage(playerid, 0xFF0000FF, "Usage: /testcommand <integer> <float> <char> <string>");
                SendClientMessage(playerid, -1, Result[0].c_str());
                SendClientMessage(playerid, -1, Result[1].c_str());
                SendClientMessage(playerid, -1, Result[2].c_str());
                SendClientMessage(playerid, -1, Result[3].c_str());
            }
        }
        return false;
    }
    bool OnPlayerStateChange(int playerid, int newstate, int oldstate)
    {
        return true;
    }
    bool OnPlayerSpawn(int playerid)
    {
        SetPlayerPos(playerid, -2680.4922f, -2224.0251f, 2.2676f);
        SetPlayerFacingAngle(playerid, 220.3892f);
        SendClientMessage(playerid, -1, "You have spawned at the default position.");
        return true;
    }
};

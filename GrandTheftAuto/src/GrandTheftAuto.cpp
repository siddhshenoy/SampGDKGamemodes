#pragma once
#include "GrandTheftAuto.h"

#include <iostream>
#include <string>

#include <sampgdk.h>
#include <Functions/Functions.h>

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

    bool OnPlayerCommandText(int playerid, const char* cmdtext)
    {
        if (strcmp(cmdtext, "/hello") == 0)
        {
            char name[MAX_PLAYER_NAME];
            GetPlayerName(playerid, name, sizeof(name));
            char message[MAX_CLIENT_MESSAGE];
            sprintf(message, "Hello, %s!", name);
            SendClientMessage(playerid, 0x00FF00FF, message);
            return true;
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

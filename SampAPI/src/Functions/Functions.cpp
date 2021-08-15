#pragma once

#include <sampgdk.h>

#include "Functions.h"

std::string PlayerName(int playerid)
{
	char _Name[MAX_PLAYER_NAME];
	GetPlayerName(playerid, _Name, sizeof(_Name));
	return _Name;
}
std::string GetDisconnectReason(int reason)
{
    std::string result = "";
    switch (reason)
    {
        case 0:
        {
            result = "Timeout/Crash";
            break;
        }
        case 1:
        {
            result = "Quit";
            break;
        }
        case 2:
        {
            result = "Kick/Ban";
            break;
        }
    }
    return result;
}
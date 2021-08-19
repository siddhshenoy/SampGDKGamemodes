#pragma once

#include <string>

namespace GrandTheftAuto
{
	bool OnGameModeInit();
	bool OnGameModeExit();
	bool OnPlayerConnect(int);
	bool OnPlayerDisconnect(int, int);
	bool OnPlayerSpawn(int);
	bool OnPlayerRequestClass(int, int);
	bool OnPlayerStateChange(int, int, int);
	bool OnPlayerCommandText(int, const std::string&);
}
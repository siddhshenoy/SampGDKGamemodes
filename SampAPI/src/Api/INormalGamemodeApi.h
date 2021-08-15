#pragma once

#include <Base/CPlayer.h>

typedef struct INormalGamemodeApi
{
	bool (*OnGameModeInit)() = nullptr;
	bool (*OnGameModeExit)() = nullptr;
	bool (*OnPlayerConnect)(CPlayer*) = nullptr;
	bool (*OnPlayerDisconnect)(CPlayer*, int) = nullptr;
	bool (*OnPlayerCommandText)(CPlayer*, const char*) = nullptr;
	bool (*OnPlayerStateChange)(CPlayer*, int, int) = nullptr;
	bool (*OnPlayerRequestClass)(CPlayer*, int) = nullptr;
	bool (*OnPlayerSpawn)(CPlayer*) = nullptr;
}
INormalGamemode;
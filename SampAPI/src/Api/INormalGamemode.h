#pragma once

#include <string>

					

typedef struct INormalGamemode
{
	bool (*OnGameModeInit)() = nullptr;
	bool (*OnGameModeExit)() = nullptr;
	bool (*OnPlayerRequestClass)(int, int) = nullptr;
	bool (*OnPlayerConnect)(int) = nullptr;
	bool (*OnPlayerDisconnect)(int, int) = nullptr;
	bool (*OnPlayerSpawn)(int) = nullptr;
	bool (*OnPlayerDeath)(int, int, int) = nullptr;
	bool (*OnVehicleSpawn)(int) = nullptr;
	bool (*OnVehicleDeath)(int, int) = nullptr;
	bool (*OnPlayerText)(int, const std::string&) = nullptr;
	bool (*OnPlayerCommandText)(int, const std::string&) = nullptr;
	bool (*OnPlayerEnterVehicle)(int, int, bool) = nullptr;
	bool (*OnPlayerExitVehicle)(int, int) = nullptr;
	bool (*OnPlayerStateChange)(int, int, int) = nullptr;
	bool (*OnPlayerEnterCheckpoint)(int) = nullptr;
	bool (*OnPlayerLeaveCheckpoint)(int) = nullptr;
	bool (*OnPlayerEnterRaceCheckpoint)(int) = nullptr;
	bool (*OnPlayerLeaveRaceCheckpoint)(int) = nullptr;
	bool (*OnRconCommand)(const std::string&) = nullptr;
	bool (*OnPlayerRequestSpawn)(int) = nullptr;
	bool (*OnObjectMoved)(int) = nullptr;
	bool (*OnPlayerObjectMoved)(int, int) = nullptr;
	bool (*OnPlayerPickUpPickup)(int, int) = nullptr;
	bool (*OnVehicleMod)(int, int, int) = nullptr;
	bool (*OnVehiclePaintjob)(int, int, int) = nullptr;
	bool (*OnVehicleRespray)(int, int, int, int) = nullptr;
	bool (*OnPlayerSelectedMenuRow)(int, int) = nullptr;
	bool (*OnPlayerExitedMenu)(int) = nullptr;
	bool (*OnPlayerInteriorChange)(int, int, int) = nullptr;
	bool (*OnPlayerKeyStateChange)(int, int, int) = nullptr;
	bool (*OnRconLoginAttempt)(const std::string&, const std::string&, int) = nullptr;
	bool (*OnPlayerUpdate)(int) = nullptr;
	bool (*OnPlayerStreamIn)(int, int) = nullptr;
	bool (*OnPlayerStreamOut)(int, int) = nullptr;
	bool (*OnVehicleStreamIn)(int, int) = nullptr;
	bool (*OnVehicleStreamOut)(int, int) = nullptr;
	bool (*OnDialogResponse)(int, int, int, int, const std::string&) = nullptr;
	bool (*OnPlayerClickPlayer)(int, int, int) = nullptr;
}
INormalGamemode;
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
	bool (*FCNPC_OnCreate)(int) = nullptr;
	bool (*FCNPC_OnDestroy)(int) = nullptr;
	bool (*FCNPC_OnSpawn)(int) = nullptr;
	bool (*FCNPC_OnRespawn)(int) = nullptr;
	bool (*FCNPC_OnDeath)(int, int, int) = nullptr;
	bool (*FCNPC_OnUpdate)(int) = nullptr;
	bool (*FCNPC_OnTakeDamage)(int, int, float, int, int) = nullptr;
	bool (*FCNPC_OnGiveDamage)(int, int, float, int, int) = nullptr;
	bool (*FCNPC_OnReachDestination)(int) = nullptr;
	bool (*FCNPC_OnWeaponShot)(int, int, int, int, float, float, float) = nullptr;
	bool (*FCNPC_OnWeaponStateChange)(int, int) = nullptr;
	bool (*FCNPC_OnStreamIn)(int, int) = nullptr;
	bool (*FCNPC_OnStreamOut)(int, int) = nullptr;
	bool (*FCNPC_OnVehicleEntryComplete)(int, int, int) = nullptr;
	bool (*FCNPC_OnVehicleExitComplete)(int , int ) = nullptr;
	bool (*FCNPC_OnVehicleTakeDamage)(int, int, int, float, int, float, float, float) = nullptr;
	bool (*FCNPC_OnFinishPlayback)(int) = nullptr;
	bool (*FCNPC_OnFinishNode)(int, int) = nullptr;
	bool (*FCNPC_OnFinishNodePoint)(int, int, int) = nullptr;
	bool (*FCNPC_OnChangeNode)(int, int, int) = nullptr;
	bool (*FCNPC_OnFinishMovePath)(int, int) = nullptr;
	bool (*FCNPC_OnFinishMovePathPoint)(int, int, int) = nullptr;
	bool (*FCNPC_OnChangeHeightPos)(int, float, float) = nullptr; // disabled by default, see FCNPC_SetMinHeightPosCall
}
INormalGamemode;
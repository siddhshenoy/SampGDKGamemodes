#pragma once

#include <string>

class IGamemode
{
	virtual bool OnGameModeInit() = 0;
	virtual bool OnGameModeExit() = 0;
	virtual bool OnPlayerRequestClass(int, int) = 0;
	virtual bool OnPlayerConnect(int) = 0;
	virtual bool OnPlayerDisconnect(int, int) = 0;
	virtual bool OnPlayerSpawn(int) = 0;
	virtual bool OnPlayerDeath(int, int, int) = 0;
	virtual bool OnVehicleSpawn(int) = 0;
	virtual bool OnVehicleDeath(int, int) = 0;
	virtual bool OnPlayerText(int, const std::string&) = 0;
	virtual bool OnPlayerCommandText(int, const std::string&) = 0;
	virtual bool OnPlayerEnterVehicle(int, int, bool) = 0;
	virtual bool OnPlayerExitVehicle(int, int) = 0;
	virtual bool OnPlayerStateChange(int, int, int) = 0;
	virtual bool OnPlayerEnterCheckpoint(int) = 0;
	virtual bool OnPlayerLeaveCheckpoint(int) = 0;
	virtual bool OnPlayerEnterRaceCheckpoint(int) = 0;
	virtual bool OnPlayerLeaveRaceCheckpoint(int) = 0;
	virtual bool OnRconCommand(const std::string&) = 0;
	virtual bool OnPlayerRequestSpawn(int) = 0;
	virtual bool OnObjectMoved(int) = 0;
	virtual bool OnPlayerObjectMoved(int, int) = 0;
	virtual bool OnPlayerPickUpPickup(int, int) = 0;
	virtual bool OnVehicleMod(int, int, int) = 0;
	virtual bool OnVehiclePaintjob(int, int, int) = 0;
	virtual bool OnVehicleRespray(int, int, int, int) = 0;
	virtual bool OnPlayerSelectedMenuRow(int, int) = 0;
	virtual bool OnPlayerExitedMenu(int) = 0;
	virtual bool OnPlayerInteriorChange(int, int, int) = 0;
	virtual bool OnPlayerKeyStateChange(int, int, int) = 0;
	virtual bool OnRconLoginAttempt(const std::string&, const std::string&, bool) = 0;
	virtual bool OnPlayerUpdate(int) = 0;
	virtual bool OnPlayerStreamIn(int, int) = 0;
	virtual bool OnPlayerStreamOut(int, int) = 0;
	virtual bool OnVehicleStreamIn(int, int) = 0;
	virtual bool OnVehicleStreamOut(int, int) = 0;
	virtual bool OnDialogResponse(int, int, int, int, const std::string&) = 0;
	virtual bool OnPlayerClickPlayer(int, int, int) = 0;
};
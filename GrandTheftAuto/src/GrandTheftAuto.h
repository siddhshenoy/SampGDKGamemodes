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

//FCNPC
	static bool Callback_FCNPC_OnCreate(int);
	static bool Callback_FCNPC_OnUpdate(int);
	static bool Callback_FCNPC_OnDestroy(int);
	static bool Callback_FCNPC_OnTakeDamage(int, int, float, int, int);
	//bool p_FCNPC_OnDestroy)(int) = nullptr;
	//bool p_FCNPC_OnSpawn)(int) = nullptr;
	//bool p_FCNPC_OnRespawn)(int) = nullptr;
	//bool p_FCNPC_OnDeath)(int, int, int) = nullptr;
	//bool p_FCNPC_OnUpdate)(int) = nullptr;
	//bool p_FCNPC_OnTakeDamage)(int, int, float, int, int) = nullptr;
	//bool p_FCNPC_OnGiveDamage)(int, int, float, int, int) = nullptr;
	//bool p_FCNPC_OnReachDestination)(int) = nullptr;
	//bool p_FCNPC_OnWeaponShot)(int, int, int, int, float, float, float) = nullptr;
	//bool p_FCNPC_OnWeaponStateChange)(int, int) = nullptr;
	//bool p_FCNPC_OnStreamIn)(int, int) = nullptr;
	//bool p_FCNPC_OnStreamOut)(int, int) = nullptr;
	//bool p_FCNPC_OnVehicleEntryComplete)(int, int, int) = nullptr;
	//bool p_FCNPC_OnVehicleExitComplete)(int, int) = nullptr;
	//bool p_FCNPC_OnVehicleTakeDamage)(int, int, int, float, int, float, float, float) = nullptr;
	//bool p_FCNPC_OnFinishPlayback)(int) = nullptr;
	//bool p_FCNPC_OnFinishNode)(int, int) = nullptr;
	//bool p_FCNPC_OnFinishNodePoint)(int, int, int) = nullptr;
	//bool p_FCNPC_OnChangeNode)(int, int, int) = nullptr;
	//bool p_FCNPC_OnFinishMovePath)(int, int) = nullptr;
	//bool p_FCNPC_OnFinishMovePathPoint)(int, int, int) = nullptr;
	//bool p_FCNPC_OnChangeHeightPos)(int, float, float) = nullptr;
}
#include <sampgdk.h>
#include <Api/CAPIManager.h>

#include "GrandTheftAuto.h"

void CAPIManager::Setup()
{
    CAPIManager::SetGamemodeType(EApiType::NORMAL_GAMEMODE);
    INormalGamemode* NewGamemode = new INormalGamemode;
    NewGamemode->OnGameModeInit = GrandTheftAuto::OnGameModeInit;
    NewGamemode->OnGameModeExit = GrandTheftAuto::OnGameModeExit;
    NewGamemode->OnPlayerConnect = GrandTheftAuto::OnPlayerConnect;
    NewGamemode->OnPlayerDisconnect = GrandTheftAuto::OnPlayerDisconnect;
    NewGamemode->OnPlayerSpawn = GrandTheftAuto::OnPlayerSpawn;
    NewGamemode->OnPlayerCommandText = GrandTheftAuto::OnPlayerCommandText;
    NewGamemode->OnPlayerStateChange = GrandTheftAuto::OnPlayerStateChange;
    NewGamemode->OnRconCommand = GrandTheftAuto::OnRconCommand;
    CAPIManager::AttachNormalGamemode(NewGamemode);
    //NewGamemode->OnGameModeExit = OnGameModeExit;

}
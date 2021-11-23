#pragma once

#include <map>
#include <string>

#include <sampgdk.h>

#include "CBaseEntity.h"



class CPlayer : public CBaseEntity
{
private:
	char m_Name[MAX_PLAYER_NAME];
	int m_LastOnPlayerRequestClassTime;
public:
	CPlayer();
	CPlayer(int id);
	std::string GetName();
	void InstantKick(void (*Function)(CPlayer*) = NULL);
	void DelayedKick(int delay, void (*Function)(CPlayer*) = NULL);
	~CPlayer();
//public:
	//void SetOnPlayerRequestClass()

public:
	static void PlayerKickTimer(int TimerId, void* params);
public:
	static std::map<int, CPlayer*> g_PlayerPool;
};

typedef void (*ExtraKickFunction)(CPlayer* Player);
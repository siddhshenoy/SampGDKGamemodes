#include "CPlayer.h"


std::map<int, CPlayer*> CPlayer::g_PlayerPool;

/**
* Member Functions
*/

CPlayer::CPlayer()
{
}

CPlayer::CPlayer(int id) : CBaseEntity(id)
{

}
std::string CPlayer::GetName()
{
	GetPlayerName(m_ID, m_Name, sizeof(m_Name));
	return m_Name;
}

void CPlayer::InstantKick(ExtraKickFunction Function)
{
	if (Function != NULL)
		Function(this);
	Kick(m_ID);
}

void CPlayer::DelayedKick(int delay, ExtraKickFunction Function)
{
	if(Function != NULL)
		Function(this);
	SetTimer(delay, false, CPlayer::PlayerKickTimer, static_cast<void*>(this));
}

CPlayer::~CPlayer()
{

}


/**
* Static Functions
**/

void CPlayer::PlayerKickTimer(int TimerId, void* params)
{
	CPlayer* Player = static_cast<CPlayer*>(params);
	Kick(Player->GetID());
}


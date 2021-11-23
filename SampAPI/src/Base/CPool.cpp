#include "CPool.h"

CPlayer* CPool::AddPlayerToPool(int id)
{
	if (!CheckPlayerInPool(id)) {
		CPlayer* _Player = new CPlayer(id);
		CPlayer::g_PlayerPool.insert(
			std::pair<int, CPlayer*>(id, _Player)
		);
		return _Player;
	}
	return NULL;
}

CPlayer* CPool::GetPlayerFromID(int id)
{
	if (CheckPlayerInPool(id))
	{
		return CPlayer::g_PlayerPool[id];
	}
	return NULL;
}

bool CPool::CheckPlayerInPool(int id)
{
	return (CPlayer::g_PlayerPool.find(id) != CPlayer::g_PlayerPool.end());
}

void CPool::RemovePlayerFromPool(int id)
{
	if (CheckPlayerInPool(id))
	{
		CPlayer::g_PlayerPool.erase(id);
	}
}

void CPool::DeletePlayerFromPool(int id)
{
	if (CheckPlayerInPool(id))
	{
		CPlayer* _Player = CPool::GetPlayerFromID(id);
		CPool::RemovePlayerFromPool(id);
		delete _Player;
	}
}

int CPool::FindPlayerWithSubname(const std::string& playername)
{
	int pID = -1;
	for (std::map<int, CPlayer*>::const_iterator i = CPlayer::g_PlayerPool.begin(); i != CPlayer::g_PlayerPool.end(); i++)
	{
		CPlayer* Player = i->second;
		if (Player->GetName().find(playername) != std::string::npos)
		{
			pID = i->first;
			break;
		}
	}
	return pID;
}
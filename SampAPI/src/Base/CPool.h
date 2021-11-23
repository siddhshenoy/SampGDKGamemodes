#pragma once

#include "CPlayer.h"

class CPool
{
public:
	/**
	 * Used to add a player into the CPool
	 *
	 * @param id - PlayerID
	 * @return CPlayer* - CPlayer structure created
	 */
	static CPlayer* AddPlayerToPool(int id);
	/**
	 * Gets a reference to player structure from their ID
	 *
	 * @param id - PlayerID
	 * @return CPlayer* - CPlayer structure present in the pool associated to that id
	 */
	static CPlayer* GetPlayerFromID(int id);
	/**
	 * Checks if a player exists in the CPool
	 *
	 * @param id - PlayerID
	 * @return bool - returns true if present else returns false
	 */
	static bool CheckPlayerInPool(int id);
	/**
	 * This function only removes player from the pool however, it does not destroy the CPlayer structure mapped.
	 * Use CPool::DeletePlayerFromPool(int) to destroy the structure.
	 *
	 * @param id - PlayerID
	 */
	static void RemovePlayerFromPool(int id);
	/**
	 * This function will delete the player structure and remove them for the pool.
	 *
	 * @param id - PlayerID
	 */
	static void DeletePlayerFromPool(int id);
	static int FindPlayerWithSubname(const std::string& str);
public:

};


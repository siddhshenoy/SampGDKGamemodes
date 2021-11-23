#pragma once

#include <unordered_map>
#include "CPlayer.h"

class CVehicleSeats
{
private:
	std::unordered_map<int, CPlayer*> m_SeatMap;
};


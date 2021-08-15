#pragma once

#include "INormalGamemode.h"

#define			NORMAL_GAMEMODE_CHECK_FUNCTION(a, b) \
					if(a != NULL) \
						if(a->b != NULL)

#define			NORMAL_GAMEMODE_FUNCTION_CALL(a, b, ...) \
						a->b(__VA_ARGS__)


enum class EApiType
{
	NORMAL_GAMEMODE = 0,
	NORMAL_GAMEMODE_API = 1,
	OOP_GAMEMODE = 2,
	OOP_GAMEMODE_API = 3
};

class CAPIManager
{
public:
	static EApiType GamemodeApiType;
	static INormalGamemode* NormalGamemode;
public:
	static void SetGamemodeType(EApiType ApiType);
	static EApiType GetGamemodeType();
	static void AttachNormalGamemode(INormalGamemode* NormalGamemodeApi);
	static void LoadGamemode();
	static void Setup();
	static void Cleanup();
};


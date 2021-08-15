#include "CAPIManager.h"

EApiType CAPIManager::GamemodeApiType;
INormalGamemode* CAPIManager::NormalGamemode;

void CAPIManager::SetGamemodeType(EApiType ApiType)
{
	CAPIManager::GamemodeApiType = ApiType;
}
EApiType CAPIManager::GetGamemodeType()
{
	return CAPIManager::GamemodeApiType;
}
void CAPIManager::AttachNormalGamemode(INormalGamemode* NormalGamemodeApi)
{
	CAPIManager::NormalGamemode = NormalGamemodeApi;
}
void CAPIManager::LoadGamemode()
{
	CAPIManager::Setup();
}
void CAPIManager::Cleanup()
{
	if (CAPIManager::NormalGamemode != nullptr)
	{
		delete CAPIManager::NormalGamemode;
	}
}
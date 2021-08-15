#include "CBaseEntity.h"

CBaseEntity::CBaseEntity()
{
    m_ID = -1;
}

CBaseEntity::CBaseEntity(int id)
{
    m_ID = id;
}

int CBaseEntity::GetID()
{
    return m_ID;
}

void CBaseEntity::SetID(int id)
{
    m_ID = id;
}

CBaseEntity::~CBaseEntity()
{
}

#pragma once
class CBaseEntity
{
protected:
	int m_ID;
public:
	CBaseEntity();
	CBaseEntity(int id);
	int GetID();
	void SetID(int id);
	~CBaseEntity();
};


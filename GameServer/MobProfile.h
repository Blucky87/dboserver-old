#ifndef _MOBPROFILE
#define _MOBPROFILE

#include "Base.h"
#include "Def.h"

#include <TableAll.h>

class GameServer;

class MobProfile
{
public:
	MobProfile(TBLIDX worldTblidx, TBLIDX spawnTblidx, TBLIDX mobTblidx = 0, bool bCustom = false);
	~MobProfile();

	bool Init();

	void GetObjectCreate(sGU_OBJECT_CREATE& sPacket);

	HOBJECT GetSerialID() { return hSerialID; }
	TBLIDX GetWorldID() { return worldTblIdx; }
	TBLIDX GetSpawnID() { return spawnTblIdx; }
	TBLIDX GetMobID() { return mobTblIdx; }

	sMOB_BRIEF sBrief;
	sCHARSTATE sCharState;

private:
	TBLIDX worldTblIdx;
	TBLIDX spawnTblIdx;
	TBLIDX mobTblIdx;
	HOBJECT hSerialID;

	bool bCustomSpawn;

	GameServer* pServer;
};

#endif
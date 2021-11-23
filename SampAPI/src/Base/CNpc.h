#pragma once

#include <JavascriptRuntime.h>
#include <JavascriptCode.h>
#include <JavascriptObject.h>
#include <JavascriptContext.h>
#include "CBaseEntity.h"
#include "ThirdParty/FCNPC.h"
#include "CNpcConfig.h"

#include "JavascriptFunctions/SAMPJS.h"
#include "JavascriptFunctions/FCNPCJS.h"
#include <map>

using namespace ChakraCore;

class CNpc : public CBaseEntity
{
private:
	JavascriptContext m_Context;
	JavascriptCode m_Code;
	JavascriptObject m_GlobalObject;
	JavascriptObject m_GlobalNPCID;
	SAMPJS m_SAMPJSObjects;
	FCNPCJS m_FCNPCJSObjects;
private:
	bool m_HasScriptAttached;
	std::string m_ScriptPath;
public:
	static std::map<int, CNpc*> g_NpcPool;
public:
	CNpc();
	CNpc(int id);
	CNpc(const char* name);
	~CNpc();
public:
	void AttachScript(const std::string& script_path);
public: //Functionality
	int Create(const char* name);
	int Destroy();
	int Spawn(int skinid, float x, float y, float z);
	int Respawn();
	bool IsSpawned();
	int Kill();
	bool IsDead();
	bool IsValid();
	bool IsStreamedIn(int forplayerid);
	bool IsStreamedInForAnyone();
	int SetPosition(float x, float y, float z);
	int GivePosition(float x, float y, float z);
	int GetPosition(float* x, float* y, float* z);
	int SetAngle(float angle);
	float GiveAngle(float angle);
	int SetAngleToPos(float x, float y);
	int SetAngleToPlayer(int playerid);
	float GetAngle();
	int SetQuaternion(float w, float x, float y, float z);
	int GiveQuaternion(float w, float x, float y, float z);
	int GetQuaternion(float* w, float* x, float* y, float* z);
	int SetVelocity(float x, float y, float z, bool update_pos);
	int GiveVelocity(float x, float y, float z, bool update_pos);
	int GetVelocity(float* x, float* y, float* z);
	int SetSpeed(float speed);
	float GetSpeed();
	int SetInterior(int interiorid);
	int GetInterior();
	int SetVirtualWorld(int worldid);
	int GetVirtualWorld();
	int SetHealth(float health);
	float GiveHealth(float health);
	float GetHealth();
	int SetArmour(float armour);
	float GiveArmour(float armour);
	float GetArmour();
	int SetInvulnerable(bool invulnerable);
	bool IsInvulnerable();
	int SetSkin(int skinid);
	int GetSkin();
	int GetCustomSkin();
	int SetWeapon(int weaponid);
	int GetWeapon();
	int SetAmmo(int ammo);
	int GiveAmmo(int ammo);
	int GetAmmo();
	int SetAmmoInClip(int ammo);
	int GiveAmmoInClip(int ammo);
	int GetAmmoInClip();
	int SetWeaponSkillLevel(int skill, int level);
	int GiveWeaponSkillLevel(int skill, int level);
	int GetWeaponSkillLevel(int skill);
	int SetWeaponState(int weapon_state);
	int GetWeaponState();
	int SetWeaponReloadTime(int weaponid, int time);
	int GetWeaponReloadTime(int weaponid);
	int GetWeaponActualReloadTime(int weaponid);
	int SetWeaponShootTime(int weaponid, int time);
	int GetWeaponShootTime(int weaponid);
	int SetWeaponClipSize(int weaponid, int size);
	int GetWeaponClipSize(int weaponid);
	int GetWeaponActualClipSize(int weaponid);
	int SetWeaponAccuracy(int weaponid, float accuracy);
	float GetWeaponAccuracy(int weaponid);
	int SetWeaponInfo(int weaponid, int reload_time, int shoot_time, int clip_size, float accuracy);
	int GetWeaponInfo(int weaponid, int* reload_time, int* shoot_time, int* clip_size, float* accuracy);
	int SetKeys(int ud_analog, int lr_analog, int keys);
	int GetKeys(int* ud_analog, int* lr_analog, int* keys);
	int SetSpecialAction(int actionid);
	int GetSpecialAction();
	int SetAnimation(int animationid, float fDelta, int loop, int lockx, int locky, int freeze, int time);
	int SetAnimationByName(char* name, float fDelta, int loop, int lockx, int locky, int freeze, int time);
	int ResetAnimation();
	int GetAnimation(int* animationid, float* fDelta, int* loop, int* lockx, int* locky, int* freeze, int* time);
	int ApplyAnimation(char* animlib, char* animname, float fDelta, int loop, int lockx, int locky, int freeze, int time);
	int ClearAnimations();
	int SetFightingStyle(int style);
	int GetFightingStyle();
	int UseReloading(bool use);
	bool IsReloadingUsed();
	int UseInfiniteAmmo(bool use);
	bool IsInfiniteAmmoUsed();
	int GoTo(float x, float y, float z, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance, int stop_delay);
	int GoToPlayer(int playerid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance, float dist_check, int stop_delay);
	int Stop();
	bool IsMoving();
	bool IsMovingAtPlayer(int playerid);
	int GetDestinationPoint(float* x, float* y, float* z);
	int AimAt(float x, float y, float z, bool shoot, int shoot_delay, bool set_angle, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags);
	int AimAtPlayer(int playerid, bool shoot, int shoot_delay, bool set_angle, float offset_x, float offset_y, float offset_z, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags);
	int StopAim();
	int MeleeAttack(int delay, bool fighting_style);
	int StopAttack();
	bool IsAttacking();
	bool IsAiming();
	bool IsAimingAtPlayer(int playerid);
	int GetAimingPlayer();
	bool IsShooting();
	bool IsReloading();
	int TriggerWeaponShot(int weaponid, int hittype, int hitid, float x, float y, float z, bool is_hit, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags);
	int GetClosestEntityInBetween(float x, float y, float z, float range, int between_check_mode, int between_check_flags, float offset_from_x, float offset_from_y, float offset_from_z, int* entity_id, int* entity_type, int* object_owner_id, float* point_x, float* point_y, float* point_z);
	int EnterVehicle(int vehicleid, int seatid, int type);
	int ExitVehicle();
	int PutInVehicle(int vehicleid, int seatid);
	int RemoveFromVehicle();
	int GetVehicleID();
	int GetVehicleSeat();
	int UseVehicleSiren(bool use);
	bool IsVehicleSirenUsed();
	int SetVehicleHealth(float health);
	float GetVehicleHealth();
	int SetVehicleHydraThrusters(int direction);
	int GetVehicleHydraThrusters();
	int SetVehicleGearState(int gear_state);
	int GetVehicleGearState();
	int SetVehicleTrainSpeed(float speed);
	float GetVehicleTrainSpeed();
	int SetSurfingOffsets(float x, float y, float z);
	int GiveSurfingOffsets(float x, float y, float z);
	int GetSurfingOffsets(float* x, float* y, float* z);
	int SetSurfingVehicle(int vehicleid);
	int GetSurfingVehicle();
	int SetSurfingObject(int objectid);
	int GetSurfingObject();
	int SetSurfingPlayerObject(int objectid);
	int GetSurfingPlayerObject();
	int StopSurfing();
	int StartPlayingPlayback(char* file, int recordid, bool auto_unload, float delta_x, float delta_y, float delta_z, float delta_qw, float delta_qx, float delta_qy, float delta_qz);
	int StopPlayingPlayback();
	int PausePlayingPlayback();
	int ResumePlayingPlayback();
	int SetPlayingPlaybackPath(char* path);
	int GetPlayingPlaybackPath(char* path, int size);
	int PlayNode(int nodeid, int type, float speed, int mode, float radius, bool set_angle);
	int StopPlayingNode();
	int PausePlayingNode();
	int ResumePlayingNode();
	bool IsPlayingNode();
	bool IsPlayingNodePaused();
	int GoByMovePath(int pathid, int pointid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance);
	int SetMoveMode(int mode);
	int GetMoveMode();
	int SetMinHeightPosCall(float height);
	float GetMinHeightPosCall();
	int ShowInTabListForPlayer(int forplayerid);
	int HideInTabListForPlayer(int forplayerid);
public:
	bool OnCreate();
	bool OnDestroy();
	bool OnSpawn();
	bool OnRespawn();
	bool OnDeath(int killerid, int reason);
	bool OnUpdate();
	bool OnTakeDamage(int issuerid, float amount, int weaponid, int bodypart);
	bool OnGiveDamage(int damagedid, float amount, int weaponid, int bodypart);
	bool OnReachDestination();
	bool OnWeaponShot(int weaponid, int hittype, int hitid, float fX, float fY, float fZ);
	bool OnWeaponStateChange(int weapon_state);
	bool OnStreamIn(int forplayerid);
	bool OnStreamOut(int forplayerid);
	bool OnVehicleEntryComplete(int vehicleid, int seatid);
	bool OnVehicleExitComplete(int vehicleid);
	bool OnVehicleTakeDamage(int issuerid, int vehicleid, float amount, int weaponid, float fX, float fY, float fZ);
	bool OnFinishPlayback();
	bool OnFinishNode(int nodeid);
	bool OnFinishNodePoint(int nodeid, int pointid);
	bool OnChangeNode(int newnodeid, int oldnodeid);
	bool OnFinishMovePath(int pathid);
	bool OnFinishMovePathPoint(int pathid, int pointid);
	bool OnChangeHeightPos(float newz, float oldz);
public:
	static JsValueRef CALLBACK NPCPrint(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
};
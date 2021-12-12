#pragma once

#include <iostream>
#include <sampgdk.h>
#include <Base/CBaseEntity.h>

#define FCNPC_ENTITY_CHECK_NONE					(0)
#define FCNPC_ENTITY_CHECK_PLAYER				(1)
#define FCNPC_ENTITY_CHECK_NPC					(2)
#define FCNPC_ENTITY_CHECK_ACTOR				(4)
#define FCNPC_ENTITY_CHECK_VEHICLE				(8)
#define FCNPC_ENTITY_CHECK_OBJECT				(16)
#define FCNPC_ENTITY_CHECK_POBJECT_ORIG			(32)
#define FCNPC_ENTITY_CHECK_POBJECT_TARG			(64)
#define FCNPC_ENTITY_CHECK_MAP					(128)
#define FCNPC_ENTITY_CHECK_ALL					(255)

#define FCNPC_ENTITY_MODE_AUTO					(-1)
#define FCNPC_ENTITY_MODE_NONE					(0)
#define FCNPC_ENTITY_MODE_COLANDREAS			(1)

#define FCNPC_MOVE_TYPE_AUTO					(-1)
#define FCNPC_MOVE_TYPE_WALK					(0)
#define FCNPC_MOVE_TYPE_RUN						(1)
#define FCNPC_MOVE_TYPE_SPRINT					(2)
#define FCNPC_MOVE_TYPE_DRIVE					(3)

#define FCNPC_MOVE_MODE_AUTO					(-1)
#define FCNPC_MOVE_MODE_NONE					(0)
#define FCNPC_MOVE_MODE_MAPANDREAS				(1)
#define FCNPC_MOVE_MODE_COLANDREAS				(2)

#define FCNPC_MOVE_PATHFINDING_AUTO				(-1)
#define FCNPC_MOVE_PATHFINDING_NONE				(0)
#define FCNPC_MOVE_PATHFINDING_Z				(1)
#define FCNPC_MOVE_PATHFINDING_RAYCAST			(2)

#define FCNPC_MOVE_SPEED_AUTO					(-1.0)
#define FCNPC_MOVE_SPEED_WALK					(0.1552086)
#define FCNPC_MOVE_SPEED_RUN					(0.56444)
#define FCNPC_MOVE_SPEED_SPRINT					(0.926784)

#define FCNPC_MAX_NODES							(64)

#define FCNPC_INVALID_MOVEPATH_ID				(-1)
#define FCNPC_INVALID_RECORD_ID					(-1)

class FCNPC
{
public:
	static AMX_NATIVE FCNPC_GetPluginVersion_Native;
	static AMX_NATIVE FCNPC_SetUpdateRate_Native;
	static AMX_NATIVE FCNPC_GetUpdateRate_Native;
	static AMX_NATIVE FCNPC_SetTickRate_Native;
	static AMX_NATIVE FCNPC_GetTickRate_Native;
	static AMX_NATIVE FCNPC_UseMoveMode_Native;
	static AMX_NATIVE FCNPC_IsMoveModeUsed_Native;
	static AMX_NATIVE FCNPC_UseMovePathfinding_Native;
	static AMX_NATIVE FCNPC_IsMovePathfindingUsed_Native;
	static AMX_NATIVE FCNPC_TriggerWeaponShot_Native;
	static AMX_NATIVE FCNPC_UseCrashLog_Native;
	static AMX_NATIVE FCNPC_IsCrashLogUsed_Native;
	static AMX_NATIVE FCNPC_Create_Native;
	static AMX_NATIVE FCNPC_Destroy_Native;
	static AMX_NATIVE FCNPC_Spawn_Native;
	static AMX_NATIVE FCNPC_Respawn_Native;
	static AMX_NATIVE FCNPC_IsSpawned_Native;
	static AMX_NATIVE FCNPC_Kill_Native;
	static AMX_NATIVE FCNPC_IsDead_Native;
	static AMX_NATIVE FCNPC_IsValid_Native;
	static AMX_NATIVE FCNPC_IsStreamedIn_Native;
	static AMX_NATIVE FCNPC_IsStreamedInForAnyone_Native;
	static AMX_NATIVE FCNPC_GetValidArray_Native;
	static AMX_NATIVE FCNPC_SetPosition_Native;
	static AMX_NATIVE FCNPC_GivePosition_Native;
	static AMX_NATIVE FCNPC_GetPosition_Native;
	static AMX_NATIVE FCNPC_SetQuaternion_Native;
	static AMX_NATIVE FCNPC_GiveQuaternion_Native;
	static AMX_NATIVE FCNPC_GetQuaternion_Native;
	static AMX_NATIVE FCNPC_SetAngle_Native;
	static AMX_NATIVE FCNPC_GiveAngle_Native;
	static AMX_NATIVE FCNPC_SetAngleToPos_Native;
	static AMX_NATIVE FCNPC_SetAngleToPlayer_Native;
	static AMX_NATIVE FCNPC_GetAngle_Native;
	static AMX_NATIVE FCNPC_SetVelocity_Native;
	static AMX_NATIVE FCNPC_GiveVelocity_Native;
	static AMX_NATIVE FCNPC_GetVelocity_Native;
	static AMX_NATIVE FCNPC_SetSpeed_Native;
	static AMX_NATIVE FCNPC_GetSpeed_Native;
	static AMX_NATIVE FCNPC_SetInterior_Native;
	static AMX_NATIVE FCNPC_GetInterior_Native;
	static AMX_NATIVE FCNPC_SetVirtualWorld_Native;
	static AMX_NATIVE FCNPC_GetVirtualWorld_Native;
	static AMX_NATIVE FCNPC_SetHealth_Native;
	static AMX_NATIVE FCNPC_GiveHealth_Native;
	static AMX_NATIVE FCNPC_GetHealth_Native;
	static AMX_NATIVE FCNPC_SetArmour_Native;
	static AMX_NATIVE FCNPC_GiveArmour_Native;
	static AMX_NATIVE FCNPC_GetArmour_Native;
	static AMX_NATIVE FCNPC_SetInvulnerable_Native;
	static AMX_NATIVE FCNPC_IsInvulnerable_Native;
	static AMX_NATIVE FCNPC_SetSkin_Native;
	static AMX_NATIVE FCNPC_GetSkin_Native;
	static AMX_NATIVE FCNPC_SetWeapon_Native;
	static AMX_NATIVE FCNPC_GetWeapon_Native;
	static AMX_NATIVE FCNPC_SetAmmo_Native;
	static AMX_NATIVE FCNPC_GetAmmo_Native;
	static AMX_NATIVE FCNPC_SetAmmoInClip_Native;
	static AMX_NATIVE FCNPC_GetAmmoInClip_Native;
	static AMX_NATIVE FCNPC_SetWeaponSkillLevel_Native;
	static AMX_NATIVE FCNPC_GiveWeaponSkillLevel_Native;
	static AMX_NATIVE FCNPC_GetWeaponSkillLevel_Native;
	static AMX_NATIVE FCNPC_SetWeaponState_Native;
	static AMX_NATIVE FCNPC_GetWeaponState_Native;
	static AMX_NATIVE FCNPC_SetWeaponReloadTime_Native;
	static AMX_NATIVE FCNPC_GetWeaponReloadTime_Native;
	static AMX_NATIVE FCNPC_GetWeaponActualReloadTime_Native;
	static AMX_NATIVE FCNPC_SetWeaponShootTime_Native;
	static AMX_NATIVE FCNPC_GetWeaponShootTime_Native;
	static AMX_NATIVE FCNPC_SetWeaponClipSize_Native;
	static AMX_NATIVE FCNPC_GetWeaponClipSize_Native;
	static AMX_NATIVE FCNPC_GetWeaponActualClipSize_Native;
	static AMX_NATIVE FCNPC_SetWeaponAccuracy_Native;
	static AMX_NATIVE FCNPC_GetWeaponAccuracy_Native;
	static AMX_NATIVE FCNPC_SetWeaponInfo_Native;
	static AMX_NATIVE FCNPC_GetWeaponInfo_Native;
	static AMX_NATIVE FCNPC_SetWeaponDefaultInfo_Native;
	static AMX_NATIVE FCNPC_GetWeaponDefaultInfo_Native;
	static AMX_NATIVE FCNPC_SetKeys_Native;
	static AMX_NATIVE FCNPC_GetKeys_Native;
	static AMX_NATIVE FCNPC_SetSpecialAction_Native;
	static AMX_NATIVE FCNPC_GetSpecialAction_Native;
	static AMX_NATIVE FCNPC_SetAnimation_Native;
	static AMX_NATIVE FCNPC_SetAnimationByName_Native;
	static AMX_NATIVE FCNPC_GetAnimation_Native;
	static AMX_NATIVE FCNPC_ResetAnimation_Native;
	static AMX_NATIVE FCNPC_ApplyAnimation_Native;
	static AMX_NATIVE FCNPC_ClearAnimations_Native;
	static AMX_NATIVE FCNPC_SetFightingStyle_Native;
	static AMX_NATIVE FCNPC_GetFightingStyle_Native;
	static AMX_NATIVE FCNPC_UseReloading_Native;
	static AMX_NATIVE FCNPC_IsReloadingUsed_Native;
	static AMX_NATIVE FCNPC_UseInfiniteAmmo_Native;
	static AMX_NATIVE FCNPC_IsInfiniteAmmoUsed_Native;
	static AMX_NATIVE FCNPC_GoTo_Native;
	static AMX_NATIVE FCNPC_GoToPlayer_Native;
	static AMX_NATIVE FCNPC_Stop_Native;
	static AMX_NATIVE FCNPC_IsMoving_Native;
	static AMX_NATIVE FCNPC_IsMovingAtPlayer_Native;
	static AMX_NATIVE FCNPC_GetDestinationPoint_Native;
	static AMX_NATIVE FCNPC_AimAt_Native;
	static AMX_NATIVE FCNPC_AimAtPlayer_Native;
	static AMX_NATIVE FCNPC_StopAim_Native;
	static AMX_NATIVE FCNPC_MeleeAttack_Native;
	static AMX_NATIVE FCNPC_StopAttack_Native;
	static AMX_NATIVE FCNPC_IsAttacking_Native;
	static AMX_NATIVE FCNPC_IsAiming_Native;
	static AMX_NATIVE FCNPC_IsAimingAtPlayer_Native;
	static AMX_NATIVE FCNPC_GetAimingPlayer_Native;
	static AMX_NATIVE FCNPC_IsShooting_Native;
	static AMX_NATIVE FCNPC_IsReloading_Native;
	static AMX_NATIVE FCNPC_GetClosestEntityInBetween_Native;
	static AMX_NATIVE FCNPC_EnterVehicle_Native;
	static AMX_NATIVE FCNPC_ExitVehicle_Native;
	static AMX_NATIVE FCNPC_PutInVehicle_Native;
	static AMX_NATIVE FCNPC_RemoveFromVehicle_Native;
	static AMX_NATIVE FCNPC_GetVehicleID_Native;
	static AMX_NATIVE FCNPC_GetVehicleSeat_Native;
	static AMX_NATIVE FCNPC_UseVehicleSiren_Native;
	static AMX_NATIVE FCNPC_IsVehicleSirenUsed_Native;
	static AMX_NATIVE FCNPC_SetVehicleHealth_Native;
	static AMX_NATIVE FCNPC_GetVehicleHealth_Native;
	static AMX_NATIVE FCNPC_SetVehicleHydraThrusters_Native;
	static AMX_NATIVE FCNPC_GetVehicleHydraThrusters_Native;
	static AMX_NATIVE FCNPC_SetVehicleGearState_Native;
	static AMX_NATIVE FCNPC_GetVehicleGearState_Native;
	static AMX_NATIVE FCNPC_SetVehicleTrainSpeed_Native;
	static AMX_NATIVE FCNPC_GetVehicleTrainSpeed_Native;
	static AMX_NATIVE FCNPC_SetSurfingOffsets_Native;
	static AMX_NATIVE FCNPC_GiveSurfingOffsets_Native;
	static AMX_NATIVE FCNPC_GetSurfingOffsets_Native;
	static AMX_NATIVE FCNPC_SetSurfingVehicle_Native;
	static AMX_NATIVE FCNPC_GetSurfingVehicle_Native;
	static AMX_NATIVE FCNPC_SetSurfingObject_Native;
	static AMX_NATIVE FCNPC_GetSurfingObject_Native;
	static AMX_NATIVE FCNPC_SetSurfingPlayerObject_Native;
	static AMX_NATIVE FCNPC_GetSurfingPlayerObject_Native;
	static AMX_NATIVE FCNPC_StopSurfing_Native;
	static AMX_NATIVE FCNPC_StartPlayingPlayback_Native;
	static AMX_NATIVE FCNPC_StopPlayingPlayback_Native;
	static AMX_NATIVE FCNPC_PausePlayingPlayback_Native;
	static AMX_NATIVE FCNPC_ResumePlayingPlayback_Native;
	static AMX_NATIVE FCNPC_LoadPlayingPlayback_Native;
	static AMX_NATIVE FCNPC_UnloadPlayingPlayback_Native;
	static AMX_NATIVE FCNPC_SetPlayingPlaybackPath_Native;
	static AMX_NATIVE FCNPC_GetPlayingPlaybackPath_Native;
	static AMX_NATIVE FCNPC_OpenNode_Native;
	static AMX_NATIVE FCNPC_CloseNode_Native;
	static AMX_NATIVE FCNPC_IsNodeOpen_Native;
	static AMX_NATIVE FCNPC_GetNodePointPosition_Native;
	static AMX_NATIVE FCNPC_GetNodeType_Native;
	static AMX_NATIVE FCNPC_SetNodePoint_Native;
	static AMX_NATIVE FCNPC_GetNodePointCount_Native;
	static AMX_NATIVE FCNPC_GetNodeInfo_Native;
	static AMX_NATIVE FCNPC_PlayNode_Native;
	static AMX_NATIVE FCNPC_StopPlayingNode_Native;
	static AMX_NATIVE FCNPC_PausePlayingNode_Native;
	static AMX_NATIVE FCNPC_ResumePlayingNode_Native;
	static AMX_NATIVE FCNPC_IsPlayingNode_Native;
	static AMX_NATIVE FCNPC_IsPlayingNodePaused_Native;
	static AMX_NATIVE FCNPC_CreateMovePath_Native;
	static AMX_NATIVE FCNPC_DestroyMovePath_Native;
	static AMX_NATIVE FCNPC_IsValidMovePath_Native;
	static AMX_NATIVE FCNPC_AddPointToMovePath_Native;
	static AMX_NATIVE FCNPC_AddPointsToMovePath_Native;
	static AMX_NATIVE FCNPC_AddPointsToMovePath2_Native;
	static AMX_NATIVE FCNPC_RemovePointFromMovePath_Native;
	static AMX_NATIVE FCNPC_IsValidMovePathPoint_Native;
	static AMX_NATIVE FCNPC_GetMovePathPoint_Native;
	static AMX_NATIVE FCNPC_GetNumberMovePathPoint_Native;
	static AMX_NATIVE FCNPC_GoByMovePath_Native;
	static AMX_NATIVE FCNPC_SetMoveMode_Native;
	static AMX_NATIVE FCNPC_GetMoveMode_Native;
	static AMX_NATIVE FCNPC_SetMinHeightPosCall_Native;
	static AMX_NATIVE FCNPC_GetMinHeightPosCall_Native;
	static AMX_NATIVE FCNPC_ShowInTabListForPlayer_Native;
	static AMX_NATIVE FCNPC_HideInTabListForPlayer_Native;
	static AMX_NATIVE FCNPC_GiveAmmo_Native;
	static AMX_NATIVE FCNPC_GiveAmmoInClip_Native;
	static AMX_NATIVE FCNPC_GetCustomSkin_Native;
public:
	static bool (*p_FCNPC_OnCreate)(int);
	static bool (*p_FCNPC_OnDestroy)(int);
	static bool (*p_FCNPC_OnSpawn)(int);
	static bool (*p_FCNPC_OnRespawn)(int);
	static bool (*p_FCNPC_OnDeath)(int, int, int);
	static bool (*p_FCNPC_OnUpdate)(int);
	static bool (*p_FCNPC_OnTakeDamage)(int, int, float, int, int);
	static bool (*p_FCNPC_OnGiveDamage)(int, int, float, int, int);
	static bool (*p_FCNPC_OnReachDestination)(int);
	static bool (*p_FCNPC_OnWeaponShot)(int, int, int, int, float, float, float);
	static bool (*p_FCNPC_OnWeaponStateChange)(int, int);
	static bool (*p_FCNPC_OnStreamIn)(int, int);
	static bool (*p_FCNPC_OnStreamOut)(int, int);
	static bool (*p_FCNPC_OnVehicleEntryComplete)(int, int, int);
	static bool (*p_FCNPC_OnVehicleExitComplete)(int, int);
	static bool (*p_FCNPC_OnVehicleTakeDamage)(int, int, int, float, int, float, float, float);
	static bool (*p_FCNPC_OnFinishPlayback)(int);
	static bool (*p_FCNPC_OnFinishNode)(int, int);
	static bool (*p_FCNPC_OnFinishNodePoint)(int, int, int);
	static bool (*p_FCNPC_OnChangeNode)(int, int, int);
	static bool (*p_FCNPC_OnFinishMovePath)(int, int);
	static bool (*p_FCNPC_OnFinishMovePathPoint)(int, int, int);
	static bool (*p_FCNPC_OnChangeHeightPos)(int, float, float);
public:
	static void InitNatives();
	static int FCNPC_GetPluginVersion(char* version, int size);
	static int FCNPC_SetUpdateRate(int rate);
	static int FCNPC_GetUpdateRate();
	static int FCNPC_SetTickRate(int rate);
	static int FCNPC_GetTickRate();
	static int FCNPC_UseMoveMode(int mode, bool use);
	static bool FCNPC_IsMoveModeUsed(int mode);
	static int FCNPC_UseMovePathfinding(int pathfinding, bool use);
	static bool FCNPC_IsMovePathfindingUsed(int pathfinding);
	static int FCNPC_UseCrashLog(bool use);
	static bool FCNPC_IsCrashLogUsed();
	static int FCNPC_Create(const char* name);
	static int FCNPC_Destroy(int npcid);
	static int FCNPC_Spawn(int npcid, int skinid, float x, float y, float z);
	static int FCNPC_Respawn(int npcid);
	static bool FCNPC_IsSpawned(int npcid);
	static int FCNPC_Kill(int npcid);
	static bool FCNPC_IsDead(int npcid);
	static bool FCNPC_IsValid(int npcid);
	static bool FCNPC_IsStreamedIn(int npcid, int forplayerid);
	static bool FCNPC_IsStreamedInForAnyone(int npcid);
	static int FCNPC_GetValidArray(int* npcs, int size);
	static int FCNPC_SetPosition(int npcid, float x, float y, float z);
	static int FCNPC_GivePosition(int npcid, float x, float y, float z);
	static int FCNPC_GetPosition(int npcid, float* x, float* y, float* z);
	static int FCNPC_SetAngle(int npcid, float angle);
	static float FCNPC_GiveAngle(int npcid, float angle);
	static int FCNPC_SetAngleToPos(int npcid, float x, float y);
	static int FCNPC_SetAngleToPlayer(int npcid, int playerid);
	static float FCNPC_GetAngle(int npcid);
	static int FCNPC_SetQuaternion(int npcid, float w, float x, float y, float z);
	static int FCNPC_GiveQuaternion(int npcid, float w, float x, float y, float z);
	static int FCNPC_GetQuaternion(int npcid, float* w, float* x, float* y, float* z);
	static int FCNPC_SetVelocity(int npcid, float x, float y, float z, bool update_pos);
	static int FCNPC_GiveVelocity(int npcid, float x, float y, float z, bool update_pos);
	static int FCNPC_GetVelocity(int npcid, float* x, float* y, float* z);
	static int FCNPC_SetSpeed(int npcid, float speed);
	static float FCNPC_GetSpeed(int npcid);
	static int FCNPC_SetInterior(int npcid, int interiorid);
	static int FCNPC_GetInterior(int npcid);
	static int FCNPC_SetVirtualWorld(int npcid, int worldid);
	static int FCNPC_GetVirtualWorld(int npcid);
	static int FCNPC_SetHealth(int npcid, float health);
	static float FCNPC_GiveHealth(int npcid, float health);
	static float FCNPC_GetHealth(int npcid);
	static int FCNPC_SetArmour(int npcid, float armour);
	static float FCNPC_GiveArmour(int npcid, float armour);
	static float FCNPC_GetArmour(int npcid);
	static int FCNPC_SetInvulnerable(int npcid, bool invulnerable);
	static bool FCNPC_IsInvulnerable(int npcid);
	static int FCNPC_SetSkin(int npcid, int skinid);
	static int FCNPC_GetSkin(int npcid);
	static int FCNPC_GetCustomSkin(int npcid);
	static int FCNPC_SetWeapon(int npcid, int weaponid);
	static int FCNPC_GetWeapon(int npcid);
	static int FCNPC_SetAmmo(int npcid, int ammo);
	static int FCNPC_GiveAmmo(int npcid, int ammo);
	static int FCNPC_GetAmmo(int npcid);
	static int FCNPC_SetAmmoInClip(int npcid, int ammo);
	static int FCNPC_GiveAmmoInClip(int npcid, int ammo);
	static int FCNPC_GetAmmoInClip(int npcid);
	static int FCNPC_SetWeaponSkillLevel(int npcid, int skill, int level);
	static int FCNPC_GiveWeaponSkillLevel(int npcid, int skill, int level);
	static int FCNPC_GetWeaponSkillLevel(int npcid, int skill);
	static int FCNPC_SetWeaponState(int npcid, int weapon_state);
	static int FCNPC_GetWeaponState(int npcid);
	static int FCNPC_SetWeaponReloadTime(int npcid, int weaponid, int time);
	static int FCNPC_GetWeaponReloadTime(int npcid, int weaponid);
	static int FCNPC_GetWeaponActualReloadTime(int npcid, int weaponid);
	static int FCNPC_SetWeaponShootTime(int npcid, int weaponid, int time);
	static int FCNPC_GetWeaponShootTime(int npcid, int weaponid);
	static int FCNPC_SetWeaponClipSize(int npcid, int weaponid, int size);
	static int FCNPC_GetWeaponClipSize(int npcid, int weaponid);
	static int FCNPC_GetWeaponActualClipSize(int npcid, int weaponid);
	static int FCNPC_SetWeaponAccuracy(int npcid, int weaponid, float accuracy);
	static float FCNPC_GetWeaponAccuracy(int npcid, int weaponid);
	static int FCNPC_SetWeaponInfo(int npcid, int weaponid, int reload_time, int shoot_time, int clip_size, float accuracy);
	static int FCNPC_GetWeaponInfo(int npcid, int weaponid, int* reload_time, int* shoot_time, int* clip_size, float* accuracy);
	static int FCNPC_SetWeaponDefaultInfo(int weaponid, int reload_time, int shoot_time, int clip_size, float accuracy);
	static int FCNPC_GetWeaponDefaultInfo(int weaponid, int* reload_time, int* shoot_time, int* clip_size, float* accuracy);
	static int FCNPC_SetKeys(int npcid, int ud_analog, int lr_analog, int keys);
	static int FCNPC_GetKeys(int npcid, int* ud_analog, int* lr_analog, int* keys);
	static int FCNPC_SetSpecialAction(int npcid, int actionid);
	static int FCNPC_GetSpecialAction(int npcid);
	static int FCNPC_SetAnimation(int npcid, int animationid, float fDelta, int loop, int lockx, int locky, int freeze, int time);
	static int FCNPC_SetAnimationByName(int npcid, char* name, float fDelta, int loop, int lockx, int locky, int freeze, int time);
	static int FCNPC_ResetAnimation(int npcid);
	static int FCNPC_GetAnimation(int npcid, int* animationid, float* fDelta, int* loop, int* lockx, int* locky, int* freeze, int* time);
	static int FCNPC_ApplyAnimation(int npcid, char* animlib, char* animname, float fDelta, int loop, int lockx, int locky, int freeze, int time);
	static int FCNPC_ClearAnimations(int npcid);
	static int FCNPC_SetFightingStyle(int npcid, int style);
	static int FCNPC_GetFightingStyle(int npcid);
	static int FCNPC_UseReloading(int npcid, bool use);
	static bool FCNPC_IsReloadingUsed(int npcid);
	static int FCNPC_UseInfiniteAmmo(int npcid, bool use);
	static bool FCNPC_IsInfiniteAmmoUsed(int npcid);
	static int FCNPC_GoTo(int npcid, float x, float y, float z, int type = FCNPC_MOVE_TYPE_AUTO, float speed= FCNPC_MOVE_SPEED_AUTO, int mode = FCNPC_MOVE_MODE_AUTO, int pathfinding = FCNPC_MOVE_PATHFINDING_AUTO, float radius = 0.0f, bool set_angle = true, float min_distance = 0.0f, int stop_delay = 250);
	static int FCNPC_GoToPlayer(int npcid, int playerid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance, float dist_check, int stop_delay);
	static int FCNPC_Stop(int npcid);
	static bool FCNPC_IsMoving(int npcid);
	static bool FCNPC_IsMovingAtPlayer(int npcid, int playerid);
	static int FCNPC_GetDestinationPoint(int npcid, float* x, float* y, float* z);
	static int FCNPC_AimAt(int npcid, float x, float y, float z, bool shoot, int shoot_delay, bool set_angle, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags);
	static int FCNPC_AimAtPlayer(int npcid, int playerid, bool shoot, int shoot_delay, bool set_angle, float offset_x, float offset_y, float offset_z, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags);
	static int FCNPC_StopAim(int npcid);
	static int FCNPC_MeleeAttack(int npcid, int delay, bool fighting_style);
	static int FCNPC_StopAttack(int npcid);
	static bool FCNPC_IsAttacking(int npcid);
	static bool FCNPC_IsAiming(int npcid);
	static bool FCNPC_IsAimingAtPlayer(int npcid, int playerid);
	static int FCNPC_GetAimingPlayer(int npcid);
	static bool FCNPC_IsShooting(int npcid);
	static bool FCNPC_IsReloading(int npcid);
	static int FCNPC_TriggerWeaponShot(int npcid, int weaponid, int hittype, int hitid, float x, float y, float z, bool is_hit, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags);
	static int FCNPC_GetClosestEntityInBetween(int npcid, float x, float y, float z, float range, int between_check_mode, int between_check_flags, float offset_from_x, float offset_from_y, float offset_from_z, int* entity_id, int* entity_type, int* object_owner_id, float* point_x, float* point_y, float* point_z);
	static int FCNPC_EnterVehicle(int npcid, int vehicleid, int seatid, int type);
	static int FCNPC_ExitVehicle(int npcid);
	static int FCNPC_PutInVehicle(int npcid, int vehicleid, int seatid);
	static int FCNPC_RemoveFromVehicle(int npcid);
	static int FCNPC_GetVehicleID(int npcid);
	static int FCNPC_GetVehicleSeat(int npcid);
	static int FCNPC_UseVehicleSiren(int npcid, bool use);
	static bool FCNPC_IsVehicleSirenUsed(int npcid);
	static int FCNPC_SetVehicleHealth(int npcid, float health);
	static float FCNPC_GetVehicleHealth(int npcid);
	static int FCNPC_SetVehicleHydraThrusters(int npcid, int direction);
	static int FCNPC_GetVehicleHydraThrusters(int npcid);
	static int FCNPC_SetVehicleGearState(int npcid, int gear_state);
	static int FCNPC_GetVehicleGearState(int npcid);
	static int FCNPC_SetVehicleTrainSpeed(int npcid, float speed);
	static float FCNPC_GetVehicleTrainSpeed(int npcid);
	static int FCNPC_SetSurfingOffsets(int npcid, float x, float y, float z);
	static int FCNPC_GiveSurfingOffsets(int npcid, float x, float y, float z);
	static int FCNPC_GetSurfingOffsets(int npcid, float* x, float* y, float* z);
	static int FCNPC_SetSurfingVehicle(int npcid, int vehicleid);
	static int FCNPC_GetSurfingVehicle(int npcid);
	static int FCNPC_SetSurfingObject(int npcid, int objectid);
	static int FCNPC_GetSurfingObject(int npcid);
	static int FCNPC_SetSurfingPlayerObject(int npcid, int objectid);
	static int FCNPC_GetSurfingPlayerObject(int npcid);
	static int FCNPC_StopSurfing(int npcid);
	static int FCNPC_StartPlayingPlayback(int npcid, char* file, int recordid, bool auto_unload, float delta_x, float delta_y, float delta_z, float delta_qw, float delta_qx, float delta_qy, float delta_qz);
	static int FCNPC_StopPlayingPlayback(int npcid);
	static int FCNPC_PausePlayingPlayback(int npcid);
	static int FCNPC_ResumePlayingPlayback(int npcid);
	static int FCNPC_LoadPlayingPlayback(char* file);
	static int FCNPC_UnloadPlayingPlayback(int recordid);
	static int FCNPC_SetPlayingPlaybackPath(int npcid, char* path);
	static int FCNPC_GetPlayingPlaybackPath(int npcid, char* path, int size);
	static int FCNPC_OpenNode(int nodeid);
	static int FCNPC_CloseNode(int nodeid);
	static bool FCNPC_IsNodeOpen(int nodeid);
	static int FCNPC_GetNodeType(int nodeid);
	static int FCNPC_SetNodePoint(int nodeid, int pointid);
	static int FCNPC_GetNodePointPosition(int nodeid, float* x, float* y, float* z);
	static int FCNPC_GetNodePointCount(int nodeid);
	static int FCNPC_GetNodeInfo(int nodeid, int* vehnodes, int* pednodes, int* navinode);
	static int FCNPC_PlayNode(int npcid, int nodeid, int type, float speed, int mode, float radius, bool set_angle);
	static int FCNPC_StopPlayingNode(int npcid);
	static int FCNPC_PausePlayingNode(int npcid);
	static int FCNPC_ResumePlayingNode(int npcid);
	static bool FCNPC_IsPlayingNode(int npcid);
	static bool FCNPC_IsPlayingNodePaused(int npcid);
	static int FCNPC_CreateMovePath();
	static int FCNPC_DestroyMovePath(int pathid);
	static bool FCNPC_IsValidMovePath(int pathid);
	static int FCNPC_AddPointToMovePath(int pathid, float x, float y, float z);
	static int FCNPC_AddPointsToMovePath(int pathid, float** points, int size);
	static int FCNPC_AddPointsToMovePath2(int pathid, float points_x, float points_y, float points_z, int size);
	static int FCNPC_RemovePointFromMovePath(int pathid, int pointid);
	static bool FCNPC_IsValidMovePathPoint(int pathid, int pointid);
	static int FCNPC_GetMovePathPoint(int pathid, int pointid, float* x, float* y, float* z);
	static int FCNPC_GetNumberMovePathPoint(int pathid);
	static int FCNPC_GoByMovePath(int npcid, int pathid, int pointid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance);
	static int FCNPC_SetMoveMode(int npcid, int mode);
	static int FCNPC_GetMoveMode(int npcid);
	static int FCNPC_SetMinHeightPosCall(int npcid, float height);
	static float FCNPC_GetMinHeightPosCall(int npcid);
	static int FCNPC_ShowInTabListForPlayer(int npcid, int forplayerid);
	static int FCNPC_HideInTabListForPlayer(int npcid, int forplayerid);
public:
	static bool FCNPC_OnCreate(int npcid);
	static bool FCNPC_OnDestroy(int npcid);
	static bool FCNPC_OnSpawn(int npcid);
	static bool FCNPC_OnRespawn(int npcid);
	static bool FCNPC_OnDeath(int npcid, int killerid, int reason);
	static bool FCNPC_OnUpdate(int npcid);
	static bool FCNPC_OnTakeDamage(int npcid, int issuerid, float amount, int weaponid, int bodypart);
	static bool FCNPC_OnGiveDamage(int npcid, int damagedid, float amount, int weaponid, int bodypart);
	static bool FCNPC_OnReachDestination(int npcid);
	static bool FCNPC_OnWeaponShot(int npcid, int weaponid, int hittype, int hitid, float fX, float fY, float fZ);
	static bool FCNPC_OnWeaponStateChange(int npcid, int weapon_state);
	static bool FCNPC_OnStreamIn(int npcid, int forplayerid);
	static bool FCNPC_OnStreamOut(int npcid, int forplayerid);
	static bool FCNPC_OnVehicleEntryComplete(int npcid, int vehicleid, int seatid);
	static bool FCNPC_OnVehicleExitComplete(int npcid, int vehicleid);
	static bool FCNPC_OnVehicleTakeDamage(int npcid, int issuerid, int vehicleid, float amount, int weaponid, float fX, float fY, float fZ);
	static bool FCNPC_OnFinishPlayback(int npcid);
	static bool FCNPC_OnFinishNode(int npcid, int nodeid);
	static bool FCNPC_OnFinishNodePoint(int npcid, int nodeid, int pointid);
	static bool FCNPC_OnChangeNode(int npcid, int newnodeid, int oldnodeid);
	static bool FCNPC_OnFinishMovePath(int npcid, int pathid);
	static bool FCNPC_OnFinishMovePathPoint(int npcid, int pathid, int pointid);
	static bool FCNPC_OnChangeHeightPos(int npcid, float newz, float oldz); // disabled by default, see FCNPC_SetMinHeightPosCall
public:
	static void Set_Callback_OnCreate(bool (*fn)(int));
	static void Set_Callback_OnDestroy(bool (*fn)(int));
	static void Set_Callback_OnSpawn(bool (*fn)(int));
	static void Set_Callback_OnRespawn(bool (*fn)(int));
	static void Set_Callback_OnDeath(bool (*fn)(int, int, int));
	static void Set_Callback_OnUpdate(bool (*fn)(int));
	static void Set_Callback_OnTakeDamage(bool (*fn)(int, int, float, int, int));
	static void Set_Callback_OnGiveDamage(bool (*fn)(int, int, float, int, int));
	static void Set_Callback_OnReachDestination(bool (*fn)(int));
	static void Set_Callback_OnWeaponShot(bool (*fn)(int, int, int, int, float, float, float));
	static void Set_Callback_OnWeaponStateChange(bool (*fn)(int, int));
	static void Set_Callback_OnStreamIn(bool (*fn)(int, int));
	static void Set_Callback_OnStreamOut(bool (*fn)(int, int));
	static void Set_Callback_OnVehicleEntryComplete(bool (*fn)(int, int, int));
	static void Set_Callback_OnVehicleExitComplete(bool (*fn)(int, int));
	static void Set_Callback_OnVehicleTakeDamage(bool (*fn)(int, int, int, float, int, float, float, float));
	static void Set_Callback_OnFinishPlayback(bool (*fn)(int));
	static void Set_Callback_OnFinishNode(bool (*fn)(int, int));
	static void Set_Callback_OnFinishNodePoint(bool (*fn)(int, int, int));
	static void Set_Callback_OnChangeNode(bool (*fn)(int, int, int));
	static void Set_Callback_OnFinishMovePath(bool (*fn)(int, int));
	static void Set_Callback_OnFinishMovePathPoint(bool (*fn)(int, int, int));
	static void Set_Callback_OnChangeHeightPos(bool (*fn)(int, float, float)); // disabled by default, see FCNPC_SetMinHeightPosCall

};
#include "FCNPC.h"

AMX_NATIVE FCNPC::FCNPC_GetPluginVersion_Native;
AMX_NATIVE FCNPC::FCNPC_SetUpdateRate_Native;
AMX_NATIVE FCNPC::FCNPC_GetUpdateRate_Native;
AMX_NATIVE FCNPC::FCNPC_SetTickRate_Native;
AMX_NATIVE FCNPC::FCNPC_GetTickRate_Native;
AMX_NATIVE FCNPC::FCNPC_UseMoveMode_Native;
AMX_NATIVE FCNPC::FCNPC_IsMoveModeUsed_Native;
AMX_NATIVE FCNPC::FCNPC_UseMovePathfinding_Native;
AMX_NATIVE FCNPC::FCNPC_IsMovePathfindingUsed_Native;
AMX_NATIVE FCNPC::FCNPC_TriggerWeaponShot_Native;
AMX_NATIVE FCNPC::FCNPC_UseCrashLog_Native;
AMX_NATIVE FCNPC::FCNPC_IsCrashLogUsed_Native;
AMX_NATIVE FCNPC::FCNPC_Create_Native;
AMX_NATIVE FCNPC::FCNPC_Destroy_Native;
AMX_NATIVE FCNPC::FCNPC_Spawn_Native;
AMX_NATIVE FCNPC::FCNPC_Respawn_Native;
AMX_NATIVE FCNPC::FCNPC_IsSpawned_Native;
AMX_NATIVE FCNPC::FCNPC_Kill_Native;
AMX_NATIVE FCNPC::FCNPC_IsDead_Native;
AMX_NATIVE FCNPC::FCNPC_IsValid_Native;
AMX_NATIVE FCNPC::FCNPC_IsStreamedIn_Native;
AMX_NATIVE FCNPC::FCNPC_IsStreamedInForAnyone_Native;
AMX_NATIVE FCNPC::FCNPC_GetValidArray_Native;
AMX_NATIVE FCNPC::FCNPC_SetPosition_Native;
AMX_NATIVE FCNPC::FCNPC_GivePosition_Native;
AMX_NATIVE FCNPC::FCNPC_GetPosition_Native;
AMX_NATIVE FCNPC::FCNPC_SetQuaternion_Native;
AMX_NATIVE FCNPC::FCNPC_GiveQuaternion_Native;
AMX_NATIVE FCNPC::FCNPC_GetQuaternion_Native;
AMX_NATIVE FCNPC::FCNPC_SetAngle_Native;
AMX_NATIVE FCNPC::FCNPC_GiveAngle_Native;
AMX_NATIVE FCNPC::FCNPC_SetAngleToPos_Native;
AMX_NATIVE FCNPC::FCNPC_SetAngleToPlayer_Native;
AMX_NATIVE FCNPC::FCNPC_GetAngle_Native;
AMX_NATIVE FCNPC::FCNPC_SetVelocity_Native;
AMX_NATIVE FCNPC::FCNPC_GiveVelocity_Native;
AMX_NATIVE FCNPC::FCNPC_GetVelocity_Native;
AMX_NATIVE FCNPC::FCNPC_SetSpeed_Native;
AMX_NATIVE FCNPC::FCNPC_GetSpeed_Native;
AMX_NATIVE FCNPC::FCNPC_SetInterior_Native;
AMX_NATIVE FCNPC::FCNPC_GetInterior_Native;
AMX_NATIVE FCNPC::FCNPC_SetVirtualWorld_Native;
AMX_NATIVE FCNPC::FCNPC_GetVirtualWorld_Native;
AMX_NATIVE FCNPC::FCNPC_SetHealth_Native;
AMX_NATIVE FCNPC::FCNPC_GiveHealth_Native;
AMX_NATIVE FCNPC::FCNPC_GetHealth_Native;
AMX_NATIVE FCNPC::FCNPC_SetArmour_Native;
AMX_NATIVE FCNPC::FCNPC_GiveArmour_Native;
AMX_NATIVE FCNPC::FCNPC_GetArmour_Native;
AMX_NATIVE FCNPC::FCNPC_SetInvulnerable_Native;
AMX_NATIVE FCNPC::FCNPC_IsInvulnerable_Native;
AMX_NATIVE FCNPC::FCNPC_SetSkin_Native;
AMX_NATIVE FCNPC::FCNPC_GetSkin_Native;
AMX_NATIVE FCNPC::FCNPC_SetWeapon_Native;
AMX_NATIVE FCNPC::FCNPC_GetWeapon_Native;
AMX_NATIVE FCNPC::FCNPC_SetAmmo_Native;
AMX_NATIVE FCNPC::FCNPC_GetAmmo_Native;
AMX_NATIVE FCNPC::FCNPC_SetAmmoInClip_Native;
AMX_NATIVE FCNPC::FCNPC_GetAmmoInClip_Native;
AMX_NATIVE FCNPC::FCNPC_SetWeaponSkillLevel_Native;
AMX_NATIVE FCNPC::FCNPC_GiveWeaponSkillLevel_Native;
AMX_NATIVE FCNPC::FCNPC_GetWeaponSkillLevel_Native;
AMX_NATIVE FCNPC::FCNPC_SetWeaponState_Native;
AMX_NATIVE FCNPC::FCNPC_GetWeaponState_Native;
AMX_NATIVE FCNPC::FCNPC_SetWeaponReloadTime_Native;
AMX_NATIVE FCNPC::FCNPC_GetWeaponReloadTime_Native;
AMX_NATIVE FCNPC::FCNPC_GetWeaponActualReloadTime_Native;
AMX_NATIVE FCNPC::FCNPC_SetWeaponShootTime_Native;
AMX_NATIVE FCNPC::FCNPC_GetWeaponShootTime_Native;
AMX_NATIVE FCNPC::FCNPC_SetWeaponClipSize_Native;
AMX_NATIVE FCNPC::FCNPC_GetWeaponClipSize_Native;
AMX_NATIVE FCNPC::FCNPC_GetWeaponActualClipSize_Native;
AMX_NATIVE FCNPC::FCNPC_SetWeaponAccuracy_Native;
AMX_NATIVE FCNPC::FCNPC_GetWeaponAccuracy_Native;
AMX_NATIVE FCNPC::FCNPC_SetWeaponInfo_Native;
AMX_NATIVE FCNPC::FCNPC_GetWeaponInfo_Native;
AMX_NATIVE FCNPC::FCNPC_SetWeaponDefaultInfo_Native;
AMX_NATIVE FCNPC::FCNPC_GetWeaponDefaultInfo_Native;
AMX_NATIVE FCNPC::FCNPC_SetKeys_Native;
AMX_NATIVE FCNPC::FCNPC_GetKeys_Native;
AMX_NATIVE FCNPC::FCNPC_SetSpecialAction_Native;
AMX_NATIVE FCNPC::FCNPC_GetSpecialAction_Native;
AMX_NATIVE FCNPC::FCNPC_SetAnimation_Native;
AMX_NATIVE FCNPC::FCNPC_SetAnimationByName_Native;
AMX_NATIVE FCNPC::FCNPC_GetAnimation_Native;
AMX_NATIVE FCNPC::FCNPC_ResetAnimation_Native;
AMX_NATIVE FCNPC::FCNPC_ApplyAnimation_Native;
AMX_NATIVE FCNPC::FCNPC_ClearAnimations_Native;
AMX_NATIVE FCNPC::FCNPC_SetFightingStyle_Native;
AMX_NATIVE FCNPC::FCNPC_GetFightingStyle_Native;
AMX_NATIVE FCNPC::FCNPC_UseReloading_Native;
AMX_NATIVE FCNPC::FCNPC_IsReloadingUsed_Native;
AMX_NATIVE FCNPC::FCNPC_UseInfiniteAmmo_Native;
AMX_NATIVE FCNPC::FCNPC_IsInfiniteAmmoUsed_Native;
AMX_NATIVE FCNPC::FCNPC_GoTo_Native;
AMX_NATIVE FCNPC::FCNPC_GoToPlayer_Native;
AMX_NATIVE FCNPC::FCNPC_Stop_Native;
AMX_NATIVE FCNPC::FCNPC_IsMoving_Native;
AMX_NATIVE FCNPC::FCNPC_IsMovingAtPlayer_Native;
AMX_NATIVE FCNPC::FCNPC_GetDestinationPoint_Native;
AMX_NATIVE FCNPC::FCNPC_AimAt_Native;
AMX_NATIVE FCNPC::FCNPC_AimAtPlayer_Native;
AMX_NATIVE FCNPC::FCNPC_StopAim_Native;
AMX_NATIVE FCNPC::FCNPC_MeleeAttack_Native;
AMX_NATIVE FCNPC::FCNPC_StopAttack_Native;
AMX_NATIVE FCNPC::FCNPC_IsAttacking_Native;
AMX_NATIVE FCNPC::FCNPC_IsAiming_Native;
AMX_NATIVE FCNPC::FCNPC_IsAimingAtPlayer_Native;
AMX_NATIVE FCNPC::FCNPC_GetAimingPlayer_Native;
AMX_NATIVE FCNPC::FCNPC_IsShooting_Native;
AMX_NATIVE FCNPC::FCNPC_IsReloading_Native;
AMX_NATIVE FCNPC::FCNPC_GetClosestEntityInBetween_Native;
AMX_NATIVE FCNPC::FCNPC_EnterVehicle_Native;
AMX_NATIVE FCNPC::FCNPC_ExitVehicle_Native;
AMX_NATIVE FCNPC::FCNPC_PutInVehicle_Native;
AMX_NATIVE FCNPC::FCNPC_RemoveFromVehicle_Native;
AMX_NATIVE FCNPC::FCNPC_GetVehicleID_Native;
AMX_NATIVE FCNPC::FCNPC_GetVehicleSeat_Native;
AMX_NATIVE FCNPC::FCNPC_UseVehicleSiren_Native;
AMX_NATIVE FCNPC::FCNPC_IsVehicleSirenUsed_Native;
AMX_NATIVE FCNPC::FCNPC_SetVehicleHealth_Native;
AMX_NATIVE FCNPC::FCNPC_GetVehicleHealth_Native;
AMX_NATIVE FCNPC::FCNPC_SetVehicleHydraThrusters_Native;
AMX_NATIVE FCNPC::FCNPC_GetVehicleHydraThrusters_Native;
AMX_NATIVE FCNPC::FCNPC_SetVehicleGearState_Native;
AMX_NATIVE FCNPC::FCNPC_GetVehicleGearState_Native;
AMX_NATIVE FCNPC::FCNPC_SetVehicleTrainSpeed_Native;
AMX_NATIVE FCNPC::FCNPC_GetVehicleTrainSpeed_Native;
AMX_NATIVE FCNPC::FCNPC_SetSurfingOffsets_Native;
AMX_NATIVE FCNPC::FCNPC_GiveSurfingOffsets_Native;
AMX_NATIVE FCNPC::FCNPC_GetSurfingOffsets_Native;
AMX_NATIVE FCNPC::FCNPC_SetSurfingVehicle_Native;
AMX_NATIVE FCNPC::FCNPC_GetSurfingVehicle_Native;
AMX_NATIVE FCNPC::FCNPC_SetSurfingObject_Native;
AMX_NATIVE FCNPC::FCNPC_GetSurfingObject_Native;
AMX_NATIVE FCNPC::FCNPC_SetSurfingPlayerObject_Native;
AMX_NATIVE FCNPC::FCNPC_GetSurfingPlayerObject_Native;
AMX_NATIVE FCNPC::FCNPC_StopSurfing_Native;
AMX_NATIVE FCNPC::FCNPC_StartPlayingPlayback_Native;
AMX_NATIVE FCNPC::FCNPC_StopPlayingPlayback_Native;
AMX_NATIVE FCNPC::FCNPC_PausePlayingPlayback_Native;
AMX_NATIVE FCNPC::FCNPC_ResumePlayingPlayback_Native;
AMX_NATIVE FCNPC::FCNPC_LoadPlayingPlayback_Native;
AMX_NATIVE FCNPC::FCNPC_UnloadPlayingPlayback_Native;
AMX_NATIVE FCNPC::FCNPC_SetPlayingPlaybackPath_Native;
AMX_NATIVE FCNPC::FCNPC_GetPlayingPlaybackPath_Native;
AMX_NATIVE FCNPC::FCNPC_OpenNode_Native;
AMX_NATIVE FCNPC::FCNPC_CloseNode_Native;
AMX_NATIVE FCNPC::FCNPC_IsNodeOpen_Native;
AMX_NATIVE FCNPC::FCNPC_GetNodePointPosition_Native;
AMX_NATIVE FCNPC::FCNPC_GetNodeType_Native;
AMX_NATIVE FCNPC::FCNPC_SetNodePoint_Native;
AMX_NATIVE FCNPC::FCNPC_GetNodePointCount_Native;
AMX_NATIVE FCNPC::FCNPC_GetNodeInfo_Native;
AMX_NATIVE FCNPC::FCNPC_PlayNode_Native;
AMX_NATIVE FCNPC::FCNPC_StopPlayingNode_Native;
AMX_NATIVE FCNPC::FCNPC_PausePlayingNode_Native;
AMX_NATIVE FCNPC::FCNPC_ResumePlayingNode_Native;
AMX_NATIVE FCNPC::FCNPC_IsPlayingNode_Native;
AMX_NATIVE FCNPC::FCNPC_IsPlayingNodePaused_Native;
AMX_NATIVE FCNPC::FCNPC_CreateMovePath_Native;
AMX_NATIVE FCNPC::FCNPC_DestroyMovePath_Native;
AMX_NATIVE FCNPC::FCNPC_IsValidMovePath_Native;
AMX_NATIVE FCNPC::FCNPC_AddPointToMovePath_Native;
AMX_NATIVE FCNPC::FCNPC_AddPointsToMovePath_Native;
AMX_NATIVE FCNPC::FCNPC_AddPointsToMovePath2_Native;
AMX_NATIVE FCNPC::FCNPC_RemovePointFromMovePath_Native;
AMX_NATIVE FCNPC::FCNPC_IsValidMovePathPoint_Native;
AMX_NATIVE FCNPC::FCNPC_GetMovePathPoint_Native;
AMX_NATIVE FCNPC::FCNPC_GetNumberMovePathPoint_Native;
AMX_NATIVE FCNPC::FCNPC_GoByMovePath_Native;
AMX_NATIVE FCNPC::FCNPC_SetMoveMode_Native;
AMX_NATIVE FCNPC::FCNPC_GetMoveMode_Native;
AMX_NATIVE FCNPC::FCNPC_SetMinHeightPosCall_Native;
AMX_NATIVE FCNPC::FCNPC_GetMinHeightPosCall_Native;
AMX_NATIVE FCNPC::FCNPC_ShowInTabListForPlayer_Native;
AMX_NATIVE FCNPC::FCNPC_HideInTabListForPlayer_Native;
AMX_NATIVE FCNPC::FCNPC_GiveAmmo_Native;
AMX_NATIVE FCNPC::FCNPC_GiveAmmoInClip_Native;
AMX_NATIVE FCNPC::FCNPC_GetCustomSkin_Native;

bool (*FCNPC::p_FCNPC_OnCreate)(int) = nullptr;
bool (*FCNPC::p_FCNPC_OnDestroy)(int) = nullptr;
bool (*FCNPC::p_FCNPC_OnSpawn)(int) = nullptr;
bool (*FCNPC::p_FCNPC_OnRespawn)(int) = nullptr;
bool (*FCNPC::p_FCNPC_OnDeath)(int, int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnUpdate)(int) = nullptr;
bool (*FCNPC::p_FCNPC_OnTakeDamage)(int, int, float, int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnGiveDamage)(int, int, float, int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnReachDestination)(int) = nullptr;
bool (*FCNPC::p_FCNPC_OnWeaponShot)(int, int, int, int, float, float, float) = nullptr;
bool (*FCNPC::p_FCNPC_OnWeaponStateChange)(int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnStreamIn)(int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnStreamOut)(int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnVehicleEntryComplete)(int, int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnVehicleExitComplete)(int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnVehicleTakeDamage)(int, int, int, float, int, float, float, float) = nullptr;
bool (*FCNPC::p_FCNPC_OnFinishPlayback)(int) = nullptr;
bool (*FCNPC::p_FCNPC_OnFinishNode)(int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnFinishNodePoint)(int, int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnChangeNode)(int, int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnFinishMovePath)(int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnFinishMovePathPoint)(int, int, int) = nullptr;
bool (*FCNPC::p_FCNPC_OnChangeHeightPos)(int, float, float) = nullptr;


void FCNPC::InitNatives()
{
	FCNPC::FCNPC_GetPluginVersion_Native = sampgdk::FindNative("FCNPC_GetPluginVersion");
	if (FCNPC::FCNPC_GetPluginVersion_Native == NULL) sampgdk::logprintf("'FCNPC_GetPluginVersion' native was not found!");
	FCNPC::FCNPC_SetUpdateRate_Native = sampgdk::FindNative("FCNPC_SetUpdateRate");
	if (FCNPC::FCNPC_SetUpdateRate_Native == NULL) sampgdk::logprintf("'FCNPC_SetUpdateRate' native was not found!");
	FCNPC::FCNPC_GetUpdateRate_Native = sampgdk::FindNative("FCNPC_GetUpdateRate");
	if (FCNPC::FCNPC_GetUpdateRate_Native == NULL) sampgdk::logprintf("'FCNPC_GetUpdateRate' native was not found!");
	FCNPC::FCNPC_SetTickRate_Native = sampgdk::FindNative("FCNPC_SetTickRate");
	if (FCNPC::FCNPC_SetTickRate_Native == NULL) sampgdk::logprintf("'FCNPC_SetTickRate' native was not found!");
	FCNPC::FCNPC_GetTickRate_Native = sampgdk::FindNative("FCNPC_GetTickRate");
	if (FCNPC::FCNPC_GetTickRate_Native == NULL) sampgdk::logprintf("'FCNPC_GetTickRate' native was not found!");
	FCNPC::FCNPC_UseMoveMode_Native = sampgdk::FindNative("FCNPC_UseMoveMode");
	if (FCNPC::FCNPC_UseMoveMode_Native == NULL) sampgdk::logprintf("'FCNPC_UseMoveMode' native was not found!");
	FCNPC::FCNPC_IsMoveModeUsed_Native = sampgdk::FindNative("FCNPC_IsMoveModeUsed");
	if (FCNPC::FCNPC_IsMoveModeUsed_Native == NULL) sampgdk::logprintf("'FCNPC_IsMoveModeUsed' native was not found!");
	FCNPC::FCNPC_UseMovePathfinding_Native = sampgdk::FindNative("FCNPC_UseMovePathfinding");
	if (FCNPC::FCNPC_UseMovePathfinding_Native == NULL) sampgdk::logprintf("'FCNPC_UseMovePathfinding' native was not found!");
	FCNPC::FCNPC_IsMovePathfindingUsed_Native = sampgdk::FindNative("FCNPC_IsMovePathfindingUsed");
	if (FCNPC::FCNPC_IsMovePathfindingUsed_Native == NULL) sampgdk::logprintf("'FCNPC_IsMovePathfindingUsed' native was not found!");
	FCNPC::FCNPC_TriggerWeaponShot_Native = sampgdk::FindNative("FCNPC_TriggerWeaponShot");
	if (FCNPC::FCNPC_TriggerWeaponShot_Native == NULL) sampgdk::logprintf("'FCNPC_TriggerWeaponShot' native was not found!");
	FCNPC::FCNPC_UseCrashLog_Native = sampgdk::FindNative("FCNPC_UseCrashLog");
	if (FCNPC::FCNPC_UseCrashLog_Native == NULL) sampgdk::logprintf("'FCNPC_UseCrashLog' native was not found!");
	FCNPC::FCNPC_IsCrashLogUsed_Native = sampgdk::FindNative("FCNPC_IsCrashLogUsed");
	if (FCNPC::FCNPC_IsCrashLogUsed_Native == NULL) sampgdk::logprintf("'FCNPC_IsCrashLogUsed' native was not found!");
	FCNPC::FCNPC_Create_Native = sampgdk::FindNative("FCNPC_Create");
	if (FCNPC::FCNPC_Create_Native == NULL) sampgdk::logprintf("'FCNPC_Create' native was not found!");
	FCNPC::FCNPC_Destroy_Native = sampgdk::FindNative("FCNPC_Destroy");
	if (FCNPC::FCNPC_Destroy_Native == NULL) sampgdk::logprintf("'FCNPC_Destroy' native was not found!");
	FCNPC::FCNPC_Spawn_Native = sampgdk::FindNative("FCNPC_Spawn");
	if (FCNPC::FCNPC_Spawn_Native == NULL) sampgdk::logprintf("'FCNPC_Spawn' native was not found!");
	FCNPC::FCNPC_Respawn_Native = sampgdk::FindNative("FCNPC_Respawn");
	if (FCNPC::FCNPC_Respawn_Native == NULL) sampgdk::logprintf("'FCNPC_Respawn' native was not found!");
	FCNPC::FCNPC_IsSpawned_Native = sampgdk::FindNative("FCNPC_IsSpawned");
	if (FCNPC::FCNPC_IsSpawned_Native == NULL) sampgdk::logprintf("'FCNPC_IsSpawned' native was not found!");
	FCNPC::FCNPC_Kill_Native = sampgdk::FindNative("FCNPC_Kill");
	if (FCNPC::FCNPC_Kill_Native == NULL) sampgdk::logprintf("'FCNPC_Kill' native was not found!");
	FCNPC::FCNPC_IsDead_Native = sampgdk::FindNative("FCNPC_IsDead");
	if (FCNPC::FCNPC_IsDead_Native == NULL) sampgdk::logprintf("'FCNPC_IsDead' native was not found!");
	FCNPC::FCNPC_IsValid_Native = sampgdk::FindNative("FCNPC_IsValid");
	if (FCNPC::FCNPC_IsValid_Native == NULL) sampgdk::logprintf("'FCNPC_IsValid' native was not found!");
	FCNPC::FCNPC_IsStreamedIn_Native = sampgdk::FindNative("FCNPC_IsStreamedIn");
	if (FCNPC::FCNPC_IsStreamedIn_Native == NULL) sampgdk::logprintf("'FCNPC_IsStreamedIn' native was not found!");
	FCNPC::FCNPC_IsStreamedInForAnyone_Native = sampgdk::FindNative("FCNPC_IsStreamedInForAnyone");
	if (FCNPC::FCNPC_IsStreamedInForAnyone_Native == NULL) sampgdk::logprintf("'FCNPC_IsStreamedInForAnyone' native was not found!");
	FCNPC::FCNPC_GetValidArray_Native = sampgdk::FindNative("FCNPC_GetValidArray");
	if (FCNPC::FCNPC_GetValidArray_Native == NULL) sampgdk::logprintf("'FCNPC_GetValidArray' native was not found!");
	FCNPC::FCNPC_SetPosition_Native = sampgdk::FindNative("FCNPC_SetPosition");
	if (FCNPC::FCNPC_SetPosition_Native == NULL) sampgdk::logprintf("'FCNPC_SetPosition' native was not found!");
	FCNPC::FCNPC_GivePosition_Native = sampgdk::FindNative("FCNPC_GivePosition");
	if (FCNPC::FCNPC_GivePosition_Native == NULL) sampgdk::logprintf("'FCNPC_GivePosition' native was not found!");
	FCNPC::FCNPC_GetPosition_Native = sampgdk::FindNative("FCNPC_GetPosition");
	if (FCNPC::FCNPC_GetPosition_Native == NULL) sampgdk::logprintf("'FCNPC_GetPosition' native was not found!");
	FCNPC::FCNPC_SetQuaternion_Native = sampgdk::FindNative("FCNPC_SetQuaternion");
	if (FCNPC::FCNPC_SetQuaternion_Native == NULL) sampgdk::logprintf("'FCNPC_SetQuaternion' native was not found!");
	FCNPC::FCNPC_GiveQuaternion_Native = sampgdk::FindNative("FCNPC_GiveQuaternion");
	if (FCNPC::FCNPC_GiveQuaternion_Native == NULL) sampgdk::logprintf("'FCNPC_GiveQuaternion' native was not found!");
	FCNPC::FCNPC_GetQuaternion_Native = sampgdk::FindNative("FCNPC_GetQuaternion");
	if (FCNPC::FCNPC_GetQuaternion_Native == NULL) sampgdk::logprintf("'FCNPC_GetQuaternion' native was not found!");
	FCNPC::FCNPC_SetAngle_Native = sampgdk::FindNative("FCNPC_SetAngle");
	if (FCNPC::FCNPC_SetAngle_Native == NULL) sampgdk::logprintf("'FCNPC_SetAngle' native was not found!");
	FCNPC::FCNPC_GiveAngle_Native = sampgdk::FindNative("FCNPC_GiveAngle");
	if (FCNPC::FCNPC_GiveAngle_Native == NULL) sampgdk::logprintf("'FCNPC_GiveAngle' native was not found!");
	FCNPC::FCNPC_SetAngleToPos_Native = sampgdk::FindNative("FCNPC_SetAngleToPos");
	if (FCNPC::FCNPC_SetAngleToPos_Native == NULL) sampgdk::logprintf("'FCNPC_SetAngleToPos' native was not found!");
	FCNPC::FCNPC_SetAngleToPlayer_Native = sampgdk::FindNative("FCNPC_SetAngleToPlayer");
	if (FCNPC::FCNPC_SetAngleToPlayer_Native == NULL) sampgdk::logprintf("'FCNPC_SetAngleToPlayer' native was not found!");
	FCNPC::FCNPC_GetAngle_Native = sampgdk::FindNative("FCNPC_GetAngle");
	if (FCNPC::FCNPC_GetAngle_Native == NULL) sampgdk::logprintf("'FCNPC_GetAngle' native was not found!");
	FCNPC::FCNPC_SetVelocity_Native = sampgdk::FindNative("FCNPC_SetVelocity");
	if (FCNPC::FCNPC_SetVelocity_Native == NULL) sampgdk::logprintf("'FCNPC_SetVelocity' native was not found!");
	FCNPC::FCNPC_GiveVelocity_Native = sampgdk::FindNative("FCNPC_GiveVelocity");
	if (FCNPC::FCNPC_GiveVelocity_Native == NULL) sampgdk::logprintf("'FCNPC_GiveVelocity' native was not found!");
	FCNPC::FCNPC_GetVelocity_Native = sampgdk::FindNative("FCNPC_GetVelocity");
	if (FCNPC::FCNPC_GetVelocity_Native == NULL) sampgdk::logprintf("'FCNPC_GetVelocity' native was not found!");
	FCNPC::FCNPC_SetSpeed_Native = sampgdk::FindNative("FCNPC_SetSpeed");
	if (FCNPC::FCNPC_SetSpeed_Native == NULL) sampgdk::logprintf("'FCNPC_SetSpeed' native was not found!");
	FCNPC::FCNPC_GetSpeed_Native = sampgdk::FindNative("FCNPC_GetSpeed");
	if (FCNPC::FCNPC_GetSpeed_Native == NULL) sampgdk::logprintf("'FCNPC_GetSpeed' native was not found!");
	FCNPC::FCNPC_SetInterior_Native = sampgdk::FindNative("FCNPC_SetInterior");
	if (FCNPC::FCNPC_SetInterior_Native == NULL) sampgdk::logprintf("'FCNPC_SetInterior' native was not found!");
	FCNPC::FCNPC_GetInterior_Native = sampgdk::FindNative("FCNPC_GetInterior");
	if (FCNPC::FCNPC_GetInterior_Native == NULL) sampgdk::logprintf("'FCNPC_GetInterior' native was not found!");
	FCNPC::FCNPC_SetVirtualWorld_Native = sampgdk::FindNative("FCNPC_SetVirtualWorld");
	if (FCNPC::FCNPC_SetVirtualWorld_Native == NULL) sampgdk::logprintf("'FCNPC_SetVirtualWorld' native was not found!");
	FCNPC::FCNPC_GetVirtualWorld_Native = sampgdk::FindNative("FCNPC_GetVirtualWorld");
	if (FCNPC::FCNPC_GetVirtualWorld_Native == NULL) sampgdk::logprintf("'FCNPC_GetVirtualWorld' native was not found!");
	FCNPC::FCNPC_SetHealth_Native = sampgdk::FindNative("FCNPC_SetHealth");
	if (FCNPC::FCNPC_SetHealth_Native == NULL) sampgdk::logprintf("'FCNPC_SetHealth' native was not found!");
	FCNPC::FCNPC_GiveHealth_Native = sampgdk::FindNative("FCNPC_GiveHealth");
	if (FCNPC::FCNPC_GiveHealth_Native == NULL) sampgdk::logprintf("'FCNPC_GiveHealth' native was not found!");
	FCNPC::FCNPC_GetHealth_Native = sampgdk::FindNative("FCNPC_GetHealth");
	if (FCNPC::FCNPC_GetHealth_Native == NULL) sampgdk::logprintf("'FCNPC_GetHealth' native was not found!");
	FCNPC::FCNPC_SetArmour_Native = sampgdk::FindNative("FCNPC_SetArmour");
	if (FCNPC::FCNPC_SetArmour_Native == NULL) sampgdk::logprintf("'FCNPC_SetArmour' native was not found!");
	FCNPC::FCNPC_GiveArmour_Native = sampgdk::FindNative("FCNPC_GiveArmour");
	if (FCNPC::FCNPC_GiveArmour_Native == NULL) sampgdk::logprintf("'FCNPC_GiveArmour' native was not found!");
	FCNPC::FCNPC_GetArmour_Native = sampgdk::FindNative("FCNPC_GetArmour");
	if (FCNPC::FCNPC_GetArmour_Native == NULL) sampgdk::logprintf("'FCNPC_GetArmour' native was not found!");
	FCNPC::FCNPC_SetInvulnerable_Native = sampgdk::FindNative("FCNPC_SetInvulnerable");
	if (FCNPC::FCNPC_SetInvulnerable_Native == NULL) sampgdk::logprintf("'FCNPC_SetInvulnerable' native was not found!");
	FCNPC::FCNPC_IsInvulnerable_Native = sampgdk::FindNative("FCNPC_IsInvulnerable");
	if (FCNPC::FCNPC_IsInvulnerable_Native == NULL) sampgdk::logprintf("'FCNPC_IsInvulnerable' native was not found!");
	FCNPC::FCNPC_SetSkin_Native = sampgdk::FindNative("FCNPC_SetSkin");
	if (FCNPC::FCNPC_SetSkin_Native == NULL) sampgdk::logprintf("'FCNPC_SetSkin' native was not found!");
	FCNPC::FCNPC_GetSkin_Native = sampgdk::FindNative("FCNPC_GetSkin");
	if (FCNPC::FCNPC_GetSkin_Native == NULL) sampgdk::logprintf("'FCNPC_GetSkin' native was not found!");
	FCNPC::FCNPC_SetWeapon_Native = sampgdk::FindNative("FCNPC_SetWeapon");
	if (FCNPC::FCNPC_SetWeapon_Native == NULL) sampgdk::logprintf("'FCNPC_SetWeapon' native was not found!");
	FCNPC::FCNPC_GetWeapon_Native = sampgdk::FindNative("FCNPC_GetWeapon");
	if (FCNPC::FCNPC_GetWeapon_Native == NULL) sampgdk::logprintf("'FCNPC_GetWeapon' native was not found!");
	FCNPC::FCNPC_SetAmmo_Native = sampgdk::FindNative("FCNPC_SetAmmo");
	if (FCNPC::FCNPC_SetAmmo_Native == NULL) sampgdk::logprintf("'FCNPC_SetAmmo' native was not found!");
	FCNPC::FCNPC_SetAmmo_Native = sampgdk::FindNative("FCNPC_SetAmmo");
	if (FCNPC::FCNPC_SetAmmo_Native == NULL) sampgdk::logprintf("'FCNPC_SetAmmo' native was not found!");
	FCNPC::FCNPC_GetAmmo_Native = sampgdk::FindNative("FCNPC_GetAmmo");
	if (FCNPC::FCNPC_GetAmmo_Native == NULL) sampgdk::logprintf("'FCNPC_GetAmmo' native was not found!");
	FCNPC::FCNPC_SetAmmoInClip_Native = sampgdk::FindNative("FCNPC_SetAmmoInClip");
	if (FCNPC::FCNPC_SetAmmoInClip_Native == NULL) sampgdk::logprintf("'FCNPC_SetAmmoInClip' native was not found!");
	FCNPC::FCNPC_SetAmmoInClip_Native = sampgdk::FindNative("FCNPC_SetAmmoInClip");
	if (FCNPC::FCNPC_SetAmmoInClip_Native == NULL) sampgdk::logprintf("'FCNPC_SetAmmoInClip' native was not found!");
	FCNPC::FCNPC_GetAmmoInClip_Native = sampgdk::FindNative("FCNPC_GetAmmoInClip");
	if (FCNPC::FCNPC_GetAmmoInClip_Native == NULL) sampgdk::logprintf("'FCNPC_GetAmmoInClip' native was not found!");
	FCNPC::FCNPC_SetWeaponSkillLevel_Native = sampgdk::FindNative("FCNPC_SetWeaponSkillLevel");
	if (FCNPC::FCNPC_SetWeaponSkillLevel_Native == NULL) sampgdk::logprintf("'FCNPC_SetWeaponSkillLevel' native was not found!");
	FCNPC::FCNPC_GiveWeaponSkillLevel_Native = sampgdk::FindNative("FCNPC_GiveWeaponSkillLevel");
	if (FCNPC::FCNPC_GiveWeaponSkillLevel_Native == NULL) sampgdk::logprintf("'FCNPC_GiveWeaponSkillLevel' native was not found!");
	FCNPC::FCNPC_GetWeaponSkillLevel_Native = sampgdk::FindNative("FCNPC_GetWeaponSkillLevel");
	if (FCNPC::FCNPC_GetWeaponSkillLevel_Native == NULL) sampgdk::logprintf("'FCNPC_GetWeaponSkillLevel' native was not found!");
	FCNPC::FCNPC_SetWeaponState_Native = sampgdk::FindNative("FCNPC_SetWeaponState");
	if (FCNPC::FCNPC_SetWeaponState_Native == NULL) sampgdk::logprintf("'FCNPC_SetWeaponState' native was not found!");
	FCNPC::FCNPC_GetWeaponState_Native = sampgdk::FindNative("FCNPC_GetWeaponState");
	if (FCNPC::FCNPC_GetWeaponState_Native == NULL) sampgdk::logprintf("'FCNPC_GetWeaponState' native was not found!");
	FCNPC::FCNPC_SetWeaponReloadTime_Native = sampgdk::FindNative("FCNPC_SetWeaponReloadTime");
	if (FCNPC::FCNPC_SetWeaponReloadTime_Native == NULL) sampgdk::logprintf("'FCNPC_SetWeaponReloadTime' native was not found!");
	FCNPC::FCNPC_GetWeaponReloadTime_Native = sampgdk::FindNative("FCNPC_GetWeaponReloadTime");
	if (FCNPC::FCNPC_GetWeaponReloadTime_Native == NULL) sampgdk::logprintf("'FCNPC_GetWeaponReloadTime' native was not found!");
	FCNPC::FCNPC_GetWeaponActualReloadTime_Native = sampgdk::FindNative("FCNPC_GetWeaponActualReloadTime");
	if (FCNPC::FCNPC_GetWeaponActualReloadTime_Native == NULL) sampgdk::logprintf("'FCNPC_GetWeaponActualReloadTime' native was not found!");
	FCNPC::FCNPC_SetWeaponShootTime_Native = sampgdk::FindNative("FCNPC_SetWeaponShootTime");
	if (FCNPC::FCNPC_SetWeaponShootTime_Native == NULL) sampgdk::logprintf("'FCNPC_SetWeaponShootTime' native was not found!");
	FCNPC::FCNPC_GetWeaponShootTime_Native = sampgdk::FindNative("FCNPC_GetWeaponShootTime");
	if (FCNPC::FCNPC_GetWeaponShootTime_Native == NULL) sampgdk::logprintf("'FCNPC_GetWeaponShootTime' native was not found!");
	FCNPC::FCNPC_SetWeaponClipSize_Native = sampgdk::FindNative("FCNPC_SetWeaponClipSize");
	if (FCNPC::FCNPC_SetWeaponClipSize_Native == NULL) sampgdk::logprintf("'FCNPC_SetWeaponClipSize' native was not found!");
	FCNPC::FCNPC_GetWeaponClipSize_Native = sampgdk::FindNative("FCNPC_GetWeaponClipSize");
	if (FCNPC::FCNPC_GetWeaponClipSize_Native == NULL) sampgdk::logprintf("'FCNPC_GetWeaponClipSize' native was not found!");
	FCNPC::FCNPC_GetWeaponActualClipSize_Native = sampgdk::FindNative("FCNPC_GetWeaponActualClipSize");
	if (FCNPC::FCNPC_GetWeaponActualClipSize_Native == NULL) sampgdk::logprintf("'FCNPC_GetWeaponActualClipSize' native was not found!");
	FCNPC::FCNPC_SetWeaponAccuracy_Native = sampgdk::FindNative("FCNPC_SetWeaponAccuracy");
	if (FCNPC::FCNPC_SetWeaponAccuracy_Native == NULL) sampgdk::logprintf("'FCNPC_SetWeaponAccuracy' native was not found!");
	FCNPC::FCNPC_GetWeaponAccuracy_Native = sampgdk::FindNative("FCNPC_GetWeaponAccuracy");
	if (FCNPC::FCNPC_GetWeaponAccuracy_Native == NULL) sampgdk::logprintf("'FCNPC_GetWeaponAccuracy' native was not found!");
	FCNPC::FCNPC_SetWeaponInfo_Native = sampgdk::FindNative("FCNPC_SetWeaponInfo");
	if (FCNPC::FCNPC_SetWeaponInfo_Native == NULL) sampgdk::logprintf("'FCNPC_SetWeaponInfo' native was not found!");
	FCNPC::FCNPC_GetWeaponInfo_Native = sampgdk::FindNative("FCNPC_GetWeaponInfo");
	if (FCNPC::FCNPC_GetWeaponInfo_Native == NULL) sampgdk::logprintf("'FCNPC_GetWeaponInfo' native was not found!");
	FCNPC::FCNPC_SetWeaponDefaultInfo_Native = sampgdk::FindNative("FCNPC_SetWeaponDefaultInfo");
	if (FCNPC::FCNPC_SetWeaponDefaultInfo_Native == NULL) sampgdk::logprintf("'FCNPC_SetWeaponDefaultInfo' native was not found!");
	FCNPC::FCNPC_GetWeaponDefaultInfo_Native = sampgdk::FindNative("FCNPC_GetWeaponDefaultInfo");
	if (FCNPC::FCNPC_GetWeaponDefaultInfo_Native == NULL) sampgdk::logprintf("'FCNPC_GetWeaponDefaultInfo' native was not found!");
	FCNPC::FCNPC_SetKeys_Native = sampgdk::FindNative("FCNPC_SetKeys");
	if (FCNPC::FCNPC_SetKeys_Native == NULL) sampgdk::logprintf("'FCNPC_SetKeys' native was not found!");
	FCNPC::FCNPC_GetKeys_Native = sampgdk::FindNative("FCNPC_GetKeys");
	if (FCNPC::FCNPC_GetKeys_Native == NULL) sampgdk::logprintf("'FCNPC_GetKeys' native was not found!");
	FCNPC::FCNPC_SetSpecialAction_Native = sampgdk::FindNative("FCNPC_SetSpecialAction");
	if (FCNPC::FCNPC_SetSpecialAction_Native == NULL) sampgdk::logprintf("'FCNPC_SetSpecialAction' native was not found!");
	FCNPC::FCNPC_GetSpecialAction_Native = sampgdk::FindNative("FCNPC_GetSpecialAction");
	if (FCNPC::FCNPC_GetSpecialAction_Native == NULL) sampgdk::logprintf("'FCNPC_GetSpecialAction' native was not found!");
	FCNPC::FCNPC_SetAnimation_Native = sampgdk::FindNative("FCNPC_SetAnimation");
	if (FCNPC::FCNPC_SetAnimation_Native == NULL) sampgdk::logprintf("'FCNPC_SetAnimation' native was not found!");
	FCNPC::FCNPC_SetAnimationByName_Native = sampgdk::FindNative("FCNPC_SetAnimationByName");
	if (FCNPC::FCNPC_SetAnimationByName_Native == NULL) sampgdk::logprintf("'FCNPC_SetAnimationByName' native was not found!");
	FCNPC::FCNPC_GetAnimation_Native = sampgdk::FindNative("FCNPC_GetAnimation");
	if (FCNPC::FCNPC_GetAnimation_Native == NULL) sampgdk::logprintf("'FCNPC_GetAnimation' native was not found!");
	FCNPC::FCNPC_ResetAnimation_Native = sampgdk::FindNative("FCNPC_ResetAnimation");
	if (FCNPC::FCNPC_ResetAnimation_Native == NULL) sampgdk::logprintf("'FCNPC_ResetAnimation' native was not found!");
	FCNPC::FCNPC_ApplyAnimation_Native = sampgdk::FindNative("FCNPC_ApplyAnimation");
	if (FCNPC::FCNPC_ApplyAnimation_Native == NULL) sampgdk::logprintf("'FCNPC_ApplyAnimation' native was not found!");
	FCNPC::FCNPC_ClearAnimations_Native = sampgdk::FindNative("FCNPC_ClearAnimations");
	if (FCNPC::FCNPC_ClearAnimations_Native == NULL) sampgdk::logprintf("'FCNPC_ClearAnimations' native was not found!");
	FCNPC::FCNPC_SetFightingStyle_Native = sampgdk::FindNative("FCNPC_SetFightingStyle");
	if (FCNPC::FCNPC_SetFightingStyle_Native == NULL) sampgdk::logprintf("'FCNPC_SetFightingStyle' native was not found!");
	FCNPC::FCNPC_GetFightingStyle_Native = sampgdk::FindNative("FCNPC_GetFightingStyle");
	if (FCNPC::FCNPC_GetFightingStyle_Native == NULL) sampgdk::logprintf("'FCNPC_GetFightingStyle' native was not found!");
	FCNPC::FCNPC_UseReloading_Native = sampgdk::FindNative("FCNPC_UseReloading");
	if (FCNPC::FCNPC_UseReloading_Native == NULL) sampgdk::logprintf("'FCNPC_UseReloading' native was not found!");
	FCNPC::FCNPC_IsReloadingUsed_Native = sampgdk::FindNative("FCNPC_IsReloadingUsed");
	if (FCNPC::FCNPC_IsReloadingUsed_Native == NULL) sampgdk::logprintf("'FCNPC_IsReloadingUsed' native was not found!");
	FCNPC::FCNPC_UseInfiniteAmmo_Native = sampgdk::FindNative("FCNPC_UseInfiniteAmmo");
	if (FCNPC::FCNPC_UseInfiniteAmmo_Native == NULL) sampgdk::logprintf("'FCNPC_UseInfiniteAmmo' native was not found!");
	FCNPC::FCNPC_IsInfiniteAmmoUsed_Native = sampgdk::FindNative("FCNPC_IsInfiniteAmmoUsed");
	if (FCNPC::FCNPC_IsInfiniteAmmoUsed_Native == NULL) sampgdk::logprintf("'FCNPC_IsInfiniteAmmoUsed' native was not found!");
	FCNPC::FCNPC_GoTo_Native = sampgdk::FindNative("FCNPC_GoTo");
	if (FCNPC::FCNPC_GoTo_Native == NULL) sampgdk::logprintf("'FCNPC_GoTo' native was not found!");
	FCNPC::FCNPC_GoToPlayer_Native = sampgdk::FindNative("FCNPC_GoToPlayer");
	if (FCNPC::FCNPC_GoToPlayer_Native == NULL) sampgdk::logprintf("'FCNPC_GoToPlayer' native was not found!");
	FCNPC::FCNPC_Stop_Native = sampgdk::FindNative("FCNPC_Stop");
	if (FCNPC::FCNPC_Stop_Native == NULL) sampgdk::logprintf("'FCNPC_Stop' native was not found!");
	FCNPC::FCNPC_IsMoving_Native = sampgdk::FindNative("FCNPC_IsMoving");
	if (FCNPC::FCNPC_IsMoving_Native == NULL) sampgdk::logprintf("'FCNPC_IsMoving' native was not found!");
	FCNPC::FCNPC_IsMovingAtPlayer_Native = sampgdk::FindNative("FCNPC_IsMovingAtPlayer");
	if (FCNPC::FCNPC_IsMovingAtPlayer_Native == NULL) sampgdk::logprintf("'FCNPC_IsMovingAtPlayer' native was not found!");
	FCNPC::FCNPC_GetDestinationPoint_Native = sampgdk::FindNative("FCNPC_GetDestinationPoint");
	if (FCNPC::FCNPC_GetDestinationPoint_Native == NULL) sampgdk::logprintf("'FCNPC_GetDestinationPoint' native was not found!");
	FCNPC::FCNPC_AimAt_Native = sampgdk::FindNative("FCNPC_AimAt");
	if (FCNPC::FCNPC_AimAt_Native == NULL) sampgdk::logprintf("'FCNPC_AimAt' native was not found!");
	FCNPC::FCNPC_AimAtPlayer_Native = sampgdk::FindNative("FCNPC_AimAtPlayer");
	if (FCNPC::FCNPC_AimAtPlayer_Native == NULL) sampgdk::logprintf("'FCNPC_AimAtPlayer' native was not found!");
	FCNPC::FCNPC_StopAim_Native = sampgdk::FindNative("FCNPC_StopAim");
	if (FCNPC::FCNPC_StopAim_Native == NULL) sampgdk::logprintf("'FCNPC_StopAim' native was not found!");
	FCNPC::FCNPC_MeleeAttack_Native = sampgdk::FindNative("FCNPC_MeleeAttack");
	if (FCNPC::FCNPC_MeleeAttack_Native == NULL) sampgdk::logprintf("'FCNPC_MeleeAttack' native was not found!");
	FCNPC::FCNPC_StopAttack_Native = sampgdk::FindNative("FCNPC_StopAttack");
	if (FCNPC::FCNPC_StopAttack_Native == NULL) sampgdk::logprintf("'FCNPC_StopAttack' native was not found!");
	FCNPC::FCNPC_IsAttacking_Native = sampgdk::FindNative("FCNPC_IsAttacking");
	if (FCNPC::FCNPC_IsAttacking_Native == NULL) sampgdk::logprintf("'FCNPC_IsAttacking' native was not found!");
	FCNPC::FCNPC_IsAiming_Native = sampgdk::FindNative("FCNPC_IsAiming");
	if (FCNPC::FCNPC_IsAiming_Native == NULL) sampgdk::logprintf("'FCNPC_IsAiming' native was not found!");
	FCNPC::FCNPC_IsAimingAtPlayer_Native = sampgdk::FindNative("FCNPC_IsAimingAtPlayer");
	if (FCNPC::FCNPC_IsAimingAtPlayer_Native == NULL) sampgdk::logprintf("'FCNPC_IsAimingAtPlayer' native was not found!");
	FCNPC::FCNPC_GetAimingPlayer_Native = sampgdk::FindNative("FCNPC_GetAimingPlayer");
	if (FCNPC::FCNPC_GetAimingPlayer_Native == NULL) sampgdk::logprintf("'FCNPC_GetAimingPlayer' native was not found!");
	FCNPC::FCNPC_IsShooting_Native = sampgdk::FindNative("FCNPC_IsShooting");
	if (FCNPC::FCNPC_IsShooting_Native == NULL) sampgdk::logprintf("'FCNPC_IsShooting' native was not found!");
	FCNPC::FCNPC_IsReloading_Native = sampgdk::FindNative("FCNPC_IsReloading");
	if (FCNPC::FCNPC_IsReloading_Native == NULL) sampgdk::logprintf("'FCNPC_IsReloading' native was not found!");
	FCNPC::FCNPC_GetClosestEntityInBetween_Native = sampgdk::FindNative("FCNPC_GetClosestEntityInBetween");
	if (FCNPC::FCNPC_GetClosestEntityInBetween_Native == NULL) sampgdk::logprintf("'FCNPC_GetClosestEntityInBetween' native was not found!");
	FCNPC::FCNPC_EnterVehicle_Native = sampgdk::FindNative("FCNPC_EnterVehicle");
	if (FCNPC::FCNPC_EnterVehicle_Native == NULL) sampgdk::logprintf("'FCNPC_EnterVehicle' native was not found!");
	FCNPC::FCNPC_ExitVehicle_Native = sampgdk::FindNative("FCNPC_ExitVehicle");
	if (FCNPC::FCNPC_ExitVehicle_Native == NULL) sampgdk::logprintf("'FCNPC_ExitVehicle' native was not found!");
	FCNPC::FCNPC_PutInVehicle_Native = sampgdk::FindNative("FCNPC_PutInVehicle");
	if (FCNPC::FCNPC_PutInVehicle_Native == NULL) sampgdk::logprintf("'FCNPC_PutInVehicle' native was not found!");
	FCNPC::FCNPC_RemoveFromVehicle_Native = sampgdk::FindNative("FCNPC_RemoveFromVehicle");
	if (FCNPC::FCNPC_RemoveFromVehicle_Native == NULL) sampgdk::logprintf("'FCNPC_RemoveFromVehicle' native was not found!");
	FCNPC::FCNPC_GetVehicleID_Native = sampgdk::FindNative("FCNPC_GetVehicleID");
	if (FCNPC::FCNPC_GetVehicleID_Native == NULL) sampgdk::logprintf("'FCNPC_GetVehicleID' native was not found!");
	FCNPC::FCNPC_GetVehicleSeat_Native = sampgdk::FindNative("FCNPC_GetVehicleSeat");
	if (FCNPC::FCNPC_GetVehicleSeat_Native == NULL) sampgdk::logprintf("'FCNPC_GetVehicleSeat' native was not found!");
	FCNPC::FCNPC_UseVehicleSiren_Native = sampgdk::FindNative("FCNPC_UseVehicleSiren");
	if (FCNPC::FCNPC_UseVehicleSiren_Native == NULL) sampgdk::logprintf("'FCNPC_UseVehicleSiren' native was not found!");
	FCNPC::FCNPC_IsVehicleSirenUsed_Native = sampgdk::FindNative("FCNPC_IsVehicleSirenUsed");
	if (FCNPC::FCNPC_IsVehicleSirenUsed_Native == NULL) sampgdk::logprintf("'FCNPC_IsVehicleSirenUsed' native was not found!");
	FCNPC::FCNPC_SetVehicleHealth_Native = sampgdk::FindNative("FCNPC_SetVehicleHealth");
	if (FCNPC::FCNPC_SetVehicleHealth_Native == NULL) sampgdk::logprintf("'FCNPC_SetVehicleHealth' native was not found!");
	FCNPC::FCNPC_GetVehicleHealth_Native = sampgdk::FindNative("FCNPC_GetVehicleHealth");
	if (FCNPC::FCNPC_GetVehicleHealth_Native == NULL) sampgdk::logprintf("'FCNPC_GetVehicleHealth' native was not found!");
	FCNPC::FCNPC_SetVehicleHydraThrusters_Native = sampgdk::FindNative("FCNPC_SetVehicleHydraThrusters");
	if (FCNPC::FCNPC_SetVehicleHydraThrusters_Native == NULL) sampgdk::logprintf("'FCNPC_SetVehicleHydraThrusters' native was not found!");
	FCNPC::FCNPC_GetVehicleHydraThrusters_Native = sampgdk::FindNative("FCNPC_GetVehicleHydraThrusters");
	if (FCNPC::FCNPC_GetVehicleHydraThrusters_Native == NULL) sampgdk::logprintf("'FCNPC_GetVehicleHydraThrusters' native was not found!");
	FCNPC::FCNPC_SetVehicleGearState_Native = sampgdk::FindNative("FCNPC_SetVehicleGearState");
	if (FCNPC::FCNPC_SetVehicleGearState_Native == NULL) sampgdk::logprintf("'FCNPC_SetVehicleGearState' native was not found!");
	FCNPC::FCNPC_GetVehicleGearState_Native = sampgdk::FindNative("FCNPC_GetVehicleGearState");
	if (FCNPC::FCNPC_GetVehicleGearState_Native == NULL) sampgdk::logprintf("'FCNPC_GetVehicleGearState' native was not found!");
	FCNPC::FCNPC_SetVehicleTrainSpeed_Native = sampgdk::FindNative("FCNPC_SetVehicleTrainSpeed");
	if (FCNPC::FCNPC_SetVehicleTrainSpeed_Native == NULL) sampgdk::logprintf("'FCNPC_SetVehicleTrainSpeed' native was not found!");
	FCNPC::FCNPC_GetVehicleTrainSpeed_Native = sampgdk::FindNative("FCNPC_GetVehicleTrainSpeed");
	if (FCNPC::FCNPC_GetVehicleTrainSpeed_Native == NULL) sampgdk::logprintf("'FCNPC_GetVehicleTrainSpeed' native was not found!");
	FCNPC::FCNPC_SetSurfingOffsets_Native = sampgdk::FindNative("FCNPC_SetSurfingOffsets");
	if (FCNPC::FCNPC_SetSurfingOffsets_Native == NULL) sampgdk::logprintf("'FCNPC_SetSurfingOffsets' native was not found!");
	FCNPC::FCNPC_GiveSurfingOffsets_Native = sampgdk::FindNative("FCNPC_GiveSurfingOffsets");
	if (FCNPC::FCNPC_GiveSurfingOffsets_Native == NULL) sampgdk::logprintf("'FCNPC_GiveSurfingOffsets' native was not found!");
	FCNPC::FCNPC_GetSurfingOffsets_Native = sampgdk::FindNative("FCNPC_GetSurfingOffsets");
	if (FCNPC::FCNPC_GetSurfingOffsets_Native == NULL) sampgdk::logprintf("'FCNPC_GetSurfingOffsets' native was not found!");
	FCNPC::FCNPC_SetSurfingVehicle_Native = sampgdk::FindNative("FCNPC_SetSurfingVehicle");
	if (FCNPC::FCNPC_SetSurfingVehicle_Native == NULL) sampgdk::logprintf("'FCNPC_SetSurfingVehicle' native was not found!");
	FCNPC::FCNPC_GetSurfingVehicle_Native = sampgdk::FindNative("FCNPC_GetSurfingVehicle");
	if (FCNPC::FCNPC_GetSurfingVehicle_Native == NULL) sampgdk::logprintf("'FCNPC_GetSurfingVehicle' native was not found!");
	FCNPC::FCNPC_SetSurfingObject_Native = sampgdk::FindNative("FCNPC_SetSurfingObject");
	if (FCNPC::FCNPC_SetSurfingObject_Native == NULL) sampgdk::logprintf("'FCNPC_SetSurfingObject' native was not found!");
	FCNPC::FCNPC_GetSurfingObject_Native = sampgdk::FindNative("FCNPC_GetSurfingObject");
	if (FCNPC::FCNPC_GetSurfingObject_Native == NULL) sampgdk::logprintf("'FCNPC_GetSurfingObject' native was not found!");
	FCNPC::FCNPC_SetSurfingPlayerObject_Native = sampgdk::FindNative("FCNPC_SetSurfingPlayerObject");
	if (FCNPC::FCNPC_SetSurfingPlayerObject_Native == NULL) sampgdk::logprintf("'FCNPC_SetSurfingPlayerObject' native was not found!");
	FCNPC::FCNPC_GetSurfingPlayerObject_Native = sampgdk::FindNative("FCNPC_GetSurfingPlayerObject");
	if (FCNPC::FCNPC_GetSurfingPlayerObject_Native == NULL) sampgdk::logprintf("'FCNPC_GetSurfingPlayerObject' native was not found!");
	FCNPC::FCNPC_StopSurfing_Native = sampgdk::FindNative("FCNPC_StopSurfing");
	if (FCNPC::FCNPC_StopSurfing_Native == NULL) sampgdk::logprintf("'FCNPC_StopSurfing' native was not found!");
	FCNPC::FCNPC_StartPlayingPlayback_Native = sampgdk::FindNative("FCNPC_StartPlayingPlayback");
	if (FCNPC::FCNPC_StartPlayingPlayback_Native == NULL) sampgdk::logprintf("'FCNPC_StartPlayingPlayback' native was not found!");
	FCNPC::FCNPC_StopPlayingPlayback_Native = sampgdk::FindNative("FCNPC_StopPlayingPlayback");
	if (FCNPC::FCNPC_StopPlayingPlayback_Native == NULL) sampgdk::logprintf("'FCNPC_StopPlayingPlayback' native was not found!");
	FCNPC::FCNPC_PausePlayingPlayback_Native = sampgdk::FindNative("FCNPC_PausePlayingPlayback");
	if (FCNPC::FCNPC_PausePlayingPlayback_Native == NULL) sampgdk::logprintf("'FCNPC_PausePlayingPlayback' native was not found!");
	FCNPC::FCNPC_ResumePlayingPlayback_Native = sampgdk::FindNative("FCNPC_ResumePlayingPlayback");
	if (FCNPC::FCNPC_ResumePlayingPlayback_Native == NULL) sampgdk::logprintf("'FCNPC_ResumePlayingPlayback' native was not found!");
	FCNPC::FCNPC_LoadPlayingPlayback_Native = sampgdk::FindNative("FCNPC_LoadPlayingPlayback");
	if (FCNPC::FCNPC_LoadPlayingPlayback_Native == NULL) sampgdk::logprintf("'FCNPC_LoadPlayingPlayback' native was not found!");
	FCNPC::FCNPC_UnloadPlayingPlayback_Native = sampgdk::FindNative("FCNPC_UnloadPlayingPlayback");
	if (FCNPC::FCNPC_UnloadPlayingPlayback_Native == NULL) sampgdk::logprintf("'FCNPC_UnloadPlayingPlayback' native was not found!");
	FCNPC::FCNPC_SetPlayingPlaybackPath_Native = sampgdk::FindNative("FCNPC_SetPlayingPlaybackPath");
	if (FCNPC::FCNPC_SetPlayingPlaybackPath_Native == NULL) sampgdk::logprintf("'FCNPC_SetPlayingPlaybackPath' native was not found!");
	FCNPC::FCNPC_GetPlayingPlaybackPath_Native = sampgdk::FindNative("FCNPC_GetPlayingPlaybackPath");
	if (FCNPC::FCNPC_GetPlayingPlaybackPath_Native == NULL) sampgdk::logprintf("'FCNPC_GetPlayingPlaybackPath' native was not found!");
	FCNPC::FCNPC_OpenNode_Native = sampgdk::FindNative("FCNPC_OpenNode");
	if (FCNPC::FCNPC_OpenNode_Native == NULL) sampgdk::logprintf("'FCNPC_OpenNode' native was not found!");
	FCNPC::FCNPC_CloseNode_Native = sampgdk::FindNative("FCNPC_CloseNode");
	if (FCNPC::FCNPC_CloseNode_Native == NULL) sampgdk::logprintf("'FCNPC_CloseNode' native was not found!");
	FCNPC::FCNPC_IsNodeOpen_Native = sampgdk::FindNative("FCNPC_IsNodeOpen");
	if (FCNPC::FCNPC_IsNodeOpen_Native == NULL) sampgdk::logprintf("'FCNPC_IsNodeOpen' native was not found!");
	FCNPC::FCNPC_GetNodePointPosition_Native = sampgdk::FindNative("FCNPC_GetNodePointPosition");
	if (FCNPC::FCNPC_GetNodePointPosition_Native == NULL) sampgdk::logprintf("'FCNPC_GetNodePointPosition' native was not found!");
	FCNPC::FCNPC_GetNodeType_Native = sampgdk::FindNative("FCNPC_GetNodeType");
	if (FCNPC::FCNPC_GetNodeType_Native == NULL) sampgdk::logprintf("'FCNPC_GetNodeType' native was not found!");
	FCNPC::FCNPC_SetNodePoint_Native = sampgdk::FindNative("FCNPC_SetNodePoint");
	if (FCNPC::FCNPC_SetNodePoint_Native == NULL) sampgdk::logprintf("'FCNPC_SetNodePoint' native was not found!");
	FCNPC::FCNPC_GetNodePointCount_Native = sampgdk::FindNative("FCNPC_GetNodePointCount");
	if (FCNPC::FCNPC_GetNodePointCount_Native == NULL) sampgdk::logprintf("'FCNPC_GetNodePointCount' native was not found!");
	FCNPC::FCNPC_GetNodeInfo_Native = sampgdk::FindNative("FCNPC_GetNodeInfo");
	if (FCNPC::FCNPC_GetNodeInfo_Native == NULL) sampgdk::logprintf("'FCNPC_GetNodeInfo' native was not found!");
	FCNPC::FCNPC_PlayNode_Native = sampgdk::FindNative("FCNPC_PlayNode");
	if (FCNPC::FCNPC_PlayNode_Native == NULL) sampgdk::logprintf("'FCNPC_PlayNode' native was not found!");
	FCNPC::FCNPC_StopPlayingNode_Native = sampgdk::FindNative("FCNPC_StopPlayingNode");
	if (FCNPC::FCNPC_StopPlayingNode_Native == NULL) sampgdk::logprintf("'FCNPC_StopPlayingNode' native was not found!");
	FCNPC::FCNPC_PausePlayingNode_Native = sampgdk::FindNative("FCNPC_PausePlayingNode");
	if (FCNPC::FCNPC_PausePlayingNode_Native == NULL) sampgdk::logprintf("'FCNPC_PausePlayingNode' native was not found!");
	FCNPC::FCNPC_ResumePlayingNode_Native = sampgdk::FindNative("FCNPC_ResumePlayingNode");
	if (FCNPC::FCNPC_ResumePlayingNode_Native == NULL) sampgdk::logprintf("'FCNPC_ResumePlayingNode' native was not found!");
	FCNPC::FCNPC_IsPlayingNode_Native = sampgdk::FindNative("FCNPC_IsPlayingNode");
	if (FCNPC::FCNPC_IsPlayingNode_Native == NULL) sampgdk::logprintf("'FCNPC_IsPlayingNode' native was not found!");
	FCNPC::FCNPC_IsPlayingNodePaused_Native = sampgdk::FindNative("FCNPC_IsPlayingNodePaused");
	if (FCNPC::FCNPC_IsPlayingNodePaused_Native == NULL) sampgdk::logprintf("'FCNPC_IsPlayingNodePaused' native was not found!");
	FCNPC::FCNPC_CreateMovePath_Native = sampgdk::FindNative("FCNPC_CreateMovePath");
	if (FCNPC::FCNPC_CreateMovePath_Native == NULL) sampgdk::logprintf("'FCNPC_CreateMovePath' native was not found!");
	FCNPC::FCNPC_DestroyMovePath_Native = sampgdk::FindNative("FCNPC_DestroyMovePath");
	if (FCNPC::FCNPC_DestroyMovePath_Native == NULL) sampgdk::logprintf("'FCNPC_DestroyMovePath' native was not found!");
	FCNPC::FCNPC_IsValidMovePath_Native = sampgdk::FindNative("FCNPC_IsValidMovePath");
	if (FCNPC::FCNPC_IsValidMovePath_Native == NULL) sampgdk::logprintf("'FCNPC_IsValidMovePath' native was not found!");
	FCNPC::FCNPC_AddPointToMovePath_Native = sampgdk::FindNative("FCNPC_AddPointToMovePath");
	if (FCNPC::FCNPC_AddPointToMovePath_Native == NULL) sampgdk::logprintf("'FCNPC_AddPointToMovePath' native was not found!");
	FCNPC::FCNPC_AddPointsToMovePath_Native = sampgdk::FindNative("FCNPC_AddPointsToMovePath");
	if (FCNPC::FCNPC_AddPointsToMovePath_Native == NULL) sampgdk::logprintf("'FCNPC_AddPointsToMovePath' native was not found!");
	FCNPC::FCNPC_AddPointsToMovePath2_Native = sampgdk::FindNative("FCNPC_AddPointsToMovePath2");
	if (FCNPC::FCNPC_AddPointsToMovePath2_Native == NULL) sampgdk::logprintf("'FCNPC_AddPointsToMovePath2' native was not found!");
	FCNPC::FCNPC_RemovePointFromMovePath_Native = sampgdk::FindNative("FCNPC_RemovePointFromMovePath");
	if (FCNPC::FCNPC_RemovePointFromMovePath_Native == NULL) sampgdk::logprintf("'FCNPC_RemovePointFromMovePath' native was not found!");
	FCNPC::FCNPC_IsValidMovePathPoint_Native = sampgdk::FindNative("FCNPC_IsValidMovePathPoint");
	if (FCNPC::FCNPC_IsValidMovePathPoint_Native == NULL) sampgdk::logprintf("'FCNPC_IsValidMovePathPoint' native was not found!");
	FCNPC::FCNPC_GetMovePathPoint_Native = sampgdk::FindNative("FCNPC_GetMovePathPoint");
	if (FCNPC::FCNPC_GetMovePathPoint_Native == NULL) sampgdk::logprintf("'FCNPC_GetMovePathPoint' native was not found!");
	FCNPC::FCNPC_GetNumberMovePathPoint_Native = sampgdk::FindNative("FCNPC_GetNumberMovePathPoint");
	if (FCNPC::FCNPC_GetNumberMovePathPoint_Native == NULL) sampgdk::logprintf("'FCNPC_GetNumberMovePathPoint' native was not found!");
	FCNPC::FCNPC_GoByMovePath_Native = sampgdk::FindNative("FCNPC_GoByMovePath");
	if (FCNPC::FCNPC_GoByMovePath_Native == NULL) sampgdk::logprintf("'FCNPC_GoByMovePath' native was not found!");
	FCNPC::FCNPC_SetMoveMode_Native = sampgdk::FindNative("FCNPC_SetMoveMode");
	if (FCNPC::FCNPC_SetMoveMode_Native == NULL) sampgdk::logprintf("'FCNPC_SetMoveMode' native was not found!");
	FCNPC::FCNPC_GetMoveMode_Native = sampgdk::FindNative("FCNPC_GetMoveMode");
	if (FCNPC::FCNPC_GetMoveMode_Native == NULL) sampgdk::logprintf("'FCNPC_GetMoveMode' native was not found!");
	FCNPC::FCNPC_SetMinHeightPosCall_Native = sampgdk::FindNative("FCNPC_SetMinHeightPosCall");
	if (FCNPC::FCNPC_SetMinHeightPosCall_Native == NULL) sampgdk::logprintf("'FCNPC_SetMinHeightPosCall' native was not found!");
	FCNPC::FCNPC_GetMinHeightPosCall_Native = sampgdk::FindNative("FCNPC_GetMinHeightPosCall");
	if (FCNPC::FCNPC_GetMinHeightPosCall_Native == NULL) sampgdk::logprintf("'FCNPC_GetMinHeightPosCall' native was not found!");
	FCNPC::FCNPC_ShowInTabListForPlayer_Native = sampgdk::FindNative("FCNPC_ShowInTabListForPlayer");
	if (FCNPC::FCNPC_ShowInTabListForPlayer_Native == NULL) sampgdk::logprintf("'FCNPC_ShowInTabListForPlayer' native was not found!");
	FCNPC::FCNPC_HideInTabListForPlayer_Native = sampgdk::FindNative("FCNPC_HideInTabListForPlayer");
	if (FCNPC::FCNPC_HideInTabListForPlayer_Native == NULL) sampgdk::logprintf("'FCNPC_HideInTabListForPlayer' native was not found!");
	FCNPC::FCNPC_GiveAmmo_Native = sampgdk::FindNative("FCNPC_GiveAmmo");
	if (FCNPC::FCNPC_GiveAmmo_Native == NULL) sampgdk::logprintf("'FCNPC_GiveAmmo' native was not found!");
	FCNPC::FCNPC_GiveAmmoInClip_Native = sampgdk::FindNative("FCNPC_GiveAmmoInClip");
	if (FCNPC::FCNPC_GiveAmmoInClip_Native == NULL) sampgdk::logprintf("'FCNPC_GiveAmmoInClip' native was not found!");
	FCNPC::FCNPC_GetCustomSkin_Native = sampgdk::FindNative("FCNPC_GetCustomSkin");
	if (FCNPC::FCNPC_GetCustomSkin_Native == NULL) sampgdk::logprintf("'FCNPC_GetCustomSkin' native was not found!");
}

int FCNPC::FCNPC_GetPluginVersion(char* version, int size) {
	if (FCNPC::FCNPC_GetPluginVersion_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetPluginVersion_Native, "si", version, size);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetUpdateRate(int rate) {
	if (FCNPC::FCNPC_SetUpdateRate_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetUpdateRate_Native, "i", rate);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetUpdateRate() {
	if (FCNPC::FCNPC_GetUpdateRate_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetUpdateRate_Native, "");
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetTickRate(int rate) {
	if (FCNPC::FCNPC_SetTickRate_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetTickRate_Native, "i", rate);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetTickRate() {
	if (FCNPC::FCNPC_GetTickRate_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetTickRate_Native, "");
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_UseMoveMode(int mode, bool use) {
	if (FCNPC::FCNPC_UseMoveMode_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_UseMoveMode_Native, "ib", mode, use);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsMoveModeUsed(int mode) {
	if (FCNPC::FCNPC_IsMoveModeUsed_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsMoveModeUsed_Native, "i", mode);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_UseMovePathfinding(int pathfinding, bool use) {
	if (FCNPC::FCNPC_UseMovePathfinding_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_UseMovePathfinding_Native, "ib", pathfinding, use);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsMovePathfindingUsed(int pathfinding) {
	if (FCNPC::FCNPC_IsMovePathfindingUsed_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsMovePathfindingUsed_Native, "i", pathfinding);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_UseCrashLog(bool use) {
	if (FCNPC::FCNPC_UseCrashLog_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_UseCrashLog_Native, "b", use);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsCrashLogUsed() {
	if (FCNPC::FCNPC_IsCrashLogUsed_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsCrashLogUsed_Native, "");
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_Create(const char* name) {
	if (FCNPC::FCNPC_Create_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_Create_Native, "s", name);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_Destroy(int npcid) {
	if (FCNPC::FCNPC_Destroy_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_Destroy_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_Spawn(int npcid, int skinid, float x, float y, float z) {
	if (FCNPC::FCNPC_Spawn_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_Spawn_Native, "iifff", npcid, skinid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_Respawn(int npcid) {
	if (FCNPC::FCNPC_Respawn_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_Respawn_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsSpawned(int npcid) {
	if (FCNPC::FCNPC_IsSpawned_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsSpawned_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_Kill(int npcid) {
	if (FCNPC::FCNPC_Kill_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_Kill_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsDead(int npcid) {
	if (FCNPC::FCNPC_IsDead_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsDead_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsValid(int npcid) {
	if (FCNPC::FCNPC_IsValid_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsValid_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsStreamedIn(int npcid, int forplayerid) {
	if (FCNPC::FCNPC_IsStreamedIn_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsStreamedIn_Native, "ii", npcid, forplayerid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsStreamedInForAnyone(int npcid) {
	if (FCNPC::FCNPC_IsStreamedInForAnyone_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsStreamedInForAnyone_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetValidArray(int* npcs, int size) {
	if (FCNPC::FCNPC_GetValidArray_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetValidArray_Native, "Ri", npcs, size);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetPosition(int npcid, float x, float y, float z) {
	if (FCNPC::FCNPC_SetPosition_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetPosition_Native, "ifff", npcid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GivePosition(int npcid, float x, float y, float z) {
	if (FCNPC::FCNPC_GivePosition_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GivePosition_Native, "ifff", npcid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetPosition(int npcid, float* x, float* y, float* z) {
	if (FCNPC::FCNPC_GetPosition_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetPosition_Native, "iRRR", npcid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetAngle(int npcid, float angle) {
	if (FCNPC::FCNPC_SetAngle_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetAngle_Native, "if", npcid, angle);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
float FCNPC::FCNPC_GiveAngle(int npcid, float angle) {
	if (FCNPC::FCNPC_GiveAngle_Native != NULL) {
		cell data = sampgdk::InvokeNative(FCNPC::FCNPC_GiveAngle_Native, "if", npcid, angle);
		return amx_ctof(data);
	}
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetAngleToPos(int npcid, float x, float y) {
	if (FCNPC::FCNPC_SetAngleToPos_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetAngleToPos_Native, "iff", npcid, x, y);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetAngleToPlayer(int npcid, int playerid) {
	if (FCNPC::FCNPC_SetAngleToPlayer_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetAngleToPlayer_Native, "ii", npcid, playerid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
float FCNPC::FCNPC_GetAngle(int npcid) {
	if (FCNPC::FCNPC_GetAngle_Native != NULL) {
		cell data = sampgdk::InvokeNative(FCNPC::FCNPC_GetAngle_Native, "i", npcid);
		return amx_ctof(data);
	}
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetQuaternion(int npcid, float w, float x, float y, float z) {
	if (FCNPC::FCNPC_SetQuaternion_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetQuaternion_Native, "iffff", npcid, w, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GiveQuaternion(int npcid, float w, float x, float y, float z) {
	if (FCNPC::FCNPC_GiveQuaternion_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GiveQuaternion_Native, "iffff", npcid, w, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetQuaternion(int npcid, float* w, float* x, float* y, float* z) {
	if (FCNPC::FCNPC_GetQuaternion_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetQuaternion_Native, "iRRRR", npcid, w, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetVelocity(int npcid, float x, float y, float z, bool update_pos) {
	if (FCNPC::FCNPC_SetVelocity_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetVelocity_Native, "ifffb", npcid, x, y, z, update_pos);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GiveVelocity(int npcid, float x, float y, float z, bool update_pos) {
	if (FCNPC::FCNPC_GiveVelocity_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GiveVelocity_Native, "ifffb", npcid, x, y, z, update_pos);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetVelocity(int npcid, float* x, float* y, float* z) {
	if (FCNPC::FCNPC_GetVelocity_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetVelocity_Native, "iRRR", npcid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetSpeed(int npcid, float speed) {
	if (FCNPC::FCNPC_SetSpeed_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetSpeed_Native, "if", npcid, speed);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
float FCNPC::FCNPC_GetSpeed(int npcid) {
	if (FCNPC::FCNPC_GetSpeed_Native != NULL) {
		cell data = sampgdk::InvokeNative(FCNPC::FCNPC_GetSpeed_Native, "i", npcid);
		return amx_ctof(data);
	}
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetInterior(int npcid, int interiorid) {
	if (FCNPC::FCNPC_SetInterior_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetInterior_Native, "ii", npcid, interiorid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetInterior(int npcid) {
	if (FCNPC::FCNPC_GetInterior_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetInterior_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetVirtualWorld(int npcid, int worldid) {
	if (FCNPC::FCNPC_SetVirtualWorld_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetVirtualWorld_Native, "ii", npcid, worldid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetVirtualWorld(int npcid) {
	if (FCNPC::FCNPC_GetVirtualWorld_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetVirtualWorld_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetHealth(int npcid, float health) {
	if (FCNPC::FCNPC_SetHealth_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetHealth_Native, "if", npcid, health);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
float FCNPC::FCNPC_GiveHealth(int npcid, float health) {
	if (FCNPC::FCNPC_GiveHealth_Native != NULL) {
		cell data = sampgdk::InvokeNative(FCNPC::FCNPC_GiveHealth_Native, "if", npcid, health);
		return amx_ctof(data);
	}
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
float FCNPC::FCNPC_GetHealth(int npcid) {
	if (FCNPC::FCNPC_GetHealth_Native != NULL) {
		cell data = sampgdk::InvokeNative(FCNPC::FCNPC_GetHealth_Native, "i", npcid);
		return amx_ctof(data);
	}
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetArmour(int npcid, float armour) {
	if (FCNPC::FCNPC_SetArmour_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetArmour_Native, "if", npcid, armour);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
float FCNPC::FCNPC_GiveArmour(int npcid, float armour) {
	if (FCNPC::FCNPC_GiveArmour_Native != NULL) {
		cell data = sampgdk::InvokeNative(FCNPC::FCNPC_GiveArmour_Native, "if", npcid, armour);
		return amx_ctof(data);
	}
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
float FCNPC::FCNPC_GetArmour(int npcid) {
	if (FCNPC::FCNPC_GetArmour_Native != NULL) {
		cell data = sampgdk::InvokeNative(FCNPC::FCNPC_GetArmour_Native, "i", npcid);
		return amx_ctof(data);
	}
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetInvulnerable(int npcid, bool invulnerable) {
	if (FCNPC::FCNPC_SetInvulnerable_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetInvulnerable_Native, "ib", npcid, invulnerable);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsInvulnerable(int npcid) {
	if (FCNPC::FCNPC_IsInvulnerable_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsInvulnerable_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetSkin(int npcid, int skinid) {
	if (FCNPC::FCNPC_SetSkin_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetSkin_Native, "ii", npcid, skinid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetSkin(int npcid) {
	if (FCNPC::FCNPC_GetSkin_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetSkin_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetCustomSkin(int npcid) {
	if (FCNPC::FCNPC_GetCustomSkin_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetCustomSkin_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetWeapon(int npcid, int weaponid) {
	if (FCNPC::FCNPC_SetWeapon_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetWeapon_Native, "ii", npcid, weaponid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetWeapon(int npcid) {
	if (FCNPC::FCNPC_GetWeapon_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetWeapon_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetAmmo(int npcid, int ammo) {
	if (FCNPC::FCNPC_SetAmmo_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetAmmo_Native, "ii", npcid, ammo);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GiveAmmo(int npcid, int ammo) {
	if (FCNPC::FCNPC_GiveAmmo_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GiveAmmo_Native, "ii", npcid, ammo);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetAmmo(int npcid) {
	if (FCNPC::FCNPC_GetAmmo_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetAmmo_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetAmmoInClip(int npcid, int ammo) {
	if (FCNPC::FCNPC_SetAmmoInClip_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetAmmoInClip_Native, "ii", npcid, ammo);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GiveAmmoInClip(int npcid, int ammo) {
	if (FCNPC::FCNPC_GiveAmmoInClip_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GiveAmmoInClip_Native, "ii", npcid, ammo);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetAmmoInClip(int npcid) {
	if (FCNPC::FCNPC_GetAmmoInClip_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetAmmoInClip_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetWeaponSkillLevel(int npcid, int skill, int level) {
	if (FCNPC::FCNPC_SetWeaponSkillLevel_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetWeaponSkillLevel_Native, "iii", npcid, skill, level);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GiveWeaponSkillLevel(int npcid, int skill, int level) {
	if (FCNPC::FCNPC_GiveWeaponSkillLevel_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GiveWeaponSkillLevel_Native, "iii", npcid, skill, level);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetWeaponSkillLevel(int npcid, int skill) {
	if (FCNPC::FCNPC_GetWeaponSkillLevel_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetWeaponSkillLevel_Native, "ii", npcid, skill);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetWeaponState(int npcid, int weapon_state) {
	if (FCNPC::FCNPC_SetWeaponState_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetWeaponState_Native, "ii", npcid, weapon_state);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetWeaponState(int npcid) {
	if (FCNPC::FCNPC_GetWeaponState_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetWeaponState_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetWeaponReloadTime(int npcid, int weaponid, int time) {
	if (FCNPC::FCNPC_SetWeaponReloadTime_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetWeaponReloadTime_Native, "iii", npcid, weaponid, time);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetWeaponReloadTime(int npcid, int weaponid) {
	if (FCNPC::FCNPC_GetWeaponReloadTime_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetWeaponReloadTime_Native, "ii", npcid, weaponid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetWeaponActualReloadTime(int npcid, int weaponid) {
	if (FCNPC::FCNPC_GetWeaponActualReloadTime_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetWeaponActualReloadTime_Native, "ii", npcid, weaponid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetWeaponShootTime(int npcid, int weaponid, int time) {
	if (FCNPC::FCNPC_SetWeaponShootTime_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetWeaponShootTime_Native, "iii", npcid, weaponid, time);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetWeaponShootTime(int npcid, int weaponid) {
	if (FCNPC::FCNPC_GetWeaponShootTime_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetWeaponShootTime_Native, "ii", npcid, weaponid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetWeaponClipSize(int npcid, int weaponid, int size) {
	if (FCNPC::FCNPC_SetWeaponClipSize_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetWeaponClipSize_Native, "iii", npcid, weaponid, size);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetWeaponClipSize(int npcid, int weaponid) {
	if (FCNPC::FCNPC_GetWeaponClipSize_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetWeaponClipSize_Native, "ii", npcid, weaponid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetWeaponActualClipSize(int npcid, int weaponid) {
	if (FCNPC::FCNPC_GetWeaponActualClipSize_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetWeaponActualClipSize_Native, "ii", npcid, weaponid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetWeaponAccuracy(int npcid, int weaponid, float accuracy) {
	if (FCNPC::FCNPC_SetWeaponAccuracy_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetWeaponAccuracy_Native, "iif", npcid, weaponid, accuracy);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
float FCNPC::FCNPC_GetWeaponAccuracy(int npcid, int weaponid) {
	if (FCNPC::FCNPC_GetWeaponAccuracy_Native != NULL) {
		cell data = sampgdk::InvokeNative(FCNPC::FCNPC_GetWeaponAccuracy_Native, "ii", npcid, weaponid);
		return amx_ctof(data);
	}
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetWeaponInfo(int npcid, int weaponid, int reload_time, int shoot_time, int clip_size, float accuracy) {
	if (FCNPC::FCNPC_SetWeaponInfo_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetWeaponInfo_Native, "iiiiif", npcid, weaponid, reload_time, shoot_time, clip_size, accuracy);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetWeaponInfo(int npcid, int weaponid, int* reload_time, int* shoot_time, int* clip_size, float* accuracy) {
	if (FCNPC::FCNPC_GetWeaponInfo_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetWeaponInfo_Native, "iiRRRR", npcid, weaponid, reload_time, shoot_time, clip_size, accuracy);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetWeaponDefaultInfo(int weaponid, int reload_time, int shoot_time, int clip_size, float accuracy) {
	if (FCNPC::FCNPC_SetWeaponDefaultInfo_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetWeaponDefaultInfo_Native, "iiiif", weaponid, reload_time, shoot_time, clip_size, accuracy);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetWeaponDefaultInfo(int weaponid, int* reload_time, int* shoot_time, int* clip_size, float* accuracy) {
	if (FCNPC::FCNPC_GetWeaponDefaultInfo_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetWeaponDefaultInfo_Native, "iRRRR", weaponid, reload_time, shoot_time, clip_size, accuracy);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetKeys(int npcid, int ud_analog, int lr_analog, int keys) {
	if (FCNPC::FCNPC_SetKeys_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetKeys_Native, "iiii", npcid, ud_analog, lr_analog, keys);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetKeys(int npcid, int* ud_analog, int* lr_analog, int* keys) {
	if (FCNPC::FCNPC_GetKeys_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetKeys_Native, "iRRR", npcid, ud_analog, lr_analog, keys);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetSpecialAction(int npcid, int actionid) {
	if (FCNPC::FCNPC_SetSpecialAction_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetSpecialAction_Native, "ii", npcid, actionid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetSpecialAction(int npcid) {
	if (FCNPC::FCNPC_GetSpecialAction_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetSpecialAction_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetAnimation(int npcid, int animationid, float fDelta, int loop, int lockx, int locky, int freeze, int time) {
	if (FCNPC::FCNPC_SetAnimation_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetAnimation_Native, "iifiiiii", npcid, animationid, fDelta, loop, lockx, locky, freeze, time);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetAnimationByName(int npcid, char* name, float fDelta, int loop, int lockx, int locky, int freeze, int time) {
	if (FCNPC::FCNPC_SetAnimationByName_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetAnimationByName_Native, "isfiiiii", npcid, name, fDelta, loop, lockx, locky, freeze, time);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_ResetAnimation(int npcid) {
	if (FCNPC::FCNPC_ResetAnimation_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_ResetAnimation_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetAnimation(int npcid, int* animationid, float* fDelta, int* loop, int* lockx, int* locky, int* freeze, int* time) {
	if (FCNPC::FCNPC_GetAnimation_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetAnimation_Native, "iRRRRRRR", npcid, animationid, fDelta, loop, lockx, locky, freeze, time);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_ApplyAnimation(int npcid, char* animlib, char* animname, float fDelta, int loop, int lockx, int locky, int freeze, int time) {
	if (FCNPC::FCNPC_ApplyAnimation_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_ApplyAnimation_Native, "issfiiiii", npcid, animlib, animname, fDelta, loop, lockx, locky, freeze, time);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_ClearAnimations(int npcid) {
	if (FCNPC::FCNPC_ClearAnimations_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_ClearAnimations_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetFightingStyle(int npcid, int style) {
	if (FCNPC::FCNPC_SetFightingStyle_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetFightingStyle_Native, "ii", npcid, style);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetFightingStyle(int npcid) {
	if (FCNPC::FCNPC_GetFightingStyle_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetFightingStyle_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_UseReloading(int npcid, bool use) {
	if (FCNPC::FCNPC_UseReloading_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_UseReloading_Native, "ib", npcid, use);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsReloadingUsed(int npcid) {
	if (FCNPC::FCNPC_IsReloadingUsed_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsReloadingUsed_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_UseInfiniteAmmo(int npcid, bool use) {
	if (FCNPC::FCNPC_UseInfiniteAmmo_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_UseInfiniteAmmo_Native, "ib", npcid, use);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsInfiniteAmmoUsed(int npcid) {
	if (FCNPC::FCNPC_IsInfiniteAmmoUsed_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsInfiniteAmmoUsed_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GoTo(int npcid, float x, float y, float z, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance, int stop_delay) {
	if (FCNPC::FCNPC_GoTo_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GoTo_Native, "ifffifiifbfi", npcid, x, y, z, type, speed, mode, pathfinding, radius, set_angle, min_distance, stop_delay);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GoToPlayer(int npcid, int playerid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance, float dist_check, int stop_delay) {
	if (FCNPC::FCNPC_GoToPlayer_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GoToPlayer_Native, "iiifiifbffi", npcid, playerid, type, speed, mode, pathfinding, radius, set_angle, min_distance, dist_check, stop_delay);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_Stop(int npcid) {
	if (FCNPC::FCNPC_Stop_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_Stop_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsMoving(int npcid) {
	if (FCNPC::FCNPC_IsMoving_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsMoving_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsMovingAtPlayer(int npcid, int playerid) {
	if (FCNPC::FCNPC_IsMovingAtPlayer_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsMovingAtPlayer_Native, "ii", npcid, playerid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetDestinationPoint(int npcid, float* x, float* y, float* z) {
	if (FCNPC::FCNPC_GetDestinationPoint_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetDestinationPoint_Native, "iRRR", npcid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_AimAt(int npcid, float x, float y, float z, bool shoot, int shoot_delay, bool set_angle, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags) {
	if (FCNPC::FCNPC_AimAt_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_AimAt_Native, "ifffbibfffii", npcid, x, y, z, shoot, shoot_delay, set_angle, offset_from_x, offset_from_y, offset_from_z, between_check_mode, between_check_flags);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_AimAtPlayer(int npcid, int playerid, bool shoot, int shoot_delay, bool set_angle, float offset_x, float offset_y, float offset_z, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags) {
	if (FCNPC::FCNPC_AimAtPlayer_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_AimAtPlayer_Native, "iibibffffffii", npcid, playerid, shoot, shoot_delay, set_angle, offset_x, offset_y, offset_z, offset_from_x, offset_from_y, offset_from_z, between_check_mode, between_check_flags);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_StopAim(int npcid) {
	if (FCNPC::FCNPC_StopAim_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_StopAim_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_MeleeAttack(int npcid, int delay, bool fighting_style) {
	if (FCNPC::FCNPC_MeleeAttack_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_MeleeAttack_Native, "iib", npcid, delay, fighting_style);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_StopAttack(int npcid) {
	if (FCNPC::FCNPC_StopAttack_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_StopAttack_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsAttacking(int npcid) {
	if (FCNPC::FCNPC_IsAttacking_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsAttacking_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsAiming(int npcid) {
	if (FCNPC::FCNPC_IsAiming_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsAiming_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsAimingAtPlayer(int npcid, int playerid) {
	if (FCNPC::FCNPC_IsAimingAtPlayer_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsAimingAtPlayer_Native, "ii", npcid, playerid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetAimingPlayer(int npcid) {
	if (FCNPC::FCNPC_GetAimingPlayer_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetAimingPlayer_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsShooting(int npcid) {
	if (FCNPC::FCNPC_IsShooting_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsShooting_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsReloading(int npcid) {
	if (FCNPC::FCNPC_IsReloading_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsReloading_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_TriggerWeaponShot(int npcid, int weaponid, int hittype, int hitid, float x, float y, float z, bool is_hit, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags) {
	if (FCNPC::FCNPC_TriggerWeaponShot_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_TriggerWeaponShot_Native, "iiiifffbfffii", npcid, weaponid, hittype, hitid, x, y, z, is_hit, offset_from_x, offset_from_y, offset_from_z, between_check_mode, between_check_flags);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetClosestEntityInBetween(int npcid, float x, float y, float z, float range, int between_check_mode, int between_check_flags, float offset_from_x, float offset_from_y, float offset_from_z, int* entity_id, int* entity_type, int* object_owner_id, float* point_x, float* point_y, float* point_z) {
	if (FCNPC::FCNPC_GetClosestEntityInBetween_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetClosestEntityInBetween_Native, "iffffiifffRRRRRR", npcid, x, y, z, range, between_check_mode, between_check_flags, offset_from_x, offset_from_y, offset_from_z, entity_id, entity_type, object_owner_id, point_x, point_y, point_z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_EnterVehicle(int npcid, int vehicleid, int seatid, int type) {
	if (FCNPC::FCNPC_EnterVehicle_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_EnterVehicle_Native, "iiii", npcid, vehicleid, seatid, type);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_ExitVehicle(int npcid) {
	if (FCNPC::FCNPC_ExitVehicle_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_ExitVehicle_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_PutInVehicle(int npcid, int vehicleid, int seatid) {
	if (FCNPC::FCNPC_PutInVehicle_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_PutInVehicle_Native, "iii", npcid, vehicleid, seatid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_RemoveFromVehicle(int npcid) {
	if (FCNPC::FCNPC_RemoveFromVehicle_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_RemoveFromVehicle_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetVehicleID(int npcid) {
	if (FCNPC::FCNPC_GetVehicleID_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetVehicleID_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetVehicleSeat(int npcid) {
	if (FCNPC::FCNPC_GetVehicleSeat_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetVehicleSeat_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_UseVehicleSiren(int npcid, bool use) {
	if (FCNPC::FCNPC_UseVehicleSiren_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_UseVehicleSiren_Native, "ib", npcid, use);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsVehicleSirenUsed(int npcid) {
	if (FCNPC::FCNPC_IsVehicleSirenUsed_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsVehicleSirenUsed_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetVehicleHealth(int npcid, float health) {
	if (FCNPC::FCNPC_SetVehicleHealth_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetVehicleHealth_Native, "if", npcid, health);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
float FCNPC::FCNPC_GetVehicleHealth(int npcid) {
	if (FCNPC::FCNPC_GetVehicleHealth_Native != NULL) {
		cell data = sampgdk::InvokeNative(FCNPC::FCNPC_GetVehicleHealth_Native, "i", npcid);
		return amx_ctof(data);
	}
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetVehicleHydraThrusters(int npcid, int direction) {
	if (FCNPC::FCNPC_SetVehicleHydraThrusters_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetVehicleHydraThrusters_Native, "ii", npcid, direction);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetVehicleHydraThrusters(int npcid) {
	if (FCNPC::FCNPC_GetVehicleHydraThrusters_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetVehicleHydraThrusters_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetVehicleGearState(int npcid, int gear_state) {
	if (FCNPC::FCNPC_SetVehicleGearState_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetVehicleGearState_Native, "ii", npcid, gear_state);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetVehicleGearState(int npcid) {
	if (FCNPC::FCNPC_GetVehicleGearState_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetVehicleGearState_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetVehicleTrainSpeed(int npcid, float speed) {
	if (FCNPC::FCNPC_SetVehicleTrainSpeed_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetVehicleTrainSpeed_Native, "if", npcid, speed);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
float FCNPC::FCNPC_GetVehicleTrainSpeed(int npcid) {
	if (FCNPC::FCNPC_GetVehicleTrainSpeed_Native != NULL) {
		cell data = sampgdk::InvokeNative(FCNPC::FCNPC_GetVehicleTrainSpeed_Native, "i", npcid);
		return amx_ctof(data);
	}
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetSurfingOffsets(int npcid, float x, float y, float z) {
	if (FCNPC::FCNPC_SetSurfingOffsets_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetSurfingOffsets_Native, "ifff", npcid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GiveSurfingOffsets(int npcid, float x, float y, float z) {
	if (FCNPC::FCNPC_GiveSurfingOffsets_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GiveSurfingOffsets_Native, "ifff", npcid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetSurfingOffsets(int npcid, float* x, float* y, float* z) {
	if (FCNPC::FCNPC_GetSurfingOffsets_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetSurfingOffsets_Native, "iRRR", npcid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetSurfingVehicle(int npcid, int vehicleid) {
	if (FCNPC::FCNPC_SetSurfingVehicle_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetSurfingVehicle_Native, "ii", npcid, vehicleid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetSurfingVehicle(int npcid) {
	if (FCNPC::FCNPC_GetSurfingVehicle_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetSurfingVehicle_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetSurfingObject(int npcid, int objectid) {
	if (FCNPC::FCNPC_SetSurfingObject_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetSurfingObject_Native, "ii", npcid, objectid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetSurfingObject(int npcid) {
	if (FCNPC::FCNPC_GetSurfingObject_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetSurfingObject_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetSurfingPlayerObject(int npcid, int objectid) {
	if (FCNPC::FCNPC_SetSurfingPlayerObject_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetSurfingPlayerObject_Native, "ii", npcid, objectid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetSurfingPlayerObject(int npcid) {
	if (FCNPC::FCNPC_GetSurfingPlayerObject_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetSurfingPlayerObject_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_StopSurfing(int npcid) {
	if (FCNPC::FCNPC_StopSurfing_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_StopSurfing_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_StartPlayingPlayback(int npcid, char* file, int recordid, bool auto_unload, float delta_x, float delta_y, float delta_z, float delta_qw, float delta_qx, float delta_qy, float delta_qz) {
	if (FCNPC::FCNPC_StartPlayingPlayback_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_StartPlayingPlayback_Native, "isibfffffff", npcid, file, recordid, auto_unload, delta_x, delta_y, delta_z, delta_qw, delta_qx, delta_qy, delta_qz);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_StopPlayingPlayback(int npcid) {
	if (FCNPC::FCNPC_StopPlayingPlayback_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_StopPlayingPlayback_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_PausePlayingPlayback(int npcid) {
	if (FCNPC::FCNPC_PausePlayingPlayback_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_PausePlayingPlayback_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_ResumePlayingPlayback(int npcid) {
	if (FCNPC::FCNPC_ResumePlayingPlayback_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_ResumePlayingPlayback_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_LoadPlayingPlayback(char* file) {
	if (FCNPC::FCNPC_LoadPlayingPlayback_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_LoadPlayingPlayback_Native, "s", file);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_UnloadPlayingPlayback(int recordid) {
	if (FCNPC::FCNPC_UnloadPlayingPlayback_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_UnloadPlayingPlayback_Native, "i", recordid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetPlayingPlaybackPath(int npcid, char* path) {
	if (FCNPC::FCNPC_SetPlayingPlaybackPath_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetPlayingPlaybackPath_Native, "is", npcid, path);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetPlayingPlaybackPath(int npcid, char* path, int size) {
	if (FCNPC::FCNPC_GetPlayingPlaybackPath_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetPlayingPlaybackPath_Native, "isi", npcid, path, size);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_OpenNode(int nodeid) {
	if (FCNPC::FCNPC_OpenNode_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_OpenNode_Native, "i", nodeid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_CloseNode(int nodeid) {
	if (FCNPC::FCNPC_CloseNode_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_CloseNode_Native, "i", nodeid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsNodeOpen(int nodeid) {
	if (FCNPC::FCNPC_IsNodeOpen_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsNodeOpen_Native, "i", nodeid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetNodeType(int nodeid) {
	if (FCNPC::FCNPC_GetNodeType_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetNodeType_Native, "i", nodeid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetNodePoint(int nodeid, int pointid) {
	if (FCNPC::FCNPC_SetNodePoint_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetNodePoint_Native, "ii", nodeid, pointid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetNodePointPosition(int nodeid, float* x, float* y, float* z) {
	if (FCNPC::FCNPC_GetNodePointPosition_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetNodePointPosition_Native, "iRRR", nodeid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetNodePointCount(int nodeid) {
	if (FCNPC::FCNPC_GetNodePointCount_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetNodePointCount_Native, "i", nodeid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetNodeInfo(int nodeid, int* vehnodes, int* pednodes, int* navinode) {
	if (FCNPC::FCNPC_GetNodeInfo_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetNodeInfo_Native, "iRRR", nodeid, vehnodes, pednodes, navinode);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_PlayNode(int npcid, int nodeid, int type, float speed, int mode, float radius, bool set_angle) {
	if (FCNPC::FCNPC_PlayNode_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_PlayNode_Native, "iiififb", npcid, nodeid, type, speed, mode, radius, set_angle);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_StopPlayingNode(int npcid) {
	if (FCNPC::FCNPC_StopPlayingNode_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_StopPlayingNode_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_PausePlayingNode(int npcid) {
	if (FCNPC::FCNPC_PausePlayingNode_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_PausePlayingNode_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_ResumePlayingNode(int npcid) {
	if (FCNPC::FCNPC_ResumePlayingNode_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_ResumePlayingNode_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsPlayingNode(int npcid) {
	if (FCNPC::FCNPC_IsPlayingNode_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsPlayingNode_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsPlayingNodePaused(int npcid) {
	if (FCNPC::FCNPC_IsPlayingNodePaused_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsPlayingNodePaused_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_CreateMovePath() {
	if (FCNPC::FCNPC_CreateMovePath_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_CreateMovePath_Native, "");
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_DestroyMovePath(int pathid) {
	if (FCNPC::FCNPC_DestroyMovePath_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_DestroyMovePath_Native, "i", pathid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsValidMovePath(int pathid) {
	if (FCNPC::FCNPC_IsValidMovePath_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsValidMovePath_Native, "i", pathid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_AddPointToMovePath(int pathid, float x, float y, float z) {
	if (FCNPC::FCNPC_AddPointToMovePath_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_AddPointToMovePath_Native, "ifff", pathid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_AddPointsToMovePath(int pathid, float** points, int size) {
	if (FCNPC::FCNPC_AddPointsToMovePath_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_AddPointsToMovePath_Native, "ii", pathid, points, size);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_AddPointsToMovePath2(int pathid, float points_x, float points_y, float points_z, int size) {
	if (FCNPC::FCNPC_AddPointsToMovePath2_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_AddPointsToMovePath2_Native, "ifffi", pathid, points_x, points_y, points_z, size);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_RemovePointFromMovePath(int pathid, int pointid) {
	if (FCNPC::FCNPC_RemovePointFromMovePath_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_RemovePointFromMovePath_Native, "ii", pathid, pointid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
bool FCNPC::FCNPC_IsValidMovePathPoint(int pathid, int pointid) {
	if (FCNPC::FCNPC_IsValidMovePathPoint_Native != NULL) return (bool)sampgdk::InvokeNative(FCNPC::FCNPC_IsValidMovePathPoint_Native, "ii", pathid, pointid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetMovePathPoint(int pathid, int pointid, float* x, float* y, float* z) {
	if (FCNPC::FCNPC_GetMovePathPoint_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetMovePathPoint_Native, "iiRRR", pathid, pointid, x, y, z);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetNumberMovePathPoint(int pathid) {
	if (FCNPC::FCNPC_GetNumberMovePathPoint_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetNumberMovePathPoint_Native, "i", pathid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GoByMovePath(int npcid, int pathid, int pointid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance) {
	if (FCNPC::FCNPC_GoByMovePath_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GoByMovePath_Native, "iiiifiifbf", npcid, pathid, pointid, type, speed, mode, pathfinding, radius, set_angle, min_distance);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetMoveMode(int npcid, int mode) {
	if (FCNPC::FCNPC_SetMoveMode_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetMoveMode_Native, "ii", npcid, mode);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_GetMoveMode(int npcid) {
	if (FCNPC::FCNPC_GetMoveMode_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_GetMoveMode_Native, "i", npcid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_SetMinHeightPosCall(int npcid, float height) {
	if (FCNPC::FCNPC_SetMinHeightPosCall_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_SetMinHeightPosCall_Native, "if", npcid, height);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
float FCNPC::FCNPC_GetMinHeightPosCall(int npcid) {
	if (FCNPC::FCNPC_GetMinHeightPosCall_Native != NULL) {
		cell data = sampgdk::InvokeNative(FCNPC::FCNPC_GetMinHeightPosCall_Native, "i", npcid);
		return amx_ctof(data);
	}
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_ShowInTabListForPlayer(int npcid, int forplayerid) {
	if (FCNPC::FCNPC_ShowInTabListForPlayer_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_ShowInTabListForPlayer_Native, "ii", npcid, forplayerid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}
int FCNPC::FCNPC_HideInTabListForPlayer(int npcid, int forplayerid) {
	if (FCNPC::FCNPC_HideInTabListForPlayer_Native != NULL) return sampgdk::InvokeNative(FCNPC::FCNPC_HideInTabListForPlayer_Native, "ii", npcid, forplayerid);
	else return sampgdk::logprintf("'" __FILE__ "' / '%s' - Function not discovered!", __func__), 0;
}

bool FCNPC::FCNPC_OnCreate(int npcid)
{
	bool defaultPointerResult = true;
	if(FCNPC::p_FCNPC_OnCreate != nullptr) {
		defaultPointerResult = FCNPC::p_FCNPC_OnCreate(npcid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnDestroy(int npcid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnDestroy != nullptr) {
		defaultPointerResult = FCNPC::p_FCNPC_OnDestroy(npcid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnSpawn(int npcid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnSpawn != nullptr) {
		defaultPointerResult = FCNPC::p_FCNPC_OnSpawn(npcid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnRespawn(int npcid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnRespawn != nullptr) {
		defaultPointerResult = FCNPC::p_FCNPC_OnRespawn(npcid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnDeath(int npcid, int killerid, int reason)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnDeath != nullptr) {
		defaultPointerResult = FCNPC::p_FCNPC_OnDeath(npcid, killerid, reason);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnUpdate(int npcid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnUpdate != nullptr) {
		defaultPointerResult = FCNPC::p_FCNPC_OnUpdate(npcid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnTakeDamage(int npcid, int issuerid, float amount, int weaponid, int bodypart)
{
	bool defaultPointerResult = true;
	sampgdk::logprintf("Called OnTakeDamage for npcid %d", npcid);
	if (FCNPC::p_FCNPC_OnTakeDamage != nullptr) {
		defaultPointerResult = FCNPC::p_FCNPC_OnTakeDamage(npcid, issuerid, amount, weaponid, bodypart);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnGiveDamage(int npcid, int damagedid, float amount, int weaponid, int bodypart)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnGiveDamage != nullptr) {
		defaultPointerResult = FCNPC::p_FCNPC_OnGiveDamage(npcid, damagedid, amount, weaponid, bodypart);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnReachDestination(int npcid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnReachDestination != nullptr) {
		defaultPointerResult = FCNPC::p_FCNPC_OnReachDestination(npcid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnWeaponShot(int npcid, int weaponid, int hittype, int hitid, float fX, float fY, float fZ)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnWeaponShot != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnWeaponShot(npcid, weaponid, hittype, hitid, fX, fY, fZ);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnWeaponStateChange(int npcid, int weapon_state)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnWeaponStateChange != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnWeaponStateChange(npcid, weapon_state);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnStreamIn(int npcid, int forplayerid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnStreamIn != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnStreamIn(npcid, forplayerid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnStreamOut(int npcid, int forplayerid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnStreamOut != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnStreamOut(npcid, forplayerid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnVehicleEntryComplete(int npcid, int vehicleid, int seatid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnVehicleEntryComplete != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnVehicleEntryComplete(npcid, vehicleid, seatid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnVehicleExitComplete(int npcid, int vehicleid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnVehicleExitComplete != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnVehicleExitComplete(npcid, vehicleid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnVehicleTakeDamage(int npcid, int issuerid, int vehicleid, float amount, int weaponid, float fX, float fY, float fZ)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnVehicleTakeDamage != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnVehicleTakeDamage(npcid, issuerid, vehicleid, amount, weaponid, fX, fY, fZ);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnFinishPlayback(int npcid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnFinishPlayback != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnFinishPlayback(npcid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnFinishNode(int npcid, int nodeid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnFinishNode != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnFinishNode(npcid, nodeid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnFinishNodePoint(int npcid, int nodeid, int pointid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnFinishNodePoint != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnFinishNodePoint(npcid, nodeid, pointid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnChangeNode(int npcid, int newnodeid, int oldnodeid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnChangeNode != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnChangeNode(npcid, newnodeid, oldnodeid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnFinishMovePath(int npcid, int pathid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnFinishMovePath != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnFinishMovePath(npcid, pathid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnFinishMovePathPoint(int npcid, int pathid, int pointid)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnFinishMovePathPoint != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnFinishMovePathPoint(npcid, pathid, pointid);
	}
	return defaultPointerResult;
}
bool FCNPC::FCNPC_OnChangeHeightPos(int npcid, float newz, float oldz)
{
	bool defaultPointerResult = true;
	if (FCNPC::p_FCNPC_OnChangeHeightPos != nullptr) {
		defaultPointerResult = FCNPC::FCNPC_OnChangeHeightPos(npcid, newz, oldz);
	}
	return defaultPointerResult;
}
void FCNPC::Set_Callback_OnCreate(bool (*fn)(int))
{
	FCNPC::p_FCNPC_OnCreate = fn;
}
void FCNPC::Set_Callback_OnDestroy(bool (*fn)(int))
{
	FCNPC::p_FCNPC_OnDestroy = fn;
}
void FCNPC::Set_Callback_OnSpawn(bool (*fn)(int))
{
	FCNPC::p_FCNPC_OnSpawn = fn;
}
void FCNPC::Set_Callback_OnRespawn(bool (*fn)(int))
{
	FCNPC::p_FCNPC_OnRespawn = fn;
}
void FCNPC::Set_Callback_OnDeath(bool (*fn)(int, int, int))
{
	FCNPC::p_FCNPC_OnDeath = fn;
}
void FCNPC::Set_Callback_OnUpdate(bool (*fn)(int))
{
	FCNPC::p_FCNPC_OnUpdate = fn;
}
void FCNPC::Set_Callback_OnTakeDamage(bool (*fn)(int, int, float, int, int))
{
	FCNPC::p_FCNPC_OnTakeDamage = fn;
}
void FCNPC::Set_Callback_OnGiveDamage(bool (*fn)(int, int, float, int, int))
{
	FCNPC::p_FCNPC_OnGiveDamage = fn;
}
void FCNPC::Set_Callback_OnReachDestination(bool (*fn)(int))
{
	FCNPC::p_FCNPC_OnReachDestination = fn;
}
void FCNPC::Set_Callback_OnWeaponShot(bool (*fn)(int, int, int, int, float, float, float))
{
	FCNPC::p_FCNPC_OnWeaponShot = fn;
}
void FCNPC::Set_Callback_OnWeaponStateChange(bool (*fn)(int, int))
{
	FCNPC::p_FCNPC_OnWeaponStateChange = fn;
}
void FCNPC::Set_Callback_OnStreamIn(bool (*fn)(int, int))
{
	FCNPC::p_FCNPC_OnStreamIn = fn;
}
void FCNPC::Set_Callback_OnStreamOut(bool (*fn)(int, int))
{
	FCNPC::p_FCNPC_OnStreamOut = fn;
}
void FCNPC::Set_Callback_OnVehicleEntryComplete(bool (*fn)(int, int, int))
{
	FCNPC::p_FCNPC_OnVehicleEntryComplete = fn;
}
void FCNPC::Set_Callback_OnVehicleExitComplete(bool (*fn)(int, int))
{
	FCNPC::p_FCNPC_OnVehicleExitComplete = fn;
}
void FCNPC::Set_Callback_OnVehicleTakeDamage(bool (*fn)(int, int, int, float, int, float, float, float))
{
	FCNPC::p_FCNPC_OnVehicleTakeDamage = fn;
}
void FCNPC::Set_Callback_OnFinishPlayback(bool (*fn)(int))
{
	FCNPC::p_FCNPC_OnFinishPlayback = fn;
}
void FCNPC::Set_Callback_OnFinishNode(bool (*fn)(int, int))
{
	FCNPC::p_FCNPC_OnFinishNode = fn;
}
void FCNPC::Set_Callback_OnFinishNodePoint(bool (*fn)(int, int, int))
{
	FCNPC::p_FCNPC_OnFinishNodePoint = fn;
}
void FCNPC::Set_Callback_OnChangeNode(bool (*fn)(int, int, int))
{
	FCNPC::p_FCNPC_OnChangeNode = fn;
}
void FCNPC::Set_Callback_OnFinishMovePath(bool (*fn)(int, int))
{
	FCNPC::p_FCNPC_OnFinishMovePath = fn;
}
void FCNPC::Set_Callback_OnFinishMovePathPoint(bool (*fn)(int, int, int))
{
	FCNPC::p_FCNPC_OnFinishMovePathPoint = fn;
}
void FCNPC::Set_Callback_OnChangeHeightPos(bool (*fn)(int, float, float))
{
	FCNPC::p_FCNPC_OnChangeHeightPos = fn;
}

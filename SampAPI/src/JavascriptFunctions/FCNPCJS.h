#pragma once

#include <ChakraCore/ChakraCore.h>
#include <JavascriptObject.h>
#include <ThirdParty/FCNPC.h>
#include <spdlog/spdlog.h>
using namespace ChakraCore;


class FCNPCJS
{
//public:
	//static CLogger g_NpcLogger;
public:
	JavascriptObject m_JSObject;
public:
	FCNPCJS();
	void Initialize();
	JavascriptObject GetJSObject();
	~FCNPCJS();
public:
	static int GetCurrentNPCID();
	static JsValueRef CALLBACK NPC_SetPosition(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetPosition(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_Spawn(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetSkin(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_Respawn(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_Goto(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_Print(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_Log(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetColor(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetName(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	//Generated Code
	static JsValueRef CALLBACK NPC_GivePosition(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetAngle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GiveAngle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetAngleToPos(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetAngleToPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetAngle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetQuaternion(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GiveQuaternion(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetQuaternion(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetVelocity(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GiveVelocity(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetVelocity(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetSpeed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetSpeed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetInterior(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetInterior(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetVirtualWorld(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetVirtualWorld(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetHealth(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GiveHealth(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetHealth(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetArmour(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GiveArmour(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetArmour(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetInvulnerable(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsInvulnerable(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetSkin(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetCustomSkin(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetWeapon(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetWeapon(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetAmmo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GiveAmmo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetAmmo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetAmmoInClip(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GiveAmmoInClip(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetAmmoInClip(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetWeaponSkillLevel(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GiveWeaponSkillLevel(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetWeaponSkillLevel(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetWeaponState(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetWeaponState(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetWeaponReloadTime(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetWeaponReloadTime(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetWeaponActualReloadTime(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetWeaponShootTime(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetWeaponShootTime(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetWeaponClipSize(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetWeaponClipSize(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetWeaponActualClipSize(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetWeaponAccuracy(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetWeaponAccuracy(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetWeaponInfo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetWeaponInfo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetKeys(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetKeys(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetSpecialAction(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetSpecialAction(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetAnimation(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetAnimationByName(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_ResetAnimation(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetAnimation(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_ApplyAnimation(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_ClearAnimations(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetFightingStyle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetFightingStyle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_UseReloading(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsReloadingUsed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_UseInfiniteAmmo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsInfiniteAmmoUsed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GoToPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_Stop(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsMoving(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsMovingAtPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetDestinationPoint(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_AimAt(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_AimAtPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_StopAim(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_MeleeAttack(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_StopAttack(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsAttacking(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsAiming(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsAimingAtPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetAimingPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsShooting(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsReloading(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_TriggerWeaponShot(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetClosestEntityInBetween(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_EnterVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_ExitVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_PutInVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_RemoveFromVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetVehicleID(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetVehicleSeat(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_UseVehicleSiren(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsVehicleSirenUsed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetVehicleHealth(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetVehicleHealth(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetVehicleHydraThrusters(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetVehicleHydraThrusters(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetVehicleGearState(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetVehicleGearState(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetVehicleTrainSpeed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetVehicleTrainSpeed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetSurfingOffsets(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GiveSurfingOffsets(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetSurfingOffsets(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetSurfingVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetSurfingVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetSurfingObject(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetSurfingObject(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetSurfingPlayerObject(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetSurfingPlayerObject(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_StopSurfing(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_StartPlayingPlayback(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_StopPlayingPlayback(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_PausePlayingPlayback(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_ResumePlayingPlayback(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetPlayingPlaybackPath(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetPlayingPlaybackPath(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_PlayNode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_StopPlayingNode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_PausePlayingNode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_ResumePlayingNode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsPlayingNode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_IsPlayingNodePaused(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GoByMovePath(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetMoveMode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetMoveMode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_SetMinHeightPosCall(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_GetMinHeightPosCall(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_ShowInTabListForPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK NPC_HideInTabListForPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);


};


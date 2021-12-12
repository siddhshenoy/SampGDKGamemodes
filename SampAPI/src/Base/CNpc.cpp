#include "CNpc.h"

std::map<int, CNpc*> CNpc::g_NpcPool;


CNpc::CNpc() : CBaseEntity(-1)
{
	m_LastUpdateTick = GetTickCount();
	m_Logger.Init("CNpc", "","");
	
}
CNpc::CNpc(int id) : CBaseEntity(id) {
	CNpc::g_NpcPool.insert(std::pair<int, CNpc*>(this->m_ID, this));
	m_LastUpdateTick = GetTickCount();
	m_Logger.Init("CNpc", "", "");
}
CNpc::CNpc(const char* name)
{
	this->m_ID = FCNPC::FCNPC_Create(name);
	CNpc::g_NpcPool.insert(std::pair<int, CNpc*>(this->m_ID, this));
	m_LastUpdateTick = GetTickCount();
	m_Logger.Init("CNpc", "", "");
}
CNpc::~CNpc()
{
	sampgdk::logprintf("%s Started", __FUNCTION__);
	this->Destroy();
	sampgdk::logprintf("%s Ended", __FUNCTION__);
}
int CNpc::Create(const char* name)
{
	this->m_ID = FCNPC::FCNPC_Create(name);
	CNpc::g_NpcPool.insert(std::pair<int, CNpc*>(this->m_ID, this));
	m_Logger.Info("NPC[" + std::to_string(this->m_ID) + "] has been created!");
	return this->m_ID;
}
int CNpc::Destroy() {
	try {
		/// <summary>
		/// You need not call m_Runtime->Dispose if you are using the delete operator on the runtime as it internally calls the same function, hence this be a
		/// reason of server crashing while switching the gamemode.
		/// Update:
		/// There seems to be another issue even after calling 'delete m_Runtime' one possible reason could be: The runtime is still in use and requires all the
		/// functions to have their execution completed after which we can destroy the context, this is a big challenge as we have to keep a track of all the callbacks 
		/// </summary>
		/// <returns></returns>
		FCNPC::FCNPC_Destroy(this->m_ID);
		m_HasScriptAttached = false;
		sampgdk::logprintf("1");
		JsSetCurrentContext(JS_INVALID_REFERENCE);
		sampgdk::logprintf("2");
		m_Runtime->CollectGarbage();
		sampgdk::logprintf("3");
		//m_Runtime->Dispose();
		delete m_Runtime;
		sampgdk::logprintf("4");
	}
	catch (std::exception& e) {
		sampgdk::logprintf("%s", e.what());
	}
	return -1;
}
int CNpc::Spawn(int skinid, float x, float y, float z) {
	return FCNPC::FCNPC_Spawn(this->m_ID, skinid, x, y, z);
}
int CNpc::Respawn() {
	return FCNPC::FCNPC_Respawn(this->m_ID);
}
bool CNpc::IsSpawned() {
	return FCNPC::FCNPC_IsSpawned(this->m_ID);
}
int CNpc::Kill() {
	return FCNPC::FCNPC_Kill(this->m_ID);
}
bool CNpc::IsDead() {
	return FCNPC::FCNPC_IsDead(this->m_ID);
}
bool CNpc::IsValid() {
	return FCNPC::FCNPC_IsValid(this->m_ID);
}
bool CNpc::IsStreamedIn(int forplayerid) {
	return FCNPC::FCNPC_IsStreamedIn(this->m_ID, forplayerid);
}
bool CNpc::IsStreamedInForAnyone() {
	return FCNPC::FCNPC_IsStreamedInForAnyone(this->m_ID);
}
int CNpc::SetPosition(float x, float y, float z) {
	return FCNPC::FCNPC_SetPosition(this->m_ID, x, y, z);
}
int CNpc::GivePosition(float x, float y, float z) {
	return FCNPC::FCNPC_GivePosition(this->m_ID, x, y, z);
}
int CNpc::GetPosition(float* x, float* y, float* z) {
	return FCNPC::FCNPC_GetPosition(this->m_ID, x, y, z);
}
int CNpc::SetAngle(float angle) {
	return FCNPC::FCNPC_SetAngle(this->m_ID, angle);
}
float CNpc::GiveAngle(float angle) {
	return FCNPC::FCNPC_GiveAngle(this->m_ID, angle);
}
int CNpc::SetAngleToPos(float x, float y) {
	return FCNPC::FCNPC_SetAngleToPos(this->m_ID, x, y);
}
int CNpc::SetAngleToPlayer(int playerid) {
	return FCNPC::FCNPC_SetAngleToPlayer(this->m_ID, playerid);
}
float CNpc::GetAngle() {
	return FCNPC::FCNPC_GetAngle(this->m_ID);
}
int CNpc::SetQuaternion(float w, float x, float y, float z) {
	return FCNPC::FCNPC_SetQuaternion(this->m_ID, w, x, y, z);
}
int CNpc::GiveQuaternion(float w, float x, float y, float z) {
	return FCNPC::FCNPC_GiveQuaternion(this->m_ID, w, x, y, z);
}
int CNpc::GetQuaternion(float* w, float* x, float* y, float* z) {
	return FCNPC::FCNPC_GetQuaternion(this->m_ID, w, x, y, z);
}
int CNpc::SetVelocity(float x, float y, float z, bool update_pos) {
	return FCNPC::FCNPC_SetVelocity(this->m_ID, x, y, z, update_pos);
}
int CNpc::GiveVelocity(float x, float y, float z, bool update_pos) {
	return FCNPC::FCNPC_GiveVelocity(this->m_ID, x, y, z, update_pos);
}
int CNpc::GetVelocity(float* x, float* y, float* z) {
	return FCNPC::FCNPC_GetVelocity(this->m_ID, x, y, z);
}
int CNpc::SetSpeed(float speed) {
	return FCNPC::FCNPC_SetSpeed(this->m_ID, speed);
}
float CNpc::GetSpeed() {
	return FCNPC::FCNPC_GetSpeed(this->m_ID);
}
int CNpc::SetInterior(int interiorid) {
	return FCNPC::FCNPC_SetInterior(this->m_ID, interiorid);
}
int CNpc::GetInterior() {
	return FCNPC::FCNPC_GetInterior(this->m_ID);
}
int CNpc::SetVirtualWorld(int worldid) {
	return FCNPC::FCNPC_SetVirtualWorld(this->m_ID, worldid);
}
int CNpc::GetVirtualWorld() {
	return FCNPC::FCNPC_GetVirtualWorld(this->m_ID);
}
int CNpc::SetHealth(float health) {
	return FCNPC::FCNPC_SetHealth(this->m_ID, health);
}
float CNpc::GiveHealth(float health) {
	return FCNPC::FCNPC_GiveHealth(this->m_ID, health);
}
float CNpc::GetHealth() {
	return FCNPC::FCNPC_GetHealth(this->m_ID);
}
int CNpc::SetArmour(float armour) {
	return FCNPC::FCNPC_SetArmour(this->m_ID, armour);
}
float CNpc::GiveArmour(float armour) {
	return FCNPC::FCNPC_GiveArmour(this->m_ID, armour);
}
float CNpc::GetArmour() {
	return FCNPC::FCNPC_GetArmour(this->m_ID);
}
int CNpc::SetInvulnerable(bool invulnerable) {
	return FCNPC::FCNPC_SetInvulnerable(this->m_ID, invulnerable);
}
bool CNpc::IsInvulnerable() {
	return FCNPC::FCNPC_IsInvulnerable(this->m_ID);
}
int CNpc::SetSkin(int skinid) {
	return FCNPC::FCNPC_SetSkin(this->m_ID, skinid);
}
int CNpc::GetSkin() {
	return FCNPC::FCNPC_GetSkin(this->m_ID);
}
int CNpc::GetCustomSkin() {
	return FCNPC::FCNPC_GetCustomSkin(this->m_ID);
}
int CNpc::SetWeapon(int weaponid) {
	return FCNPC::FCNPC_SetWeapon(this->m_ID, weaponid);
}
int CNpc::GetWeapon() {
	return FCNPC::FCNPC_GetWeapon(this->m_ID);
}
int CNpc::SetAmmo(int ammo) {
	return FCNPC::FCNPC_SetAmmo(this->m_ID, ammo);
}
int CNpc::GiveAmmo(int ammo) {
	return FCNPC::FCNPC_GiveAmmo(this->m_ID, ammo);
}
int CNpc::GetAmmo() {
	return FCNPC::FCNPC_GetAmmo(this->m_ID);
}
int CNpc::SetAmmoInClip(int ammo) {
	return FCNPC::FCNPC_SetAmmoInClip(this->m_ID, ammo);
}
int CNpc::GiveAmmoInClip(int ammo) {
	return FCNPC::FCNPC_GiveAmmoInClip(this->m_ID, ammo);
}
int CNpc::GetAmmoInClip() {
	return FCNPC::FCNPC_GetAmmoInClip(this->m_ID);
}
int CNpc::SetWeaponSkillLevel(int skill, int level) {
	return FCNPC::FCNPC_SetWeaponSkillLevel(this->m_ID, skill, level);
}
int CNpc::GiveWeaponSkillLevel(int skill, int level) {
	return FCNPC::FCNPC_GiveWeaponSkillLevel(this->m_ID, skill, level);
}
int CNpc::GetWeaponSkillLevel(int skill) {
	return FCNPC::FCNPC_GetWeaponSkillLevel(this->m_ID, skill);
}
int CNpc::SetWeaponState(int weapon_state) {
	return FCNPC::FCNPC_SetWeaponState(this->m_ID, weapon_state);
}
int CNpc::GetWeaponState() {
	return FCNPC::FCNPC_GetWeaponState(this->m_ID);
}
int CNpc::SetWeaponReloadTime(int weaponid, int time) {
	return FCNPC::FCNPC_SetWeaponReloadTime(this->m_ID, weaponid, time);
}
int CNpc::GetWeaponReloadTime(int weaponid) {
	return FCNPC::FCNPC_GetWeaponReloadTime(this->m_ID, weaponid);
}
int CNpc::GetWeaponActualReloadTime(int weaponid) {
	return FCNPC::FCNPC_GetWeaponActualReloadTime(this->m_ID, weaponid);
}
int CNpc::SetWeaponShootTime(int weaponid, int time) {
	return FCNPC::FCNPC_SetWeaponShootTime(this->m_ID, weaponid, time);
}
int CNpc::GetWeaponShootTime(int weaponid) {
	return FCNPC::FCNPC_GetWeaponShootTime(this->m_ID, weaponid);
}
int CNpc::SetWeaponClipSize(int weaponid, int size) {
	return FCNPC::FCNPC_SetWeaponClipSize(this->m_ID, weaponid, size);
}
int CNpc::GetWeaponClipSize(int weaponid) {
	return FCNPC::FCNPC_GetWeaponClipSize(this->m_ID, weaponid);
}
int CNpc::GetWeaponActualClipSize(int weaponid) {
	return FCNPC::FCNPC_GetWeaponActualClipSize(this->m_ID, weaponid);
}
int CNpc::SetWeaponAccuracy(int weaponid, float accuracy) {
	return FCNPC::FCNPC_SetWeaponAccuracy(this->m_ID, weaponid, accuracy);
}
float CNpc::GetWeaponAccuracy(int weaponid) {
	return FCNPC::FCNPC_GetWeaponAccuracy(this->m_ID, weaponid);
}
int CNpc::SetWeaponInfo(int weaponid, int reload_time, int shoot_time, int clip_size, float accuracy) {
	return FCNPC::FCNPC_SetWeaponInfo(this->m_ID, weaponid, reload_time, shoot_time, clip_size, accuracy);
}
int CNpc::GetWeaponInfo(int weaponid, int* reload_time, int* shoot_time, int* clip_size, float* accuracy) {
	return FCNPC::FCNPC_GetWeaponInfo(this->m_ID, weaponid, reload_time, shoot_time, clip_size, accuracy);
}
int CNpc::SetKeys(int ud_analog, int lr_analog, int keys) {
	return FCNPC::FCNPC_SetKeys(this->m_ID, ud_analog, lr_analog, keys);
}
int CNpc::GetKeys(int* ud_analog, int* lr_analog, int* keys) {
	return FCNPC::FCNPC_GetKeys(this->m_ID, ud_analog, lr_analog, keys);
}
int CNpc::SetSpecialAction(int actionid) {
	return FCNPC::FCNPC_SetSpecialAction(this->m_ID, actionid);
}
int CNpc::GetSpecialAction() {
	return FCNPC::FCNPC_GetSpecialAction(this->m_ID);
}
int CNpc::SetAnimation(int animationid, float fDelta, int loop, int lockx, int locky, int freeze, int time) {
	return FCNPC::FCNPC_SetAnimation(this->m_ID, animationid, fDelta, loop, lockx, locky, freeze, time);
}
int CNpc::SetAnimationByName(char* name, float fDelta, int loop, int lockx, int locky, int freeze, int time) {
	return FCNPC::FCNPC_SetAnimationByName(this->m_ID, name, fDelta, loop, lockx, locky, freeze, time);
}
int CNpc::ResetAnimation() {
	return FCNPC::FCNPC_ResetAnimation(this->m_ID);
}
int CNpc::GetAnimation(int* animationid, float* fDelta, int* loop, int* lockx, int* locky, int* freeze, int* time) {
	return FCNPC::FCNPC_GetAnimation(this->m_ID, animationid, fDelta, loop, lockx, locky, freeze, time);
}
int CNpc::ApplyAnimation(char* animlib, char* animname, float fDelta, int loop, int lockx, int locky, int freeze, int time) {
	return FCNPC::FCNPC_ApplyAnimation(this->m_ID, animlib, animname, fDelta, loop, lockx, locky, freeze, time);
}
int CNpc::ClearAnimations() {
	return FCNPC::FCNPC_ClearAnimations(this->m_ID);
}
int CNpc::SetFightingStyle(int style) {
	return FCNPC::FCNPC_SetFightingStyle(this->m_ID, style);
}
int CNpc::GetFightingStyle() {
	return FCNPC::FCNPC_GetFightingStyle(this->m_ID);
}
int CNpc::UseReloading(bool use) {
	return FCNPC::FCNPC_UseReloading(this->m_ID, use);
}
bool CNpc::IsReloadingUsed() {
	return FCNPC::FCNPC_IsReloadingUsed(this->m_ID);
}
int CNpc::UseInfiniteAmmo(bool use) {
	return FCNPC::FCNPC_UseInfiniteAmmo(this->m_ID, use);
}
bool CNpc::IsInfiniteAmmoUsed() {
	return FCNPC::FCNPC_IsInfiniteAmmoUsed(this->m_ID);
}
int CNpc::GoTo(float x, float y, float z, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance, int stop_delay) {
	return FCNPC::FCNPC_GoTo(this->m_ID, x, y, z, type, speed, mode, pathfinding, radius, set_angle, min_distance, stop_delay);
}
int CNpc::GoToPlayer(int playerid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance, float dist_check, int stop_delay) {
	return FCNPC::FCNPC_GoToPlayer(this->m_ID, playerid, type, speed, mode, pathfinding, radius, set_angle, min_distance, dist_check, stop_delay);
}
int CNpc::Stop() {
	return FCNPC::FCNPC_Stop(this->m_ID);
}
bool CNpc::IsMoving() {
	return FCNPC::FCNPC_IsMoving(this->m_ID);
}
bool CNpc::IsMovingAtPlayer(int playerid) {
	return FCNPC::FCNPC_IsMovingAtPlayer(this->m_ID, playerid);
}
int CNpc::GetDestinationPoint(float* x, float* y, float* z) {
	return FCNPC::FCNPC_GetDestinationPoint(this->m_ID, x, y, z);
}
int CNpc::AimAt(float x, float y, float z, bool shoot, int shoot_delay, bool set_angle, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags) {
	return FCNPC::FCNPC_AimAt(this->m_ID, x, y, z, shoot, shoot_delay, set_angle, offset_from_x, offset_from_y, offset_from_z, between_check_mode, between_check_flags);
}
int CNpc::AimAtPlayer(int playerid, bool shoot, int shoot_delay, bool set_angle, float offset_x, float offset_y, float offset_z, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags) {
	return FCNPC::FCNPC_AimAtPlayer(this->m_ID, playerid, shoot, shoot_delay, set_angle, offset_x, offset_y, offset_z, offset_from_x, offset_from_y, offset_from_z, between_check_mode, between_check_flags);
}
int CNpc::StopAim() {
	return FCNPC::FCNPC_StopAim(this->m_ID);
}
int CNpc::MeleeAttack(int delay, bool fighting_style) {
	return FCNPC::FCNPC_MeleeAttack(this->m_ID, delay, fighting_style);
}
int CNpc::StopAttack() {
	return FCNPC::FCNPC_StopAttack(this->m_ID);
}
bool CNpc::IsAttacking() {
	return FCNPC::FCNPC_IsAttacking(this->m_ID);
}
bool CNpc::IsAiming() {
	return FCNPC::FCNPC_IsAiming(this->m_ID);
}
bool CNpc::IsAimingAtPlayer(int playerid) {
	return FCNPC::FCNPC_IsAimingAtPlayer(this->m_ID, playerid);
}
int CNpc::GetAimingPlayer() {
	return FCNPC::FCNPC_GetAimingPlayer(this->m_ID);
}
bool CNpc::IsShooting() {
	return FCNPC::FCNPC_IsShooting(this->m_ID);
}
bool CNpc::IsReloading() {
	return FCNPC::FCNPC_IsReloading(this->m_ID);
}
int CNpc::TriggerWeaponShot(int weaponid, int hittype, int hitid, float x, float y, float z, bool is_hit, float offset_from_x, float offset_from_y, float offset_from_z, int between_check_mode, int between_check_flags) {
	return FCNPC::FCNPC_TriggerWeaponShot(this->m_ID, weaponid, hittype, hitid, x, y, z, is_hit, offset_from_x, offset_from_y, offset_from_z, between_check_mode, between_check_flags);
}
int CNpc::GetClosestEntityInBetween(float x, float y, float z, float range, int between_check_mode, int between_check_flags, float offset_from_x, float offset_from_y, float offset_from_z, int* entity_id, int* entity_type, int* object_owner_id, float* point_x, float* point_y, float* point_z) {
	return FCNPC::FCNPC_GetClosestEntityInBetween(this->m_ID, x, y, z, range, between_check_mode, between_check_flags, offset_from_x, offset_from_y, offset_from_z, entity_id, entity_type, object_owner_id, point_x, point_y, point_z);
}
int CNpc::EnterVehicle(int vehicleid, int seatid, int type) {
	return FCNPC::FCNPC_EnterVehicle(this->m_ID, vehicleid, seatid, type);
}
int CNpc::ExitVehicle() {
	return FCNPC::FCNPC_ExitVehicle(this->m_ID);
}
int CNpc::PutInVehicle(int vehicleid, int seatid) {
	return FCNPC::FCNPC_PutInVehicle(this->m_ID, vehicleid, seatid);
}
int CNpc::RemoveFromVehicle() {
	return FCNPC::FCNPC_RemoveFromVehicle(this->m_ID);
}
int CNpc::GetVehicleID() {
	return FCNPC::FCNPC_GetVehicleID(this->m_ID);
}
int CNpc::GetVehicleSeat() {
	return FCNPC::FCNPC_GetVehicleSeat(this->m_ID);
}
int CNpc::UseVehicleSiren(bool use) {
	return FCNPC::FCNPC_UseVehicleSiren(this->m_ID, use);
}
bool CNpc::IsVehicleSirenUsed() {
	return FCNPC::FCNPC_IsVehicleSirenUsed(this->m_ID);
}
int CNpc::SetVehicleHealth(float health) {
	return FCNPC::FCNPC_SetVehicleHealth(this->m_ID, health);
}
float CNpc::GetVehicleHealth() {
	return FCNPC::FCNPC_GetVehicleHealth(this->m_ID);
}
int CNpc::SetVehicleHydraThrusters(int direction) {
	return FCNPC::FCNPC_SetVehicleHydraThrusters(this->m_ID, direction);
}
int CNpc::GetVehicleHydraThrusters() {
	return FCNPC::FCNPC_GetVehicleHydraThrusters(this->m_ID);
}
int CNpc::SetVehicleGearState(int gear_state) {
	return FCNPC::FCNPC_SetVehicleGearState(this->m_ID, gear_state);
}
int CNpc::GetVehicleGearState() {
	return FCNPC::FCNPC_GetVehicleGearState(this->m_ID);
}
int CNpc::SetVehicleTrainSpeed(float speed) {
	return FCNPC::FCNPC_SetVehicleTrainSpeed(this->m_ID, speed);
}
float CNpc::GetVehicleTrainSpeed() {
	return FCNPC::FCNPC_GetVehicleTrainSpeed(this->m_ID);
}
int CNpc::SetSurfingOffsets(float x, float y, float z) {
	return FCNPC::FCNPC_SetSurfingOffsets(this->m_ID, x, y, z);
}
int CNpc::GiveSurfingOffsets(float x, float y, float z) {
	return FCNPC::FCNPC_GiveSurfingOffsets(this->m_ID, x, y, z);
}
int CNpc::GetSurfingOffsets(float* x, float* y, float* z) {
	return FCNPC::FCNPC_GetSurfingOffsets(this->m_ID, x, y, z);
}
int CNpc::SetSurfingVehicle(int vehicleid) {
	return FCNPC::FCNPC_SetSurfingVehicle(this->m_ID, vehicleid);
}
int CNpc::GetSurfingVehicle() {
	return FCNPC::FCNPC_GetSurfingVehicle(this->m_ID);
}
int CNpc::SetSurfingObject(int objectid) {
	return FCNPC::FCNPC_SetSurfingObject(this->m_ID, objectid);
}
int CNpc::GetSurfingObject() {
	return FCNPC::FCNPC_GetSurfingObject(this->m_ID);
}
int CNpc::SetSurfingPlayerObject(int objectid) {
	return FCNPC::FCNPC_SetSurfingPlayerObject(this->m_ID, objectid);
}
int CNpc::GetSurfingPlayerObject() {
	return FCNPC::FCNPC_GetSurfingPlayerObject(this->m_ID);
}
int CNpc::StopSurfing() {
	return FCNPC::FCNPC_StopSurfing(this->m_ID);
}
int CNpc::StartPlayingPlayback(char* file, int recordid, bool auto_unload, float delta_x, float delta_y, float delta_z, float delta_qw, float delta_qx, float delta_qy, float delta_qz) {
	return FCNPC::FCNPC_StartPlayingPlayback(this->m_ID, file, recordid, auto_unload, delta_x, delta_y, delta_z, delta_qw, delta_qx, delta_qy, delta_qz);
}
int CNpc::StopPlayingPlayback() {
	return FCNPC::FCNPC_StopPlayingPlayback(this->m_ID);
}
int CNpc::PausePlayingPlayback() {
	return FCNPC::FCNPC_PausePlayingPlayback(this->m_ID);
}
int CNpc::ResumePlayingPlayback() {
	return FCNPC::FCNPC_ResumePlayingPlayback(this->m_ID);
}
int CNpc::SetPlayingPlaybackPath(char* path) {
	return FCNPC::FCNPC_SetPlayingPlaybackPath(this->m_ID, path);
}
int CNpc::GetPlayingPlaybackPath(char* path, int size) {
	return FCNPC::FCNPC_GetPlayingPlaybackPath(this->m_ID, path, size);
}
int CNpc::PlayNode(int nodeid, int type, float speed, int mode, float radius, bool set_angle) {
	return FCNPC::FCNPC_PlayNode(this->m_ID, nodeid, type, speed, mode, radius, set_angle);
}
int CNpc::StopPlayingNode() {
	return FCNPC::FCNPC_StopPlayingNode(this->m_ID);
}
int CNpc::PausePlayingNode() {
	return FCNPC::FCNPC_PausePlayingNode(this->m_ID);
}
int CNpc::ResumePlayingNode() {
	return FCNPC::FCNPC_ResumePlayingNode(this->m_ID);
}
bool CNpc::IsPlayingNode() {
	return FCNPC::FCNPC_IsPlayingNode(this->m_ID);
}
bool CNpc::IsPlayingNodePaused() {
	return FCNPC::FCNPC_IsPlayingNodePaused(this->m_ID);
}
int CNpc::GoByMovePath(int pathid, int pointid, int type, float speed, int mode, int pathfinding, float radius, bool set_angle, float min_distance) {
	return FCNPC::FCNPC_GoByMovePath(this->m_ID, pathid, pointid, type, speed, mode, pathfinding, radius, set_angle, min_distance);
}
int CNpc::SetMoveMode(int mode) {
	return FCNPC::FCNPC_SetMoveMode(this->m_ID, mode);
}
int CNpc::GetMoveMode() {
	return FCNPC::FCNPC_GetMoveMode(this->m_ID);
}
int CNpc::SetMinHeightPosCall(float height) {
	return FCNPC::FCNPC_SetMinHeightPosCall(this->m_ID, height);
}
float CNpc::GetMinHeightPosCall() {
	return FCNPC::FCNPC_GetMinHeightPosCall(this->m_ID);
}
int CNpc::ShowInTabListForPlayer(int forplayerid) {
	return FCNPC::FCNPC_ShowInTabListForPlayer(this->m_ID, forplayerid);
}
int CNpc::HideInTabListForPlayer(int forplayerid) {
	return FCNPC::FCNPC_HideInTabListForPlayer(this->m_ID, forplayerid);
}
bool CNpc::OnCreate()
{
	//m_Context.SetCurrentContext();
	return true;
}
bool CNpc::OnDestroy()
{
	//m_Context.SetCurrentContext();
	return true;
}
bool CNpc::OnSpawn()
{
	//m_Context.SetCurrentContext();
	return true;
}
bool CNpc::OnRespawn()
{
	//m_Context.SetCurrentContext();
	return true;
}
bool CNpc::OnDeath(int killerid, int reason)
{
	if (m_HasScriptAttached) {
		sampgdk::logprintf("calling CNpc::OnDeath(%d,%d)", killerid, reason);
		m_Context.SetCurrentContext();
		JavascriptParameterPack Pack;
		JavascriptObject KillerID;
		KillerID.CreateNumberFromInt(killerid);
		Pack.AddObjectAsParam(&KillerID);
		JavascriptObject Reason;
		Reason.CreateNumberFromDouble(reason);
		Pack.AddObjectAsParam(&Reason);
		sampgdk::logprintf("Calling CNpc::OnDeath %d, %d", killerid, reason);
		m_Code.CallFunction("OnDeath", Pack);
	}
	return true;
}
bool CNpc::OnUpdate()
{
	try {
		if (m_HasScriptAttached) {
			try {
				m_Context.SetCurrentContext();
				JavascriptParameterPack Pack;
				m_Code.CallFunction("OnUpdate", Pack);
				if ((GetTickCount() - m_LastUpdateTick) >= 1000) {
					
					JavascriptParameterPack Pack;
					m_Code.CallFunction("OnOneSecondUpdate", Pack);
					m_LastUpdateTick = GetTickCount();
				}
				/*NPCCallDefinition* call = new NPCCallDefinition;
				call->Context = &m_Context;
				call->Code = &m_Code;
				call->CodeFunctionCall = "OnUpdate";
				call->pack = Pack;
				CNPCJsQueue::AddToQueue(call);*/
			}
			catch (JavascriptException& e) {
				sampgdk::logprintf("%s", e.what());
			}
		}
	}
	catch (JavascriptException& e) {
		sampgdk::logprintf(e.what());
	}
	return true;
}
bool CNpc::OnTakeDamage(int issuerid, float amount, int weaponid, int bodypart)
{
	if (m_HasScriptAttached) {
		m_Context.SetCurrentContext();
		JavascriptParameterPack Pack;
		JavascriptObject IssuerID;
		IssuerID.CreateNumberFromInt(issuerid);
		Pack.AddObjectAsParam(&IssuerID);
		JavascriptObject Amount;
		Amount.CreateNumberFromDouble(amount);
		Pack.AddObjectAsParam(&Amount);
		JavascriptObject WeaponID;
		WeaponID.CreateNumberFromInt(weaponid);
		Pack.AddObjectAsParam(&WeaponID);
		JavascriptObject BodyPart;
		BodyPart.CreateNumberFromInt(bodypart);
		Pack.AddObjectAsParam(&BodyPart);
		sampgdk::logprintf("Calling CNpc::Ontakedamage %d, %f, %d, %d", issuerid, amount, weaponid, bodypart);
		m_Code.CallFunction("OnTakeDamage", Pack);
	}
	return true;
}

bool CNpc::OnGiveDamage(int damagedid, float amount, int weaponid, int bodypart)
{
	//m_Context.SetCurrentContext();
	return true;
}
bool CNpc::OnReachDestination()
{
	if (m_HasScriptAttached) {
		try {
			m_Context.SetCurrentContext();
			JavascriptParameterPack Pack;
			m_Code.CallFunction("OnReachDestination", Pack);
		}
		catch (JavascriptException& e) {
			sampgdk::logprintf(e.what());
		}
	}
	return true;
}
bool CNpc::OnWeaponShot(int weaponid, int hittype, int hitid, float fX, float fY, float fZ)
{
	if (m_HasScriptAttached) {
		m_Context.SetCurrentContext();
	}
	return true;
}
bool CNpc::OnWeaponStateChange(int weapon_state)
{
	if (m_HasScriptAttached) {
		m_Context.SetCurrentContext();
	}
	return true;
}
bool CNpc::OnStreamIn(int forplayerid)
{
	//m_Context.SetCurrentContext();
	return true;
}
bool CNpc::OnStreamOut(int forplayerid)
{
	//m_Context.SetCurrentContext();
	return true;
}
bool CNpc::OnVehicleEntryComplete(int vehicleid, int seatid)
{
	if (m_HasScriptAttached) {
		m_Context.SetCurrentContext();
		sampgdk::logprintf("Calling OnVehicleEntryComplete(%d,%d)", vehicleid, seatid);
		JavascriptParameterPack Pack;
		JavascriptObject VehicleID, SeatID;
		VehicleID.CreateNumberFromInt(vehicleid);
		SeatID.CreateNumberFromInt(seatid);
		Pack.AddObjectAsParam(&VehicleID);
		Pack.AddObjectAsParam(&SeatID);

		
		m_Code.CallFunction("OnVehicleEntryComplete", Pack);
	}
	return true;
}
bool CNpc::OnVehicleExitComplete(int vehicleid)
{
	if (m_HasScriptAttached) {
		m_Context.SetCurrentContext();
		sampgdk::logprintf("Calling OnVehicleExitComplete(%d)", vehicleid);
		JavascriptParameterPack Pack;
		JavascriptObject VehicleID;
		VehicleID.CreateNumberFromInt(vehicleid);
		Pack.AddObjectAsParam(&VehicleID);
		
		m_Code.CallFunction("OnVehicleExitComplete", Pack);
	}
	return true;
}
bool CNpc::OnVehicleTakeDamage(int issuerid, int vehicleid, float amount, int weaponid, float fX, float fY, float fZ)
{
	//m_Context.SetCurrentContext();
	return true;
}
bool CNpc::OnFinishPlayback()
{
	return true;
}
bool CNpc::OnFinishNode(int nodeid)
{
	return true;
}
bool CNpc::OnFinishNodePoint(int nodeid, int pointid)
{
	return true;
}
bool CNpc::OnChangeNode(int newnodeid, int oldnodeid)
{
	return true;
}
bool CNpc::OnFinishMovePath(int pathid)
{
	return true;
}
bool CNpc::OnFinishMovePathPoint(int pathid, int pointid)
{
	return true;
}
bool CNpc::OnChangeHeightPos(float newz, float oldz)
{
	return true;
}

void CNpc::AttachScript(const std::string& script_path)
{
	try {
		sampgdk::logprintf("Attemping to attach script %s", script_path.c_str());
		m_Runtime = new JavascriptRuntime();
		m_Runtime->CreateRuntime();
		m_ScriptPath = script_path;
		m_Context.CreateContext(*m_Runtime);
		m_Code.SetContext(m_Context);
		m_Code.LoadJavascriptFile(script_path);
		m_GlobalObject.SetAsGlobalObject();
		m_Code.SetGlobalObject(m_GlobalObject);
		m_SAMPJSObjects.Initialize();
		m_FCNPCJSObjects.Initialize();
		m_MATHJSObjects.Initialize();

		JavascriptObject PropertyString;
		JavascriptObject Writeable, Configurable, Value;
		Writeable.CreateBooleanFromBool(false);
		Configurable.CreateBooleanFromBool(false);
		Value.CreateNumberFromInt(this->m_ID);
		m_GlobalNPCID.CreateJSObject();
		m_GlobalNPCID.SetObjectProperty("writeable", Writeable);
		m_GlobalNPCID.SetObjectProperty("configuable", Writeable);
		m_GlobalNPCID.SetObjectProperty("value", Value);
		//m_GlobalNPCID.CreateNumberFromInt(this->m_ID);
		//m_ContextAddress.CreateNumberFromInt((int)(JavascriptContext*)&this->m_Context);
		Value.CreateNumberFromInt((int)(JavascriptContext*)&this->m_Context);
		m_ContextAddress.CreateJSObject();
		m_ContextAddress.SetObjectProperty("writeable", Writeable);
		m_ContextAddress.SetObjectProperty("configuable", Writeable);
		m_ContextAddress.SetObjectProperty("value", Value);

		//m_GlobalObject.SetObjectProperty("RefId", m_GlobalNPCID);
		//m_GlobalObject.SetObjectProperty("Context", m_ContextAddress);

		bool result = m_GlobalObject.DefineProperty("RefId", m_GlobalNPCID);
		result = m_GlobalObject.DefineProperty("Context", m_ContextAddress);

		JavascriptObject m_SAMPObject = m_SAMPJSObjects.GetJSObject(),
			m_NPCObject = m_FCNPCJSObjects.GetJSObject(),
			m_MathObject = m_MATHJSObjects.GetJSObject();


		m_GlobalObject.SetObjectProperty("SAMP", m_SAMPObject);
		m_GlobalObject.SetObjectProperty("NPC", m_NPCObject);
		m_GlobalObject.SetObjectProperty("MATH", m_MathObject);
		m_Code.RunCode();
		sampgdk::logprintf("calling onscriptinit");
		JavascriptParameterPack pack;
		m_Code.CallFunction("OnScriptInit", pack);

		m_HasScriptAttached = true;
	}
	catch (JavascriptException& e) {
		sampgdk::logprintf("%s", e.what());
	}

}
void CNpc::ReloadScript() {
	if (m_ScriptPath != "") {
		//m_Code.SetContext(JS_INVALID_REFERENCE);
		//m_Code.GetContext().GetAttachedRuntime()->CollectGarbage();
		m_HasScriptAttached = false;
		sampgdk::logprintf("Reloadscript called %x", this);
		SetTimer(3500, false, CNpc::ScriptDetachTimer, (void*)this);
		

	}
}
void CNpc::InitializeJSCode()
{

}
JsValueRef CALLBACK CNpc::NPCPrint(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	sampgdk::logprintf("Calling NPCPrint");
	std::string ResultString = "";
	for (unsigned int index = 1; index < argumentCount; index++)
	{
		if (index > 1)
		{
			ResultString += " ";
		}
		JavascriptObject Argument;
		Argument.SetValue(arguments[index]);
		ResultString += Argument.GetConvertedString();
	}
	sampgdk::logprintf("%s", ResultString.c_str());
	return JS_INVALID_REFERENCE;
}

void CNpc::RecreateJSEnv() {
	JsSetCurrentContext(JS_INVALID_REFERENCE);
	m_LastUpdateTick = GetTickCount();
	//m_Runtime->CollectGarbage();
	m_Runtime->Dispose();
	//delete m_Runtime;
	//JsSetCurrentContext(JS_INVALID_REFERENCE);
	//m_Code.GetContext().GetAttachedRuntime()->CollectGarbage();
	//m_Code.SetContext();
	//m_Runtime->CollectGarbage();
	this->AttachScript(this->m_ScriptPath);
}

void CNpc::ScriptDetachTimer(int timerid, void* params)
{
	CNpc* npc = (CNpc*)params;
	sampgdk::logprintf("NPC Address: %x", npc);

	npc->RecreateJSEnv();
}
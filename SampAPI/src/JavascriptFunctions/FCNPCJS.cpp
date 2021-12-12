#include "FCNPCJS.h"


FCNPCJS::FCNPCJS()
{

}
FCNPCJS::~FCNPCJS()
{

}
void FCNPCJS::Initialize()
{
	m_JSObject.CreateJSObject();
	m_JSObject.AttachFunctionAsProperty("SetPosition", FCNPCJS::NPC_SetPosition, nullptr);
	m_JSObject.AttachFunctionAsProperty("Spawn", FCNPCJS::NPC_Spawn, nullptr);
	m_JSObject.AttachFunctionAsProperty("GetSkin", FCNPCJS::NPC_GetSkin, nullptr);
	m_JSObject.AttachFunctionAsProperty("Respawn", FCNPCJS::NPC_Respawn, nullptr);
	m_JSObject.AttachFunctionAsProperty("Goto", FCNPCJS::NPC_Goto, nullptr);
	m_JSObject.AttachFunctionAsProperty("GetPosition", FCNPCJS::NPC_GetPosition, nullptr);
	m_JSObject.AttachFunctionAsProperty("Print", FCNPCJS::NPC_Print, nullptr);
	m_JSObject.AttachFunctionAsProperty("Log", FCNPCJS::NPC_Log, nullptr);
	m_JSObject.AttachFunctionAsProperty("SetWeapon", FCNPCJS::NPC_SetWeapon, nullptr);
	m_JSObject.AttachFunctionAsProperty("SetColor", FCNPCJS::NPC_SetColor, nullptr);
	m_JSObject.AttachFunctionAsProperty("EnterVehicle", FCNPCJS::NPC_EnterVehicle, nullptr);
	m_JSObject.AttachFunctionAsProperty("ExitVehicle", FCNPCJS::NPC_ExitVehicle, nullptr);
	m_JSObject.AttachFunctionAsProperty("GetName", FCNPCJS::NPC_GetName, nullptr);
	m_JSObject.AttachFunctionAsProperty("AimAt", FCNPCJS::NPC_AimAt, nullptr);
	m_JSObject.AttachFunctionAsProperty("AimAtPlayer", FCNPCJS::NPC_AimAtPlayer, nullptr);
	m_JSObject.AttachFunctionAsProperty("StopAim", FCNPCJS::NPC_StopAim, nullptr);
	m_JSObject.AttachFunctionAsProperty("SetAmmo", FCNPCJS::NPC_SetAmmo, nullptr);
	m_JSObject.AttachFunctionAsProperty("Stop", FCNPCJS::NPC_Stop, nullptr);
	m_JSObject.AttachFunctionAsProperty("MeleeAttack", FCNPCJS::NPC_MeleeAttack, nullptr);
	m_JSObject.AttachFunctionAsProperty("StopAttack", FCNPCJS::NPC_StopAttack, nullptr);
	
}
JavascriptObject FCNPCJS::GetJSObject()
{
	return m_JSObject;
}
int FCNPCJS::GetCurrentNPCID()
{
	JavascriptObject GlobalObject;
	GlobalObject.SetAsGlobalObject();
	JavascriptObject JsRefId = GlobalObject.GetObjectProperty("RefId");
	int npcid = JsRefId.GetInteger();
	return npcid;
}
JsValueRef CALLBACK FCNPCJS::NPC_SetPosition(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount > 1) {
		JavascriptObject GlobalObject;
		GlobalObject.SetAsGlobalObject();
		JavascriptObject JsRefId = GlobalObject.GetObjectProperty("RefId");
		int npcid = JsRefId.GetInteger();
		float x, y, z;
		JavascriptObject Argument;
		Argument.SetValue(arguments[1]);
		x = Argument.GetFloat();
		Argument.SetValue(arguments[2]);
		y = Argument.GetFloat();
		Argument.SetValue(arguments[3]);
		z = Argument.GetFloat();
		FCNPC::FCNPC_SetPosition(npcid, x, y, z);
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef CALLBACK FCNPCJS::NPC_Spawn(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount > 1) {
		
		JavascriptObject GlobalObject;
		GlobalObject.SetAsGlobalObject();
		JavascriptObject JsRefId = GlobalObject.GetObjectProperty("RefId");
		int npcid = JsRefId.GetInteger();
		sampgdk::logprintf("Respawning NPC %d", npcid);
		int skinid;
		float x, y, z;
		JavascriptObject Argument;
		Argument.SetValue(arguments[1]);
		skinid = Argument.GetInteger();
		Argument.SetValue(arguments[2]);
		x = Argument.GetFloat();
		Argument.SetValue(arguments[3]);
		y = Argument.GetFloat();
		Argument.SetValue(arguments[4]);
		z = Argument.GetFloat();
		sampgdk::logprintf("%d, %d, %f, %f, %f", npcid, skinid, x, y, z);
		FCNPC::FCNPC_Spawn(npcid, skinid, x, y, z);
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef CALLBACK FCNPCJS::NPC_Respawn(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	JavascriptObject GlobalObject;
	GlobalObject.SetAsGlobalObject();
	JavascriptObject JsRefId = GlobalObject.GetObjectProperty("RefId");
	int npcid = JsRefId.GetInteger();
	sampgdk::logprintf("Current NPC: %d", npcid);
	FCNPC::FCNPC_Respawn(npcid);
	return JS_INVALID_REFERENCE;
}
JsValueRef CALLBACK FCNPCJS::NPC_GetSkin(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	JavascriptObject GlobalObject;
	GlobalObject.SetAsGlobalObject();
	JavascriptObject JsRefId = GlobalObject.GetObjectProperty("RefId");
	int npcid = JsRefId.GetInteger();
	JavascriptObject SkinID;
	SkinID.CreateNumberFromInt(FCNPC::FCNPC_GetSkin(npcid));
	return SkinID.GetValue();
}

JsValueRef CALLBACK FCNPCJS::NPC_Goto(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount >= 4) {
		JavascriptObject GlobalObject, Argument;
		GlobalObject.SetAsGlobalObject();
		JavascriptObject JsRefId = GlobalObject.GetObjectProperty("RefId");
		int npcid = JsRefId.GetInteger();
		float x, y, z;
		Argument.SetValue(arguments[1]);
		x = Argument.GetFloat();
		Argument.SetValue(arguments[2]);
		y = Argument.GetFloat();
		Argument.SetValue(arguments[3]);
		z = Argument.GetFloat();
		int type = FCNPC_MOVE_TYPE_AUTO;
		if (argumentCount == 5) {
			Argument.SetValue(arguments[4]);
			type = Argument.GetInteger();
		}
		FCNPC::FCNPC_GoTo(npcid, x, y, z, type);
	}

	return JS_INVALID_REFERENCE;
}
JsValueRef CALLBACK FCNPCJS::NPC_GetPosition(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 1) {
		int pid;
		float x, y, z;
		JavascriptObject Argument;
		JavascriptObject GlobalObject;
		GlobalObject.SetAsGlobalObject();
		JavascriptObject JsRefId = GlobalObject.GetObjectProperty("RefId");
		JavascriptObject X, Y, Z;
		Argument.SetValue(arguments[1]);
		pid = JsRefId.GetInteger();
		FCNPC::FCNPC_GetPosition(pid, &x, &y, &z);
		X.CreateNumberFromFloat(x);
		Y.CreateNumberFromFloat(y);
		Z.CreateNumberFromFloat(z);
		JavascriptObject Array;
		Array.CreateArray(3);
		Array.SetArrayIndex(0, X);
		Array.SetArrayIndex(1, Y);
		Array.SetArrayIndex(2, Z);
		return Array.GetValue();
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef CALLBACK FCNPCJS::NPC_Print(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{

	if (argumentCount == 2) {

		int pid;
		JavascriptObject Argument;
		JavascriptObject GlobalObject;
		GlobalObject.SetAsGlobalObject();
		JavascriptObject JsRefId = GlobalObject.GetObjectProperty("RefId");
		Argument.SetValue(arguments[1]);
		pid = JsRefId.GetInteger();
		std::string str = Argument.GetConvertedString();
		if (str.length() > 0) {
			sampgdk::logprintf("[NPC %d]: %s",pid, str.c_str());
		}
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef CALLBACK FCNPCJS::NPC_Log(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 2)
	{
		JavascriptObject Argument;
		JavascriptObject GlobalObject;
		GlobalObject.SetAsGlobalObject();
		JavascriptObject JsRefId = GlobalObject.GetObjectProperty("RefId");
		int npcid = JsRefId.GetInteger();

		Argument.SetValue(arguments[1]);
		std::string message = "";
		message = Argument.GetConvertedString();

		auto npc_logger = spdlog::get("CNpc");
		spdlog::set_default_logger(npc_logger);
		message = "[NPCID " + std::to_string(npcid) + "]: " + message;
		spdlog::info(message);
		sampgdk::logprintf("Logging into CNpc Logger: %s", message.c_str());
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef FCNPCJS::NPC_GivePosition(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetAngle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GiveAngle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetAngleToPos(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetAngleToPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetAngle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetQuaternion(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GiveQuaternion(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetQuaternion(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetVelocity(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GiveVelocity(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetVelocity(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetSpeed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetSpeed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetInterior(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetInterior(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetVirtualWorld(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetVirtualWorld(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetHealth(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GiveHealth(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetHealth(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetArmour(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GiveArmour(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetArmour(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetInvulnerable(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_IsInvulnerable(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetSkin(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetCustomSkin(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetWeapon(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 2) {
		JavascriptObject Argument;
		Argument.SetValue(arguments[1]);
		int npcid = FCNPCJS::GetCurrentNPCID();
		int weaponid = Argument.GetInteger();
		FCNPC::FCNPC_SetWeapon(npcid, weaponid);
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef FCNPCJS::NPC_GetWeapon(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetAmmo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 2) {
		JavascriptObject Argument;
		Argument.SetValue(arguments[1]);
		int npcid = FCNPCJS::GetCurrentNPCID();
		int ammo = Argument.GetInteger();
		FCNPC::FCNPC_SetAmmo(npcid, ammo);
	}
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GiveAmmo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetAmmo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetAmmoInClip(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GiveAmmoInClip(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetAmmoInClip(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetWeaponSkillLevel(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GiveWeaponSkillLevel(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetWeaponSkillLevel(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetWeaponState(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetWeaponState(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetWeaponReloadTime(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetWeaponReloadTime(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetWeaponActualReloadTime(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetWeaponShootTime(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetWeaponShootTime(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetWeaponClipSize(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetWeaponClipSize(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetWeaponActualClipSize(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetWeaponAccuracy(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetWeaponAccuracy(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetWeaponInfo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetWeaponInfo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetKeys(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetKeys(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetSpecialAction(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetSpecialAction(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetAnimation(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetAnimationByName(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_ResetAnimation(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetAnimation(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_ApplyAnimation(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_ClearAnimations(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetFightingStyle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetFightingStyle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_UseReloading(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_IsReloadingUsed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_UseInfiniteAmmo(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_IsInfiniteAmmoUsed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GoToPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_Stop(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 1) {
		int npcid = FCNPCJS::GetCurrentNPCID();
		FCNPC::FCNPC_Stop(npcid);
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef FCNPCJS::NPC_IsMoving(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_IsMovingAtPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetDestinationPoint(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_AimAt(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount >= 4) { 
		JavascriptObject Argument;
		int npcid = FCNPCJS::GetCurrentNPCID();
		Argument.SetValue(arguments[1]);
		float x = Argument.GetFloat();
		Argument.SetValue(arguments[2]);
		float y = Argument.GetFloat();
		Argument.SetValue(arguments[3]);
		float z = Argument.GetFloat();
		bool shoot = false;
		int shootdelay = -1;
		bool setangle = false;
		float offset_x =0.0f, offset_y = 0.0f, offset_z = 0.0f;
		int between_mode_check = FCNPC_ENTITY_MODE_AUTO;
		int between_check_flags = FCNPC_ENTITY_CHECK_ALL;
		if (argumentCount >= 5) {
			Argument.SetValue(arguments[4]);
			shoot = Argument.GetBool();
		}
		if (argumentCount >= 6) {
			Argument.SetValue(arguments[5]);
			shootdelay = Argument.GetInteger();
		}
		if (argumentCount >= 7) {
			Argument.SetValue(arguments[6]);
			setangle = Argument.GetBool();
		}
		if (argumentCount >= 8) {
			Argument.SetValue(arguments[7]);
			offset_x = Argument.GetFloat();
		}
		if (argumentCount >= 9) {
			Argument.SetValue(arguments[8]);
			offset_y = Argument.GetFloat();
		}
		if (argumentCount >= 10) {
			Argument.SetValue(arguments[9]);
			offset_z = Argument.GetFloat();
		}
		if (argumentCount >= 11) {
			Argument.SetValue(arguments[10]);
			between_mode_check = Argument.GetInteger();
		}
		if (argumentCount >= 12) {
			Argument.SetValue(arguments[11]);
			between_check_flags = Argument.GetInteger();
		}
		FCNPC::FCNPC_AimAt(npcid, x, y, z, true, shootdelay, setangle, offset_x, offset_y, offset_z, between_mode_check, between_check_flags);
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef FCNPCJS::NPC_AimAtPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount >= 2) {
		JavascriptObject Argument;
		int npcid = FCNPCJS::GetCurrentNPCID();
		Argument.SetValue(arguments[1]);
		int playerid = Argument.GetInteger();
		bool shoot = false;
		int shootdelay = -1;
		bool setangle = false;
		float offset_x = 0.0f, offset_y = 0.0f, offset_z = 0.0f;
		float offset_from_x = 0.0f, offset_from_y = 0.0f, offset_from_z = 0.0f;
		int between_mode_check = FCNPC_ENTITY_MODE_AUTO;
		int between_check_flags = FCNPC_ENTITY_CHECK_ALL;
		if (argumentCount >= 3) {
			Argument.SetValue(arguments[2]);
			shoot = Argument.GetBool();
		}
		if (argumentCount >= 4) {
			Argument.SetValue(arguments[3]);
			shootdelay = Argument.GetInteger();
		}
		if (argumentCount >= 5) {
			Argument.SetValue(arguments[4]);
			setangle = Argument.GetBool();
		}
		if (argumentCount >= 6) {
			Argument.SetValue(arguments[5]);
			offset_x = Argument.GetFloat();
		}
		if (argumentCount >= 7) {
			Argument.SetValue(arguments[6]);
			offset_y = Argument.GetFloat();
		}
		if (argumentCount >= 8) {
			Argument.SetValue(arguments[7]);
			offset_z = Argument.GetFloat();
		}
		if (argumentCount >= 9) {
			Argument.SetValue(arguments[9]);
			offset_from_x = Argument.GetFloat();
		}
		if (argumentCount >= 10) {
			Argument.SetValue(arguments[9]);
			offset_from_y = Argument.GetFloat();
		}
		if (argumentCount >= 11) {
			Argument.SetValue(arguments[10]);
			offset_from_z = Argument.GetFloat();
		}
		if (argumentCount >= 12) {
			Argument.SetValue(arguments[11]);
			between_mode_check = Argument.GetInteger();
		}
		if (argumentCount >= 13) {
			Argument.SetValue(arguments[12]);
			between_check_flags = Argument.GetInteger();
		}
		FCNPC::FCNPC_AimAtPlayer(npcid, playerid, true, shootdelay, setangle,  offset_x, offset_y, offset_z, offset_from_x, offset_from_y, offset_from_z, between_mode_check, between_check_flags);
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef FCNPCJS::NPC_StopAim(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 1) {
		int npcid = FCNPCJS::GetCurrentNPCID();
		FCNPC::FCNPC_StopAim(npcid);
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef FCNPCJS::NPC_MeleeAttack(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 3) {
		JavascriptObject Argument;

		int npcid = FCNPCJS::GetCurrentNPCID();
		int delay;
		bool fighting_style;
		Argument.SetValue(arguments[1]);
		delay = Argument.GetInteger();
		Argument.SetValue(arguments[2]);
		fighting_style = Argument.GetBool();
		FCNPC::FCNPC_MeleeAttack(npcid, delay, fighting_style);
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef FCNPCJS::NPC_StopAttack(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 1) {
		int npcid = FCNPCJS::GetCurrentNPCID();
		FCNPC::FCNPC_StopAttack(npcid);
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef FCNPCJS::NPC_IsAttacking(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_IsAiming(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_IsAimingAtPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetAimingPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_IsShooting(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_IsReloading(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_TriggerWeaponShot(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetClosestEntityInBetween(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_EnterVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 3 || argumentCount == 4) {
		JavascriptObject Args;
		int npcid = FCNPCJS::GetCurrentNPCID();
		Args.SetValue(arguments[1]);
		int vehicleid = Args.GetInteger();
		Args.SetValue(arguments[2]);
		int seatid = Args.GetInteger();
		int type = FCNPC_MOVE_TYPE_WALK;
		if (argumentCount == 4) {
			Args.SetValue(arguments[3]);
			type = Args.GetInteger();
		}
		FCNPC::FCNPC_EnterVehicle(npcid, vehicleid, seatid, type);
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef FCNPCJS::NPC_ExitVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 1) {
		JavascriptObject Args;
		int npcid = FCNPCJS::GetCurrentNPCID();
		FCNPC::FCNPC_ExitVehicle(npcid);
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef FCNPCJS::NPC_PutInVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_RemoveFromVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetVehicleID(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetVehicleSeat(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_UseVehicleSiren(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_IsVehicleSirenUsed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetVehicleHealth(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetVehicleHealth(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetVehicleHydraThrusters(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetVehicleHydraThrusters(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetVehicleGearState(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetVehicleGearState(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetVehicleTrainSpeed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetVehicleTrainSpeed(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetSurfingOffsets(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GiveSurfingOffsets(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetSurfingOffsets(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetSurfingVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetSurfingVehicle(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetSurfingObject(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetSurfingObject(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetSurfingPlayerObject(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetSurfingPlayerObject(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_StopSurfing(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_StartPlayingPlayback(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_StopPlayingPlayback(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_PausePlayingPlayback(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_ResumePlayingPlayback(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetPlayingPlaybackPath(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetPlayingPlaybackPath(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_PlayNode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_StopPlayingNode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_PausePlayingNode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_ResumePlayingNode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_IsPlayingNode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_IsPlayingNodePaused(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GoByMovePath(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetMoveMode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetMoveMode(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_SetMinHeightPosCall(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_GetMinHeightPosCall(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_ShowInTabListForPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}

JsValueRef FCNPCJS::NPC_HideInTabListForPlayer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	return JsValueRef();
}
JsValueRef FCNPCJS::NPC_SetColor(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 2) {
		JavascriptObject Argument;
		Argument.SetValue(arguments[1]);
		int npcid = FCNPCJS::GetCurrentNPCID();
		int color = Argument.GetInteger();
		SetPlayerColor(npcid, color);
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef FCNPCJS::NPC_GetName(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 1) {
		JavascriptObject Result;
		char name[24];
		int npcid = FCNPCJS::GetCurrentNPCID();
		GetPlayerName(npcid, name, MAX_PLAYER_NAME);
		Result.CreateString(std::string(name));
		return Result.GetValue();
	}
	return JS_INVALID_REFERENCE;
}
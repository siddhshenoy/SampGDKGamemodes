#include "SAMPJS.h"

//JavascriptObject SAMPJS::m_JSObject;

SAMPJS::SAMPJS()
{

}
SAMPJS::~SAMPJS()
{

}
void SAMPJS::Initialize()
{

	m_JSObject.CreateJSObject();
	m_JSObject.AttachFunctionAsProperty("Print", SAMPJS::JSPrint, nullptr);
	m_JSObject.AttachFunctionAsProperty("SendClientMessage", SAMPJS::JSSendClientMessage, nullptr);
	m_JSObject.AttachFunctionAsProperty("SendClientMessageToAll", SAMPJS::JSSendClientMessageToAll, nullptr);
	m_JSObject.AttachFunctionAsProperty("GetTickCount", SAMPJS::JSGetTickCount, nullptr);
	m_JSObject.AttachFunctionAsProperty("SetTimer", SAMPJS::JSSetTimer, nullptr);
	m_JSObject.AttachFunctionAsProperty("GetPosition", SAMPJS::JSGetPosition, nullptr);
	m_JSObject.AttachFunctionAsProperty("IsPlayerConnected", SAMPJS::JSIsPlayerConnected, nullptr);
	m_JSObject.AttachFunctionAsProperty("IsPlayerNPC", SAMPJS::JSIsPlayerNpc, nullptr);
	m_JSObject.AttachFunctionAsProperty("GetPlayerWantedLevel", SAMPJS::JsGetPlayerWantedLevel, nullptr);
	m_JSObject.AttachFunctionAsProperty("SetPlayerWantedLevel", SAMPJS::JsSetPlayerWantedLevel, nullptr);
	m_JSObject.AttachFunctionAsProperty("GetPlayerState", SAMPJS::JsGetPlayerState, nullptr);
	m_JSObject.AttachFunctionAsProperty("GetPlayerVehicleID", SAMPJS::JsGetPlayerVehicleID, nullptr);
}
JavascriptObject SAMPJS::GetJSObject()
{
	return m_JSObject;
}
JsValueRef CALLBACK SAMPJS::JsSetPlayerWantedLevel(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if(argumentCount == 3) {
		JavascriptObject Argument;
		Argument.SetValue(arguments[1]);
		int playerid = Argument.GetInteger();
		Argument.SetValue(arguments[2]);
		int wanted = Argument.GetInteger();
		sampgdk::logprintf("Called SetPlayerWantedLevel(%d, %d)", playerid, wanted);
		SetPlayerWantedLevel(playerid, wanted);
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef CALLBACK SAMPJS::JSPrint(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
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
JsValueRef CALLBACK SAMPJS::JSSendClientMessage(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if(argumentCount > 1) {
		int pID;
		int pTextColor;
		std::string pMessage;
		JavascriptObject Argument;

		Argument.SetValue(arguments[1]);
		pID = Argument.GetInteger();
		Argument.SetValue(arguments[2]);
		pTextColor = Argument.GetInteger();
		Argument.SetValue(arguments[3]);
		pMessage = Argument.GetConvertedString();

		SendClientMessage(pID, pTextColor, pMessage.c_str());
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef CALLBACK SAMPJS::JSSendClientMessageToAll(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount > 1) {
		int pTextColor;
		std::string pMessage;
		JavascriptObject Argument;
		Argument.SetValue(arguments[1]);
		pTextColor = Argument.GetInteger();
		Argument.SetValue(arguments[2]);
		pMessage = Argument.GetConvertedString();

		SendClientMessageToAll(pTextColor, pMessage.c_str());
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef CALLBACK SAMPJS::JSGetTickCount(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	JavascriptObject Result;
	Result.CreateJSObject();
	Result.CreateNumberFromInt(GetTickCount());
	return Result.GetValue();
}
JsValueRef CALLBACK SAMPJS::JSGetPlayerPoolSize(JsValueRef callee, bool isConstructCall, JsValueRef * arguments, unsigned short argumentCount, void* callbackState)
{
	JavascriptObject Result;
	Result.CreateJSObject();
	Result.CreateNumberFromInt(GetPlayerPoolSize());
	return Result.GetValue();
}
JsValueRef CALLBACK SAMPJS::JSSetTimer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 4) {
	
		int Interval;
		bool Repeat;
		JsValueRef CallbackFunction;
		JavascriptObject Argument;
		Argument.SetValue(arguments[1]);
		Interval = Argument.GetInteger();
		Argument.SetValue(arguments[2]);
		Repeat = Argument.GetBool();
		Argument.SetValue(arguments[3]);
		CallbackFunction = Argument.GetValue();
		JavascriptObject GlobalObject;
		GlobalObject.SetAsGlobalObject();
		TimerParameterPack* pPack = new TimerParameterPack;
		pPack->CallableFunction = CallbackFunction;
		JavascriptContext* context = (JavascriptContext*)GlobalObject.GetObjectProperty("Context").GetInteger();
		pPack->Context = context;
		int timer = SetTimer(Interval, Repeat, SAMPJS::GenericJSTimer, (void*)pPack);
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef CALLBACK SAMPJS::JSGetPosition(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 2) {
		
		int pid;
		float x, y, z;
		JavascriptObject Argument;
		JavascriptObject X, Y, Z;
		Argument.SetValue(arguments[1]);
		pid = Argument.GetInteger();
		GetPlayerPos(pid, &x, &y, &z);
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
JsValueRef CALLBACK SAMPJS::JsGetPlayerWantedLevel(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 2) {
		JavascriptObject Result;
		JavascriptObject Argument;
		Argument.SetValue(arguments[1]);
		int playerid = Argument.GetInteger();
		int wantedlevel = GetPlayerWantedLevel(playerid);
		Result.CreateNumberFromInt(wantedlevel);
		return Result.GetValue();
	}
	return JS_INVALID_REFERENCE;
}
void SAMPJS::GenericJSTimer(int timerid, void* params)
{

	TimerParameterPack* pPack = (TimerParameterPack*)params;
	JavascriptContext* context = pPack->Context;
	context->SetCurrentContext();
	JavascriptObject GlobalObject;
	GlobalObject.SetAsGlobalObject();
	JavascriptObject Result;
	JsValueRef refResult;
	int argSize;
	JavascriptParameterPack pack;
	JsValueRef* args = pack.GetParamListAsArray(&argSize);
	JsErrorCode error = JsCallFunction(pPack->CallableFunction, args, argSize, &refResult);
	if (error != JsNoError) {
		sampgdk::logprintf("Exception received!");
	}
	Result.SetValue(refResult);
}


JsValueRef CALLBACK SAMPJS::JSIsPlayerConnected(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 2) {
		JavascriptObject Argument, Result;
		Argument.SetValue(arguments[1]);
		int pid = Argument.GetInteger();
		//sampgdk::logprintf("Called IsPlayerConnected(%d)", pid);
		Result.CreateBooleanFromBool(IsPlayerConnected(pid));
		return Result.GetValue();
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef CALLBACK SAMPJS::JSIsPlayerNpc(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 2) {
		JavascriptObject Argument, Result;
		Argument.SetValue(arguments[1]);
		int pid =  Argument.GetInteger();
		//sampgdk::logprintf("Called JSIsPlayerNpc(%d)", pid);
		Result.CreateBooleanFromBool(IsPlayerNPC(pid));
		return Result.GetValue();
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef SAMPJS::JsGetPlayerState(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState) {
	if (argumentCount == 2) {
		JavascriptObject Args;
		JavascriptObject Result;
		Args.SetValue(arguments[1]);
		int playerid = Args.GetInteger();
		if (IsPlayerConnected(playerid)) {
			int state = GetPlayerState(playerid);
			Result.CreateNumberFromInt(state);
		}
		else {
			Result.CreateNumberFromInt(-1);
		}
		return Result.GetValue();
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef SAMPJS::JsGetPlayerVehicleID(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState) {
	if (argumentCount == 2) {
		JavascriptObject Args;
		JavascriptObject Result;
		Args.SetValue(arguments[1]);
		int playerid = Args.GetInteger();
		if (IsPlayerConnected(playerid)) {
			int vehicleid = GetPlayerVehicleID(playerid);
			Result.CreateNumberFromInt(vehicleid);
		}
		else {
			Result.CreateNumberFromInt(-1);
		}
		return Result.GetValue();
	}
	return JS_INVALID_REFERENCE;
}
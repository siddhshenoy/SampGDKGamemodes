#pragma once

#include <sampgdk.h>
#include <ChakraCore/ChakraCore.h>
#include <JavascriptObject.h>
#include <JavascriptParameterPack.h>
#include "JSTimerParameterPack.h"

using namespace ChakraCore;

class SAMPJS
{
public:
	JavascriptObject m_JSObject;
public:
	SAMPJS();
	void Initialize();
	JavascriptObject GetJSObject();
	~SAMPJS();
public:
	static JsValueRef CALLBACK JSPrint(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSSendClientMessage(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSSendClientMessageToAll(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSGetTickCount(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSGetPlayerPoolSize(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSSetTimer(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSGetPosition(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSIsPlayerConnected(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSIsPlayerNpc(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JsGetPlayerWantedLevel(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JsSetPlayerWantedLevel(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JsGetPlayerState(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JsGetPlayerVehicleID(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
public:
	static void SAMPGDK_CALL GenericJSTimer(int timerid, void* params);
};


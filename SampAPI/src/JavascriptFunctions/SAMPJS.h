#pragma once

#include <sampgdk.h>
#include <ChakraCore/ChakraCore.h>
#include <JavascriptObject.h>

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

};


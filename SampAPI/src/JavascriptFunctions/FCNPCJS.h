#pragma once

#include <ChakraCore/ChakraCore.h>
#include <JavascriptObject.h>
#include <ThirdParty/FCNPC.h>

using namespace ChakraCore;

class FCNPCJS
{
public:
	JavascriptObject m_JSObject;
public:
	FCNPCJS();
	void Initialize();
	JavascriptObject GetJSObject();
	~FCNPCJS();
public:
	static JsValueRef CALLBACK NPC_SetPosition(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
};


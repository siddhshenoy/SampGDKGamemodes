#pragma once

#include <JavascriptObject.h>

using namespace ChakraCore;

class MATHJS
{
public:
	JavascriptObject m_JSObject;
public:
	MATHJS();
	void Initialize();
	JavascriptObject GetJSObject();
	~MATHJS();
public:
	static JsValueRef CALLBACK JSRandom(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSAbs(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSFloor(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSCeil(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
	static JsValueRef CALLBACK JSSqrt(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState);
};


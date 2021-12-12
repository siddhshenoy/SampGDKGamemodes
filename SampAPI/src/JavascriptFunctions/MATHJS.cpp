#include "MATHJS.h"

#include <iostream>

MATHJS::MATHJS()
{
	
}

void MATHJS::Initialize()
{
	m_JSObject.CreateJSObject();
	m_JSObject.AttachFunctionAsProperty("Random", MATHJS::JSRandom, nullptr);
	m_JSObject.AttachFunctionAsProperty("Abs", MATHJS::JSAbs, nullptr);
	m_JSObject.AttachFunctionAsProperty("Floor", MATHJS::JSFloor, nullptr);
	m_JSObject.AttachFunctionAsProperty("Ceil", MATHJS::JSCeil, nullptr);
	m_JSObject.AttachFunctionAsProperty("Sqrt", MATHJS::JSSqrt, nullptr);
}

JavascriptObject MATHJS::GetJSObject()
{
	return m_JSObject;
}

MATHJS::~MATHJS()
{
}
JsValueRef CALLBACK MATHJS::JSSqrt(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount == 2) {
		JavascriptObject Argument, Result;
		Argument.SetValue(arguments[1]);
		float number = Argument.GetFloat();
		Result.CreateNumberFromFloat(sqrtf(number));
		return Result.GetValue();
	}
	return JS_INVALID_REFERENCE;
}
JsValueRef MATHJS::JSRandom(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	JavascriptObject Result;
	JavascriptObject Argument;
	
	if (argumentCount == 1) {
		int random = rand() * rand();
		Result.CreateNumberFromInt(random);
		return Result.GetValue();
	}
	else if(argumentCount == 2) { // Only Max defined
		int random = rand() * rand();
		Argument.SetValue(arguments[1]);
		int Max = Argument.GetInteger();
		Result.CreateNumberFromInt(((random % (Max + 1))));
		return Result.GetValue();
	}
	else if (argumentCount == 3) { // Min and Max both are defined
		int random = rand() * rand();
		Argument.SetValue(arguments[1]);
		int Min = Argument.GetInteger();
		Argument.SetValue(arguments[2]);
		int Max = Argument.GetInteger();
		Result.CreateNumberFromInt( ( Min + (random % (Max + 1)) ));
		return Result.GetValue();
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef MATHJS::JSAbs(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	JavascriptObject Argument, Result;
	if (argumentCount == 2) {
		Argument.SetValue(arguments[1]);
		float Number = Argument.GetFloat();
		Result.CreateNumberFromInt(abs(Number));
		return Result.GetValue();
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef MATHJS::JSFloor(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	JavascriptObject Argument, Result;
	if (argumentCount == 2) {
		Argument.SetValue(arguments[1]);
		float Number = Argument.GetFloat();
		Result.CreateNumberFromInt(floor(Number));
		return Result.GetValue();
	}
	return JS_INVALID_REFERENCE;
}

JsValueRef MATHJS::JSCeil(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	JavascriptObject Argument, Result;
	if (argumentCount == 2) {
		Argument.SetValue(arguments[1]);
		float Number = Argument.GetFloat();
		Result.CreateNumberFromInt(ceil(Number));
		return Result.GetValue();
	}
	return JS_INVALID_REFERENCE;
}

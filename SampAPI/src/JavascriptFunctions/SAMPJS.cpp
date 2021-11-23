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
}
JavascriptObject SAMPJS::GetJSObject()
{
	return m_JSObject;
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
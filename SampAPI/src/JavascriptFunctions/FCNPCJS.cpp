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
}
JavascriptObject FCNPCJS::GetJSObject()
{
	return m_JSObject;
}
JsValueRef CALLBACK FCNPCJS::NPC_SetPosition(JsValueRef callee, bool isConstructCall, JsValueRef* arguments, unsigned short argumentCount, void* callbackState)
{
	if (argumentCount > 1) {
		sampgdk::logprintf("called NPC_SetPosition");
		JavascriptObject GlobalObject;
		GlobalObject.SetAsGlobalObject();
		JavascriptObject JsRefId = GlobalObject.GetObjectProperty("RefId");
		int npcid = JsRefId.GetInteger();
		
		sampgdk::logprintf("NPCID: %d", npcid);
		float x, y, z;
		JavascriptObject Argument;
		Argument.SetValue(arguments[1]);
		x = Argument.GetFloat();
		Argument.SetValue(arguments[2]);
		y = Argument.GetFloat();
		Argument.SetValue(arguments[3]);
		z = Argument.GetFloat();
		sampgdk::logprintf("Position %f %f %f", x, y, z);
		FCNPC::FCNPC_SetPosition(npcid, x, y, z);
	}
	return JS_INVALID_REFERENCE;
}
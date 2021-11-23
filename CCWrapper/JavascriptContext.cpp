#include "JavascriptContext.h"

namespace ChakraCore
{
	long JavascriptContext::g_ContextNumber;
	JavascriptContext::JavascriptContext()
	{
		m_Context = NULL;
	}
	void JavascriptContext::CreateContext(JavascriptRuntime& Runtime)
	{
		m_Runtime = &Runtime;
		JsErrorCode error = JsCreateContext(Runtime.GetRuntimeHandle(), &m_Context);
		if (error != JsNoError)
		{
			throw new JavascriptException("[ChakraCore]: Error while creating context (" + std::to_string(error) + ")");
		}
		m_ContextNum = JavascriptContext::g_ContextNumber++;
	}
	JsContextRef JavascriptContext::GetContext()
	{
		return m_Context;
	}
	void JavascriptContext::SetCurrentContext()
	{
		JsErrorCode error = JsSetCurrentContext(m_Context);
		if (error != JsNoError)
		{
			throw new JavascriptException("[ChakraCore]: Error while setting currenet context (" + std::to_string(error) + ")");
		}
	}
	JavascriptContext::~JavascriptContext()
	{
		JsCollectGarbage(m_Runtime->GetRuntimeHandle());
		JsSetCurrentContext(JS_INVALID_REFERENCE);

	}
	long JavascriptContext::GetContextNumber()
	{
		return m_ContextNum;
	}
}
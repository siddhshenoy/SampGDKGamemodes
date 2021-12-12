#include "JavascriptContext.h"

namespace ChakraCore
{
	long JavascriptContext::g_ContextNumber;
	JavascriptContext::JavascriptContext()
	{
		m_Context = NULL;
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
	}
	void JavascriptContext::CreateContext(JavascriptRuntime& Runtime)
	{
		m_Context = NULL;
		m_Runtime = &Runtime;
		JsErrorCode error = JsCreateContext(Runtime.GetRuntimeHandle(), &m_Context);
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
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
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
	}
	JavascriptContext::~JavascriptContext()
	{
		JsErrorCode error = JsCollectGarbage(m_Runtime->GetRuntimeHandle());
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		error =JsSetCurrentContext(JS_INVALID_REFERENCE);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}

	}
	JavascriptRuntime* JavascriptContext::GetAttachedRuntime()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		return m_Runtime;
	}
	long JavascriptContext::GetContextNumber()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		return m_ContextNum;
	}
}
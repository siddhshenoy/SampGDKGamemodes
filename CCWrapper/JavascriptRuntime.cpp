#include "JavascriptRuntime.h"

namespace ChakraCore
{
	JavascriptRuntime::JavascriptRuntime()
	{
		m_RuntimeHandle = NULL;
	}
	void JavascriptRuntime::CreateRuntime()
	{
		JsErrorCode error = JsCreateRuntime(JsRuntimeAttributeNone, nullptr, &m_RuntimeHandle);
		if (error != JsNoError)
		{
			//std::cout << "[ChakraCore]: Error while creating runtime (" << error << ")" << std::endl;
			throw new JavascriptException("[ChakraCore]: Error while creating runtime (" + std::to_string(error) + ")");
		}
	}
	JsRuntimeHandle JavascriptRuntime::GetRuntimeHandle()
	{
		return m_RuntimeHandle;
	}
	void JavascriptRuntime::Dispose()
	{
		if (m_RuntimeHandle != NULL)
		{
			JsErrorCode error = JsDisposeRuntime(m_RuntimeHandle);
			if (error != JsNoError)
			{
				throw new JavascriptException("[ChakraCore]: Error while disposing runtime (" + std::to_string(error) + ")");
			}
		}
	}
	JavascriptRuntime::~JavascriptRuntime()
	{
		Dispose();
	}
}
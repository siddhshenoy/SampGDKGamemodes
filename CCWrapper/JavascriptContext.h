#pragma once

#include "JavascriptRuntime.h"
#include "JavascriptSettings.h"
#include <sampgdk.h>
namespace ChakraCore {
	class JavascriptContext
	{
	private:
		JsContextRef m_Context;
		JavascriptRuntime* m_Runtime;
		long m_ContextNum;
	public:
		static long g_ContextNumber;
	public:
		JavascriptContext();
		void CreateContext(JavascriptRuntime& Runtime);
		JsContextRef GetContext();
		long GetContextNumber();
		void SetCurrentContext();
		JavascriptRuntime* GetAttachedRuntime();
		~JavascriptContext();
	};
}
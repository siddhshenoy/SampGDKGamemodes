#pragma once

#include <iostream>
#include <ChakraCore/ChakraCore.h>

#include "JavascriptMacros.h"
#include "JavascriptException.h"
#include <sampgdk.h>
namespace ChakraCore
{
	class JavascriptRuntime
	{
	private:
		JsRuntimeHandle m_RuntimeHandle;
	public:
		JavascriptRuntime();
		void CreateRuntime();
		JsRuntimeHandle GetRuntimeHandle();
		long GetRuntimeMemoryLimit();
		long GetRuntimeMemoryUsage();
		void CollectGarbage();
		void Dispose();
		~JavascriptRuntime();
	public:
		static JavascriptRuntime* g_RuntimeInstance;
	public:
		static bool CHAKRA_CALLBACK RuntimeMemoryApplicationCallback(void* callbackState,JsMemoryEventType allocationEvent, size_t allocationSize);
		/*JsSetRuntimeMemoryAllocationCallback(
			_In_ JsRuntimeHandle runtime,
			_In_opt_ void* callbackState,
			_In_ JsMemoryAllocationCallback allocationCallback);*/
	};
};
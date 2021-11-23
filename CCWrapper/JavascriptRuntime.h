#pragma once

#include <iostream>
#include <ChakraCore/ChakraCore.h>

#include "JavascriptMacros.h"
#include "JavascriptException.h"

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
		void Dispose();
		~JavascriptRuntime();
	};
};
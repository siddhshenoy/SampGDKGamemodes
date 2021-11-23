#pragma once

#include <JavascriptRuntime.h>

using namespace ChakraCore;

class CNpcConfig
{
public:
	static JavascriptRuntime* g_NPCRuntime;
public:
	static void SetNPCJSRuntime(JavascriptRuntime* runtime);
	static JavascriptRuntime* GetNPCJSRuntime();
};


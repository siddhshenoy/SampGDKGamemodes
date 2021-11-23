#include "CNpcConfig.h"

JavascriptRuntime* CNpcConfig::g_NPCRuntime;

void CNpcConfig::SetNPCJSRuntime(JavascriptRuntime* runtime)
{
	CNpcConfig::g_NPCRuntime = runtime;
}
JavascriptRuntime* CNpcConfig::GetNPCJSRuntime()
{
	return CNpcConfig::g_NPCRuntime;
}
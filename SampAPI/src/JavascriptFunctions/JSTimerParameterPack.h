#pragma once

#include <ChakraCore/ChakraCore.h>
#include <JavascriptContext.h>

using namespace ChakraCore;

struct TimerParameterPack {
	JsValueRef CallableFunction;
	JavascriptContext* Context;
};
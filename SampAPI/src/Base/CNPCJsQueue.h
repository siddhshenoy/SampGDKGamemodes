#pragma once

#include <queue>
#include <string>
#include <JavascriptCode.h>
#include <JavascriptContext.h>
using namespace ChakraCore;

struct NPCCallDefinition {
	JavascriptContext* Context;
	JavascriptCode* Code;
	std::string CodeFunctionCall;
	JavascriptParameterPack pack;
};

class CNPCJsQueue {
public:
	static std::queue<NPCCallDefinition*> call_queue;
	static int npc_queue_timerid;
public:

	static void AddToQueue(NPCCallDefinition* def);
public:
	static void StartTimer();
public:
	static void SAMPGDK_CALL JSDequeueTimer(int timerid, void* params);
};


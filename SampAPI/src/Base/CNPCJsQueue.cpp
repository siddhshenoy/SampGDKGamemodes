#include "CNPCJsQueue.h"

std::queue<NPCCallDefinition*> CNPCJsQueue::call_queue;
int CNPCJsQueue::npc_queue_timerid;

void CNPCJsQueue::StartTimer() {
	sampgdk::logprintf("Calling dequeue timer");
	CNPCJsQueue::npc_queue_timerid = SetTimer(1, true, CNPCJsQueue::JSDequeueTimer, (void*)NULL);
}
void CNPCJsQueue::AddToQueue(NPCCallDefinition* def)
{
	//sampgdk::logprintf("Adding to queue");
	CNPCJsQueue::call_queue.push(def);
}
void CNPCJsQueue::JSDequeueTimer(int timerid, void* params)
{
	sampgdk::logprintf("Calling dequeue timer");
	if (CNPCJsQueue::call_queue.size() > 0) {
		NPCCallDefinition* def = call_queue.front();
		if (def != NULL) {
			def->Context->SetCurrentContext();
			def->Code->CallFunction(def->CodeFunctionCall, def->pack);
			sampgdk::logprintf("%s: Calling JSFunction(%s)", __FUNCTION__, def->CodeFunctionCall.c_str());
			call_queue.pop();
			delete def;
		}
	}
}
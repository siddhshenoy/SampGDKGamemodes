#include <sampgdk.h>


PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports()
{
    return sampgdk::Supports() | SUPPORTS_PROCESS_TICK;
}

PLUGIN_EXPORT bool PLUGIN_CALL Load(void** ppData)
{
    sampgdk::logprintf("[sampgdk]: Loading sampgdk gamemode.");
    return sampgdk::Load(ppData);
}

PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
    sampgdk::logprintf("[sampgdk]: Unloading sampgdk gamemode.");
    sampgdk::Unload();
}

PLUGIN_EXPORT void PLUGIN_CALL ProcessTick()
{
    sampgdk::ProcessTick();
}

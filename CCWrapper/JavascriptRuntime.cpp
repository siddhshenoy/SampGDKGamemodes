#include "JavascriptRuntime.h"

#include <sstream>

namespace ChakraCore
{
	JavascriptRuntime* JavascriptRuntime::g_RuntimeInstance;
	JavascriptRuntime::JavascriptRuntime()
	{
		m_RuntimeHandle = NULL;
	}
	void JavascriptRuntime::CreateRuntime()
	{
		JsErrorCode error = JsCreateRuntime(JsRuntimeAttributeNone, nullptr, &m_RuntimeHandle);
		JavascriptRuntime::g_RuntimeInstance = this;
		
		//error =JsSetRuntimeMemoryAllocationCallback(m_RuntimeHandle, nullptr, JavascriptRuntime::RuntimeMemoryApplicationCallback);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
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
			JsErrorCode error = JsSetCurrentContext(JS_INVALID_REFERENCE); 
			if (error != JsNoError)
			{
				std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
				sampgdk::logprintf("%s", exception_string.c_str());
				throw JavascriptException(exception_string);
			}
			error = JsDisposeRuntime(m_RuntimeHandle);
			if (error != JsNoError)
			{
				std::stringstream ss;
				ss << "0x" << std::hex << error << std::endl;
				std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + ss.str()+ ")";
				sampgdk::logprintf("%s", exception_string.c_str());
				throw JavascriptException(exception_string);
			}
			std::cout << __FUNCTION__ << ": Disposed the runtime succesfully!" << std::endl; 
		}
	}
	long JavascriptRuntime::GetRuntimeMemoryLimit() {
		size_t memoryLimit;
		JsErrorCode error =JsGetRuntimeMemoryLimit(m_RuntimeHandle, &memoryLimit);
		if (error != JsNoError)
		{
			sampgdk::logprintf("Exception occured!");
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return memoryLimit;
	}
	JavascriptRuntime::~JavascriptRuntime()
	{
		Dispose();
	}
	void JavascriptRuntime::CollectGarbage()
	{
		JsErrorCode error =JsCollectGarbage(m_RuntimeHandle);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
	}
	long JavascriptRuntime::GetRuntimeMemoryUsage()
	{
		size_t memoryUsage;
		JsErrorCode error =JsGetRuntimeMemoryUsage(m_RuntimeHandle, &memoryUsage);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return memoryUsage;
	}
	//Static functions

	bool CHAKRA_CALLBACK JavascriptRuntime::RuntimeMemoryApplicationCallback(void* callbackState, JsMemoryEventType allocationEvent, size_t allocationSize)
	{
		try {
			std::string alloc_events[3] = {
				"Allocate",
				"Free",
				"Failure"
			};
			//long totalMemUsage = JavascriptRuntime::g_RuntimeInstance->GetRuntimeMemoryUsage();
			//std::cout << "[JavascriptRuntime::RuntimeMemoryApplicationCallback]: Allocation Event(" << alloc_events[allocationEvent] << ") Size(" << (allocationSize / (1024 * 1024)) << " MB , " << (allocationSize / (1024)) << " KB) " << std::endl;
			//std::cout << "[JavascriptRuntime::RuntimeMemoryApplicationCallback]: Runtime memory: (" << (totalMemUsage / (1024 * 1024)) << " MB , " << (totalMemUsage / (1024)) << " KB)" << std::endl;
			sampgdk::logprintf("%s: Event(%s): %d (%d MB %d KB)", __FUNCTION__, alloc_events[allocationEvent].c_str(), allocationEvent, (allocationSize / (1024 * 1024)), (allocationSize / (1024)));
			//sampgdk::logprintf("called..");
		}
		catch (JavascriptException& e) {
			sampgdk::logprintf("%s", e.what());
		}
		return true;
	}

}
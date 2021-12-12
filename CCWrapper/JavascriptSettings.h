#pragma once

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <string>

class JavascriptSettings
{
public:
	static std::shared_ptr<spdlog::logger> g_JavascriptLogger;
public:
	static void InitiliazeJavascriptLogger(const std::string& file_path, const std::string& file_name);
	static void LogWriteInfo(const std::string& str);
	static void LogWriteError(const std::string& str);
	static void LogWriteDebug(const std::string& str);
	static void Cleanup();
};


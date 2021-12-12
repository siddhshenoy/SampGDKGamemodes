#include "JavascriptSettings.h"

std::shared_ptr<spdlog::logger> JavascriptSettings::g_JavascriptLogger;

void JavascriptSettings::InitiliazeJavascriptLogger(const std::string& file_path, const std::string& file_name)
{
#if defined JAVASCRIPT_LOGGING
	std::vector<spdlog::sink_ptr> sinks;
	sinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
	sinks.push_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>(file_path + "/" + file_name, true));
	JavascriptSettings::g_JavascriptLogger = std::make_shared<spdlog::logger>("ChakraCoreLogger", sinks.begin(), sinks.end());
	spdlog::register_logger(g_JavascriptLogger);
#endif
}

void JavascriptSettings::LogWriteInfo(const std::string& str)
{
#if defined JAVASCRIPT_LOGGING	
	if (JavascriptSettings::g_JavascriptLogger != nullptr) {
		std::string message = "";
		spdlog::set_default_logger(JavascriptSettings::g_JavascriptLogger);
		spdlog::set_level(spdlog::level::info);
		spdlog::info(str);
	}
#endif
}

void JavascriptSettings::LogWriteError(const std::string& str)
{
#if defined JAVASCRIPT_LOGGING
	if (JavascriptSettings::g_JavascriptLogger != nullptr) {
		std::string message = "";
		spdlog::set_default_logger(JavascriptSettings::g_JavascriptLogger);
		spdlog::set_level(spdlog::level::err);
		spdlog::info(str);
	}
#endif
}
void JavascriptSettings::LogWriteDebug(const std::string& str)
{
#if defined JAVASCRIPT_LOGGING	
	if (JavascriptSettings::g_JavascriptLogger != nullptr) {
		std::string message = "";
		spdlog::set_default_logger(JavascriptSettings::g_JavascriptLogger);
		spdlog::set_level(spdlog::level::debug);
		spdlog::debug(str);
	}
#endif
}
void JavascriptSettings::Cleanup()
{
#if defined JAVASCRIPT_LOGGING
	spdlog::shutdown();
#endif
}

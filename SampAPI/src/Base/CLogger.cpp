#include "CLogger.h"

CLogger::CLogger()
{
	m_FilePath = "";
	m_FileName = "";
}

CLogger::CLogger(const std::string& logger_name, const std::string& file_path, const std::string& file_name)
{
	this->Init(logger_name, file_path, file_name);
}

void CLogger::Init(const std::string& logger_name, const std::string& file_path, const std::string& file_name)
{
	m_FilePath = file_path;
	m_FileName = file_name;
	
	m_Logger = spdlog::get(logger_name);
}
void CLogger::Info(const std::string& info_msg)
{
	spdlog::set_default_logger(m_Logger);
	spdlog::info(info_msg);
}
void CLogger::Debug(const std::string& debug_msg) {
	spdlog::set_default_logger(m_Logger);
	spdlog::debug(debug_msg);
}
void CLogger::Error(const std::string& error_msg)
{
	spdlog::set_default_logger(m_Logger);
	spdlog::error(error_msg);
}
void CLogger::SetLoggerFilePath(const std::string& file_path)
{
	m_FilePath = file_path;
}

void CLogger::SetFileName(const std::string& file_name)
{
	m_FileName = file_name;
}
void CLogger::Setup()
{
	spdlog::flush_every(std::chrono::seconds(3));
}
void CLogger::Destroy()
{
	spdlog::shutdown();
}
void CLogger::CreateLogger(const std::string& logger_name, const std::string& file_path, const std::string& file_name)
{
	std::vector<spdlog::sink_ptr> sinks;
	sinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
	sinks.push_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>(file_path + "/" + file_name, true));
	spdlog::register_logger(std::make_shared<spdlog::logger>(logger_name, sinks.begin(), sinks.end()));

	//spdlog::basic_logger_mt(logger_name, file_path + "/" + file_name);
}
CLogger::~CLogger()
{
}

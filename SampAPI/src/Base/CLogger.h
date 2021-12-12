#pragma once

#include <chrono>

#include <spdlog/spdlog.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_sinks.h>
#include <spdlog/sinks/stdout_color_sinks.h>
class CLogger
{
private:
	//std::fstream m_File;
	std::string m_FilePath;
	std::string m_FileName;
	std::shared_ptr<spdlog::logger> m_Logger;
public:
	CLogger();
	CLogger(const std::string& logger_name, const std::string& file_path, const std::string& file_name);
	void Init(const std::string& logger_name, const std::string& file_path, const std::string& file_name);
	void SetLoggerFilePath(const std::string& file_path);
	void SetFileName(const std::string& file_name);
	void Info(const std::string& info_msg);
	void Debug(const std::string& debug_msg);
	void Error(const std::string& error_msg);
	~CLogger();
public:
	static void Setup();
	static void Destroy();
	static void CreateLogger(const std::string& logger_name, const std::string& file_path, const std::string& file_name);
};


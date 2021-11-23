#pragma once

#include <Python3/Python.h>

#include <string>
#include <memory>

class PyProgram
{
private:
	std::string m_SystemPath;
	std::string m_FilePath;
	std::string m_ProgramName;

	PyObject* m_Module;
	PyObject* m_Globals;
private:
	wchar_t* ConvertStringToWChar(const std::string& str);
public:
	PyProgram();
	void SetSystemPath(const std::string& system_path);
	void SetFilePath(const std::string& file_path);
	void SetProgramName(const std::string& name);
	void InitProgram();
	void SetProgramVarLong(const std::string& var_name, long value);
	void SetProgramVarStr(const std::string& var_name, const std::string& str);
	long GetProgramVarLong(const std::string& var_name);
	std::string GetProgramVarStr(const std::string& var_name);
	PyObject* CallFunction(const std::string& function_name, PyObject* py_args);
	void AttachModule(const char* name, PyObject* (*initfunc)(void));
	~PyProgram();
};


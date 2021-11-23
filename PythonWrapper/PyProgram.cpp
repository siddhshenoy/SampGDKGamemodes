#include "PyProgram.h"

PyProgram::PyProgram()
{

}
wchar_t* PyProgram::ConvertStringToWChar(const std::string& str)
{
	std::unique_ptr<wchar_t> wide_array(new wchar_t[str.length() + 1]);
	mbstowcs(wide_array.get(), str.c_str(), str.length());
	return wide_array.get();
}
void PyProgram::SetProgramName(const std::string& name)
{
	m_ProgramName = name;
}
void PyProgram::SetFilePath(const std::string& file_path)
{
	m_FilePath = file_path;
}
void PyProgram::SetSystemPath(const std::string& system_path)
{
	m_SystemPath = system_path;
}
void PyProgram::InitProgram()
{
	Py_Initialize();
	Py_SetProgramName(ConvertStringToWChar(m_ProgramName.c_str()));
	FILE* pyFile = fopen(m_FilePath.c_str(), "r");
	PyRun_SimpleFile(pyFile, m_FilePath.c_str());
	fclose(pyFile);
	PySys_SetPath(ConvertStringToWChar(m_SystemPath.c_str()));


	PyObject* pyModuleString = PyUnicode_FromString(m_ProgramName.c_str());
	m_Module = PyImport_Import(pyModuleString);
	m_Globals = PyModule_GetDict(m_Module);

}
long PyProgram::GetProgramVarLong(const std::string& var_name)
{
	PyObject* pyValue = PyDict_GetItemString(m_Globals, var_name.c_str());
	return PyLong_AsLong(pyValue);
}
std::string PyProgram::GetProgramVarStr(const std::string& var_name)
{
	PyObject* pyValue = PyDict_GetItemString(m_Globals, var_name.c_str());
	return std::string(PyBytes_AsString(pyValue));
}
void PyProgram::SetProgramVarLong(const std::string& var_name, long value)
{
	PyObject* pyValue = PyLong_FromLong(value);
	PyDict_SetItemString(m_Globals, var_name.c_str(), pyValue);
}
void PyProgram::SetProgramVarStr(const std::string& var_name, const std::string& str)
{
	PyObject* pyValue = PyUnicode_FromString(str.c_str());
	PyDict_SetItemString(m_Globals, var_name.c_str(), pyValue);
}
PyObject* PyProgram::CallFunction(const std::string& function_name, PyObject* py_args)
{
	PyObject* pyFunc = PyObject_GetAttrString(m_Module, (char*)(function_name.c_str()));
	Py_DECREF(pyFunc);
	return PyObject_CallObject(pyFunc, py_args);;
}
void PyProgram::AttachModule(const char* name, PyObject* (*initfunc)(void))
{
	PyImport_AppendInittab(name, initfunc);
}
PyProgram::~PyProgram()
{

}
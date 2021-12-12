#include "JavascriptCode.h"

namespace ChakraCore
{
	JavascriptCode::JavascriptCode()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
	}
	void JavascriptCode::SetContext(JavascriptContext& context)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		m_Context = context;
		m_Context.SetCurrentContext();

	}
	void JavascriptCode::SetGlobalObject(JavascriptObject& GlobalObject)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		m_GlobalObject = GlobalObject;
	}
	void JavascriptCode::LoadJavascriptFile(const std::string& filepath)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		std::string line = "";
		m_SourcePath = filepath;
		m_Source = "";
		m_File.open(filepath, std::fstream::in);
		if (m_File.good()) 
		{
			while (!m_File.eof())
			{
				std::getline(m_File, line);
				m_Source += line + "\r\n";
			}
		}
		m_File.close();
	}
	void JavascriptCode::RunCode()
	{
		JsValueRef runResult;
		JsValueRef scriptSrc;
		JsValueRef scriptUrl;
		JsCreateString(m_Source.c_str(), m_Source.length(), &scriptSrc);
		JsCreateString(m_SourcePath.c_str(), m_SourcePath.length(), &scriptUrl);
		JsErrorCode error = JsRun(scriptSrc, m_Context.GetContextNumber(), scriptUrl, JsParseScriptAttributeNone, &runResult);
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		if (error != JsNoError)
		{
			std::string result = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(result);
			//std::cerr << result << std::endl;
			sampgdk::logprintf("%s", result.c_str());
			throw JavascriptException(result);
		}
	}
	JavascriptObject JavascriptCode::CallFunction(const std::string& functionName, JavascriptParameterPack pack)
	{
		JavascriptObject Result;
		JsValueRef refResult;
		JavascriptObject FunctionProperty = m_GlobalObject.GetObjectProperty(functionName);
		int argSize;
		JsValueRef* args = pack.GetParamListAsArray(&argSize);
		JsErrorCode error = JsCallFunction(FunctionProperty.GetValue(), args, argSize, &refResult);
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		if (error != JsNoError) {
			std::string result = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ") Function Call: " + functionName;
			JavascriptSettings::LogWriteError(result);
			//std::cerr << result << std::endl;
			sampgdk::logprintf("%s", result.c_str());
			throw JavascriptException(result);
		}
		Result.SetValue(refResult);
		return Result;
	}
	JavascriptContext JavascriptCode::GetContext()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		return m_Context;
	}
	JavascriptCode::~JavascriptCode()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
	}
}
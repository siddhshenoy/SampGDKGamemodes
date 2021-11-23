#include "JavascriptCode.h"

namespace ChakraCore
{
	JavascriptCode::JavascriptCode()
	{

	}
	void JavascriptCode::SetContext(JavascriptContext& context)
	{
		m_Context = context;
		m_Context.SetCurrentContext();
	}
	void JavascriptCode::SetGlobalObject(JavascriptObject& GlobalObject)
	{
		m_GlobalObject = GlobalObject;
	}
	void JavascriptCode::LoadJavascriptFile(const std::string& filepath)
	{
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
		if (error != JsNoError)
		{
			throw new JavascriptException("[ChakraCore]: Could not run the javascript file '" + m_Source + "'");
		}
	}
	JavascriptObject JavascriptCode::CallFunction(const std::string& functionName, JavascriptParameterPack pack)
	{
		JavascriptObject Result;
		JsValueRef refResult;
		JavascriptObject FunctionProperty = m_GlobalObject.GetObjectProperty(functionName);
		int argSize;
		JsValueRef* args = pack.GetParamListAsArray(&argSize);
		JsCallFunction(FunctionProperty.GetValue(), args, argSize, &refResult);
		Result.SetValue(refResult);
		return Result;
	}
	JavascriptCode::~JavascriptCode()
	{

	}
}
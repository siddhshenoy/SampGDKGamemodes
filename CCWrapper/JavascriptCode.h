#pragma once
#pragma once

#include <string>
#include <fstream>

#include "JavascriptContext.h"
#include "JavascriptParameterPack.h"
#include "JavascriptSettings.h"
#include <sampgdk.h>



namespace ChakraCore
{
	class JavascriptCode
	{
	private:
		JavascriptContext m_Context;
		JavascriptObject m_GlobalObject;
	private:
		std::fstream m_File;
		std::string m_Source;
		std::string m_SourcePath;
	public:
		JavascriptCode();

		void SetContext(JavascriptContext& context);

		JavascriptContext GetContext();
		void SetGlobalObject(JavascriptObject& GlobalObject);
		void LoadJavascriptFile(const std::string& filepath);
		void RunCode();
		JavascriptObject CallFunction(const std::string& functionName, JavascriptParameterPack pack);
		~JavascriptCode();
	};
}


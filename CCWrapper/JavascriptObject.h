#pragma once

#include <ChakraCore/ChakraCore.h>
#include <iostream>
#include <string>

namespace ChakraCore {
	class JavascriptObject
	{
	private:
		JsValueRef m_Value;
	public:
		JavascriptObject();
		JsValueRef GetValue();
		void SetValue(JsValueRef object);
		~JavascriptObject();
	public:
		JsErrorCode SetAsUndefinedObject();
		JsErrorCode SetAsGlobalObject();
	public: //Object functions
		JsErrorCode CreateJSObject();
		JsErrorCode SetObjectProperty(const std::string& prop, JavascriptObject& Object, bool useStrictRules = true);
		JavascriptObject GetObjectProperty(const std::string& prop);
	public:
		JsErrorCode CreateString(const char* data, int length);
		JsErrorCode CreateString(const std::string& str);

		std::string GetString();
		const char* GetString(int& length);

		std::string GetConvertedString();
		const char* GetConvertedString(int& length);
	public: //Types
		JsErrorCode CreateNumberFromInt(int num);
		JsErrorCode CreateNumberFromFloat(float num);
		JsErrorCode CreateNumberFromDouble(double num);
		JsErrorCode CreateBooleanFromBool(bool value);
		int GetInteger();
		float GetFloat();
		double GetDouble();
		bool GetBool();
	public:
		JsErrorCode CreateArray(int size);
		JsErrorCode SetArrayIndex(int index, JavascriptObject& Object);
		JavascriptObject GetArrayIndex(int index);
	public:
		JsErrorCode CreateFunction(JsNativeFunction function, void* callbackState);
		JsErrorCode AttachFunctionAsProperty(const std::string& functionname, JsNativeFunction function, void* callbackState);
		//JsErrorCode CreateFunction();
	};
}
#include "JavascriptObject.h"

#include <iostream>

namespace ChakraCore
{
	JavascriptObject::JavascriptObject()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
	}
	JsValueRef JavascriptObject::GetValue()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		return m_Value;
	}
	void JavascriptObject::SetValue(JsValueRef object)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		m_Value = object;
	}
	JavascriptObject::~JavascriptObject()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
	}
	// Global Functions
	JsErrorCode JavascriptObject::SetAsUndefinedObject()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsErrorCode error = JsGetUndefinedValue(&m_Value);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return error;
	}
	JsErrorCode JavascriptObject::SetAsGlobalObject()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsErrorCode error = JsGetGlobalObject(&m_Value);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return error;
	}
	// Object Functions
	JsErrorCode JavascriptObject::CreateJSObject()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsErrorCode error = JsCreateObject(&m_Value);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return error;
	}
	JsErrorCode JavascriptObject::SetObjectProperty(const std::string& prop, JavascriptObject& Object, bool useStrictRules)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsValueRef propertyString;
		JsErrorCode error = JsCreateString(prop.c_str(), prop.length(), &propertyString);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return JsObjectSetProperty(m_Value, propertyString, Object.GetValue(), useStrictRules);
	}
	JavascriptObject JavascriptObject::GetObjectProperty(const std::string& prop)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsValueRef propertyString;
		JsValueRef result;
		JsErrorCode error = JsCreateString(prop.c_str(), prop.length(), &propertyString);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		JsObjectGetProperty(m_Value, propertyString, &result);
		JavascriptObject res;
		res.SetValue(result);
		return res;
	}
	//String functions
	JsErrorCode JavascriptObject::CreateString(const char* data, int length)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsErrorCode error = JsCreateString(data, length, &m_Value);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return error;
	}
	JsErrorCode JavascriptObject::CreateString(const std::string& str)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsErrorCode error = JsCreateString(str.c_str(), str.length(), &m_Value);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return error;
	}
	std::string JavascriptObject::GetString()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		std::string result;
		int length;
		size_t bytesToBeWritten;
		JsErrorCode error = JsGetStringLength(m_Value, &length);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		char* data = new char[length + 1];
		error = JsCopyString(m_Value, data, length, &bytesToBeWritten);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		data[length] = '\0';
		result = std::string(data);
		return result;
	}
	const char* JavascriptObject::GetString(int& length)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		int len;
		size_t bytesToBeWritten;
		JsErrorCode error = JsGetStringLength(m_Value, &len);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		char* data = new char[len + 1];
		error = JsCopyString(m_Value, data, len, &bytesToBeWritten);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		data[len] = '\0';
		length = len;
		return data;
	}
	std::string JavascriptObject::GetConvertedString()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsValueRef ConvertedString;
		JsErrorCode error = JsConvertValueToString(m_Value, &ConvertedString);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		std::string result;
		int length;
		size_t bytesToBeWritten;
		error = JsGetStringLength(ConvertedString, &length);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		char* data = new char[length + 1];
		error = JsCopyString(ConvertedString, data, length, &bytesToBeWritten);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		data[length] = '\0';
		result = std::string(data);
		return result;
	}
	const char* JavascriptObject::GetConvertedString(int& length)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsValueRef ConvertedString;
		JsErrorCode error = JsConvertValueToString(m_Value, &ConvertedString);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		int len;
		size_t bytesToBeWritten;
		error = JsGetStringLength(ConvertedString, &len);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		char* data = new char[len + 1];
		error = JsCopyString(ConvertedString, data, len, &bytesToBeWritten);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		data[len] = '\0';
		length = len;
		return data;
	}
	//Numbers
	JsErrorCode JavascriptObject::CreateNumberFromInt(int num)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsErrorCode error = JsIntToNumber(num, &m_Value);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return error;
	}
	JsErrorCode JavascriptObject::CreateNumberFromFloat(float num)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsErrorCode error = JsDoubleToNumber((double)num, &m_Value);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return error;
	}
	JsErrorCode JavascriptObject::CreateNumberFromDouble(double num)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsErrorCode error = JsDoubleToNumber(num, &m_Value);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return error;
	}
	JsErrorCode JavascriptObject::CreateBooleanFromBool(bool value)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsErrorCode error = JsBoolToBoolean(value, &m_Value);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
	}
	bool JavascriptObject::GetBool()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		bool result;
		JsErrorCode error = JsBooleanToBool(m_Value, &result);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return result;
	}
	int JavascriptObject::GetInteger()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		int result;
		JsErrorCode error = JsNumberToInt(m_Value, &result);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return result;
	}
	float JavascriptObject::GetFloat()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		double result;
		JsErrorCode error = JsNumberToDouble(m_Value, &result);
		if (error != JsNoError)
		{
			
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return (float)result;
	}
	double JavascriptObject::GetDouble()
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		double result;
		JsErrorCode error = JsNumberToDouble(m_Value, &result);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return result;
	}
	//Arrays
	JsErrorCode JavascriptObject::CreateArray(int size)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		return JsCreateArray(size, &m_Value);
	}
	JsErrorCode JavascriptObject::SetArrayIndex(int index, JavascriptObject& Object)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsValueRef refIndex;
		JsErrorCode error = JsIntToNumber(index, &refIndex);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return JsSetIndexedProperty(m_Value, refIndex, Object.GetValue());
	}
	JavascriptObject JavascriptObject::GetArrayIndex(int index)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsValueRef result;
		JsValueRef refIndex;
		JsErrorCode error = JsIntToNumber(index, &refIndex);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		error = JsGetIndexedProperty(m_Value, refIndex, &result);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		JavascriptObject res;
		res.SetValue(result);
		return res;
	}
	//Functions
	JsErrorCode JavascriptObject::CreateFunction(JsNativeFunction function, void* callbackState)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JsErrorCode error = JsCreateFunction(function, callbackState, &m_Value);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		return error;
	}
	JsErrorCode JavascriptObject::AttachFunctionAsProperty(const std::string& functionname, JsNativeFunction function, void* callbackState)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		JavascriptObject Function;
		Function.CreateFunction(function, callbackState);
		return this->SetObjectProperty(functionname, Function);
	}

	bool JavascriptObject::DefineProperty(const std::string& prop, JavascriptObject value)
	{
		//JavascriptSettings::LogWriteInfo(std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + ")");
		bool result;
		JsValueRef StringRef;
		
		JsErrorCode error = JsCreateString(prop.c_str(), prop.length(), &StringRef);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		error = JsObjectDefineProperty(m_Value, StringRef, value.GetValue(), &result);
		if (error != JsNoError)
		{
			std::string exception_string = std::string(__FUNCTION__) + "(" + std::to_string(__LINE__) + "): Engine encountered an exception with error (" + std::to_string(error) + ")";
			JavascriptSettings::LogWriteError(exception_string);
			sampgdk::logprintf("%s", exception_string.c_str());
			throw JavascriptException(exception_string);
		}
		
		return result;
	}
}
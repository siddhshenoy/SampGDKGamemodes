#include "JavascriptObject.h"

namespace ChakraCore
{
	JavascriptObject::JavascriptObject()
	{

	}
	JsValueRef JavascriptObject::GetValue()
	{
		return m_Value;
	}
	void JavascriptObject::SetValue(JsValueRef object)
	{
		m_Value = object;
	}
	JavascriptObject::~JavascriptObject()
	{

	}
	// Global Functions
	JsErrorCode JavascriptObject::SetAsUndefinedObject()
	{
		return JsGetUndefinedValue(&m_Value);
	}
	JsErrorCode JavascriptObject::SetAsGlobalObject()
	{
		return JsGetGlobalObject(&m_Value);
	}
	// Object Functions
	JsErrorCode JavascriptObject::CreateJSObject()
	{
		return JsCreateObject(&m_Value);
	}
	JsErrorCode JavascriptObject::SetObjectProperty(const std::string& prop, JavascriptObject& Object, bool useStrictRules)
	{
		JsValueRef propertyString;
		JsErrorCode error = JsCreateString(prop.c_str(), prop.length(), &propertyString);
		if (error != JsNoError)
		{

		}
		return JsObjectSetProperty(m_Value, propertyString, Object.GetValue(), useStrictRules);
	}
	JavascriptObject JavascriptObject::GetObjectProperty(const std::string& prop)
	{
		JsValueRef propertyString;
		JsValueRef result;
		JsErrorCode error = JsCreateString(prop.c_str(), prop.length(), &propertyString);
		if (error != JsNoError)
		{

		}
		JsObjectGetProperty(m_Value, propertyString, &result);
		JavascriptObject res;
		res.SetValue(result);
		return res;
	}
	//String functions
	JsErrorCode JavascriptObject::CreateString(const char* data, int length)
	{
		return JsCreateString(data, length, &m_Value);
	}
	JsErrorCode JavascriptObject::CreateString(const std::string& str)
	{
		return JsCreateString(str.c_str(), str.length(), &m_Value);
	}
	std::string JavascriptObject::GetString()
	{
		std::string result;
		int length;
		size_t bytesToBeWritten;
		JsGetStringLength(m_Value, &length);
		char* data = new char[length + 1];
		JsCopyString(m_Value, data, length, &bytesToBeWritten);
		data[length] = '\0';
		result = std::string(data);
		return result;
	}
	const char* JavascriptObject::GetString(int& length)
	{
		int len;
		size_t bytesToBeWritten;
		JsGetStringLength(m_Value, &len);
		char* data = new char[len + 1];
		JsCopyString(m_Value, data, len, &bytesToBeWritten);
		data[len] = '\0';
		length = len;
		return data;
	}
	std::string JavascriptObject::GetConvertedString()
	{
		JsValueRef ConvertedString;
		JsConvertValueToString(m_Value, &ConvertedString);

		std::string result;
		int length;
		size_t bytesToBeWritten;
		JsGetStringLength(ConvertedString, &length);
		char* data = new char[length + 1];
		JsCopyString(ConvertedString, data, length, &bytesToBeWritten);
		data[length] = '\0';
		result = std::string(data);
		return result;
	}
	const char* JavascriptObject::GetConvertedString(int& length)
	{
		JsValueRef ConvertedString;
		JsConvertValueToString(m_Value, &ConvertedString);

		int len;
		size_t bytesToBeWritten;
		JsGetStringLength(ConvertedString, &len);
		char* data = new char[len + 1];
		JsCopyString(ConvertedString, data, len, &bytesToBeWritten);
		data[len] = '\0';
		length = len;
		return data;
	}
	//Numbers
	JsErrorCode JavascriptObject::CreateNumberFromInt(int num)
	{
		return JsIntToNumber(num, &m_Value);
	}
	JsErrorCode JavascriptObject::CreateNumberFromFloat(float num)
	{
		return JsDoubleToNumber((double)num, &m_Value);
	}
	JsErrorCode JavascriptObject::CreateNumberFromDouble(double num)
	{
		return JsDoubleToNumber(num, &m_Value);
	}
	JsErrorCode JavascriptObject::CreateBooleanFromBool(bool value)
	{
		return JsBoolToBoolean(value, &m_Value);
	}
	bool JavascriptObject::GetBool()
	{
		bool result;
		JsBooleanToBool(m_Value, &result);
		return result;
	}
	int JavascriptObject::GetInteger()
	{
		int result;
		JsNumberToInt(m_Value, &result);
		return result;
	}
	float JavascriptObject::GetFloat()
	{
		double result;
		JsNumberToDouble(m_Value, &result);
		return (float)result;
	}
	double JavascriptObject::GetDouble()
	{
		double result;
		JsNumberToDouble(m_Value, &result);
		return result;
	}
	//Arrays
	JsErrorCode JavascriptObject::CreateArray(int size)
	{
		return JsCreateArray(size, &m_Value);
	}
	JsErrorCode JavascriptObject::SetArrayIndex(int index, JavascriptObject& Object)
	{
		JsValueRef refIndex;
		JsErrorCode error = JsIntToNumber(index, &refIndex);
		if (error != JsNoError)
		{

		}
		return JsSetIndexedProperty(m_Value, refIndex, Object.GetValue());
	}
	JavascriptObject JavascriptObject::GetArrayIndex(int index)
	{
		JsValueRef result;
		JsValueRef refIndex;
		JsErrorCode error = JsIntToNumber(index, &refIndex);
		if (error != JsNoError)
		{

		}
		JsGetIndexedProperty(m_Value, refIndex, &result);
		JavascriptObject res;
		res.SetValue(result);
		return res;
	}
	//Functions
	JsErrorCode JavascriptObject::CreateFunction(JsNativeFunction function, void* callbackState)
	{
		return JsCreateFunction(function, callbackState, &m_Value);
	}
	JsErrorCode JavascriptObject::AttachFunctionAsProperty(const std::string& functionname, JsNativeFunction function, void* callbackState)
	{
		JavascriptObject Function;
		Function.CreateFunction(function, callbackState);
		return this->SetObjectProperty(functionname, Function);
	}
}
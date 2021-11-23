#include "JavascriptException.h"

namespace ChakraCore
{
	JavascriptException::JavascriptException()
	{

	}
	JavascriptException::JavascriptException(const std::string& ex)
	{
		m_ExceptionString = ex;
	}
	JavascriptException::~JavascriptException()
	{

	}
}
#include "JavascriptException.h"
#include <boost/stacktrace.hpp>
#include <iostream>
namespace ChakraCore
{
	JavascriptException::JavascriptException()
	{

	}
	JavascriptException::JavascriptException(const std::string& ex)
	{
		std::cout << boost::stacktrace::stacktrace() << std::endl;
		m_ExceptionString = ex;		
	}
	JavascriptException::~JavascriptException()
	{

	}
}
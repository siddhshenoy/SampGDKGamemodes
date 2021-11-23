#pragma once

#include <string>
#include <exception>

namespace ChakraCore
{
	class JavascriptException : public std::exception
	{
	private:
		std::string m_ExceptionString;
	public:
		JavascriptException();
		JavascriptException(const std::string& ex);
		~JavascriptException();
	public:
		virtual const char* what() const throw ()
		{
			return m_ExceptionString.c_str();
		}
	};
}


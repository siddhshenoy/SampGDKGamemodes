#pragma once

#include <vector>
#include "JavascriptObject.h"

namespace ChakraCore
{
	class JavascriptParameterPack
	{
	private:
		std::vector<JavascriptObject*> m_ParamList;
	public:
		JavascriptParameterPack();
		void AddObjectAsParam(JavascriptObject* object);
		JsValueRef* GetParamListAsArray(int* length);
		~JavascriptParameterPack();
	};

}

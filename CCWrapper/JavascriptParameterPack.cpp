#include "JavascriptParameterPack.h"

namespace ChakraCore
{
	JavascriptParameterPack::JavascriptParameterPack()
	{

	}
	void JavascriptParameterPack::AddObjectAsParam(JavascriptObject* object)
	{
		m_ParamList.push_back(object);
	}

	JsValueRef* JavascriptParameterPack::GetParamListAsArray(int* length)
	{
		JavascriptObject Undefined;
		Undefined.SetAsUndefinedObject();
		JsValueRef* result = new JsValueRef[m_ParamList.size() + 1];
		*length = m_ParamList.size() + 1;
		result[0] = Undefined.GetValue();
		if (m_ParamList.size() > 0) {
			for (int i = 0; i < m_ParamList.size(); i++) {
				result[i + 1] = m_ParamList[i]->GetValue();
			}
		}
		return result;
	}
	JavascriptParameterPack::~JavascriptParameterPack()
	{
		if (m_ParamList.size() > 0) {
			m_ParamList.clear();
		}
	}
}
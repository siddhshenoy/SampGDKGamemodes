#pragma once

#include <string>
#include <vector>

namespace Utils
{
	namespace Vector
	{
		template<class T>
		static std::vector<T> CreateVector(std::vector<T> input, size_t start = 0, size_t end = -1);

		static std::string CreateStringFromVector(std::vector<std::string> input,std::string delimiter, size_t start = 0, size_t end = -1);

		template<class T>
		std::vector<T> CreateVector(std::vector<T> input, size_t start, size_t end)
		{
			typename std::vector<T>::const_iterator it_first = input.begin() + start;

			typename std::vector<T>::const_iterator it_end = ((end == -1 || end == input.size()) ? input.end() : input.begin() + end + 1);
			std::vector<T> result(it_first, it_end);
			return result;
		}

		std::string CreateStringFromVector(std::vector<std::string> input, std::string delimiter, size_t start, size_t end)
		{
			std::string Result = "";
			if (start != end && start < end)
			{
				for (size_t i = start; i < end; i++) {
					Result += input[i] + delimiter;
				}
				Result = Result.substr(0, Result.length() - delimiter.length());
			}
			return Result;
		}
	}
}
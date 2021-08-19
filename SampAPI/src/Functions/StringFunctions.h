#pragma once

#include <string>
#include <vector>

namespace Utils
{
	namespace String
	{
		struct SSCANF_PARAMETER
		{
			char specifier;
			int length;
		};

		static std::vector<std::string> Split(const std::string& str, const char delimiter = ' ');
		static std::vector<std::string> Split(const char* string, const char delimiter = ' ');
		static char** Split(const std::string& str, unsigned int& total, const char delimiter = ' ');
		static char** Split(const char* string, unsigned int& total, const char delimiter = ' ');
		static bool sscanf(const std::vector<std::string>& splits, const std::string& format, std::vector<std::string>& result);
		static std::vector<std::string> GroupLikeDatatypes(const std::vector<std::string>& splits);
		//static std::string strreplace(const std::string& str,const std::string& toreplace,const std::string& replacestr);

		static bool IsInt(const std::string& str);
		static bool IsFloat(const std::string& str);
		static int ToInt(const std::string& str);
		static float ToFloat(const std::string& str);

		std::vector<std::string> Split(const std::string& str, const char delimiter)
		{
			std::vector<std::string> results; // Main vector array in which we will store the results
			std::vector<unsigned int> delimpos; //A vector which will search for all the delimiter positions and put it in an array
			std::string tempString; // Temp string to put the substr in that
			unsigned int lastpos = 0; // Last Delimiter position

			for (unsigned int i = 0; i < str.length(); i++)
				if (str[i] == delimiter)
					delimpos.push_back(i);

			delimpos.push_back(str.length());

			for (unsigned int i = 0; i < delimpos.size(); i++)
			{
				tempString = str.substr(lastpos, delimpos[i] - lastpos);
				results.push_back(tempString);
				lastpos = delimpos[i] + 1;
			}
			return results;
		}
		std::vector<std::string> Split(const char* string, const char delimiter)
		{
			return Split(std::string(string), delimiter);
		}
		char** Split(const std::string& str, unsigned int& total, const char delimiter)
		{
			char** result;
			std::vector<std::string> tempRes;
			tempRes = Split(str, delimiter);
			result = new char* [tempRes.size()];
			for (unsigned int i = 0; i < tempRes.size(); i++)
			{
				result[i] = new char[tempRes[i].length() + 1];
				//result[i] = (char*)tempRes[i].c_str();
				memcpy(result[i], tempRes[i].c_str(), tempRes[i].length());
				result[i][tempRes[i].length()] = '\0';
			}
			total = tempRes.size();
			tempRes.clear();
			return result;
		}
		char** Split(const char* string, unsigned int& total, const char delimiter)
		{
			return Split(std::string(string), total, delimiter);
		}
		bool IsInt(const std::string& str)
		{
			bool res = false;
			for (unsigned int i = 0; i < str.length(); i++)
			{
				if (str[i] >= '0' && str[i] <= '9')
				{
					res = true;
					continue;
				}
				else
				{
					res = false;
					break;
				}
			}
			return res;
		}
		bool IsFloat(const std::string& str)
		{
			bool hasnumbers = false;
			bool hasdecimal = false;
			for (unsigned int i = 0; i < str.length(); i++)
			{
				if (str[i] == '.')
				{
					if (!hasdecimal) {
						hasdecimal = true;
						continue;
					}
					else {
						hasdecimal = false;
						break;
					}
				}

				if (str[i] >= '0' && str[i] <= '9')
				{
					hasnumbers = true;
					continue;
				}
				else
				{
					hasnumbers = false;
					break;
				}
			}
			return (hasdecimal && hasnumbers);
		}
		int ToInt(const std::string& str)
		{
			return std::atoi(str.c_str());
		}
		float ToFloat(const std::string& str)
		{
			return (float)std::atof(str.c_str());
		}

		bool sscanf(const std::vector<std::string>& splits, const std::string& format, std::vector<std::string>& result)
		{
			//Format Specifier parsing start...
			std::vector<SSCANF_PARAMETER> SpecifierList;
			int ActualTotalParams = 0;
			for (int i = 0; i < format.length(); i++)
			{
				if (format[i] == 's' || (format[i] == 'i' || format[i] == 'd') || format[i] == 'f' || format[i] == 'u' || format[i] == 'c')
				{
					SSCANF_PARAMETER temp;
					switch (format[i])
					{
						case 's':
						{
							if (format[i + 1] == '<') {
								i += 2;
								std::string StringLength = "";
								while (format[i] != '>' && i < format.length())
								{
									StringLength += format[i];
									i++;
								}
								//std::cout << "String Length: " << StringLength << std::endl;
								temp.specifier = 's';
								temp.length = std::atoi(StringLength.c_str());
								SpecifierList.push_back(temp);
							}
							else
							{
								temp.specifier = 's';
								temp.length = -1;
								SpecifierList.push_back(temp);
							}
							break;
						}
						case 'c':
						{
							temp.specifier = 'c';
							temp.length = 1;
							SpecifierList.push_back(temp);
							break;
						}
						case 'i':
						case 'd':
						case 'f':
						case 'u':
						{
							temp.specifier = format[i];
							temp.length = -1;
							SpecifierList.push_back(temp);
							break;
						}
					}
				}
			}

			/*std::cout << "Specifier" << "\t" << "Length" << std::endl;
			for (std::vector<SSCANF_PARAMETER>::const_iterator it = SpecifierList.begin(); it != SpecifierList.end(); it++)
			{
				SSCANF_PARAMETER Param = *it;
				std::cout << Param.specifier << "\t\t" << Param.length << std::endl;
			}*/

			//Format Specifier parsing end..

			bool ExitParseFailure = false;
			int iSplit = 0;
			for (std::vector<SSCANF_PARAMETER>::const_iterator it = SpecifierList.begin(); it != SpecifierList.end(); it++)
			{
				SSCANF_PARAMETER Param = *it;
				switch (Param.specifier)
				{
				case 's':
				{
					if (Param.length == -1)
					{
						result.push_back(splits[iSplit]);
						//std::cout << "Parse Complete for " << Param.specifier << std::endl;
						iSplit++;
					}
					else
					{
						std::string TempStr = "";
						while (TempStr.length() <= Param.length && iSplit < splits.size())
						{

							TempStr += splits[iSplit] + " ";
							iSplit++;
							std::cout << " iSplit: " << iSplit << " TempStringLength: " << TempStr.length() << std::endl;
						}
						if (TempStr.length() > Param.length) TempStr = TempStr.substr(0, Param.length);
						//std::cout << "Parse Complete for " << Param.specifier << "<" << Param.length << ">: " << TempStr << std::endl;
						result.push_back(TempStr);
					}
					break;
				}
				case 'c': //Character
				{
					if (iSplit < splits.size())
					{
						if (splits[iSplit].length() == Param.length)
						{
							result.push_back(splits[iSplit]);
							iSplit++;
						}
						else ExitParseFailure = true;
					}
					else ExitParseFailure = true;
					break;
				}
				case 'i':
				case 'd':
				{
					if (iSplit < splits.size())
					{
						if (IsInt(splits[iSplit]))
						{
							result.push_back(splits[iSplit]);
							iSplit++;
						}
						else ExitParseFailure = true;
					}
					else ExitParseFailure = true;
					break;
				}
				case 'f':
				{
					if (iSplit < splits.size())
					{
						if (IsFloat(splits[iSplit]))
						{
							result.push_back(splits[iSplit]);
							iSplit++;
						}
						else ExitParseFailure = true;
					}
					else ExitParseFailure = true;
					break;
				}
				}
				if (ExitParseFailure) break;
			}
			if (ExitParseFailure)
				result.clear();
			return ExitParseFailure;
		}
		
	}
};




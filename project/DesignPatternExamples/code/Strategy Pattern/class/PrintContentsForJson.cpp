#include "PrintContentsForJson.h"
#pragma warning(disable: 4996)

void PrintContentsForJson::PrintContents(char * rawString, int length)
{
	// TODO : Json parsing
	const std::string rawJson(rawString);
	const int rawJsonLength = static_cast<int>(rawJson.length());

	constexpr bool shouldUseOldWay = false;
	JSONCPP_STRING err;
	Json::Value root;

	if (shouldUseOldWay) {
		Json::Reader reader;
		reader.parse(rawJson, root);
	}
	else {
		Json::CharReaderBuilder builder;
		const std::unique_ptr<Json::CharReader> reader(builder.newCharReader());
		if (!reader->parse(rawJson.c_str(), rawJson.c_str() + rawJsonLength, &root, &err))
		{
			std::cout << "error" << std::endl;
		}
	}

	//PrintJson(&root, 0);

	Json::FastWriter fastWriter;
	std::string output = fastWriter.write(root);
	std::cout << output << std::endl;
}

//void PrintContentsForJson::PrintJson(Json::Value * jsonValue, int depth)
//{
//	std::vector<Json::String> jsonVector;
//	int i;
//	int j;
//
//	i = 0;
//	j = 0;
//
//	
//	if (jsonValue->isArray())
//	{
//		i = 0;
//		while (!(*jsonValue)[i].isNull())
//		{
//			if (i != 0)
//			{
//				for (j = 0; j < depth; j++)
//				{
//					std::cout << "    ";
//				}
//				std::cout << ", ";
//			}
//			std::cout << std::endl;
//
//			if ((*jsonValue)[i].isObject())
//			{
//				PrintJson(&((*jsonValue)[i]), depth + 1);
//			}
//			else if ((*jsonValue)[i].isArray())
//			{
//				PrintJson(&((*jsonValue)[i]), depth + 1);
//			}
//			else
//			{
//				std::cout << (*jsonValue)[i];
//			}
//
//			i++;
//		}
//	}
//	else
//	{
//		jsonVector = jsonValue->getMemberNames();
//
//		for (i = 0; i < jsonVector.size(); i++)
//		{
//			//std::cout << jsonVector[i] << std::endl;
//			//std::cout << (*jsonValue)[jsonVector[i]][2]["age"].isObject() << std::endl;
//
//
//			if ((*jsonValue)[jsonVector[i]].isObject())
//			{
//				for (j = 0; j < depth; j++)
//				{
//					std::cout << "    ";
//				}
//				std::cout << jsonVector[i] << std::endl;
//				PrintJson(&((*jsonValue)[jsonVector[i]]), depth + 1);
//			}
//			else if ((*jsonValue)[jsonVector[i]].isArray())
//			{
//				PrintJson(&((*jsonValue)[jsonVector[i]]), depth + 1);
//			}
//			else
//			{
//				for (j = 0; j < depth; j++)
//				{
//					std::cout << "    ";
//				}
//
//				std::cout << jsonVector[i] << ":" << (*jsonValue)[jsonVector[i]] << std::endl;
//			}
//		}
//		std::cout << std::endl;
//	}
//}
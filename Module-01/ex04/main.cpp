#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	std::string		path;
	std::string		s1;
	std::string		s2;
	std::string		str;
	std::string		newPath;

	if (argc != 4)
	{
		std::cout << "The wrong number of arguments. The program takes a filename and two string" << std::endl;
		return 1;
	}
	setlocale (LC_ALL, "Russian");
	path = argv[1];
	newPath = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	std::ifstream	inputFile(path);
	if (!inputFile.is_open())
	{
		std::cout << "InputFile open error!" << std::endl;
		return 1;
	}
	newPath.append(".replace");
	std::ofstream	replaceFile(newPath);
	if (!replaceFile.is_open())
	{
		std::cout << "ReplaceFile open error!" << std::endl;
		return 1;
	}
	while ( getline(inputFile, str) && !inputFile.eof())
	{
		std::size_t length = str.size();
		while (length > 0)
		{
			std::string::size_type n = str.find(s1);
			if (n == std::string::npos)
			{
				replaceFile << str << std::endl;
				length -= length;
			}
			else
			{
				replaceFile << str.substr(0, n) << s2;
				str.erase(0, s1.size() + n);
				length -= (s1.size() + n);
			}
		}
	}
	inputFile.close();
	replaceFile.close();
	return 0;
}

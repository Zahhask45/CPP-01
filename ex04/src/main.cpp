#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream	file;
	std::string		line;

	if (argc != 4)
	{
		std::cout << "Wrong arguments" << std::endl;
		return (1);
	}
	file.open(argv[1]);
	if (!file.is_open())
	{
		std::cout << "File not found" << std::endl;
		return (1);
	}
	std::string		file_name = (std::string)argv[1] + ".replace";
	std::ofstream	rep(file_name.c_str());
	size_t	pos;
	while(std::getline(file, line))
	{
		pos = 0;
   		while ((pos = line.find(argv[2], pos)) != std::string::npos)
		{
			line.erase(pos, ((std::string)argv[2]).length());
			line.insert(pos, (std::string)argv[3]);
			pos += ((std::string)argv[3]).length();
			
		}
		if (!std::cin.eof())
			rep << line << std::endl;
	}
	rep.close();
	file.close();
}

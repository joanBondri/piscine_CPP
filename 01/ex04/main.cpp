#include <iostream>
#include <string>
#include <fstream>

void	change_content(std::string &s1, std::string &s2, std::string &content)
{
	unsigned long	pos = std::string::npos;
	
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error" << std::endl;
		return (0);
	}
	std::string		fileName = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		content;
	std::ifstream	inFile(fileName);
	fileName += ".replace";
	std::ofstream	outFile(fileName);

	if (!inFile.is_open() || !outFile.is_open())
	{
		std::cout << "Error" << std::endl;
		return (0);
	}
	while(std::getline(inFile, content))
	{
		change_content(s1, s2, content);
		outFile << content;
	}
	inFile.close();
	outFile.close();
	return (0);
}

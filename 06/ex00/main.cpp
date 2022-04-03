#include "Convert.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error" << std::endl;
		return 1;
	}
	Convert co(argv[1]);
	std::cout << co;
	return 0;
}

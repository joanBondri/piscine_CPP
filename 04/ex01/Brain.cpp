#include "Brain.hpp"


Brain::Brain(void)
{
	std::cout << "Brain init" << std::endl;
}
Brain::Brain(const Brain& br)
{
	std::cout << "Brain init" << std::endl;
}
Brain&	Brain::operator=(const Brain& br)
{
	std::cout << "Brain init" << std::endl;
	return *this;
}
Brain::~Brain(void)
{
	std::cout << "Brain delete" << std::endl;
}

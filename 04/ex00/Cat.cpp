#include "Cat.hpp"

Cat::Cat(Cat &p) : Animal(p)
{
	std::cout << "Cat :\t\ta little cat appeard" << std::endl;
}

Cat::Cat(void) : Animal("cat")
{
	std::cout << "Cat :\t\ta little cat appeard" << std::endl;
}

Cat&		Cat::operator=(Cat &ca)
{
	_type = ca.getType();
	std::cout << "Cat :\t\ta little cat appeard" << std::endl;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat :\t\ta little cat dissappeard" << std::endl;
}

void		Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

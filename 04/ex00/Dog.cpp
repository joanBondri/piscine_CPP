#include "Dog.hpp"

Dog::Dog(Dog &p) : Animal(p)
{
	std::cout << "Dog :\t\ta big dog appeard" << std::endl;
}

Dog::Dog(void) : Animal("dog")
{
	std::cout << "Dog :\t\ta big dog appeard" << std::endl;
}

Dog&		Dog::operator=(Dog &ca)
{
	_type = ca.getType();
	std::cout << "Dog :\t\ta big dog appeard" << std::endl;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog :\t\ta big dog appeard" << std::endl;
}

void		Dog::makeSound(void) const
{
	std::cout << "Waff" << std::endl;
}

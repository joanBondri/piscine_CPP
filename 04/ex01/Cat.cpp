#include "Cat.hpp"

Cat::Cat(Cat &p) : Animal(p), _brain(new Brain())
{
	std::cout << "Cat :\t\ta little cat appeard" << std::endl;
}

Cat::Cat(void) : Animal("cat"), _brain(new Brain())
{
	std::cout << "Cat :\t\ta little cat appeard" << std::endl;
}

Cat&		Cat::operator=(Cat &ca)
{
	_brain = ca._brain;
	_type = ca.getType();
	std::cout << "Cat :\t\ta little cat appeard" << std::endl;
	return *this;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat :\t\ta little cat dissappeard" << std::endl;
}

void		Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

Brain*		Cat::getBrain(void)
{
	return _brain;
}

#include "Dog.hpp"

Dog::Dog(Dog &p) : AAnimal(p), _brain(new Brain)
{
	std::cout << "Dog :\t\ta big dog appeard" << std::endl;
}

Dog::Dog(void) : AAnimal("dog")
{
	_brain = new Brain;
	std::cout << "Dog :\t\ta big dog appeard" << std::endl;
}

Dog&		Dog::operator=(Dog &ca)
{
	_brain = ca._brain;
	_type = ca.getType();
	std::cout << "Dog :\t\ta big dog appeard" << std::endl;
	return *this;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog :\t\ta big dog appeard" << std::endl;
}

void		Dog::makeSound(void) const
{
	std::cout << "Waff" << std::endl;
}

Brain*		Dog::getBrain(void)
{
	return _brain;
}

#include "Animal.hpp"

			Animal::Animal(void) : _type("thing")
{
	std::cout << "ANIMAL :\t" << _type << " appeard!" << std::endl;
}

			Animal::Animal(const std::string &an) : _type(an)
{
	std::cout << "ANIMAL :\t" << _type << " appeard!" << std::endl;
}

			Animal::Animal(Animal &an) : _type(an.getType())
{
	std::cout << "ANIMAL :\t" << _type << " appeard!" << std::endl;
}
Animal&		Animal::operator=(Animal &an)
{
	_type = an.getType();
	std::cout << "ANIMAL :\t" << _type << " appeard!" << std::endl;
	return *this;
}
		Animal::~Animal(void)
{
	std::cout << "ANIMAL :\t" << _type << " disappeard" << std::endl;
}
void		Animal::setType(const std::string &str)
{
	_type = str;
}
std::string	Animal::getType(void) const
{
	return _type;
}
void		Animal::makeSound(void) const {}
Brain*		Animal::getBrain(void) { return NULL; }

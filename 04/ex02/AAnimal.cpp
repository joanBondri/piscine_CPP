#include "AAnimal.hpp"

			AAnimal::AAnimal(void) : _type("thing")
{
	std::cout << "ANIMAL :\t" << _type << " appeard!" << std::endl;
}

			AAnimal::AAnimal(const std::string &an) : _type(an)
{
	std::cout << "ANIMAL :\t" << _type << " appeard!" << std::endl;
}

			AAnimal::AAnimal(AAnimal &an) : _type(an.getType())
{
	std::cout << "ANIMAL :\t" << _type << " appeard!" << std::endl;
}
AAnimal&		AAnimal::operator=(AAnimal &an)
{
	_type = an.getType();
	std::cout << "ANIMAL :\t" << _type << " appeard!" << std::endl;
	return *this;
}
		AAnimal::~AAnimal(void)
{
	std::cout << "ANIMAL :\t" << _type << " disappeard" << std::endl;
}
void		AAnimal::setType(const std::string &str)
{
	_type = str;
}
std::string	AAnimal::getType(void) const
{
	return _type;
}
void		AAnimal::makeSound(void) const {}
Brain*		AAnimal::getBrain(void) { return NULL; }

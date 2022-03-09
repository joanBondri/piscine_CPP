#include "Weapon.hpp"


const std::string	&Weapon::getType(void)
{
	const std::string &type = this->type;
	return type;
}

Weapon::Weapon(void)
{
	this->setType("nothingness");
}

Weapon::Weapon(std::string init)
{
	this->setType(init);
}

void				Weapon::setType(std::string newType)
{
	this->type = newType;
}

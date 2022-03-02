#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
	this->name = name;
}

void	HumanB::setWeapon(Weapon newWeapon)
{
	this->type = newWeapon;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->type.getType() << std::endl;
}


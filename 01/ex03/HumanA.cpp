#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon p)
{
	this->name = name;
	this->type = p;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->type.getType() << std::endl;
}

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(), _guard(false)
{ 
	_hit = 100;
   	_energy = 50;
   	_attack = 20;
	printMe();
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str), _guard(false)
{ 
	_hit = 100;
   	_energy = 50;
   	_attack = 20;
	printMe();
}

void	ScavTrap::printMe(void)
{
	std::cout << "ScavTrap : \033[31;1;4m" << _name << "\033[0m" << " is a ScavTrap" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap &p)
{
	_name = p.getName();
	_hit = p.getHit();
	_energy = p.getEnergy();
	_attack = p.getAttack();
	printMe();
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy == 0)
	{
		std::cout << "ScavTrap : \033[31;1;4m" << _name << "\033[0m" << " tried to do something, but he is too lame to do it" << std::endl;
		return ;
	}
	std::cout << "ScavTrap : \033[31;1;4m" << _name << "\033[0m" <<" attacks " << target << ", causing " << _attack <<" points of damage!" << std::endl;
	_energy--;
}

void 	ScavTrap::guardGate(void)
{
	_guard = true;
	std::cout << "ScavTrap : \033[31;1;4m" << _name << "\033[0m" <<" is now in Gate keeper mode." << std::endl;
}
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScapTrap : \033[31;1;4m" << _name << "\033[0m" << " desepeared" << std::endl;
}

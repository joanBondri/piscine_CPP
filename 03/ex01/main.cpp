#include <iostream>
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap a;
	ScavTrap b("Bob");
	b.attack("Gerard");
	a.takeDamage(30);
	b.takeDamage(100);
	b.takeDamage(100);
	b.guardGate();

	return 0;
}

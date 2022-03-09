#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	Claptrap a;
	ClapTrap b("Bob");
	b.attack("Gerard");
	a.takeDamage(30);
	b.takeDamage(1);
	b.beRepaired(1);
	b.takeDamage(1);
	b.takeDamage(1);
	b.beRepaired(1);
	b.beRepaired(1);
	b.takeDamage(1);
	b.beRepaired(1);
	b.takeDamage(1);
	b.beRepaired(1);
	b.takeDamage(1);
	b.beRepaired(1);

	return 0;
}

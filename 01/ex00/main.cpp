#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

int	main(void)
{
	Zombie *foo = newZombie("bob");
	randomChump("Iel");
	delete foo;
	return 0;
}

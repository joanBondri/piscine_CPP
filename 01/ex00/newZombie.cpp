# include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *foo = new Zombie;

	foo->set_name(name);
	foo->announce();
	return (foo);
}

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
		return (NULL);
	Zombie *zozo = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zozo[i].set_name(name);
		zozo[i].announce();
	}
	return zozo;
}

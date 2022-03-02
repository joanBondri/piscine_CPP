#include "Zombie.hpp"
#define NUMBER 40
Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie *zozo = zombieHorde(NUMBER, "bob");
	delete[] zozo;
	return 0;
}

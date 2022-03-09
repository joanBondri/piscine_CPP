#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout<<this->name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
Zombie::~Zombie(void)
{
	std::cout << this->name << " deseapered mysteriously..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

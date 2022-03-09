#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private :
		bool _guard;
	public :
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap& operator=(ScavTrap &p);
		~ScavTrap();
		void	printMe(void);
		void	attack(const std::string& target);
		void 	guardGate(void);
};

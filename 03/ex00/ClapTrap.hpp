#pragma once
#include <iostream>

class ClapTrap
{
	private :
		std::string		_name;
		unsigned int	_hit;
		unsigned int	_energy;
		unsigned int	_attack;
	public :
		ClapTrap(void);
		ClapTrap(ClapTrap &p);
		ClapTrap(std::string str);
		ClapTrap& operator=(ClapTrap &p);
		~ClapTrap();

		std::string		getName(void);
		void			setName(const std::string& name);
		unsigned int	getEnergy(void);
		void			setEnergy(const unsigned int& en);
		unsigned int	getAttack(void);
		void			setAttack(const unsigned int& at);
		unsigned int	getHit(void);
		void			setHit(const unsigned int& hi);

		void	printMe(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

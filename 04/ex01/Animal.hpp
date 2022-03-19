#pragma once
#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	protected :
		std::string _type;
	public :
		Animal(void);
		Animal(const std::string &an);
		Animal(Animal &an);
		Animal& operator=(Animal &an);
		virtual			~Animal(void);
		void		setType(const std::string &type);
		std::string	getType(void) const;
		virtual void	makeSound(void) const;
		virtual	Brain* getBrain(void);
};

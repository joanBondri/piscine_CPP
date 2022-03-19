#pragma once
#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
	protected :
		std::string _type;
	public :
		AAnimal(void);
		AAnimal(const std::string &an);
		AAnimal(AAnimal &an);
		AAnimal& operator=(AAnimal &an);
		virtual			~AAnimal(void) = 0;
		void		setType(const std::string &type);
		std::string	getType(void) const;
		virtual void	makeSound(void) const;
		virtual	Brain* getBrain(void);
};

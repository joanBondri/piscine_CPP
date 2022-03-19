#pragma once
#include <iostream>
#include <string>

class Animal
{
	protected :
		std::string _type;
	public :
		Animal(void);
		Animal(const std::string &an);
		Animal(Animal &an);
		Animal& operator=(Animal &an);
		~Animal(void);
		void		setType(const std::string &type);
		std::string	getType(void) const;
		virtual void	makeSound(void) const;
};

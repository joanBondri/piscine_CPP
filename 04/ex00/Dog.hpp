#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
	private :
		void	setName(const std::string &str);
	public :
		Dog(void);
		Dog(Dog &p);
		~Dog(void);
		Dog& operator=(Dog &p);
		virtual void	makeSound(void) const;
};

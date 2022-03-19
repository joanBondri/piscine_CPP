#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
		void	setName(const std::string &str);
		Brain*	_brain;
	public :
		Dog(void);
		Dog(Dog &p);
		virtual			~Dog(void);
		Dog& operator=(Dog &p);
		virtual void	makeSound(void) const;
		virtual Brain* getBrain(void);
};

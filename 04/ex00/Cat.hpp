#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
	private :
		void	setName(const std::string &str);
	public :
		Cat(void);
		Cat(Cat &p);
		~Cat(void);
		Cat& operator=(Cat &p);
		virtual void	makeSound(void) const;
};

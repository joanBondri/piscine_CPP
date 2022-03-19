#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private :
		void	setName(const std::string &str);
		Brain*	_brain;
	public :
		Cat(void);
		Cat(Cat &p);
		virtual	~Cat(void);
		Cat& operator=(Cat &p);
		virtual void	makeSound(void) const;
		virtual	Brain* getBrain(void);
};
